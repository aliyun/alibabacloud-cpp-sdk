// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEREQHITRATEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEREQHITRATEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeReqHitRateDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody(DescribeDcdnDomainRealTimeReqHitRateDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeReqHitRateDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& operator=(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& operator=(DescribeDcdnDomainRealTimeReqHitRateDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& setData(const DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& setData(DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeReqHitRateDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of byte hit ratios.
    std::shared_ptr<DescribeDcdnDomainRealTimeReqHitRateDataResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
