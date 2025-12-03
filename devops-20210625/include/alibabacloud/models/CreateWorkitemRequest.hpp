// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateWorkitemRequestFieldValueList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(descriptionFormat, descriptionFormat_);
      DARABONBA_PTR_TO_JSON(fieldValueList, fieldValueList_);
      DARABONBA_PTR_TO_JSON(parent, parent_);
      DARABONBA_PTR_TO_JSON(participant, participant_);
      DARABONBA_PTR_TO_JSON(space, space_);
      DARABONBA_PTR_TO_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_TO_JSON(spaceType, spaceType_);
      DARABONBA_PTR_TO_JSON(sprint, sprint_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(tracker, tracker_);
      DARABONBA_PTR_TO_JSON(verifier, verifier_);
      DARABONBA_PTR_TO_JSON(workitemType, workitemType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assignedTo, assignedTo_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(descriptionFormat, descriptionFormat_);
      DARABONBA_PTR_FROM_JSON(fieldValueList, fieldValueList_);
      DARABONBA_PTR_FROM_JSON(parent, parent_);
      DARABONBA_PTR_FROM_JSON(participant, participant_);
      DARABONBA_PTR_FROM_JSON(space, space_);
      DARABONBA_PTR_FROM_JSON(spaceIdentifier, spaceIdentifier_);
      DARABONBA_PTR_FROM_JSON(spaceType, spaceType_);
      DARABONBA_PTR_FROM_JSON(sprint, sprint_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(tracker, tracker_);
      DARABONBA_PTR_FROM_JSON(verifier, verifier_);
      DARABONBA_PTR_FROM_JSON(workitemType, workitemType_);
    };
    CreateWorkitemRequest() = default ;
    CreateWorkitemRequest(const CreateWorkitemRequest &) = default ;
    CreateWorkitemRequest(CreateWorkitemRequest &&) = default ;
    CreateWorkitemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemRequest() = default ;
    CreateWorkitemRequest& operator=(const CreateWorkitemRequest &) = default ;
    CreateWorkitemRequest& operator=(CreateWorkitemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignedTo_ == nullptr
        && return this->category_ == nullptr && return this->description_ == nullptr && return this->descriptionFormat_ == nullptr && return this->fieldValueList_ == nullptr && return this->parent_ == nullptr
        && return this->participant_ == nullptr && return this->space_ == nullptr && return this->spaceIdentifier_ == nullptr && return this->spaceType_ == nullptr && return this->sprint_ == nullptr
        && return this->subject_ == nullptr && return this->tracker_ == nullptr && return this->verifier_ == nullptr && return this->workitemType_ == nullptr; };
    // assignedTo Field Functions 
    bool hasAssignedTo() const { return this->assignedTo_ != nullptr;};
    void deleteAssignedTo() { this->assignedTo_ = nullptr;};
    inline string assignedTo() const { DARABONBA_PTR_GET_DEFAULT(assignedTo_, "") };
    inline CreateWorkitemRequest& setAssignedTo(string assignedTo) { DARABONBA_PTR_SET_VALUE(assignedTo_, assignedTo) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateWorkitemRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateWorkitemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionFormat Field Functions 
    bool hasDescriptionFormat() const { return this->descriptionFormat_ != nullptr;};
    void deleteDescriptionFormat() { this->descriptionFormat_ = nullptr;};
    inline string descriptionFormat() const { DARABONBA_PTR_GET_DEFAULT(descriptionFormat_, "") };
    inline CreateWorkitemRequest& setDescriptionFormat(string descriptionFormat) { DARABONBA_PTR_SET_VALUE(descriptionFormat_, descriptionFormat) };


    // fieldValueList Field Functions 
    bool hasFieldValueList() const { return this->fieldValueList_ != nullptr;};
    void deleteFieldValueList() { this->fieldValueList_ = nullptr;};
    inline const vector<CreateWorkitemRequestFieldValueList> & fieldValueList() const { DARABONBA_PTR_GET_CONST(fieldValueList_, vector<CreateWorkitemRequestFieldValueList>) };
    inline vector<CreateWorkitemRequestFieldValueList> fieldValueList() { DARABONBA_PTR_GET(fieldValueList_, vector<CreateWorkitemRequestFieldValueList>) };
    inline CreateWorkitemRequest& setFieldValueList(const vector<CreateWorkitemRequestFieldValueList> & fieldValueList) { DARABONBA_PTR_SET_VALUE(fieldValueList_, fieldValueList) };
    inline CreateWorkitemRequest& setFieldValueList(vector<CreateWorkitemRequestFieldValueList> && fieldValueList) { DARABONBA_PTR_SET_RVALUE(fieldValueList_, fieldValueList) };


    // parent Field Functions 
    bool hasParent() const { return this->parent_ != nullptr;};
    void deleteParent() { this->parent_ = nullptr;};
    inline string parent() const { DARABONBA_PTR_GET_DEFAULT(parent_, "") };
    inline CreateWorkitemRequest& setParent(string parent) { DARABONBA_PTR_SET_VALUE(parent_, parent) };


    // participant Field Functions 
    bool hasParticipant() const { return this->participant_ != nullptr;};
    void deleteParticipant() { this->participant_ = nullptr;};
    inline const vector<string> & participant() const { DARABONBA_PTR_GET_CONST(participant_, vector<string>) };
    inline vector<string> participant() { DARABONBA_PTR_GET(participant_, vector<string>) };
    inline CreateWorkitemRequest& setParticipant(const vector<string> & participant) { DARABONBA_PTR_SET_VALUE(participant_, participant) };
    inline CreateWorkitemRequest& setParticipant(vector<string> && participant) { DARABONBA_PTR_SET_RVALUE(participant_, participant) };


    // space Field Functions 
    bool hasSpace() const { return this->space_ != nullptr;};
    void deleteSpace() { this->space_ = nullptr;};
    inline string space() const { DARABONBA_PTR_GET_DEFAULT(space_, "") };
    inline CreateWorkitemRequest& setSpace(string space) { DARABONBA_PTR_SET_VALUE(space_, space) };


    // spaceIdentifier Field Functions 
    bool hasSpaceIdentifier() const { return this->spaceIdentifier_ != nullptr;};
    void deleteSpaceIdentifier() { this->spaceIdentifier_ = nullptr;};
    inline string spaceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(spaceIdentifier_, "") };
    inline CreateWorkitemRequest& setSpaceIdentifier(string spaceIdentifier) { DARABONBA_PTR_SET_VALUE(spaceIdentifier_, spaceIdentifier) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline CreateWorkitemRequest& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


    // sprint Field Functions 
    bool hasSprint() const { return this->sprint_ != nullptr;};
    void deleteSprint() { this->sprint_ = nullptr;};
    inline const vector<string> & sprint() const { DARABONBA_PTR_GET_CONST(sprint_, vector<string>) };
    inline vector<string> sprint() { DARABONBA_PTR_GET(sprint_, vector<string>) };
    inline CreateWorkitemRequest& setSprint(const vector<string> & sprint) { DARABONBA_PTR_SET_VALUE(sprint_, sprint) };
    inline CreateWorkitemRequest& setSprint(vector<string> && sprint) { DARABONBA_PTR_SET_RVALUE(sprint_, sprint) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateWorkitemRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tracker Field Functions 
    bool hasTracker() const { return this->tracker_ != nullptr;};
    void deleteTracker() { this->tracker_ = nullptr;};
    inline const vector<string> & tracker() const { DARABONBA_PTR_GET_CONST(tracker_, vector<string>) };
    inline vector<string> tracker() { DARABONBA_PTR_GET(tracker_, vector<string>) };
    inline CreateWorkitemRequest& setTracker(const vector<string> & tracker) { DARABONBA_PTR_SET_VALUE(tracker_, tracker) };
    inline CreateWorkitemRequest& setTracker(vector<string> && tracker) { DARABONBA_PTR_SET_RVALUE(tracker_, tracker) };


    // verifier Field Functions 
    bool hasVerifier() const { return this->verifier_ != nullptr;};
    void deleteVerifier() { this->verifier_ = nullptr;};
    inline const vector<string> & verifier() const { DARABONBA_PTR_GET_CONST(verifier_, vector<string>) };
    inline vector<string> verifier() { DARABONBA_PTR_GET(verifier_, vector<string>) };
    inline CreateWorkitemRequest& setVerifier(const vector<string> & verifier) { DARABONBA_PTR_SET_VALUE(verifier_, verifier) };
    inline CreateWorkitemRequest& setVerifier(vector<string> && verifier) { DARABONBA_PTR_SET_RVALUE(verifier_, verifier) };


    // workitemType Field Functions 
    bool hasWorkitemType() const { return this->workitemType_ != nullptr;};
    void deleteWorkitemType() { this->workitemType_ = nullptr;};
    inline string workitemType() const { DARABONBA_PTR_GET_DEFAULT(workitemType_, "") };
    inline CreateWorkitemRequest& setWorkitemType(string workitemType) { DARABONBA_PTR_SET_VALUE(workitemType_, workitemType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> assignedTo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> descriptionFormat_ = nullptr;
    std::shared_ptr<vector<CreateWorkitemRequestFieldValueList>> fieldValueList_ = nullptr;
    std::shared_ptr<string> parent_ = nullptr;
    std::shared_ptr<vector<string>> participant_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> space_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceIdentifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceType_ = nullptr;
    std::shared_ptr<vector<string>> sprint_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<vector<string>> tracker_ = nullptr;
    std::shared_ptr<vector<string>> verifier_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workitemType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
