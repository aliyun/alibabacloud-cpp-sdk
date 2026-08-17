// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAISERVICEPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAISERVICEPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyAiServiceProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAiServiceProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAiServiceProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    ModifyAiServiceProtectionRequest() = default ;
    ModifyAiServiceProtectionRequest(const ModifyAiServiceProtectionRequest &) = default ;
    ModifyAiServiceProtectionRequest(ModifyAiServiceProtectionRequest &&) = default ;
    ModifyAiServiceProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAiServiceProtectionRequest() = default ;
    ModifyAiServiceProtectionRequest& operator=(const ModifyAiServiceProtectionRequest &) = default ;
    ModifyAiServiceProtectionRequest& operator=(ModifyAiServiceProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionProtection_ == nullptr
        && this->region_ == nullptr; };
    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyAiServiceProtectionRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyAiServiceProtectionRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // Specifies whether to enable manual shutdown protection.
    // 
    // This parameter is required.
    shared_ptr<bool> deletionProtection_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
