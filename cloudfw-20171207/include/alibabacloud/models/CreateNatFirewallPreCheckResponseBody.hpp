// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENATFIREWALLPRECHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENATFIREWALLPRECHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateNatFirewallPreCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNatFirewallPreCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckId, preCheckId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNatFirewallPreCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckId, preCheckId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNatFirewallPreCheckResponseBody() = default ;
    CreateNatFirewallPreCheckResponseBody(const CreateNatFirewallPreCheckResponseBody &) = default ;
    CreateNatFirewallPreCheckResponseBody(CreateNatFirewallPreCheckResponseBody &&) = default ;
    CreateNatFirewallPreCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNatFirewallPreCheckResponseBody() = default ;
    CreateNatFirewallPreCheckResponseBody& operator=(const CreateNatFirewallPreCheckResponseBody &) = default ;
    CreateNatFirewallPreCheckResponseBody& operator=(CreateNatFirewallPreCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preCheckId_ == nullptr
        && return this->requestId_ == nullptr; };
    // preCheckId Field Functions 
    bool hasPreCheckId() const { return this->preCheckId_ != nullptr;};
    void deletePreCheckId() { this->preCheckId_ = nullptr;};
    inline string preCheckId() const { DARABONBA_PTR_GET_DEFAULT(preCheckId_, "") };
    inline CreateNatFirewallPreCheckResponseBody& setPreCheckId(string preCheckId) { DARABONBA_PTR_SET_VALUE(preCheckId_, preCheckId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNatFirewallPreCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> preCheckId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
