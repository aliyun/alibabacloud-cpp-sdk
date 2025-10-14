// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSNATENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSNATENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifySnatEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySnatEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_TO_JSON(IspAffinity, ispAffinity_);
      DARABONBA_PTR_TO_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySnatEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_FROM_JSON(IspAffinity, ispAffinity_);
      DARABONBA_PTR_FROM_JSON(SnatEntryId, snatEntryId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
    };
    ModifySnatEntryRequest() = default ;
    ModifySnatEntryRequest(const ModifySnatEntryRequest &) = default ;
    ModifySnatEntryRequest(ModifySnatEntryRequest &&) = default ;
    ModifySnatEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySnatEntryRequest() = default ;
    ModifySnatEntryRequest& operator=(const ModifySnatEntryRequest &) = default ;
    ModifySnatEntryRequest& operator=(ModifySnatEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipAffinity_ == nullptr
        && return this->ispAffinity_ == nullptr && return this->snatEntryId_ == nullptr && return this->snatEntryName_ == nullptr && return this->snatIp_ == nullptr; };
    // eipAffinity Field Functions 
    bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
    void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
    inline bool eipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, false) };
    inline ModifySnatEntryRequest& setEipAffinity(bool eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


    // ispAffinity Field Functions 
    bool hasIspAffinity() const { return this->ispAffinity_ != nullptr;};
    void deleteIspAffinity() { this->ispAffinity_ = nullptr;};
    inline bool ispAffinity() const { DARABONBA_PTR_GET_DEFAULT(ispAffinity_, false) };
    inline ModifySnatEntryRequest& setIspAffinity(bool ispAffinity) { DARABONBA_PTR_SET_VALUE(ispAffinity_, ispAffinity) };


    // snatEntryId Field Functions 
    bool hasSnatEntryId() const { return this->snatEntryId_ != nullptr;};
    void deleteSnatEntryId() { this->snatEntryId_ = nullptr;};
    inline string snatEntryId() const { DARABONBA_PTR_GET_DEFAULT(snatEntryId_, "") };
    inline ModifySnatEntryRequest& setSnatEntryId(string snatEntryId) { DARABONBA_PTR_SET_VALUE(snatEntryId_, snatEntryId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string snatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline ModifySnatEntryRequest& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline ModifySnatEntryRequest& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


  protected:
    // Specifies whether to enable IP affinity. Default value: true. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // >  Description After you enable IP affinity, if multiple EIPs are associated with an SNAT entry, one client uses the same EIP to for communication. If IP affinity is disabled, the client uses a random EIP for communication.
    std::shared_ptr<bool> eipAffinity_ = nullptr;
    std::shared_ptr<bool> ispAffinity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> snatEntryId_ = nullptr;
    std::shared_ptr<string> snatEntryName_ = nullptr;
    // Separate multiple EIPs in the SNAT entry with commas (,).
    std::shared_ptr<string> snatIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
