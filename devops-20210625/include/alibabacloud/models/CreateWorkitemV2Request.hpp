// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateWorkitemV2RequestFieldValueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fieldValueList, fieldValueList_);
      DARABONBA_PTR_TO_JSON(parentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(participants, participants_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(sprintIdentifier, sprintIdentifier_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(trackers, trackers_);
      DARABONBA_PTR_TO_JSON(verifier, verifier_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
      DARABONBA_PTR_TO_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fieldValueList, fieldValueList_);
      DARABONBA_PTR_FROM_JSON(parentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(participants, participants_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(sprintIdentifier, sprintIdentifier_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(trackers, trackers_);
      DARABONBA_PTR_FROM_JSON(verifier, verifier_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
      DARABONBA_PTR_FROM_JSON(workitemTypeIdentifier, workitemTypeIdentifier_);
    };
    CreateWorkitemV2Request() = default ;
    CreateWorkitemV2Request(const CreateWorkitemV2Request &) = default ;
    CreateWorkitemV2Request(CreateWorkitemV2Request &&) = default ;
    CreateWorkitemV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemV2Request() = default ;
    CreateWorkitemV2Request& operator=(const CreateWorkitemV2Request &) = default ;
    CreateWorkitemV2Request& operator=(CreateWorkitemV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->category_ == nullptr && return this->description_ == nullptr && return this->fieldValueList_ == nullptr && return this->parentIdentifier_ == nullptr && return this->participants_ == nullptr
        && return this->spaceIdentifier_ == nullptr && return this->sprintIdentifier_ == nullptr && return this->subject_ == nullptr && return this->tags_ == nullptr && return this->trackers_ == nullptr
        && return this->verifier_ == nullptr && return this->versions_ == nullptr && return this->workitemTypeIdentifier_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline string assignedTo() const { DARABONBA_PTR_GET_DEFAULT(assignedTo_, "") };
    inline CreateWorkitemV2Request& setAssignedTo(string assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateWorkitemV2Request& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkitemV2Request& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fieldValueList Field Functions 
    bool hasFieldValueList() const { return this->fieldValueList_ != nullptr;};
    void deleteFieldValueList() { this->fieldValueList_ = nullptr;};
    inline const vector<CreateWorkitemV2RequestFieldValueList> & fieldValueList() const { DARABONBA_PTR_GET_CONST(fieldValueList_, vector<CreateWorkitemV2RequestFieldValueList>) };
    inline vector<CreateWorkitemV2RequestFieldValueList> fieldValueList() { DARABONBA_PTR_GET(fieldValueList_, vector<CreateWorkitemV2RequestFieldValueList>) };
    inline CreateWorkitemV2Request& setFieldValueList(const vector<CreateWorkitemV2RequestFieldValueList> & fieldValueList) { DARABONBA_PTR_SET_VALUE(fieldValueList_, fieldValueList) };
    inline CreateWorkitemV2Request& setFieldValueList(vector<CreateWorkitemV2RequestFieldValueList> && fieldValueList) { DARABONBA_PTR_SET_RVALUE(fieldValueList_, fieldValueList) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateWorkitemV2Request& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // participants Field Functions 
    bool hasParticipants() const { return this->participants_ != nullptr;};
    void deleteParticipants() { this->participants_ = nullptr;};
    inline const vector<string> & participants() const { DARABONBA_PTR_GET_CONST(participants_, vector<string>) };
    inline vector<string> participants() { DARABONBA_PTR_GET(participants_, vector<string>) };
    inline CreateWorkitemV2Request& setParticipants(const vector<string> & participants) { DARABONBA_PTR_SET_VALUE(participants_, participants) };
    inline CreateWorkitemV2Request& setParticipants(vector<string> && participants) { DARABONBA_PTR_SET_RVALUE(participants_, participants) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline CreateWorkitemV2Request& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // sprintIdentifier Field Functions 
    bool hasSprintIdentifier() const { return this->sprintIdentifier_ != nullptr;};
    void deleteSprintIdentifier() { this->sprintIdentifier_ = nullptr;};
    inline string sprintIdentifier() const { DARABONBA_PTR_GET_DEFAULT(sprintIdentifier_, "") };
    inline CreateWorkitemV2Request& setSprintIdentifier(string sprintIdentifier) { DARABONBA_PTR_SET_VALUE(sprintIdentifier_, sprintIdentifier) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateWorkitemV2Request& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline CreateWorkitemV2Request& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateWorkitemV2Request& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trackers Field Functions 
    bool hasTrackers() const { return this->trackers_ != nullptr;};
    void deleteTrackers() { this->trackers_ = nullptr;};
    inline const vector<string> & trackers() const { DARABONBA_PTR_GET_CONST(trackers_, vector<string>) };
    inline vector<string> trackers() { DARABONBA_PTR_GET(trackers_, vector<string>) };
    inline CreateWorkitemV2Request& setTrackers(const vector<string> & trackers) { DARABONBA_PTR_SET_VALUE(trackers_, trackers) };
    inline CreateWorkitemV2Request& setTrackers(vector<string> && trackers) { DARABONBA_PTR_SET_RVALUE(trackers_, trackers) };


    // verifier Field Functions 
    bool hasVerifier() const { return this->verifier_ != nullptr;};
    void deleteVerifier() { this->verifier_ = nullptr;};
    inline string verifier() const { DARABONBA_PTR_GET_DEFAULT(verifier_, "") };
    inline CreateWorkitemV2Request& setVerifier(string verifier) { DARABONBA_PTR_SET_VALUE(verifier_, verifier) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> versions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline CreateWorkitemV2Request& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline CreateWorkitemV2Request& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    // workitemTypeIdentifier Field Functions 
    bool hasWorkitemTypeIdentifier() const { return this->workitemTypeIdentifier_ != nullptr;};
    void deleteWorkitemTypeIdentifier() { this->workitemTypeIdentifier_ = nullptr;};
    inline string workitemTypeIdentifier() const { DARABONBA_PTR_GET_DEFAULT(workitemTypeIdentifier_, "") };
    inline CreateWorkitemV2Request& setWorkitemTypeIdentifier(string workitemTypeIdentifier) { DARABONBA_PTR_SET_VALUE(workitemTypeIdentifier_, workitemTypeIdentifier) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assignedTo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<CreateWorkitemV2RequestFieldValueList>> fieldValueList_ = nullptr;
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    std::shared_ptr<vector<string>> participants_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    std::shared_ptr<string> sprintIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<vector<string>> trackers_ = nullptr;
    std::shared_ptr<string> verifier_ = nullptr;
    std::shared_ptr<vector<string>> versions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workitemTypeIdentifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
