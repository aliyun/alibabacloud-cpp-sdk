// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACLCHECKDETAILSTATUSRESPONSEBODYCHECKRECORD_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACLCHECKDETAILSTATUSRESPONSEBODYCHECKRECORD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateAclCheckDetailStatusResponseBodyCheckRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAclCheckDetailStatusResponseBodyCheckRecord& obj) { 
      DARABONBA_PTR_TO_JSON(Acls, acls_);
      DARABONBA_PTR_TO_JSON(CheckName, checkName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PolicyTotalCount, policyTotalCount_);
      DARABONBA_PTR_TO_JSON(RecordAssessmentDetail, recordAssessmentDetail_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAclCheckDetailStatusResponseBodyCheckRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(Acls, acls_);
      DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PolicyTotalCount, policyTotalCount_);
      DARABONBA_PTR_FROM_JSON(RecordAssessmentDetail, recordAssessmentDetail_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateAclCheckDetailStatusResponseBodyCheckRecord() = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecord(const UpdateAclCheckDetailStatusResponseBodyCheckRecord &) = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecord(UpdateAclCheckDetailStatusResponseBodyCheckRecord &&) = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAclCheckDetailStatusResponseBodyCheckRecord() = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecord& operator=(const UpdateAclCheckDetailStatusResponseBodyCheckRecord &) = default ;
    UpdateAclCheckDetailStatusResponseBodyCheckRecord& operator=(UpdateAclCheckDetailStatusResponseBodyCheckRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acls_ == nullptr
        && return this->checkName_ == nullptr && return this->description_ == nullptr && return this->lastCheckTime_ == nullptr && return this->level_ == nullptr && return this->policyTotalCount_ == nullptr
        && return this->recordAssessmentDetail_ == nullptr && return this->taskId_ == nullptr; };
    // acls Field Functions 
    bool hasAcls() const { return this->acls_ != nullptr;};
    void deleteAcls() { this->acls_ = nullptr;};
    inline const vector<Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls> & acls() const { DARABONBA_PTR_GET_CONST(acls_, vector<Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls>) };
    inline vector<Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls> acls() { DARABONBA_PTR_GET(acls_, vector<Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls>) };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setAcls(const vector<Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls> & acls) { DARABONBA_PTR_SET_VALUE(acls_, acls) };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setAcls(vector<Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls> && acls) { DARABONBA_PTR_SET_RVALUE(acls_, acls) };


    // checkName Field Functions 
    bool hasCheckName() const { return this->checkName_ != nullptr;};
    void deleteCheckName() { this->checkName_ = nullptr;};
    inline string checkName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastCheckTime Field Functions 
    bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
    void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
    inline string lastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, "") };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setLastCheckTime(string lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // policyTotalCount Field Functions 
    bool hasPolicyTotalCount() const { return this->policyTotalCount_ != nullptr;};
    void deletePolicyTotalCount() { this->policyTotalCount_ = nullptr;};
    inline int64_t policyTotalCount() const { DARABONBA_PTR_GET_DEFAULT(policyTotalCount_, 0L) };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setPolicyTotalCount(int64_t policyTotalCount) { DARABONBA_PTR_SET_VALUE(policyTotalCount_, policyTotalCount) };


    // recordAssessmentDetail Field Functions 
    bool hasRecordAssessmentDetail() const { return this->recordAssessmentDetail_ != nullptr;};
    void deleteRecordAssessmentDetail() { this->recordAssessmentDetail_ = nullptr;};
    inline string recordAssessmentDetail() const { DARABONBA_PTR_GET_DEFAULT(recordAssessmentDetail_, "") };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setRecordAssessmentDetail(string recordAssessmentDetail) { DARABONBA_PTR_SET_VALUE(recordAssessmentDetail_, recordAssessmentDetail) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateAclCheckDetailStatusResponseBodyCheckRecord& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<vector<Models::UpdateAclCheckDetailStatusResponseBodyCheckRecordAcls>> acls_ = nullptr;
    std::shared_ptr<string> checkName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> lastCheckTime_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<int64_t> policyTotalCount_ = nullptr;
    std::shared_ptr<string> recordAssessmentDetail_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
