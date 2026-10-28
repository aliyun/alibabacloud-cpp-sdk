// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAALARMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAALARMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaAlarmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaAlarmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaDimensions, quotaDimensions_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaAlarmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmName, alarmName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaDimensions, quotaDimensions_);
    };
    ListQuotaAlarmsRequest() = default ;
    ListQuotaAlarmsRequest(const ListQuotaAlarmsRequest &) = default ;
    ListQuotaAlarmsRequest(ListQuotaAlarmsRequest &&) = default ;
    ListQuotaAlarmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaAlarmsRequest() = default ;
    ListQuotaAlarmsRequest& operator=(const ListQuotaAlarmsRequest &) = default ;
    ListQuotaAlarmsRequest& operator=(ListQuotaAlarmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaDimensions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaDimensions& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaDimensions& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      QuotaDimensions() = default ;
      QuotaDimensions(const QuotaDimensions &) = default ;
      QuotaDimensions(QuotaDimensions &&) = default ;
      QuotaDimensions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaDimensions() = default ;
      QuotaDimensions& operator=(const QuotaDimensions &) = default ;
      QuotaDimensions& operator=(QuotaDimensions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline QuotaDimensions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline QuotaDimensions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the quota dimension.
      // 
      // > - The number of key-value pairs that you can specify for the quota dimensions varies based on the Alibaba Cloud service.
      // >
      // > - If you set `ProductCode` to `ecs`, `ecs-spec`, `actiontrail`, or `ess`, you must specify both the key and value for the quota dimension.
      shared_ptr<string> key_ {};
      // The value of the quota dimension.
      // 
      // > - The number of key-value pairs that you can specify for the quota dimensions varies based on the Alibaba Cloud service.
      // >
      // > - If you set `ProductCode` to `ecs`, `ecs-spec`, `actiontrail`, or `ess`, you must specify both the key and value for the quota dimension.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->alarmName_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->productCode_ == nullptr && this->quotaActionCode_ == nullptr && this->quotaDimensions_ == nullptr; };
    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string getAlarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline ListQuotaAlarmsRequest& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaAlarmsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaAlarmsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaAlarmsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string getQuotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaAlarmsRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaDimensions Field Functions 
    bool hasQuotaDimensions() const { return this->quotaDimensions_ != nullptr;};
    void deleteQuotaDimensions() { this->quotaDimensions_ = nullptr;};
    inline const vector<ListQuotaAlarmsRequest::QuotaDimensions> & getQuotaDimensions() const { DARABONBA_PTR_GET_CONST(quotaDimensions_, vector<ListQuotaAlarmsRequest::QuotaDimensions>) };
    inline vector<ListQuotaAlarmsRequest::QuotaDimensions> getQuotaDimensions() { DARABONBA_PTR_GET(quotaDimensions_, vector<ListQuotaAlarmsRequest::QuotaDimensions>) };
    inline ListQuotaAlarmsRequest& setQuotaDimensions(const vector<ListQuotaAlarmsRequest::QuotaDimensions> & quotaDimensions) { DARABONBA_PTR_SET_VALUE(quotaDimensions_, quotaDimensions) };
    inline ListQuotaAlarmsRequest& setQuotaDimensions(vector<ListQuotaAlarmsRequest::QuotaDimensions> && quotaDimensions) { DARABONBA_PTR_SET_RVALUE(quotaDimensions_, quotaDimensions) };


  protected:
    // The name of the quota usage alert.
    shared_ptr<string> alarmName_ {};
    // The maximum number of records to return.
    // 
    // Valid values: 1 to 200. Default value: 30.
    shared_ptr<int32_t> maxResults_ {};
    // The token that specifies the start point of the query.
    // 
    // > If you do not specify this parameter, the query starts from the beginning.
    shared_ptr<string> nextToken_ {};
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // > To obtain the abbreviation of an Alibaba Cloud service name, see the `ProductCode` parameter in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    shared_ptr<string> productCode_ {};
    // The quota ID.
    // 
    // > - To obtain the quota ID of an Alibaba Cloud service, see the `QuotaActionCode` parameter in [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html).
    // >
    // > - If you specify this parameter, you must also specify `ProductCode`.
    shared_ptr<string> quotaActionCode_ {};
    // The quota dimensions.
    shared_ptr<vector<ListQuotaAlarmsRequest::QuotaDimensions>> quotaDimensions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
