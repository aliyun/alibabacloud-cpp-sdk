// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateModuleRequestGroupInfo.hpp>
#include <vector>
#include <alibabacloud/models/CreateModuleRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class CreateModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_TO_JSON(statePath, statePath_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(versionStrategy, versionStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupInfo, groupInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(sourcePath, sourcePath_);
      DARABONBA_PTR_FROM_JSON(statePath, statePath_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(versionStrategy, versionStrategy_);
    };
    CreateModuleRequest() = default ;
    CreateModuleRequest(const CreateModuleRequest &) = default ;
    CreateModuleRequest(CreateModuleRequest &&) = default ;
    CreateModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModuleRequest() = default ;
    CreateModuleRequest& operator=(const CreateModuleRequest &) = default ;
    CreateModuleRequest& operator=(CreateModuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->groupInfo_ != nullptr && this->name_ != nullptr && this->source_ != nullptr && this->sourcePath_ != nullptr
        && this->statePath_ != nullptr && this->tags_ != nullptr && this->versionStrategy_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateModuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const CreateModuleRequestGroupInfo & groupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, CreateModuleRequestGroupInfo) };
    inline CreateModuleRequestGroupInfo groupInfo() { DARABONBA_PTR_GET(groupInfo_, CreateModuleRequestGroupInfo) };
    inline CreateModuleRequest& setGroupInfo(const CreateModuleRequestGroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline CreateModuleRequest& setGroupInfo(CreateModuleRequestGroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateModuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateModuleRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string sourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline CreateModuleRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // statePath Field Functions 
    bool hasStatePath() const { return this->statePath_ != nullptr;};
    void deleteStatePath() { this->statePath_ = nullptr;};
    inline string statePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
    inline CreateModuleRequest& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateModuleRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateModuleRequestTags>) };
    inline vector<CreateModuleRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateModuleRequestTags>) };
    inline CreateModuleRequest& setTags(const vector<CreateModuleRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateModuleRequest& setTags(vector<CreateModuleRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // versionStrategy Field Functions 
    bool hasVersionStrategy() const { return this->versionStrategy_ != nullptr;};
    void deleteVersionStrategy() { this->versionStrategy_ = nullptr;};
    inline string versionStrategy() const { DARABONBA_PTR_GET_DEFAULT(versionStrategy_, "") };
    inline CreateModuleRequest& setVersionStrategy(string versionStrategy) { DARABONBA_PTR_SET_VALUE(versionStrategy_, versionStrategy) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateModuleRequestGroupInfo> groupInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> sourcePath_ = nullptr;
    std::shared_ptr<string> statePath_ = nullptr;
    std::shared_ptr<vector<CreateModuleRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> versionStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
