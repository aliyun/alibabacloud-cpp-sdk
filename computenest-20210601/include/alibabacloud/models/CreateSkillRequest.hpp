// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESKILLREQUEST_HPP_
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
  class CreateSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_TO_JSON(SkillDescription, skillDescription_);
      DARABONBA_PTR_TO_JSON(SkillLabels, skillLabels_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
      DARABONBA_PTR_TO_JSON(SkillSpaceId, skillSpaceId_);
      DARABONBA_PTR_TO_JSON(SourceSkillId, sourceSkillId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_FROM_JSON(SkillDescription, skillDescription_);
      DARABONBA_PTR_FROM_JSON(SkillLabels, skillLabels_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
      DARABONBA_PTR_FROM_JSON(SkillSpaceId, skillSpaceId_);
      DARABONBA_PTR_FROM_JSON(SourceSkillId, sourceSkillId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    CreateSkillRequest() = default ;
    CreateSkillRequest(const CreateSkillRequest &) = default ;
    CreateSkillRequest(CreateSkillRequest &&) = default ;
    CreateSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSkillRequest() = default ;
    CreateSkillRequest& operator=(const CreateSkillRequest &) = default ;
    CreateSkillRequest& operator=(CreateSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->ossUrl_ == nullptr && this->skillDescription_ == nullptr && this->skillLabels_ == nullptr && this->skillName_ == nullptr && this->skillSpaceId_ == nullptr
        && this->sourceSkillId_ == nullptr && this->sourceType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSkillRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string getOssUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline CreateSkillRequest& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // skillDescription Field Functions 
    bool hasSkillDescription() const { return this->skillDescription_ != nullptr;};
    void deleteSkillDescription() { this->skillDescription_ = nullptr;};
    inline string getSkillDescription() const { DARABONBA_PTR_GET_DEFAULT(skillDescription_, "") };
    inline CreateSkillRequest& setSkillDescription(string skillDescription) { DARABONBA_PTR_SET_VALUE(skillDescription_, skillDescription) };


    // skillLabels Field Functions 
    bool hasSkillLabels() const { return this->skillLabels_ != nullptr;};
    void deleteSkillLabels() { this->skillLabels_ = nullptr;};
    inline const vector<string> & getSkillLabels() const { DARABONBA_PTR_GET_CONST(skillLabels_, vector<string>) };
    inline vector<string> getSkillLabels() { DARABONBA_PTR_GET(skillLabels_, vector<string>) };
    inline CreateSkillRequest& setSkillLabels(const vector<string> & skillLabels) { DARABONBA_PTR_SET_VALUE(skillLabels_, skillLabels) };
    inline CreateSkillRequest& setSkillLabels(vector<string> && skillLabels) { DARABONBA_PTR_SET_RVALUE(skillLabels_, skillLabels) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline CreateSkillRequest& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


    // skillSpaceId Field Functions 
    bool hasSkillSpaceId() const { return this->skillSpaceId_ != nullptr;};
    void deleteSkillSpaceId() { this->skillSpaceId_ = nullptr;};
    inline string getSkillSpaceId() const { DARABONBA_PTR_GET_DEFAULT(skillSpaceId_, "") };
    inline CreateSkillRequest& setSkillSpaceId(string skillSpaceId) { DARABONBA_PTR_SET_VALUE(skillSpaceId_, skillSpaceId) };


    // sourceSkillId Field Functions 
    bool hasSourceSkillId() const { return this->sourceSkillId_ != nullptr;};
    void deleteSourceSkillId() { this->sourceSkillId_ = nullptr;};
    inline string getSourceSkillId() const { DARABONBA_PTR_GET_DEFAULT(sourceSkillId_, "") };
    inline CreateSkillRequest& setSourceSkillId(string sourceSkillId) { DARABONBA_PTR_SET_VALUE(sourceSkillId_, sourceSkillId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateSkillRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ossUrl_ {};
    shared_ptr<string> skillDescription_ {};
    shared_ptr<vector<string>> skillLabels_ {};
    shared_ptr<string> skillName_ {};
    // This parameter is required.
    shared_ptr<string> skillSpaceId_ {};
    shared_ptr<string> sourceSkillId_ {};
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
