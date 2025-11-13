// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLEGACYQUEUEEVENTLOGSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLEGACYQUEUEEVENTLOGSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListLegacyQueueEventLogsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLegacyQueueEventLogsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
      DARABONBA_PTR_TO_JSON(Ani, ani_);
      DARABONBA_PTR_TO_JSON(AnswerPhone, answerPhone_);
      DARABONBA_PTR_TO_JSON(AnswerTime, answerTime_);
      DARABONBA_PTR_TO_JSON(Cause, cause_);
      DARABONBA_PTR_TO_JSON(Dnis, dnis_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(QueueTime, queueTime_);
      DARABONBA_PTR_TO_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Vq, vq_);
    };
    friend void from_json(const Darabonba::Json& j, ListLegacyQueueEventLogsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
      DARABONBA_PTR_FROM_JSON(Ani, ani_);
      DARABONBA_PTR_FROM_JSON(AnswerPhone, answerPhone_);
      DARABONBA_PTR_FROM_JSON(AnswerTime, answerTime_);
      DARABONBA_PTR_FROM_JSON(Cause, cause_);
      DARABONBA_PTR_FROM_JSON(Dnis, dnis_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(QueueTime, queueTime_);
      DARABONBA_PTR_FROM_JSON(StatisticDate, statisticDate_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Vq, vq_);
    };
    ListLegacyQueueEventLogsResponseBodyDataList() = default ;
    ListLegacyQueueEventLogsResponseBodyDataList(const ListLegacyQueueEventLogsResponseBodyDataList &) = default ;
    ListLegacyQueueEventLogsResponseBodyDataList(ListLegacyQueueEventLogsResponseBodyDataList &&) = default ;
    ListLegacyQueueEventLogsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLegacyQueueEventLogsResponseBodyDataList() = default ;
    ListLegacyQueueEventLogsResponseBodyDataList& operator=(const ListLegacyQueueEventLogsResponseBodyDataList &) = default ;
    ListLegacyQueueEventLogsResponseBodyDataList& operator=(ListLegacyQueueEventLogsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acid_ == nullptr
        && return this->ani_ == nullptr && return this->answerPhone_ == nullptr && return this->answerTime_ == nullptr && return this->cause_ == nullptr && return this->dnis_ == nullptr
        && return this->id_ == nullptr && return this->queueTime_ == nullptr && return this->statisticDate_ == nullptr && return this->tenantId_ == nullptr && return this->vq_ == nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


    // ani Field Functions 
    bool hasAni() const { return this->ani_ != nullptr;};
    void deleteAni() { this->ani_ = nullptr;};
    inline string ani() const { DARABONBA_PTR_GET_DEFAULT(ani_, "") };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setAni(string ani) { DARABONBA_PTR_SET_VALUE(ani_, ani) };


    // answerPhone Field Functions 
    bool hasAnswerPhone() const { return this->answerPhone_ != nullptr;};
    void deleteAnswerPhone() { this->answerPhone_ = nullptr;};
    inline string answerPhone() const { DARABONBA_PTR_GET_DEFAULT(answerPhone_, "") };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setAnswerPhone(string answerPhone) { DARABONBA_PTR_SET_VALUE(answerPhone_, answerPhone) };


    // answerTime Field Functions 
    bool hasAnswerTime() const { return this->answerTime_ != nullptr;};
    void deleteAnswerTime() { this->answerTime_ = nullptr;};
    inline int64_t answerTime() const { DARABONBA_PTR_GET_DEFAULT(answerTime_, 0L) };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setAnswerTime(int64_t answerTime) { DARABONBA_PTR_SET_VALUE(answerTime_, answerTime) };


    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // dnis Field Functions 
    bool hasDnis() const { return this->dnis_ != nullptr;};
    void deleteDnis() { this->dnis_ = nullptr;};
    inline string dnis() const { DARABONBA_PTR_GET_DEFAULT(dnis_, "") };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setDnis(string dnis) { DARABONBA_PTR_SET_VALUE(dnis_, dnis) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // queueTime Field Functions 
    bool hasQueueTime() const { return this->queueTime_ != nullptr;};
    void deleteQueueTime() { this->queueTime_ = nullptr;};
    inline int64_t queueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


    // statisticDate Field Functions 
    bool hasStatisticDate() const { return this->statisticDate_ != nullptr;};
    void deleteStatisticDate() { this->statisticDate_ = nullptr;};
    inline string statisticDate() const { DARABONBA_PTR_GET_DEFAULT(statisticDate_, "") };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setStatisticDate(string statisticDate) { DARABONBA_PTR_SET_VALUE(statisticDate_, statisticDate) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vq Field Functions 
    bool hasVq() const { return this->vq_ != nullptr;};
    void deleteVq() { this->vq_ = nullptr;};
    inline string vq() const { DARABONBA_PTR_GET_DEFAULT(vq_, "") };
    inline ListLegacyQueueEventLogsResponseBodyDataList& setVq(string vq) { DARABONBA_PTR_SET_VALUE(vq_, vq) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
    std::shared_ptr<string> ani_ = nullptr;
    std::shared_ptr<string> answerPhone_ = nullptr;
    std::shared_ptr<int64_t> answerTime_ = nullptr;
    std::shared_ptr<string> cause_ = nullptr;
    std::shared_ptr<string> dnis_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> queueTime_ = nullptr;
    std::shared_ptr<string> statisticDate_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> vq_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
