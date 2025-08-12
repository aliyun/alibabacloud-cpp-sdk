// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSPOLICIESBINDENTITY_HPP_
#define ALIBABACLOUD_MODELS_ADDONMETAENVIRONMENTSPOLICIESBINDENTITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AddonMetaEnvironmentsPoliciesBindEntity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddonMetaEnvironmentsPoliciesBindEntity& obj) { 
      DARABONBA_PTR_TO_JSON(entityGroupMode, entityGroupMode_);
      DARABONBA_PTR_TO_JSON(entityType, entityType_);
      DARABONBA_PTR_TO_JSON(singleEntityMode, singleEntityMode_);
      DARABONBA_PTR_TO_JSON(vpcIdFieldKey, vpcIdFieldKey_);
    };
    friend void from_json(const Darabonba::Json& j, AddonMetaEnvironmentsPoliciesBindEntity& obj) { 
      DARABONBA_PTR_FROM_JSON(entityGroupMode, entityGroupMode_);
      DARABONBA_PTR_FROM_JSON(entityType, entityType_);
      DARABONBA_PTR_FROM_JSON(singleEntityMode, singleEntityMode_);
      DARABONBA_PTR_FROM_JSON(vpcIdFieldKey, vpcIdFieldKey_);
    };
    AddonMetaEnvironmentsPoliciesBindEntity() = default ;
    AddonMetaEnvironmentsPoliciesBindEntity(const AddonMetaEnvironmentsPoliciesBindEntity &) = default ;
    AddonMetaEnvironmentsPoliciesBindEntity(AddonMetaEnvironmentsPoliciesBindEntity &&) = default ;
    AddonMetaEnvironmentsPoliciesBindEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddonMetaEnvironmentsPoliciesBindEntity() = default ;
    AddonMetaEnvironmentsPoliciesBindEntity& operator=(const AddonMetaEnvironmentsPoliciesBindEntity &) = default ;
    AddonMetaEnvironmentsPoliciesBindEntity& operator=(AddonMetaEnvironmentsPoliciesBindEntity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->entityGroupMode_ != nullptr
        && this->entityType_ != nullptr && this->singleEntityMode_ != nullptr && this->vpcIdFieldKey_ != nullptr; };
    // entityGroupMode Field Functions 
    bool hasEntityGroupMode() const { return this->entityGroupMode_ != nullptr;};
    void deleteEntityGroupMode() { this->entityGroupMode_ = nullptr;};
    inline bool entityGroupMode() const { DARABONBA_PTR_GET_DEFAULT(entityGroupMode_, false) };
    inline AddonMetaEnvironmentsPoliciesBindEntity& setEntityGroupMode(bool entityGroupMode) { DARABONBA_PTR_SET_VALUE(entityGroupMode_, entityGroupMode) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline AddonMetaEnvironmentsPoliciesBindEntity& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // singleEntityMode Field Functions 
    bool hasSingleEntityMode() const { return this->singleEntityMode_ != nullptr;};
    void deleteSingleEntityMode() { this->singleEntityMode_ = nullptr;};
    inline bool singleEntityMode() const { DARABONBA_PTR_GET_DEFAULT(singleEntityMode_, false) };
    inline AddonMetaEnvironmentsPoliciesBindEntity& setSingleEntityMode(bool singleEntityMode) { DARABONBA_PTR_SET_VALUE(singleEntityMode_, singleEntityMode) };


    // vpcIdFieldKey Field Functions 
    bool hasVpcIdFieldKey() const { return this->vpcIdFieldKey_ != nullptr;};
    void deleteVpcIdFieldKey() { this->vpcIdFieldKey_ = nullptr;};
    inline string vpcIdFieldKey() const { DARABONBA_PTR_GET_DEFAULT(vpcIdFieldKey_, "") };
    inline AddonMetaEnvironmentsPoliciesBindEntity& setVpcIdFieldKey(string vpcIdFieldKey) { DARABONBA_PTR_SET_VALUE(vpcIdFieldKey_, vpcIdFieldKey) };


  protected:
    std::shared_ptr<bool> entityGroupMode_ = nullptr;
    std::shared_ptr<string> entityType_ = nullptr;
    std::shared_ptr<bool> singleEntityMode_ = nullptr;
    std::shared_ptr<string> vpcIdFieldKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
