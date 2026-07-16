// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENVIRONMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEENVIRONMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateEnvironmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnvironmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_TO_JSON(NextEnvironmentName, nextEnvironmentName_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnvironmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentName, environmentName_);
      DARABONBA_PTR_FROM_JSON(NextEnvironmentName, nextEnvironmentName_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateEnvironmentRequest() = default ;
    CreateEnvironmentRequest(const CreateEnvironmentRequest &) = default ;
    CreateEnvironmentRequest(CreateEnvironmentRequest &&) = default ;
    CreateEnvironmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnvironmentRequest() = default ;
    CreateEnvironmentRequest& operator=(const CreateEnvironmentRequest &) = default ;
    CreateEnvironmentRequest& operator=(CreateEnvironmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environmentName_ == nullptr
        && this->nextEnvironmentName_ == nullptr && this->rule_ == nullptr && this->siteId_ == nullptr; };
    // environmentName Field Functions 
    bool hasEnvironmentName() const { return this->environmentName_ != nullptr;};
    void deleteEnvironmentName() { this->environmentName_ = nullptr;};
    inline string getEnvironmentName() const { DARABONBA_PTR_GET_DEFAULT(environmentName_, "") };
    inline CreateEnvironmentRequest& setEnvironmentName(string environmentName) { DARABONBA_PTR_SET_VALUE(environmentName_, environmentName) };


    // nextEnvironmentName Field Functions 
    bool hasNextEnvironmentName() const { return this->nextEnvironmentName_ != nullptr;};
    void deleteNextEnvironmentName() { this->nextEnvironmentName_ = nullptr;};
    inline string getNextEnvironmentName() const { DARABONBA_PTR_GET_DEFAULT(nextEnvironmentName_, "") };
    inline CreateEnvironmentRequest& setNextEnvironmentName(string nextEnvironmentName) { DARABONBA_PTR_SET_VALUE(nextEnvironmentName_, nextEnvironmentName) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateEnvironmentRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateEnvironmentRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The environment name.
    // 
    // This parameter is required.
    shared_ptr<string> environmentName_ {};
    // The name of the environment with the next priority.
    // 
    // This parameter is required.
    shared_ptr<string> nextEnvironmentName_ {};
    // The environment rule.
    // 
    // This parameter is required.
    shared_ptr<string> rule_ {};
    // The site ID. You can call the [ListSites](~~ListSites~~) operation to obtain the site ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
