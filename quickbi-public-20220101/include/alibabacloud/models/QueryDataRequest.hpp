// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(ReturnFields, returnFields_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(ReturnFields, returnFields_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QueryDataRequest() = default ;
    QueryDataRequest(const QueryDataRequest &) = default ;
    QueryDataRequest(QueryDataRequest &&) = default ;
    QueryDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataRequest() = default ;
    QueryDataRequest& operator=(const QueryDataRequest &) = default ;
    QueryDataRequest& operator=(QueryDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->conditions_ == nullptr && this->returnFields_ == nullptr && this->userId_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline QueryDataRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string getConditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline QueryDataRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // returnFields Field Functions 
    bool hasReturnFields() const { return this->returnFields_ != nullptr;};
    void deleteReturnFields() { this->returnFields_ = nullptr;};
    inline string getReturnFields() const { DARABONBA_PTR_GET_DEFAULT(returnFields_, "") };
    inline QueryDataRequest& setReturnFields(string returnFields) { DARABONBA_PTR_SET_VALUE(returnFields_, returnFields) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryDataRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The API ID in [DataService Studio](https://help.aliyun.com/document_detail/144980.html).
    // 
    // This parameter is required.
    shared_ptr<string> apiId_ {};
    // Filter conditions as a JSON map string. Each key is a request parameter name, and each value is the parameter value.
    // 
    // **Note:**
    // 
    // - If the operator of a request parameter is set to **Enumeration Filter**, the value can contain multiple values. In this case, the value must be in the format of a JSON list. For example: `area=["East China","North China","South China"]`
    // 
    // - For dates, use the following formats based on the date type:
    // 
    //   - Year: 2019
    // 
    //   - Quarter: 2019Q1
    // 
    //   - Month: 201901 (with a leading zero)
    // 
    //   - Week: 2019-52
    // 
    //   - Day: 20190101
    // 
    //   - Hour: 14:00:00 (minutes and seconds are 00)
    // 
    //   - Minute: 14:12:00 (seconds are 00)
    // 
    //   - Second: 14:34:34
    shared_ptr<string> conditions_ {};
    // A JSON array of field names to return.
    shared_ptr<string> returnFields_ {};
    // The Quick BI user ID. Obtain this value from [QueryUserInfoByAccount](https://next.api.aliyun.com/document/quickbi-public/2022-01-01/QueryUserInfoByAccount).
    // 
    // > Specifies the user identity for DataService Studio, used with row-level and column-level permission configurations.
    // 
    // >Notice: 
    // 
    // If omitted, empty, or null, defaults to the Quick BI organization owner\\"s user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
