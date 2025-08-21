// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILDATABYLAYERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainDetailDataByLayerResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainDetailDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainDetailDataByLayerResponseBody() = default ;
    DescribeDomainDetailDataByLayerResponseBody(const DescribeDomainDetailDataByLayerResponseBody &) = default ;
    DescribeDomainDetailDataByLayerResponseBody(DescribeDomainDetailDataByLayerResponseBody &&) = default ;
    DescribeDomainDetailDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailDataByLayerResponseBody() = default ;
    DescribeDomainDetailDataByLayerResponseBody& operator=(const DescribeDomainDetailDataByLayerResponseBody &) = default ;
    DescribeDomainDetailDataByLayerResponseBody& operator=(DescribeDomainDetailDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDomainDetailDataByLayerResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeDomainDetailDataByLayerResponseBodyData) };
    inline DescribeDomainDetailDataByLayerResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeDomainDetailDataByLayerResponseBodyData) };
    inline DescribeDomainDetailDataByLayerResponseBody& setData(const DescribeDomainDetailDataByLayerResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDomainDetailDataByLayerResponseBody& setData(DescribeDomainDetailDataByLayerResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainDetailDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of IPv6 requests per second.
    std::shared_ptr<DescribeDomainDetailDataByLayerResponseBodyData> data_ = nullptr;
    // The number of queries per second.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
