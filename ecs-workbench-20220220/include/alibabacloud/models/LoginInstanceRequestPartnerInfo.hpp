// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTPARTNERINFO_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTPARTNERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequestPartnerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequestPartnerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
      DARABONBA_PTR_TO_JSON(PartnerName, partnerName_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequestPartnerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
      DARABONBA_PTR_FROM_JSON(PartnerName, partnerName_);
    };
    LoginInstanceRequestPartnerInfo() = default ;
    LoginInstanceRequestPartnerInfo(const LoginInstanceRequestPartnerInfo &) = default ;
    LoginInstanceRequestPartnerInfo(LoginInstanceRequestPartnerInfo &&) = default ;
    LoginInstanceRequestPartnerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequestPartnerInfo() = default ;
    LoginInstanceRequestPartnerInfo& operator=(const LoginInstanceRequestPartnerInfo &) = default ;
    LoginInstanceRequestPartnerInfo& operator=(LoginInstanceRequestPartnerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->partnerId_ != nullptr
        && this->partnerName_ != nullptr; };
    // partnerId Field Functions 
    bool hasPartnerId() const { return this->partnerId_ != nullptr;};
    void deletePartnerId() { this->partnerId_ = nullptr;};
    inline string partnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
    inline LoginInstanceRequestPartnerInfo& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


    // partnerName Field Functions 
    bool hasPartnerName() const { return this->partnerName_ != nullptr;};
    void deletePartnerName() { this->partnerName_ = nullptr;};
    inline string partnerName() const { DARABONBA_PTR_GET_DEFAULT(partnerName_, "") };
    inline LoginInstanceRequestPartnerInfo& setPartnerName(string partnerName) { DARABONBA_PTR_SET_VALUE(partnerName_, partnerName) };


  protected:
    std::shared_ptr<string> partnerId_ = nullptr;
    std::shared_ptr<string> partnerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
