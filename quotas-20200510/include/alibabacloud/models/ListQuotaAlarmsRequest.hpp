// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAALARMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAALARMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotaAlarmsRequestQuotaDimensions.hpp>
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
    virtual bool empty() const override { this->alarmName_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr && this->quotaDimensions_ != nullptr; };
    // alarmName Field Functions 
    bool hasAlarmName() const { return this->alarmName_ != nullptr;};
    void deleteAlarmName() { this->alarmName_ = nullptr;};
    inline string alarmName() const { DARABONBA_PTR_GET_DEFAULT(alarmName_, "") };
    inline ListQuotaAlarmsRequest& setAlarmName(string alarmName) { DARABONBA_PTR_SET_VALUE(alarmName_, alarmName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaAlarmsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaAlarmsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaAlarmsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaAlarmsRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaDimensions Field Functions 
    bool hasQuotaDimensions() const { return this->quotaDimensions_ != nullptr;};
    void deleteQuotaDimensions() { this->quotaDimensions_ = nullptr;};
    inline const vector<ListQuotaAlarmsRequestQuotaDimensions> & quotaDimensions() const { DARABONBA_PTR_GET_CONST(quotaDimensions_, vector<ListQuotaAlarmsRequestQuotaDimensions>) };
    inline vector<ListQuotaAlarmsRequestQuotaDimensions> quotaDimensions() { DARABONBA_PTR_GET(quotaDimensions_, vector<ListQuotaAlarmsRequestQuotaDimensions>) };
    inline ListQuotaAlarmsRequest& setQuotaDimensions(const vector<ListQuotaAlarmsRequestQuotaDimensions> & quotaDimensions) { DARABONBA_PTR_SET_VALUE(quotaDimensions_, quotaDimensions) };
    inline ListQuotaAlarmsRequest& setQuotaDimensions(vector<ListQuotaAlarmsRequestQuotaDimensions> && quotaDimensions) { DARABONBA_PTR_SET_RVALUE(quotaDimensions_, quotaDimensions) };


  protected:
    // The name of the alert.
    std::shared_ptr<string> alarmName_ = nullptr;
    // The maximum number of records that you want to return for the query.
    // 
    // Valid values: 1 to 200. Default value: 30.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position from which you want to start the query.
    // 
    // > An empty value indicates that the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // >  To query the abbreviation of an Alibaba Cloud service name, call the [ListProducts](https://help.aliyun.com/document_detail/440554.html) operation and check the value of `ProductCode` in the response.
    std::shared_ptr<string> productCode_ = nullptr;
    // The quota ID.
    // 
    // > 
    // 
    // *   To obtain the quota ID of a cloud service, call the [ListProductQuotas](https://help.aliyun.com/document_detail/440554.html) operation and check the value of `QuotaActionCode` in the response.
    // 
    // *   If you specify this parameter, you must specify `ProductCode`.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The quota dimensions.
    std::shared_ptr<vector<ListQuotaAlarmsRequestQuotaDimensions>> quotaDimensions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
