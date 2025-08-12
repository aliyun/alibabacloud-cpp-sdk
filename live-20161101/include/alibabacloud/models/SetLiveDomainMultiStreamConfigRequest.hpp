// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVEDOMAINMULTISTREAMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLIVEDOMAINMULTISTREAMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveDomainMultiStreamConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveDomainMultiStreamConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Switch, switch_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveDomainMultiStreamConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Switch, switch_);
    };
    SetLiveDomainMultiStreamConfigRequest() = default ;
    SetLiveDomainMultiStreamConfigRequest(const SetLiveDomainMultiStreamConfigRequest &) = default ;
    SetLiveDomainMultiStreamConfigRequest(SetLiveDomainMultiStreamConfigRequest &&) = default ;
    SetLiveDomainMultiStreamConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveDomainMultiStreamConfigRequest() = default ;
    SetLiveDomainMultiStreamConfigRequest& operator=(const SetLiveDomainMultiStreamConfigRequest &) = default ;
    SetLiveDomainMultiStreamConfigRequest& operator=(SetLiveDomainMultiStreamConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->ownerId_ != nullptr && this->switch_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline SetLiveDomainMultiStreamConfigRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLiveDomainMultiStreamConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // switch Field Functions 
    bool hasSwitch() const { return this->switch_ != nullptr;};
    void deleteSwitch() { this->switch_ = nullptr;};
    inline string _switch() const { DARABONBA_PTR_GET_DEFAULT(switch_, "") };
    inline SetLiveDomainMultiStreamConfigRequest& setSwitch(string _switch) { DARABONBA_PTR_SET_VALUE(switch_, _switch) };


  protected:
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Specifies whether to enable the dual-stream disaster recovery feature. Valid values:
    // 
    // *   **on**: enables the feature.
    // *   **off**: disables the feature.
    // 
    // This parameter is required.
    std::shared_ptr<string> switch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
