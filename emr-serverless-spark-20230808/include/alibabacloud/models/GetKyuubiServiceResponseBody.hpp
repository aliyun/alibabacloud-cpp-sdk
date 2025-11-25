// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKYUUBISERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKYUUBISERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetKyuubiServiceResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetKyuubiServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKyuubiServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKyuubiServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetKyuubiServiceResponseBody() = default ;
    GetKyuubiServiceResponseBody(const GetKyuubiServiceResponseBody &) = default ;
    GetKyuubiServiceResponseBody(GetKyuubiServiceResponseBody &&) = default ;
    GetKyuubiServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKyuubiServiceResponseBody() = default ;
    GetKyuubiServiceResponseBody& operator=(const GetKyuubiServiceResponseBody &) = default ;
    GetKyuubiServiceResponseBody& operator=(GetKyuubiServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKyuubiServiceResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetKyuubiServiceResponseBodyData) };
    inline GetKyuubiServiceResponseBodyData data() { DARABONBA_PTR_GET(data_, GetKyuubiServiceResponseBodyData) };
    inline GetKyuubiServiceResponseBody& setData(const GetKyuubiServiceResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKyuubiServiceResponseBody& setData(GetKyuubiServiceResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKyuubiServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetKyuubiServiceResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
