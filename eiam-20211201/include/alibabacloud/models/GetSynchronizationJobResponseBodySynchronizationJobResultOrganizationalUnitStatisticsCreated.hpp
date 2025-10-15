// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTORGANIZATIONALUNITSTATISTICSCREATED_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCHRONIZATIONJOBRESPONSEBODYSYNCHRONIZATIONJOBRESULTORGANIZATIONALUNITSTATISTICSCREATED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Skipped, skipped_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated(const GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated(GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated &&) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated() = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated& operator=(const GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated &) = default ;
    GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated& operator=(GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failed_ == nullptr
        && return this->skipped_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int64_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // skipped Field Functions 
    bool hasSkipped() const { return this->skipped_ != nullptr;};
    void deleteSkipped() { this->skipped_ = nullptr;};
    inline int64_t skipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline int64_t success() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetSynchronizationJobResponseBodySynchronizationJobResultOrganizationalUnitStatisticsCreated& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The number of failed items.
    std::shared_ptr<int64_t> failed_ = nullptr;
    // The number of skipped items.
    std::shared_ptr<int64_t> skipped_ = nullptr;
    // The number of successful items.
    std::shared_ptr<int64_t> success_ = nullptr;
    // The total number of items.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
