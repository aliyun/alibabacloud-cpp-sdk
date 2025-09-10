// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLDDATABASICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLDDATABASICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeColdDataBasicInfoResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeColdDataBasicInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeColdDataBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeColdDataBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeColdDataBasicInfoResponseBody() = default ;
    DescribeColdDataBasicInfoResponseBody(const DescribeColdDataBasicInfoResponseBody &) = default ;
    DescribeColdDataBasicInfoResponseBody(DescribeColdDataBasicInfoResponseBody &&) = default ;
    DescribeColdDataBasicInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeColdDataBasicInfoResponseBody() = default ;
    DescribeColdDataBasicInfoResponseBody& operator=(const DescribeColdDataBasicInfoResponseBody &) = default ;
    DescribeColdDataBasicInfoResponseBody& operator=(DescribeColdDataBasicInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeColdDataBasicInfoResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeColdDataBasicInfoResponseBodyData) };
    inline DescribeColdDataBasicInfoResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeColdDataBasicInfoResponseBodyData) };
    inline DescribeColdDataBasicInfoResponseBody& setData(const DescribeColdDataBasicInfoResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeColdDataBasicInfoResponseBody& setData(DescribeColdDataBasicInfoResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeColdDataBasicInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeColdDataBasicInfoResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
