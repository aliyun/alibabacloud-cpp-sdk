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
    // The ID of the API in Data Service. For more information, see [Data Service](https://help.aliyun.com/document_detail/144980.html).
    // 
    // This parameter is required.
    shared_ptr<string> apiId_ {};
    // The query conditions for Data Service. Specify the conditions as key-value pairs in a map-type string. The key is the request parameter name, and the value is the request parameter value. Keys and values must appear in pairs.
    // 
    // **Note:**
    // 
    // - When the operator of the request parameter is set to **enumeration filter**, the value can contain multiple values. In this case, the value must be a JSON-formatted list. Example: `area=["East China","North China","South China"]`     
    // 
    // - For dates, different input formats are provided based on the type:
    // 
    //     - Year: 2019
    // 
    //     - Quarter: 2019Q1
    // 
    //     - Month: 201901 (with a leading zero)
    //     
    //     - Week: 2019-52
    // 
    //     - Day: 20190101
    // 
    //     - Hour: 14:00:00 (minutes and seconds are 00)
    //     
    //     - Minute: 14:12:00 (seconds are 00)
    // 
    //     - Second: 14:34:34
    shared_ptr<string> conditions_ {};
    // The list of names of the return parameters, which is a list-type string.
    shared_ptr<string> returnFields_ {};
    // The user ID in Quick BI. For information about how to obtain the user ID, see [Query user information by account](https://next.api.aliyun.com/document/quickbi-public/2022-01-01/QueryUserInfoByAccount).
    // > This parameter specifies the identity of the user who uses Data Service. It can be used in combination with the row-level and column-level permission configurations of the dataset.
    // 
    // 
    // 
    // >Notice: If this parameter is not specified, is left empty, or is set to null, the user ID of the owner of the current Quick BI organization is used by default.</notice>
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
