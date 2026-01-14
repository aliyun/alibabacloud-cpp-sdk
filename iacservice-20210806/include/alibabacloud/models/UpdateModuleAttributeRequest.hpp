// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODULEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODULEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<string> tagKey_ {};
      shared_ptr<string> tagValue_ {};
    };

    class GroupInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupInfo& obj) { 
        DARABONBA_PTR_TO_JSON(groupId, groupId_);
        DARABONBA_PTR_TO_JSON(projectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, GroupInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(groupId, groupId_);
        DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      };
      GroupInfo() = default ;
      GroupInfo(const GroupInfo &) = default ;
      GroupInfo(GroupInfo &&) = default ;
      GroupInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupInfo() = default ;
      GroupInfo& operator=(const GroupInfo &) = default ;
      GroupInfo& operator=(GroupInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->projectId_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline GroupInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline GroupInfo& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      shared_ptr<string> groupId_ {};
      shared_ptr<string> projectId_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->groupInfo_ == nullptr && this->name_ == nullptr && this->sourcePath_ == nullptr && this->statePath_ == nullptr
        && this->tags_ == nullptr && this->versionStrategy_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateModuleAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModuleAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupInfo Field Functions 
    bool hasGroupInfo() const { return this->groupInfo_ != nullptr;};
    void deleteGroupInfo() { this->groupInfo_ = nullptr;};
    inline const UpdateModuleAttributeRequest::GroupInfo & getGroupInfo() const { DARABONBA_PTR_GET_CONST(groupInfo_, UpdateModuleAttributeRequest::GroupInfo) };
    inline UpdateModuleAttributeRequest::GroupInfo getGroupInfo() { DARABONBA_PTR_GET(groupInfo_, UpdateModuleAttributeRequest::GroupInfo) };
    inline UpdateModuleAttributeRequest& setGroupInfo(const UpdateModuleAttributeRequest::GroupInfo & groupInfo) { DARABONBA_PTR_SET_VALUE(groupInfo_, groupInfo) };
    inline UpdateModuleAttributeRequest& setGroupInfo(UpdateModuleAttributeRequest::GroupInfo && groupInfo) { DARABONBA_PTR_SET_RVALUE(groupInfo_, groupInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModuleAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourcePath Field Functions 
    bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
    void deleteSourcePath() { this->sourcePath_ = nullptr;};
    inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
    inline UpdateModuleAttributeRequest& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


    // statePath Field Functions 
    bool hasStatePath() const { return this->statePath_ != nullptr;};
    void deleteStatePath() { this->statePath_ = nullptr;};
    inline string getStatePath() const { DARABONBA_PTR_GET_DEFAULT(statePath_, "") };
    inline UpdateModuleAttributeRequest& setStatePath(string statePath) { DARABONBA_PTR_SET_VALUE(statePath_, statePath) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateModuleAttributeRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateModuleAttributeRequest::Tags>) };
    inline vector<UpdateModuleAttributeRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateModuleAttributeRequest::Tags>) };
    inline UpdateModuleAttributeRequest& setTags(const vector<UpdateModuleAttributeRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateModuleAttributeRequest& setTags(vector<UpdateModuleAttributeRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // versionStrategy Field Functions 
    bool hasVersionStrategy() const { return this->versionStrategy_ != nullptr;};
    void deleteVersionStrategy() { this->versionStrategy_ = nullptr;};
    inline string getVersionStrategy() const { DARABONBA_PTR_GET_DEFAULT(versionStrategy_, "") };
    inline UpdateModuleAttributeRequest& setVersionStrategy(string versionStrategy) { DARABONBA_PTR_SET_VALUE(versionStrategy_, versionStrategy) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> description_ {};
    shared_ptr<UpdateModuleAttributeRequest::GroupInfo> groupInfo_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> sourcePath_ {};
    shared_ptr<string> statePath_ {};
    shared_ptr<vector<UpdateModuleAttributeRequest::Tags>> tags_ {};
    shared_ptr<string> versionStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
