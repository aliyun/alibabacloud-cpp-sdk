// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEQPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINREALTIMEQPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnDomainRealTimeQpsDataResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainRealTimeQpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainRealTimeQpsDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody(const DescribeDcdnDomainRealTimeQpsDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody(DescribeDcdnDomainRealTimeQpsDataResponseBody &&) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainRealTimeQpsDataResponseBody() = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody& operator=(const DescribeDcdnDomainRealTimeQpsDataResponseBody &) = default ;
    DescribeDcdnDomainRealTimeQpsDataResponseBody& operator=(DescribeDcdnDomainRealTimeQpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDcdnDomainRealTimeQpsDataResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeDcdnDomainRealTimeQpsDataResponseBodyData) };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeDcdnDomainRealTimeQpsDataResponseBodyData) };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBody& setData(const DescribeDcdnDomainRealTimeQpsDataResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBody& setData(DescribeDcdnDomainRealTimeQpsDataResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainRealTimeQpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the backup set.
    std::shared_ptr<DescribeDcdnDomainRealTimeQpsDataResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
