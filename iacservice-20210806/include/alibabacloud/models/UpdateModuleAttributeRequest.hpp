// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODULEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODULEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateModuleAttributeRequestGroupInfo.hpp>
#include <vector>
#include <alibabacloud/models/UpdateModuleAttributeRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class UpdateModuleAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModuleAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(statePath, statePath_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(versionStrategy, versionStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModuleAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(statePath, statePath_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(versionStrategy, versionStrategy_);
    };
    UpdateModuleAttributeRequest() = default ;
    UpdateModuleAttributeRequest(const UpdateModuleAttributeRequest &) = default ;
    UpdateModuleAttributeRequest(UpdateModuleAttributeRequest &&) = default ;
    UpdateModuleAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModuleAttributeRequest() = default ;
    UpdateModuleAttributeRequest& operator=(const UpdateModuleAttributeRequest &) = default ;
    UpdateModuleAttributeRequest& operator=(UpdateModuleAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->groupInfo_ != nullptr && this->name_ != nullptr && this->sourcePath_ != nullptr && this->statePath_ != nullptr
        && this->tags_ != nullptr && this->versionStrategy_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateModuleAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModuleAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const UpdateModuleAttributeRequestGroupInfo & groupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, UpdateModuleAttributeRequestGroupInfo) };
    inline UpdateModuleAttributeRequestGroupInfo groupInfo() { DARABONBA_PTR_GET(groupInfo_, UpdateModuleAttributeRequestGroupInfo) };
    inline UpdateModuleAttributeRequest& setGroupInfo(const UpdateModuleAttributeRequestGroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline UpdateModuleAttributeRequest& setGroupInfo(UpdateModuleAttributeRequestGroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModuleAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string sourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline UpdateModuleAttributeRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // statePath Field Functions 
    bool hasStatePath() const { return this->statePath_ != nullptr;};
    void deleteStatePath() { this->statePath_ = nullptr;};
    inline string statePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
    inline UpdateModuleAttributeRequest& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateModuleAttributeRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateModuleAttributeRequestTags>) };
    inline vector<UpdateModuleAttributeRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UpdateModuleAttributeRequestTags>) };
    inline UpdateModuleAttributeRequest& setTags(const vector<UpdateModuleAttributeRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateModuleAttributeRequest& setTags(vector<UpdateModuleAttributeRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // versionStrategy Field Functions 
    bool hasVersionStrategy() const { return this->versionStrategy_ != nullptr;};
    void deleteVersionStrategy() { this->versionStrategy_ = nullptr;};
    inline string versionStrategy() const { DARABONBA_PTR_GET_DEFAULT(versionStrategy_, "") };
    inline UpdateModuleAttributeRequest& setVersionStrategy(string versionStrategy) { DARABONBA_PTR_SET_VALUE(versionStrategy_, versionStrategy) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<UpdateModuleAttributeRequestGroupInfo> groupInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sourcePath_ = nullptr;
    std::shared_ptr<string> statePath_ = nullptr;
    std::shared_ptr<vector<UpdateModuleAttributeRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> versionStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
