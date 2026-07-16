// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENVIRONMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENVIRONMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateEnvironmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEnvironmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_TO_JSON(NewName, newName_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEnvironmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_FROM_JSON(NewName, newName_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    UpdateEnvironmentRequest() = default ;
    UpdateEnvironmentRequest(const UpdateEnvironmentRequest &) = default ;
    UpdateEnvironmentRequest(UpdateEnvironmentRequest &&) = default ;
    UpdateEnvironmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEnvironmentRequest() = default ;
    UpdateEnvironmentRequest& operator=(const UpdateEnvironmentRequest &) = default ;
    UpdateEnvironmentRequest& operator=(UpdateEnvironmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environmentName_ == nullptr
        && this->newName_ == nullptr && this->readOnly_ == nullptr && this->rule_ == nullptr && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // environmentName Field Functions 
    bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
    void deleteEnvironmentName() { this->environmentName_ = nullptr;};
    inline string getEnvironmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
    inline UpdateEnvironmentRequest& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


    // newName Field Functions 
    bool hasNewName() const { return this->newName_ != nullptr;};
    void deleteNewName() { this->newName_ = nullptr;};
    inline string getNewName() const { DARABONBA_PTR_GET_DEFAULT(newName_, "") };
    inline UpdateEnvironmentRequest& setNewName(string newName) { DARABONBA_PTR_SET_VALUE(newName_, newName) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline UpdateEnvironmentRequest& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateEnvironmentRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateEnvironmentRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline UpdateEnvironmentRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // The environment name.
    // 
    // This parameter is required.
    shared_ptr<string> environmentName_ {};
    // The new environment name.
    shared_ptr<string> newName_ {};
    // Specifies whether the environment is read-only.
    // 
    // This parameter is required.
    shared_ptr<bool> readOnly_ {};
    // The Wireshark rule.
    // 
    // This parameter is required.
    shared_ptr<string> rule_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The new site version number. Only the environment with the highest priority can be modified.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
