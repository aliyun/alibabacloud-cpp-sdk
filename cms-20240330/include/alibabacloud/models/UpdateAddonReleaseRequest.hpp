// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEADDONRELEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEADDONRELEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EntityDiscoverRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdateAddonReleaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAddonReleaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(addonVersion, addonVersion_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(entityRules, entityRules_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAddonReleaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(addonVersion, addonVersion_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(entityRules, entityRules_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    UpdateAddonReleaseRequest() = default ;
    UpdateAddonReleaseRequest(const UpdateAddonReleaseRequest &) = default ;
    UpdateAddonReleaseRequest(UpdateAddonReleaseRequest &&) = default ;
    UpdateAddonReleaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAddonReleaseRequest() = default ;
    UpdateAddonReleaseRequest& operator=(const UpdateAddonReleaseRequest &) = default ;
    UpdateAddonReleaseRequest& operator=(UpdateAddonReleaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonVersion_ == nullptr
        && return this->dryRun_ == nullptr && return this->entityRules_ == nullptr && return this->values_ == nullptr; };
    // addonVersion Field Functions 
    bool hasAddonVersion() const { return this->addonVersion_ != nullptr;};
    void deleteAddonVersion() { this->addonVersion_ = nullptr;};
    inline string addonVersion() const { DARABONBA_PTR_GET_DEFAULT(addonVersion_, "") };
    inline UpdateAddonReleaseRequest& setAddonVersion(string addonVersion) { DARABONBA_PTR_SET_VALUE(addonVersion_, addonVersion) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateAddonReleaseRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // entityRules Field Functions 
    bool hasEntityRules() const { return this->entityRules_ != nullptr;};
    void deleteEntityRules() { this->entityRules_ = nullptr;};
    inline const EntityDiscoverRule & entityRules() const { DARABONBA_PTR_GET_CONST(entityRules_, EntityDiscoverRule) };
    inline EntityDiscoverRule entityRules() { DARABONBA_PTR_GET(entityRules_, EntityDiscoverRule) };
    inline UpdateAddonReleaseRequest& setEntityRules(const EntityDiscoverRule & entityRules) { DARABONBA_PTR_SET_VALUE(entityRules_, entityRules) };
    inline UpdateAddonReleaseRequest& setEntityRules(EntityDiscoverRule && entityRules) { DARABONBA_PTR_SET_RVALUE(entityRules_, entityRules) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline UpdateAddonReleaseRequest& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    std::shared_ptr<string> addonVersion_ = nullptr;
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<EntityDiscoverRule> entityRules_ = nullptr;
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
