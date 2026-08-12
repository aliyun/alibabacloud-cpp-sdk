// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAPPLYRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAPPLYRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class SubmitApplyRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitApplyRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyRequest, applyRequest_);
      DARABONBA_PTR_TO_JSON(CommitmentLetter, commitmentLetter_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_TO_JSON(QualificationProof, qualificationProof_);
      DARABONBA_PTR_TO_JSON(Trial, trial_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitApplyRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyRequest, applyRequest_);
      DARABONBA_PTR_FROM_JSON(CommitmentLetter, commitmentLetter_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventIdList, eventIdList_);
      DARABONBA_PTR_FROM_JSON(QualificationProof, qualificationProof_);
      DARABONBA_PTR_FROM_JSON(Trial, trial_);
    };
    SubmitApplyRecordRequest() = default ;
    SubmitApplyRecordRequest(const SubmitApplyRecordRequest &) = default ;
    SubmitApplyRecordRequest(SubmitApplyRecordRequest &&) = default ;
    SubmitApplyRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitApplyRecordRequest() = default ;
    SubmitApplyRecordRequest& operator=(const SubmitApplyRecordRequest &) = default ;
    SubmitApplyRecordRequest& operator=(SubmitApplyRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyRequest_ == nullptr
        && this->commitmentLetter_ == nullptr && this->description_ == nullptr && this->eventIdList_ == nullptr && this->qualificationProof_ == nullptr && this->trial_ == nullptr; };
    // applyRequest Field Functions 
    bool hasApplyRequest() const { return this->applyRequest_ != nullptr;};
    void deleteApplyRequest() { this->applyRequest_ = nullptr;};
    inline string getApplyRequest() const { DARABONBA_PTR_GET_DEFAULT(applyRequest_, "") };
    inline SubmitApplyRecordRequest& setApplyRequest(string applyRequest) { DARABONBA_PTR_SET_VALUE(applyRequest_, applyRequest) };


    // commitmentLetter Field Functions 
    bool hasCommitmentLetter() const { return this->commitmentLetter_ != nullptr;};
    void deleteCommitmentLetter() { this->commitmentLetter_ = nullptr;};
    inline string getCommitmentLetter() const { DARABONBA_PTR_GET_DEFAULT(commitmentLetter_, "") };
    inline SubmitApplyRecordRequest& setCommitmentLetter(string commitmentLetter) { DARABONBA_PTR_SET_VALUE(commitmentLetter_, commitmentLetter) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitApplyRecordRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventIdList Field Functions 
    bool hasEventIdList() const { return this->eventIdList_ != nullptr;};
    void deleteEventIdList() { this->eventIdList_ = nullptr;};
    inline const vector<string> & getEventIdList() const { DARABONBA_PTR_GET_CONST(eventIdList_, vector<string>) };
    inline vector<string> getEventIdList() { DARABONBA_PTR_GET(eventIdList_, vector<string>) };
    inline SubmitApplyRecordRequest& setEventIdList(const vector<string> & eventIdList) { DARABONBA_PTR_SET_VALUE(eventIdList_, eventIdList) };
    inline SubmitApplyRecordRequest& setEventIdList(vector<string> && eventIdList) { DARABONBA_PTR_SET_RVALUE(eventIdList_, eventIdList) };


    // qualificationProof Field Functions 
    bool hasQualificationProof() const { return this->qualificationProof_ != nullptr;};
    void deleteQualificationProof() { this->qualificationProof_ = nullptr;};
    inline string getQualificationProof() const { DARABONBA_PTR_GET_DEFAULT(qualificationProof_, "") };
    inline SubmitApplyRecordRequest& setQualificationProof(string qualificationProof) { DARABONBA_PTR_SET_VALUE(qualificationProof_, qualificationProof) };


    // trial Field Functions 
    bool hasTrial() const { return this->trial_ != nullptr;};
    void deleteTrial() { this->trial_ = nullptr;};
    inline bool getTrial() const { DARABONBA_PTR_GET_DEFAULT(trial_, false) };
    inline SubmitApplyRecordRequest& setTrial(bool trial) { DARABONBA_PTR_SET_VALUE(trial_, trial) };


  protected:
    // The request reason.
    // 
    // - **AR01**: Rectified. Request to unblock.
    // - **AR02**: No violation found after investigation.
    // - **AR03**: The instance or service has been shut down and cannot be operated. Request to unblock and then clear the violation information.
    // - **AR04**: Files deleted. Request to unblock.
    // - **AR05**: The instance has been released.
    // - **AR00**: Other. Provide a description.
    // 
    // This parameter is required.
    shared_ptr<string> applyRequest_ {};
    // The commitment letter.
    shared_ptr<string> commitmentLetter_ {};
    // The description of the situation.
    shared_ptr<string> description_ {};
    // The list of specified event IDs.
    shared_ptr<vector<string>> eventIdList_ {};
    // The qualification proof.
    shared_ptr<string> qualificationProof_ {};
    // Specifies whether manual review is required.
    // - **true**: Manual review is required.
    // - **false**: Manual review is not required.
    // 
    // > Default value: manual review is not required.
    shared_ptr<bool> trial_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
