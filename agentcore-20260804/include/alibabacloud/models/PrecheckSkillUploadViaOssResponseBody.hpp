// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKSKILLUPLOADVIAOSSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKSKILLUPLOADVIAOSSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class PrecheckSkillUploadViaOssResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrecheckSkillUploadViaOssResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PrecheckSkillUploadViaOssResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PrecheckSkillUploadViaOssResponseBody() = default ;
    PrecheckSkillUploadViaOssResponseBody(const PrecheckSkillUploadViaOssResponseBody &) = default ;
    PrecheckSkillUploadViaOssResponseBody(PrecheckSkillUploadViaOssResponseBody &&) = default ;
    PrecheckSkillUploadViaOssResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrecheckSkillUploadViaOssResponseBody() = default ;
    PrecheckSkillUploadViaOssResponseBody& operator=(const PrecheckSkillUploadViaOssResponseBody &) = default ;
    PrecheckSkillUploadViaOssResponseBody& operator=(PrecheckSkillUploadViaOssResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(editingVersion, editingVersion_);
        DARABONBA_PTR_TO_JSON(entryPath, entryPath_);
        DARABONBA_PTR_TO_JSON(exists, exists_);
        DARABONBA_PTR_TO_JSON(maxPublishedVersion, maxPublishedVersion_);
        DARABONBA_PTR_TO_JSON(owner, owner_);
        DARABONBA_PTR_TO_JSON(parsedVersion, parsedVersion_);
        DARABONBA_PTR_TO_JSON(precheckCode, precheckCode_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(reviewingVersion, reviewingVersion_);
        DARABONBA_PTR_TO_JSON(skillName, skillName_);
        DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(editingVersion, editingVersion_);
        DARABONBA_PTR_FROM_JSON(entryPath, entryPath_);
        DARABONBA_PTR_FROM_JSON(exists, exists_);
        DARABONBA_PTR_FROM_JSON(maxPublishedVersion, maxPublishedVersion_);
        DARABONBA_PTR_FROM_JSON(owner, owner_);
        DARABONBA_PTR_FROM_JSON(parsedVersion, parsedVersion_);
        DARABONBA_PTR_FROM_JSON(precheckCode, precheckCode_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(reviewingVersion, reviewingVersion_);
        DARABONBA_PTR_FROM_JSON(skillName, skillName_);
        DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->editingVersion_ == nullptr
        && this->entryPath_ == nullptr && this->exists_ == nullptr && this->maxPublishedVersion_ == nullptr && this->owner_ == nullptr && this->parsedVersion_ == nullptr
        && this->precheckCode_ == nullptr && this->reason_ == nullptr && this->reviewingVersion_ == nullptr && this->skillName_ == nullptr && this->targetVersion_ == nullptr
        && this->workspaceId_ == nullptr; };
      // editingVersion Field Functions 
      bool hasEditingVersion() const { return this->editingVersion_ != nullptr;};
      void deleteEditingVersion() { this->editingVersion_ = nullptr;};
      inline string getEditingVersion() const { DARABONBA_PTR_GET_DEFAULT(editingVersion_, "") };
      inline Data& setEditingVersion(string editingVersion) { DARABONBA_PTR_SET_VALUE(editingVersion_, editingVersion) };


      // entryPath Field Functions 
      bool hasEntryPath() const { return this->entryPath_ != nullptr;};
      void deleteEntryPath() { this->entryPath_ = nullptr;};
      inline string getEntryPath() const { DARABONBA_PTR_GET_DEFAULT(entryPath_, "") };
      inline Data& setEntryPath(string entryPath) { DARABONBA_PTR_SET_VALUE(entryPath_, entryPath) };


      // exists Field Functions 
      bool hasExists() const { return this->exists_ != nullptr;};
      void deleteExists() { this->exists_ = nullptr;};
      inline bool getExists() const { DARABONBA_PTR_GET_DEFAULT(exists_, false) };
      inline Data& setExists(bool exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


      // maxPublishedVersion Field Functions 
      bool hasMaxPublishedVersion() const { return this->maxPublishedVersion_ != nullptr;};
      void deleteMaxPublishedVersion() { this->maxPublishedVersion_ = nullptr;};
      inline string getMaxPublishedVersion() const { DARABONBA_PTR_GET_DEFAULT(maxPublishedVersion_, "") };
      inline Data& setMaxPublishedVersion(string maxPublishedVersion) { DARABONBA_PTR_SET_VALUE(maxPublishedVersion_, maxPublishedVersion) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // parsedVersion Field Functions 
      bool hasParsedVersion() const { return this->parsedVersion_ != nullptr;};
      void deleteParsedVersion() { this->parsedVersion_ = nullptr;};
      inline string getParsedVersion() const { DARABONBA_PTR_GET_DEFAULT(parsedVersion_, "") };
      inline Data& setParsedVersion(string parsedVersion) { DARABONBA_PTR_SET_VALUE(parsedVersion_, parsedVersion) };


      // precheckCode Field Functions 
      bool hasPrecheckCode() const { return this->precheckCode_ != nullptr;};
      void deletePrecheckCode() { this->precheckCode_ = nullptr;};
      inline string getPrecheckCode() const { DARABONBA_PTR_GET_DEFAULT(precheckCode_, "") };
      inline Data& setPrecheckCode(string precheckCode) { DARABONBA_PTR_SET_VALUE(precheckCode_, precheckCode) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // reviewingVersion Field Functions 
      bool hasReviewingVersion() const { return this->reviewingVersion_ != nullptr;};
      void deleteReviewingVersion() { this->reviewingVersion_ = nullptr;};
      inline string getReviewingVersion() const { DARABONBA_PTR_GET_DEFAULT(reviewingVersion_, "") };
      inline Data& setReviewingVersion(string reviewingVersion) { DARABONBA_PTR_SET_VALUE(reviewingVersion_, reviewingVersion) };


      // skillName Field Functions 
      bool hasSkillName() const { return this->skillName_ != nullptr;};
      void deleteSkillName() { this->skillName_ = nullptr;};
      inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
      inline Data& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


      // targetVersion Field Functions 
      bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
      void deleteTargetVersion() { this->targetVersion_ = nullptr;};
      inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
      inline Data& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The version currently being edited.
      shared_ptr<string> editingVersion_ {};
      // The entry path of the Skill package.
      shared_ptr<string> entryPath_ {};
      // Indicates whether the Skill already exists.
      shared_ptr<bool> exists_ {};
      // The highest published version.
      shared_ptr<string> maxPublishedVersion_ {};
      // The resource owner.
      shared_ptr<string> owner_ {};
      // The version parsed from the uploaded content.
      shared_ptr<string> parsedVersion_ {};
      // The pre-check result code.
      shared_ptr<string> precheckCode_ {};
      // The reason description.
      shared_ptr<string> reason_ {};
      // The version currently under review.
      shared_ptr<string> reviewingVersion_ {};
      // The Skill name.
      shared_ptr<string> skillName_ {};
      // The target version.
      shared_ptr<string> targetVersion_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<PrecheckSkillUploadViaOssResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PrecheckSkillUploadViaOssResponseBody::Data>) };
    inline vector<PrecheckSkillUploadViaOssResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<PrecheckSkillUploadViaOssResponseBody::Data>) };
    inline PrecheckSkillUploadViaOssResponseBody& setData(const vector<PrecheckSkillUploadViaOssResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline PrecheckSkillUploadViaOssResponseBody& setData(vector<PrecheckSkillUploadViaOssResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PrecheckSkillUploadViaOssResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<vector<PrecheckSkillUploadViaOssResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
