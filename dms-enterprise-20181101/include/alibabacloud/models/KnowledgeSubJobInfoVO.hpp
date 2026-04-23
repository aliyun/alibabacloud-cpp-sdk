// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGESUBJOBINFOVO_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGESUBJOBINFOVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class KnowledgeSubJobInfoVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeSubJobInfoVO& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubJobId, subJobId_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeSubJobInfoVO& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubJobId, subJobId_);
    };
    KnowledgeSubJobInfoVO() = default ;
    KnowledgeSubJobInfoVO(const KnowledgeSubJobInfoVO &) = default ;
    KnowledgeSubJobInfoVO(KnowledgeSubJobInfoVO &&) = default ;
    KnowledgeSubJobInfoVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeSubJobInfoVO() = default ;
    KnowledgeSubJobInfoVO& operator=(const KnowledgeSubJobInfoVO &) = default ;
    KnowledgeSubJobInfoVO& operator=(KnowledgeSubJobInfoVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errMessage_ == nullptr
        && this->jobType_ == nullptr && this->name_ == nullptr && this->progress_ == nullptr && this->status_ == nullptr && this->subJobId_ == nullptr; };
    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline KnowledgeSubJobInfoVO& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline KnowledgeSubJobInfoVO& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline KnowledgeSubJobInfoVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline KnowledgeSubJobInfoVO& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline KnowledgeSubJobInfoVO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subJobId Field Functions 
    bool hasSubJobId() const { return this->subJobId_ != nullptr;};
    void deleteSubJobId() { this->subJobId_ = nullptr;};
    inline int32_t getSubJobId() const { DARABONBA_PTR_GET_DEFAULT(subJobId_, 0) };
    inline KnowledgeSubJobInfoVO& setSubJobId(int32_t subJobId) { DARABONBA_PTR_SET_VALUE(subJobId_, subJobId) };


  protected:
    shared_ptr<string> errMessage_ {};
    shared_ptr<string> jobType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> progress_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int32_t> subJobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
