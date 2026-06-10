// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLLMPROXYCONFIGFORADMINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLLMPROXYCONFIGFORADMINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetLlmProxyConfigForAdminRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLlmProxyConfigForAdminRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Capability, capability_);
    };
    friend void from_json(const Darabonba::Json& j, GetLlmProxyConfigForAdminRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Capability, capability_);
    };
    GetLlmProxyConfigForAdminRequest() = default ;
    GetLlmProxyConfigForAdminRequest(const GetLlmProxyConfigForAdminRequest &) = default ;
    GetLlmProxyConfigForAdminRequest(GetLlmProxyConfigForAdminRequest &&) = default ;
    GetLlmProxyConfigForAdminRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLlmProxyConfigForAdminRequest() = default ;
    GetLlmProxyConfigForAdminRequest& operator=(const GetLlmProxyConfigForAdminRequest &) = default ;
    GetLlmProxyConfigForAdminRequest& operator=(GetLlmProxyConfigForAdminRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->capability_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetLlmProxyConfigForAdminRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // capability Field Functions 
    bool hasCapability() const { return this->capability_ != nullptr;};
    void deleteCapability() { this->capability_ = nullptr;};
    inline string getCapability() const { DARABONBA_PTR_GET_DEFAULT(capability_, "") };
    inline GetLlmProxyConfigForAdminRequest& setCapability(string capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };


  protected:
    // Business ID
    shared_ptr<string> bizId_ {};
    // Capability Type: llm, image, video
    shared_ptr<string> capability_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
