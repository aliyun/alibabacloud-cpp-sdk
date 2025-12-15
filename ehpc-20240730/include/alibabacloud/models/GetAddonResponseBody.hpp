// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADDONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAddonResponseBodyAddon.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class GetAddonResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Addon, addon_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Addon, addon_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { return this->addon_ == nullptr
        && return this->requestId_ == nullptr; };
    // addon Field Functions 
    bool hasAddon() const { return this->addon_ != nullptr;};
    void deleteAddon() { this->addon_ = nullptr;};
    inline const GetAddonResponseBodyAddon & addon() const { DARABONBA_PTR_GET_CONST(addon_, GetAddonResponseBodyAddon) };
    inline GetAddonResponseBodyAddon addon() { DARABONBA_PTR_GET(addon_, GetAddonResponseBodyAddon) };
    inline GetAddonResponseBody& setAddon(const GetAddonResponseBodyAddon & addon) { DARABONBA_PTR_SET_VALUE(addon_, addon) };
    inline GetAddonResponseBody& setAddon(GetAddonResponseBodyAddon && addon) { DARABONBA_PTR_SET_RVALUE(addon_, addon) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAddonResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the addon.
    std::shared_ptr<GetAddonResponseBodyAddon> addon_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
