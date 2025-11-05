// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEREQHITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMEREQHITRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainRealTimeReqHitRateDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeReqHitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeReqHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeReqHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainRealTimeReqHitRateDataResponseBody() = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBody(const DescribeDomainRealTimeReqHitRateDataResponseBody &) = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBody(DescribeDomainRealTimeReqHitRateDataResponseBody &&) = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeReqHitRateDataResponseBody() = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBody& operator=(const DescribeDomainRealTimeReqHitRateDataResponseBody &) = default ;
    DescribeDomainRealTimeReqHitRateDataResponseBody& operator=(DescribeDomainRealTimeReqHitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDomainRealTimeReqHitRateDataResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeDomainRealTimeReqHitRateDataResponseBodyData) };
    inline DescribeDomainRealTimeReqHitRateDataResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeDomainRealTimeReqHitRateDataResponseBodyData) };
    inline DescribeDomainRealTimeReqHitRateDataResponseBody& setData(const DescribeDomainRealTimeReqHitRateDataResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDomainRealTimeReqHitRateDataResponseBody& setData(DescribeDomainRealTimeReqHitRateDataResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRealTimeReqHitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<DescribeDomainRealTimeReqHitRateDataResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
