// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKVPNBGPENABLEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKVPNBGPENABLEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CheckVpnBgpEnabledResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckVpnBgpEnabledResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BgpEnabled, bgpEnabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckVpnBgpEnabledResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpEnabled, bgpEnabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckVpnBgpEnabledResponseBody() = default ;
    CheckVpnBgpEnabledResponseBody(const CheckVpnBgpEnabledResponseBody &) = default ;
    CheckVpnBgpEnabledResponseBody(CheckVpnBgpEnabledResponseBody &&) = default ;
    CheckVpnBgpEnabledResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckVpnBgpEnabledResponseBody() = default ;
    CheckVpnBgpEnabledResponseBody& operator=(const CheckVpnBgpEnabledResponseBody &) = default ;
    CheckVpnBgpEnabledResponseBody& operator=(CheckVpnBgpEnabledResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgpEnabled_ == nullptr
        && return this->requestId_ == nullptr; };
    // bgpEnabled Field Functions 
    bool hasBgpEnabled() const { return this->bgpEnabled_ != nullptr;};
    void deleteBgpEnabled() { this->bgpEnabled_ = nullptr;};
    inline bool bgpEnabled() const { DARABONBA_PTR_GET_DEFAULT(bgpEnabled_, false) };
    inline CheckVpnBgpEnabledResponseBody& setBgpEnabled(bool bgpEnabled) { DARABONBA_PTR_SET_VALUE(bgpEnabled_, bgpEnabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckVpnBgpEnabledResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the region supports BGP.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> bgpEnabled_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
