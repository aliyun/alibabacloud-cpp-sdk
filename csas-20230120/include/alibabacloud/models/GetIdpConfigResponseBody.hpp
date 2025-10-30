// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIdpConfigResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetIdpConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdpConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdpConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIdpConfigResponseBody() = default ;
    GetIdpConfigResponseBody(const GetIdpConfigResponseBody &) = default ;
    GetIdpConfigResponseBody(GetIdpConfigResponseBody &&) = default ;
    GetIdpConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdpConfigResponseBody() = default ;
    GetIdpConfigResponseBody& operator=(const GetIdpConfigResponseBody &) = default ;
    GetIdpConfigResponseBody& operator=(GetIdpConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetIdpConfigResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetIdpConfigResponseBodyData) };
    inline GetIdpConfigResponseBodyData data() { DARABONBA_PTR_GET(data_, GetIdpConfigResponseBodyData) };
    inline GetIdpConfigResponseBody& setData(const GetIdpConfigResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetIdpConfigResponseBody& setData(GetIdpConfigResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdpConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetIdpConfigResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
