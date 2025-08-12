// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEAIPRODUCERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEAIPRODUCERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveAIProduceRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveAIProduceRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RulesId, rulesId_);
      DARABONBA_PTR_TO_JSON(SuffixName, suffixName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveAIProduceRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RulesId, rulesId_);
      DARABONBA_PTR_FROM_JSON(SuffixName, suffixName_);
    };
    DeleteLiveAIProduceRulesRequest() = default ;
    DeleteLiveAIProduceRulesRequest(const DeleteLiveAIProduceRulesRequest &) = default ;
    DeleteLiveAIProduceRulesRequest(DeleteLiveAIProduceRulesRequest &&) = default ;
    DeleteLiveAIProduceRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveAIProduceRulesRequest() = default ;
    DeleteLiveAIProduceRulesRequest& operator=(const DeleteLiveAIProduceRulesRequest &) = default ;
    DeleteLiveAIProduceRulesRequest& operator=(DeleteLiveAIProduceRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->domain_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->rulesId_ != nullptr && this->suffixName_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DeleteLiveAIProduceRulesRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DeleteLiveAIProduceRulesRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteLiveAIProduceRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLiveAIProduceRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rulesId Field Functions 
    bool hasRulesId() const { return this->rulesId_ != nullptr;};
    void deleteRulesId() { this->rulesId_ = nullptr;};
    inline string rulesId() const { DARABONBA_PTR_GET_DEFAULT(rulesId_, "") };
    inline DeleteLiveAIProduceRulesRequest& setRulesId(string rulesId) { DARABONBA_PTR_SET_VALUE(rulesId_, rulesId) };


    // suffixName Field Functions 
    bool hasSuffixName() const { return this->suffixName_ != nullptr;};
    void deleteSuffixName() { this->suffixName_ = nullptr;};
    inline string suffixName() const { DARABONBA_PTR_GET_DEFAULT(suffixName_, "") };
    inline DeleteLiveAIProduceRulesRequest& setSuffixName(string suffixName) { DARABONBA_PTR_SET_VALUE(suffixName_, suffixName) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the subtitle rule.
    std::shared_ptr<string> rulesId_ = nullptr;
    // The suffix of the subtitle rule.
    // 
    // >  Set the value to the name of the subtitle template.
    std::shared_ptr<string> suffixName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
