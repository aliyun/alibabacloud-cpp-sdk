// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODELOGSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODELOGSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRetcodeLogstoreResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeLogstoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeLogstoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeLogstoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRetcodeLogstoreResponseBody() = default ;
    GetRetcodeLogstoreResponseBody(const GetRetcodeLogstoreResponseBody &) = default ;
    GetRetcodeLogstoreResponseBody(GetRetcodeLogstoreResponseBody &&) = default ;
    GetRetcodeLogstoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeLogstoreResponseBody() = default ;
    GetRetcodeLogstoreResponseBody& operator=(const GetRetcodeLogstoreResponseBody &) = default ;
    GetRetcodeLogstoreResponseBody& operator=(GetRetcodeLogstoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRetcodeLogstoreResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetRetcodeLogstoreResponseBodyData) };
    inline GetRetcodeLogstoreResponseBodyData data() { DARABONBA_PTR_GET(data_, GetRetcodeLogstoreResponseBodyData) };
    inline GetRetcodeLogstoreResponseBody& setData(const GetRetcodeLogstoreResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRetcodeLogstoreResponseBody& setData(GetRetcodeLogstoreResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRetcodeLogstoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned struct.
    std::shared_ptr<GetRetcodeLogstoreResponseBodyData> data_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
