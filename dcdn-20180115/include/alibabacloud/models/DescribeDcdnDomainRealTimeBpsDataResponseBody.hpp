// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeBpsDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainRealTimeBpsDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody(const DescribeDcdnDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody(DescribeDcdnDomainRealTimeBpsDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeBpsDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody& operator=(const DescribeDcdnDomainRealTimeBpsDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeBpsDataResponseBody& operator=(DescribeDcdnDomainRealTimeBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeBpsDataResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeDcdnDomainRealTimeBpsDataResponseBodyData) };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeDcdnDomainRealTimeBpsDataResponseBodyData) };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBody& setData(const DescribeDcdnDomainRealTimeBpsDataResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBody& setData(DescribeDcdnDomainRealTimeBpsDataResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<DescribeDcdnDomainRealTimeBpsDataResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
