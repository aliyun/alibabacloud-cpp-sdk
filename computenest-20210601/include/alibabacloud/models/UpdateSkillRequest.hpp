// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class UpdateSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_TO_JSON(SkillDescription, skillDescription_);
      DARABONBA_PTR_TO_JSON(SkillDisplayName, skillDisplayName_);
      DARABONBA_PTR_TO_JSON(SkillId, skillId_);
      DARABONBA_PTR_TO_JSON(SkillLabels, skillLabels_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SourceSkillId, sourceSkillId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_FROM_JSON(SkillDescription, skillDescription_);
      DARABONBA_PTR_FROM_JSON(SkillDisplayName, skillDisplayName_);
      DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
      DARABONBA_PTR_FROM_JSON(SkillLabels, skillLabels_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SourceSkillId, sourceSkillId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    UpdateSkillRequest() = default ;
    UpdateSkillRequest(const UpdateSkillRequest &) = default ;
    UpdateSkillRequest(UpdateSkillRequest &&) = default ;
    UpdateSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillRequest() = default ;
    UpdateSkillRequest& operator=(const UpdateSkillRequest &) = default ;
    UpdateSkillRequest& operator=(UpdateSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->ossUrl_ == nullptr && this->skillDescription_ == nullptr && this->skillDisplayName_ == nullptr && this->skillId_ == nullptr && this->skillLabels_ == nullptr
        && this->skillName_ == nullptr && this->sourceSkillId_ == nullptr && this->sourceType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateSkillRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline UpdateSkillRequest& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // skillDescription Field Functions 
    bool hasSkillDescription() const { return this->skillDescription_ != nullptr;};
    void deleteSkillDescription() { this->skillDescription_ = nullptr;};
    inline string getSkillDescription() const { DARABONBA_PTR_GET_DEFAULT(skillDescription_, "") };
    inline UpdateSkillRequest& setSkillDescription(string skillDescription) { DARABONBA_PTR_SET_VALUE(skillDescription_, skillDescription) };


    // skillDisplayName Field Functions 
    bool hasSkillDisplayName() const { return this->skillDisplayName_ != nullptr;};
    void deleteSkillDisplayName() { this->skillDisplayName_ = nullptr;};
    inline string getSkillDisplayName() const { DARABONBA_PTR_GET_DEFAULT(skillDisplayName_, "") };
    inline UpdateSkillRequest& setSkillDisplayName(string skillDisplayName) { DARABONBA_PTR_SET_VALUE(skillDisplayName_, skillDisplayName) };


    // skillId Field Functions 
    bool hasSkillId() const { return this->skillId_ != nullptr;};
    void deleteSkillId() { this->skillId_ = nullptr;};
    inline string getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, "") };
    inline UpdateSkillRequest& setSkillId(string skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


    // skillLabels Field Functions 
    bool hasSkillLabels() const { return this->skillLabels_ != nullptr;};
    void deleteSkillLabels() { this->skillLabels_ = nullptr;};
    inline const vector<string> & getSkillLabels() const { DARABONBA_PTR_GET_CONST(skillLabels_, vector<string>) };
    inline vector<string> getSkillLabels() { DARABONBA_PTR_GET(skillLabels_, vector<string>) };
    inline UpdateSkillRequest& setSkillLabels(const vector<string> & skillLabels) { DARABONBA_PTR_SET_VALUE(skillLabels_, skillLabels) };
    inline UpdateSkillRequest& setSkillLabels(vector<string> && skillLabels) { DARABONBA_PTR_SET_RVALUE(skillLabels_, skillLabels) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline UpdateSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // sourceSkillId Field Functions 
    bool hasSourceSkillId() const { return this->sourceSkillId_ != nullptr;};
    void deleteSourceSkillId() { this->sourceSkillId_ = nullptr;};
    inline string getSourceSkillId() const { DARABONBA_PTR_GET_DEFAULT(sourceSkillId_, "") };
    inline UpdateSkillRequest& setSourceSkillId(string sourceSkillId) { DARABONBA_PTR_SET_VALUE(sourceSkillId_, sourceSkillId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateSkillRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The value of **ClientToken** can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Required when SourceType is set to UPLOAD. The OSS URL of the skill package to upload.
    shared_ptr<string> ossUrl_ {};
    // The description of the skill.
    shared_ptr<string> skillDescription_ {};
    shared_ptr<string> skillDisplayName_ {};
    // The ID of the skill to update.
    // 
    // This parameter is required.
    shared_ptr<string> skillId_ {};
    // The labels of the skill.
    shared_ptr<vector<string>> skillLabels_ {};
    // The name of the skill.
    shared_ptr<string> skillName_ {};
    // Required when SourceType is set to COPY. The ID of the public skill.
    shared_ptr<string> sourceSkillId_ {};
    // The source type for updating the skill.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
