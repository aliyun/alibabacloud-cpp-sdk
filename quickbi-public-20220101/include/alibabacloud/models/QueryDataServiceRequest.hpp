// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(ReturnFields, returnFields_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(ReturnFields, returnFields_);
    };
    QueryDataServiceRequest() = default ;
    QueryDataServiceRequest(const QueryDataServiceRequest &) = default ;
    QueryDataServiceRequest(QueryDataServiceRequest &&) = default ;
    QueryDataServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceRequest() = default ;
    QueryDataServiceRequest& operator=(const QueryDataServiceRequest &) = default ;
    QueryDataServiceRequest& operator=(QueryDataServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && this->conditions_ == nullptr && this->returnFields_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline QueryDataServiceRequest& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string getConditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline QueryDataServiceRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // returnFields Field Functions 
    bool hasReturnFields() const { return this->returnFields_ != nullptr;};
    void deleteReturnFields() { this->returnFields_ = nullptr;};
    inline string getReturnFields() const { DARABONBA_PTR_GET_DEFAULT(returnFields_, "") };
    inline QueryDataServiceRequest& setReturnFields(string returnFields) { DARABONBA_PTR_SET_VALUE(returnFields_, returnFields) };


  protected:
    // The API ID in the data service. For more information, see [Data Service](https://help.aliyun.com/document_detail/144980.html).
    // 
    // This parameter is required.
    shared_ptr<string> apiId_ {};
    // The query conditions for the data service, passed in as Key-Value pairs. This is a map-type string. Here, Key is the name of the request parameter, and Value is the value of the request parameter. Keys and Values must appear in pairs.
    // 
    // **Note:**
    // 
    // - When the operator of the request parameter is set to **enumeration filter**, the value can contain multiple values. In this case, the format of the value is a JSON list. For example: `area=["East China","North China","South China"]`     
    // 
    // - For dates, different formats are provided based on the type:
    // 
    //     - Year: 2019
    // 
    //     - Quarter: 2019Q1
    // 
    //     - Month: 201901 (with leading zero)
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
    // A list of parameter names to be returned, as a List-type string.
    shared_ptr<string> returnFields_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
