// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODYCOLLECTORS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYCOLLECTORSRESPONSEBODYCOLLECTORS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddonMeta.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyCollectorsResponseBodyCollectorsConditions.hpp>
#include <alibabacloud/models/ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyCollectorsResponseBodyCollectors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyCollectorsResponseBodyCollectors& obj) { 
      DARABONBA_PTR_TO_JSON(addonMeta, addonMeta_);
      DARABONBA_PTR_TO_JSON(collectorName, collectorName_);
      DARABONBA_PTR_TO_JSON(collectorType, collectorType_);
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(managed, managed_);
      DARABONBA_PTR_TO_JSON(releaseName, releaseName_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workloads, workloads_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyCollectorsResponseBodyCollectors& obj) { 
      DARABONBA_PTR_FROM_JSON(addonMeta, addonMeta_);
      DARABONBA_PTR_FROM_JSON(collectorName, collectorName_);
      DARABONBA_PTR_FROM_JSON(collectorType, collectorType_);
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(managed, managed_);
      DARABONBA_PTR_FROM_JSON(releaseName, releaseName_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workloads, workloads_);
    };
    ListIntegrationPolicyCollectorsResponseBodyCollectors() = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectors(const ListIntegrationPolicyCollectorsResponseBodyCollectors &) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectors(ListIntegrationPolicyCollectorsResponseBodyCollectors &&) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyCollectorsResponseBodyCollectors() = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectors& operator=(const ListIntegrationPolicyCollectorsResponseBodyCollectors &) = default ;
    ListIntegrationPolicyCollectorsResponseBodyCollectors& operator=(ListIntegrationPolicyCollectorsResponseBodyCollectors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonMeta_ == nullptr
        && return this->collectorName_ == nullptr && return this->collectorType_ == nullptr && return this->conditions_ == nullptr && return this->managed_ == nullptr && return this->releaseName_ == nullptr
        && return this->state_ == nullptr && return this->version_ == nullptr && return this->workloads_ == nullptr; };
    // addonMeta Field Functions 
    bool hasAddonMeta() const { return this->addonMeta_ != nullptr;};
    void deleteAddonMeta() { this->addonMeta_ = nullptr;};
    inline const Models::AddonMeta & addonMeta() const { DARABONBA_PTR_GET_CONST(addonMeta_, Models::AddonMeta) };
    inline Models::AddonMeta addonMeta() { DARABONBA_PTR_GET(addonMeta_, Models::AddonMeta) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setAddonMeta(const Models::AddonMeta & addonMeta) { DARABONBA_PTR_SET_VALUE(addonMeta_, addonMeta) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setAddonMeta(Models::AddonMeta && addonMeta) { DARABONBA_PTR_SET_RVALUE(addonMeta_, addonMeta) };


    // collectorName Field Functions 
    bool hasCollectorName() const { return this->collectorName_ != nullptr;};
    void deleteCollectorName() { this->collectorName_ = nullptr;};
    inline string collectorName() const { DARABONBA_PTR_GET_DEFAULT(collectorName_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setCollectorName(string collectorName) { DARABONBA_PTR_SET_VALUE(collectorName_, collectorName) };


    // collectorType Field Functions 
    bool hasCollectorType() const { return this->collectorType_ != nullptr;};
    void deleteCollectorType() { this->collectorType_ = nullptr;};
    inline string collectorType() const { DARABONBA_PTR_GET_DEFAULT(collectorType_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setCollectorType(string collectorType) { DARABONBA_PTR_SET_VALUE(collectorType_, collectorType) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsConditions>) };
    inline vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsConditions>) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setConditions(const vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setConditions(vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // managed Field Functions 
    bool hasManaged() const { return this->managed_ != nullptr;};
    void deleteManaged() { this->managed_ = nullptr;};
    inline bool managed() const { DARABONBA_PTR_GET_DEFAULT(managed_, false) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setManaged(bool managed) { DARABONBA_PTR_SET_VALUE(managed_, managed) };


    // releaseName Field Functions 
    bool hasReleaseName() const { return this->releaseName_ != nullptr;};
    void deleteReleaseName() { this->releaseName_ = nullptr;};
    inline string releaseName() const { DARABONBA_PTR_GET_DEFAULT(releaseName_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setReleaseName(string releaseName) { DARABONBA_PTR_SET_VALUE(releaseName_, releaseName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workloads Field Functions 
    bool hasWorkloads() const { return this->workloads_ != nullptr;};
    void deleteWorkloads() { this->workloads_ = nullptr;};
    inline const vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads> & workloads() const { DARABONBA_PTR_GET_CONST(workloads_, vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads>) };
    inline vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads> workloads() { DARABONBA_PTR_GET(workloads_, vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads>) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setWorkloads(const vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads> & workloads) { DARABONBA_PTR_SET_VALUE(workloads_, workloads) };
    inline ListIntegrationPolicyCollectorsResponseBodyCollectors& setWorkloads(vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads> && workloads) { DARABONBA_PTR_SET_RVALUE(workloads_, workloads) };


  protected:
    std::shared_ptr<Models::AddonMeta> addonMeta_ = nullptr;
    std::shared_ptr<string> collectorName_ = nullptr;
    std::shared_ptr<string> collectorType_ = nullptr;
    std::shared_ptr<vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsConditions>> conditions_ = nullptr;
    std::shared_ptr<bool> managed_ = nullptr;
    std::shared_ptr<string> releaseName_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<vector<Models::ListIntegrationPolicyCollectorsResponseBodyCollectorsWorkloads>> workloads_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
