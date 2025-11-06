// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneRequestEntryRules.hpp>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_TO_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_TO_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_TO_JSON(GatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PathIndependentPercentageEnable, pathIndependentPercentageEnable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EnableRules, enableRules_);
      DARABONBA_PTR_FROM_JSON(EntryRule, entryRule_);
      DARABONBA_PTR_FROM_JSON(EntryRules, entryRules_);
      DARABONBA_PTR_FROM_JSON(GatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PathIndependentPercentageEnable, pathIndependentPercentageEnable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateOrUpdateSwimmingLaneRequest() = default ;
    CreateOrUpdateSwimmingLaneRequest(const CreateOrUpdateSwimmingLaneRequest &) = default ;
    CreateOrUpdateSwimmingLaneRequest(CreateOrUpdateSwimmingLaneRequest &&) = default ;
    CreateOrUpdateSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneRequest() = default ;
    CreateOrUpdateSwimmingLaneRequest& operator=(const CreateOrUpdateSwimmingLaneRequest &) = default ;
    CreateOrUpdateSwimmingLaneRequest& operator=(CreateOrUpdateSwimmingLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->enable_ == nullptr && return this->enableRules_ == nullptr && return this->entryRule_ == nullptr && return this->entryRules_ == nullptr && return this->gatewaySwimmingLaneRouteJson_ == nullptr
        && return this->groupId_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->pathIndependentPercentageEnable_ == nullptr
        && return this->regionId_ == nullptr && return this->tag_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateOrUpdateSwimmingLaneRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableRules Field Functions 
    bool hasEnableRules() const { return this->enableRules_ != nullptr;};
    void deleteEnableRules() { this->enableRules_ = nullptr;};
    inline bool enableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
    inline CreateOrUpdateSwimmingLaneRequest& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


    // entryRule Field Functions 
    bool hasEntryRule() const { return this->entryRule_ != nullptr;};
    void deleteEntryRule() { this->entryRule_ = nullptr;};
    inline string entryRule() const { DARABONBA_PTR_GET_DEFAULT(entryRule_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setEntryRule(string entryRule) { DARABONBA_PTR_SET_VALUE(entryRule_, entryRule) };


    // entryRules Field Functions 
    bool hasEntryRules() const { return this->entryRules_ != nullptr;};
    void deleteEntryRules() { this->entryRules_ = nullptr;};
    inline const vector<CreateOrUpdateSwimmingLaneRequestEntryRules> & entryRules() const { DARABONBA_PTR_GET_CONST(entryRules_, vector<CreateOrUpdateSwimmingLaneRequestEntryRules>) };
    inline vector<CreateOrUpdateSwimmingLaneRequestEntryRules> entryRules() { DARABONBA_PTR_GET(entryRules_, vector<CreateOrUpdateSwimmingLaneRequestEntryRules>) };
    inline CreateOrUpdateSwimmingLaneRequest& setEntryRules(const vector<CreateOrUpdateSwimmingLaneRequestEntryRules> & entryRules) { DARABONBA_PTR_SET_VALUE(entryRules_, entryRules) };
    inline CreateOrUpdateSwimmingLaneRequest& setEntryRules(vector<CreateOrUpdateSwimmingLaneRequestEntryRules> && entryRules) { DARABONBA_PTR_SET_RVALUE(entryRules_, entryRules) };


    // gatewaySwimmingLaneRouteJson Field Functions 
    bool hasGatewaySwimmingLaneRouteJson() const { return this->gatewaySwimmingLaneRouteJson_ != nullptr;};
    void deleteGatewaySwimmingLaneRouteJson() { this->gatewaySwimmingLaneRouteJson_ = nullptr;};
    inline const CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson & gatewaySwimmingLaneRouteJson() const { DARABONBA_PTR_GET_CONST(gatewaySwimmingLaneRouteJson_, CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson) };
    inline CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson gatewaySwimmingLaneRouteJson() { DARABONBA_PTR_GET(gatewaySwimmingLaneRouteJson_, CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson) };
    inline CreateOrUpdateSwimmingLaneRequest& setGatewaySwimmingLaneRouteJson(const CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson & gatewaySwimmingLaneRouteJson) { DARABONBA_PTR_SET_VALUE(gatewaySwimmingLaneRouteJson_, gatewaySwimmingLaneRouteJson) };
    inline CreateOrUpdateSwimmingLaneRequest& setGatewaySwimmingLaneRouteJson(CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson && gatewaySwimmingLaneRouteJson) { DARABONBA_PTR_SET_RVALUE(gatewaySwimmingLaneRouteJson_, gatewaySwimmingLaneRouteJson) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateOrUpdateSwimmingLaneRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateOrUpdateSwimmingLaneRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // pathIndependentPercentageEnable Field Functions 
    bool hasPathIndependentPercentageEnable() const { return this->pathIndependentPercentageEnable_ != nullptr;};
    void deletePathIndependentPercentageEnable() { this->pathIndependentPercentageEnable_ = nullptr;};
    inline bool pathIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(pathIndependentPercentageEnable_, false) };
    inline CreateOrUpdateSwimmingLaneRequest& setPathIndependentPercentageEnable(bool pathIndependentPercentageEnable) { DARABONBA_PTR_SET_VALUE(pathIndependentPercentageEnable_, pathIndependentPercentageEnable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The language of the response. Valid values: zh and en. Default value: zh. The value zh indicates Chinese, and the value en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Specifies whether to enable the lane.
    std::shared_ptr<bool> enable_ = nullptr;
    // Specifies whether to configure a routing rule for the lane. If an Ingress gateway is used, this parameter is not required.
    std::shared_ptr<bool> enableRules_ = nullptr;
    // The JSON string.
    std::shared_ptr<string> entryRule_ = nullptr;
    std::shared_ptr<vector<CreateOrUpdateSwimmingLaneRequestEntryRules>> entryRules_ = nullptr;
    // The information about the routing rule for the gateway. This parameter is required when a cloud-native gateway is used as the ingress.
    std::shared_ptr<CreateOrUpdateSwimmingLaneRequestGatewaySwimmingLaneRouteJson> gatewaySwimmingLaneRouteJson_ = nullptr;
    // The language of the response. Valid values:****
    // 
    // *   **zh-CN**: Chinese
    // *   **en-US**: English
    // 
    // > Default value: **zh-CN**.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The ID of the primary key. The value -1 indicates a request that is used to create a lane. A value greater than 0 indicates a request that is used to modify a lane.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the lane.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<bool> pathIndependentPercentageEnable_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
