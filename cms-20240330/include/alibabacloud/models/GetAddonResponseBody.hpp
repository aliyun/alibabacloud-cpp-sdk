// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAddonResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAddonResponseBody() = default ;
    GetAddonResponseBody(const GetAddonResponseBody &) = default ;
    GetAddonResponseBody(GetAddonResponseBody &&) = default ;
    GetAddonResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonResponseBody() = default ;
    GetAddonResponseBody& operator=(const GetAddonResponseBody &) = default ;
    GetAddonResponseBody& operator=(GetAddonResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAddonResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetAddonResponseBodyData) };
    inline GetAddonResponseBodyData data() { DARABONBA_PTR_GET(data_, GetAddonResponseBodyData) };
    inline GetAddonResponseBody& setData(const GetAddonResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAddonResponseBody& setData(GetAddonResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAddonResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetAddonResponseBodyData> data_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
