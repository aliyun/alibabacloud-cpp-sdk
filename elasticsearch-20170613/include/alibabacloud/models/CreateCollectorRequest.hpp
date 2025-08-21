// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOLLECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOLLECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCollectorRequestConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateCollectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCollectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collectorPaths, collectorPaths_);
      DARABONBA_PTR_TO_JSON(configs, configs_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resType, resType_);
      DARABONBA_PTR_TO_JSON(resVersion, resVersion_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCollectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collectorPaths, collectorPaths_);
      DARABONBA_PTR_FROM_JSON(configs, configs_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resType, resType_);
      DARABONBA_PTR_FROM_JSON(resVersion, resVersion_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateCollectorRequest() = default ;
    CreateCollectorRequest(const CreateCollectorRequest &) = default ;
    CreateCollectorRequest(CreateCollectorRequest &&) = default ;
    CreateCollectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCollectorRequest() = default ;
    CreateCollectorRequest& operator=(const CreateCollectorRequest &) = default ;
    CreateCollectorRequest& operator=(CreateCollectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->collectorPaths_ != nullptr
        && this->configs_ != nullptr && this->dryRun_ != nullptr && this->extendConfigs_ != nullptr && this->name_ != nullptr && this->resType_ != nullptr
        && this->resVersion_ != nullptr && this->vpcId_ != nullptr && this->clientToken_ != nullptr; };
    // collectorPaths Field Functions 
    bool hasCollectorPaths() const { return this->collectorPaths_ != nullptr;};
    void deleteCollectorPaths() { this->collectorPaths_ = nullptr;};
    inline const vector<string> & collectorPaths() const { DARABONBA_PTR_GET_CONST(collectorPaths_, vector<string>) };
    inline vector<string> collectorPaths() { DARABONBA_PTR_GET(collectorPaths_, vector<string>) };
    inline CreateCollectorRequest& setCollectorPaths(const vector<string> & collectorPaths) { DARABONBA_PTR_SET_VALUE(collectorPaths_, collectorPaths) };
    inline CreateCollectorRequest& setCollectorPaths(vector<string> && collectorPaths) { DARABONBA_PTR_SET_RVALUE(collectorPaths_, collectorPaths) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<CreateCollectorRequestConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<CreateCollectorRequestConfigs>) };
    inline vector<CreateCollectorRequestConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<CreateCollectorRequestConfigs>) };
    inline CreateCollectorRequest& setConfigs(const vector<CreateCollectorRequestConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline CreateCollectorRequest& setConfigs(vector<CreateCollectorRequestConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateCollectorRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // extendConfigs Field Functions 
    bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
    void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
    inline const vector<Darabonba::Json> & extendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Darabonba::Json>) };
    inline CreateCollectorRequest& setExtendConfigs(const vector<Darabonba::Json> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
    inline CreateCollectorRequest& setExtendConfigs(vector<Darabonba::Json> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCollectorRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resType Field Functions 
    bool hasResType() const { return this->resType_ != nullptr;};
    void deleteResType() { this->resType_ = nullptr;};
    inline string resType() const { DARABONBA_PTR_GET_DEFAULT(resType_, "") };
    inline CreateCollectorRequest& setResType(string resType) { DARABONBA_PTR_SET_VALUE(resType_, resType) };


    // resVersion Field Functions 
    bool hasResVersion() const { return this->resVersion_ != nullptr;};
    void deleteResVersion() { this->resVersion_ = nullptr;};
    inline string resVersion() const { DARABONBA_PTR_GET_DEFAULT(resVersion_, "") };
    inline CreateCollectorRequest& setResVersion(string resVersion) { DARABONBA_PTR_SET_VALUE(resVersion_, resVersion) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateCollectorRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCollectorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    std::shared_ptr<vector<string>> collectorPaths_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateCollectorRequestConfigs>> configs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Darabonba::Json>> extendConfigs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the created crawer.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
