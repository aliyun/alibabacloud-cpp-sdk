// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateModelApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceModel, forceModel_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(ModelCategory, modelCategory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PathPrefix, pathPrefix_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RecordInput, recordInput_);
      DARABONBA_PTR_TO_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteRules, routeRules_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceModel, forceModel_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(ModelCategory, modelCategory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PathPrefix, pathPrefix_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RecordInput, recordInput_);
      DARABONBA_PTR_FROM_JSON(RecordOutput, recordOutput_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteRules, routeRules_);
    };
    CreateModelApiRequest() = default ;
    CreateModelApiRequest(const CreateModelApiRequest &) = default ;
    CreateModelApiRequest(CreateModelApiRequest &&) = default ;
    CreateModelApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelApiRequest() = default ;
    CreateModelApiRequest& operator=(const CreateModelApiRequest &) = default ;
    CreateModelApiRequest& operator=(CreateModelApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forceModel_ == nullptr
        && this->gwClusterId_ == nullptr && this->modelCategory_ == nullptr && this->name_ == nullptr && this->pathPrefix_ == nullptr && this->protocol_ == nullptr
        && this->recordInput_ == nullptr && this->recordOutput_ == nullptr && this->regionId_ == nullptr && this->routeRules_ == nullptr; };
    // forceModel Field Functions 
    bool hasForceModel() const { return this->forceModel_ != nullptr;};
    void deleteForceModel() { this->forceModel_ = nullptr;};
    inline string getForceModel() const { DARABONBA_PTR_GET_DEFAULT(forceModel_, "") };
    inline CreateModelApiRequest& setForceModel(string forceModel) { DARABONBA_PTR_SET_VALUE(forceModel_, forceModel) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline CreateModelApiRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // modelCategory Field Functions 
    bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
    void deleteModelCategory() { this->modelCategory_ = nullptr;};
    inline string getModelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
    inline CreateModelApiRequest& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModelApiRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pathPrefix Field Functions 
    bool hasPathPrefix() const { return this->pathPrefix_ != nullptr;};
    void deletePathPrefix() { this->pathPrefix_ = nullptr;};
    inline string getPathPrefix() const { DARABONBA_PTR_GET_DEFAULT(pathPrefix_, "") };
    inline CreateModelApiRequest& setPathPrefix(string pathPrefix) { DARABONBA_PTR_SET_VALUE(pathPrefix_, pathPrefix) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateModelApiRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // recordInput Field Functions 
    bool hasRecordInput() const { return this->recordInput_ != nullptr;};
    void deleteRecordInput() { this->recordInput_ = nullptr;};
    inline string getRecordInput() const { DARABONBA_PTR_GET_DEFAULT(recordInput_, "") };
    inline CreateModelApiRequest& setRecordInput(string recordInput) { DARABONBA_PTR_SET_VALUE(recordInput_, recordInput) };


    // recordOutput Field Functions 
    bool hasRecordOutput() const { return this->recordOutput_ != nullptr;};
    void deleteRecordOutput() { this->recordOutput_ = nullptr;};
    inline string getRecordOutput() const { DARABONBA_PTR_GET_DEFAULT(recordOutput_, "") };
    inline CreateModelApiRequest& setRecordOutput(string recordOutput) { DARABONBA_PTR_SET_VALUE(recordOutput_, recordOutput) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateModelApiRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeRules Field Functions 
    bool hasRouteRules() const { return this->routeRules_ != nullptr;};
    void deleteRouteRules() { this->routeRules_ = nullptr;};
    inline string getRouteRules() const { DARABONBA_PTR_GET_DEFAULT(routeRules_, "") };
    inline CreateModelApiRequest& setRouteRules(string routeRules) { DARABONBA_PTR_SET_VALUE(routeRules_, routeRules) };


  protected:
    shared_ptr<string> forceModel_ {};
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    // This parameter is required.
    shared_ptr<string> modelCategory_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> pathPrefix_ {};
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    shared_ptr<string> recordInput_ {};
    shared_ptr<string> recordOutput_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> routeRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
