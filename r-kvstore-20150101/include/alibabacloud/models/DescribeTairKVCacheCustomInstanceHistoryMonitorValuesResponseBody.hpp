// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAIRKVCACHECUSTOMINSTANCEHISTORYMONITORVALUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAIRKVCACHECUSTOMINSTANCEHISTORYMONITORVALUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody() = default ;
    DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody(const DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody &) = default ;
    DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody(DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody &&) = default ;
    DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody() = default ;
    DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody& operator=(const DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody &) = default ;
    DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody& operator=(DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datapoints_ == nullptr
        && this->nextToken_ == nullptr && this->period_ == nullptr && this->requestId_ == nullptr; };
    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline string getDatapoints() const { DARABONBA_PTR_GET_DEFAULT(datapoints_, "") };
    inline DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody& setDatapoints(string datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTairKVCacheCustomInstanceHistoryMonitorValuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> datapoints_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> period_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
