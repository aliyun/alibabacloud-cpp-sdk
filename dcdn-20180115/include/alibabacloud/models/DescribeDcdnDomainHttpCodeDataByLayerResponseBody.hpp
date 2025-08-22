// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHTTPCODEDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHTTPCODEDATABYLAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainHttpCodeDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainHttpCodeDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(HttpCodeDataInterval, httpCodeDataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainHttpCodeDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(HttpCodeDataInterval, httpCodeDataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody() = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody(const DescribeDcdnDomainHttpCodeDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody(DescribeDcdnDomainHttpCodeDataByLayerResponseBody &&) = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainHttpCodeDataByLayerResponseBody() = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody& operator=(const DescribeDcdnDomainHttpCodeDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody& operator=(DescribeDcdnDomainHttpCodeDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInterval_ != nullptr
        && this->httpCodeDataInterval_ != nullptr && this->requestId_ != nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // httpCodeDataInterval Field Functions 
    bool hasHttpCodeDataInterval() const { return this->httpCodeDataInterval_ != nullptr;};
    void deleteHttpCodeDataInterval() { this->httpCodeDataInterval_ = nullptr;};
    inline const DescribeDcdnDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval & httpCodeDataInterval() const { DARABONBA_PTR_GET_CONST(httpCodeDataInterval_, DescribeDcdnDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval) };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval httpCodeDataInterval() { DARABONBA_PTR_GET(httpCodeDataInterval_, DescribeDcdnDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval) };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody& setHttpCodeDataInterval(const DescribeDcdnDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval & httpCodeDataInterval) { DARABONBA_PTR_SET_VALUE(httpCodeDataInterval_, httpCodeDataInterval) };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody& setHttpCodeDataInterval(DescribeDcdnDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval && httpCodeDataInterval) { DARABONBA_PTR_SET_RVALUE(httpCodeDataInterval_, httpCodeDataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The distribution of HTTP status codes at each time interval.
    std::shared_ptr<DescribeDcdnDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval> httpCodeDataInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
