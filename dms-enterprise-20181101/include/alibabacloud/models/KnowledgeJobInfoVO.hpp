// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEJOBINFOVO_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEJOBINFOVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class KnowledgeJobInfoVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeJobInfoVO& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(KnowledgeCnt, knowledgeCnt_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ShowJobId, showJobId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Supplement, supplement_);
      DARABONBA_PTR_TO_JSON(TableCnt, tableCnt_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeJobInfoVO& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeCnt, knowledgeCnt_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ShowJobId, showJobId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Supplement, supplement_);
      DARABONBA_PTR_FROM_JSON(TableCnt, tableCnt_);
    };
    KnowledgeJobInfoVO() = default ;
    KnowledgeJobInfoVO(const KnowledgeJobInfoVO &) = default ;
    KnowledgeJobInfoVO(KnowledgeJobInfoVO &&) = default ;
    KnowledgeJobInfoVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeJobInfoVO() = default ;
    KnowledgeJobInfoVO& operator=(const KnowledgeJobInfoVO &) = default ;
    KnowledgeJobInfoVO& operator=(KnowledgeJobInfoVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->jobId_ == nullptr && this->knowledgeCnt_ == nullptr
        && this->progress_ == nullptr && this->showJobId_ == nullptr && this->status_ == nullptr && this->supplement_ == nullptr && this->tableCnt_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline KnowledgeJobInfoVO& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline KnowledgeJobInfoVO& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline KnowledgeJobInfoVO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline KnowledgeJobInfoVO& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int32_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0) };
    inline KnowledgeJobInfoVO& setJobId(int32_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // knowledgeCnt Field Functions 
    bool hasKnowledgeCnt() const { return this->knowledgeCnt_ != nullptr;};
    void deleteKnowledgeCnt() { this->knowledgeCnt_ = nullptr;};
    inline int32_t getKnowledgeCnt() const { DARABONBA_PTR_GET_DEFAULT(knowledgeCnt_, 0) };
    inline KnowledgeJobInfoVO& setKnowledgeCnt(int32_t knowledgeCnt) { DARABONBA_PTR_SET_VALUE(knowledgeCnt_, knowledgeCnt) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline KnowledgeJobInfoVO& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // showJobId Field Functions 
    bool hasShowJobId() const { return this->showJobId_ != nullptr;};
    void deleteShowJobId() { this->showJobId_ = nullptr;};
    inline string getShowJobId() const { DARABONBA_PTR_GET_DEFAULT(showJobId_, "") };
    inline KnowledgeJobInfoVO& setShowJobId(string showJobId) { DARABONBA_PTR_SET_VALUE(showJobId_, showJobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline KnowledgeJobInfoVO& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplement Field Functions 
    bool hasSupplement() const { return this->supplement_ != nullptr;};
    void deleteSupplement() { this->supplement_ = nullptr;};
    inline string getSupplement() const { DARABONBA_PTR_GET_DEFAULT(supplement_, "") };
    inline KnowledgeJobInfoVO& setSupplement(string supplement) { DARABONBA_PTR_SET_VALUE(supplement_, supplement) };


    // tableCnt Field Functions 
    bool hasTableCnt() const { return this->tableCnt_ != nullptr;};
    void deleteTableCnt() { this->tableCnt_ = nullptr;};
    inline int32_t getTableCnt() const { DARABONBA_PTR_GET_DEFAULT(tableCnt_, 0) };
    inline KnowledgeJobInfoVO& setTableCnt(int32_t tableCnt) { DARABONBA_PTR_SET_VALUE(tableCnt_, tableCnt) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int32_t> jobId_ {};
    shared_ptr<int32_t> knowledgeCnt_ {};
    shared_ptr<int32_t> progress_ {};
    shared_ptr<string> showJobId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> supplement_ {};
    shared_ptr<int32_t> tableCnt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
