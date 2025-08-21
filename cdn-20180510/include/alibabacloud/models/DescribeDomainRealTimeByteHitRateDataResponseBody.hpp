// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEBYTEHITRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainRealTimeByteHitRateDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeByteHitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeByteHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeByteHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainRealTimeByteHitRateDataResponseBody() = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBody(const DescribeDomainRealTimeByteHitRateDataResponseBody &) = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBody(DescribeDomainRealTimeByteHitRateDataResponseBody &&) = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeByteHitRateDataResponseBody() = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBody& operator=(const DescribeDomainRealTimeByteHitRateDataResponseBody &) = default ;
    DescribeDomainRealTimeByteHitRateDataResponseBody& operator=(DescribeDomainRealTimeByteHitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDomainRealTimeByteHitRateDataResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeDomainRealTimeByteHitRateDataResponseBodyData) };
    inline DescribeDomainRealTimeByteHitRateDataResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeDomainRealTimeByteHitRateDataResponseBodyData) };
    inline DescribeDomainRealTimeByteHitRateDataResponseBody& setData(const DescribeDomainRealTimeByteHitRateDataResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDomainRealTimeByteHitRateDataResponseBody& setData(DescribeDomainRealTimeByteHitRateDataResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRealTimeByteHitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<DescribeDomainRealTimeByteHitRateDataResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
