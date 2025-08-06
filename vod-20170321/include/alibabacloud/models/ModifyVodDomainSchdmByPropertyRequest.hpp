// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVODDOMAINSCHDMBYPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVODDOMAINSCHDMBYPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ModifyVodDomainSchdmByPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVodDomainSchdmByPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Property, property_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVodDomainSchdmByPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
    };
    ModifyVodDomainSchdmByPropertyRequest() = default ;
    ModifyVodDomainSchdmByPropertyRequest(const ModifyVodDomainSchdmByPropertyRequest &) = default ;
    ModifyVodDomainSchdmByPropertyRequest(ModifyVodDomainSchdmByPropertyRequest &&) = default ;
    ModifyVodDomainSchdmByPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVodDomainSchdmByPropertyRequest() = default ;
    ModifyVodDomainSchdmByPropertyRequest& operator=(const ModifyVodDomainSchdmByPropertyRequest &) = default ;
    ModifyVodDomainSchdmByPropertyRequest& operator=(ModifyVodDomainSchdmByPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ownerId_ != nullptr && this->property_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyVodDomainSchdmByPropertyRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVodDomainSchdmByPropertyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline ModifyVodDomainSchdmByPropertyRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> property_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
