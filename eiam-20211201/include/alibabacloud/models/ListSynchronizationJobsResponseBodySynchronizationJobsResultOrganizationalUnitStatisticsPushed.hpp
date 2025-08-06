// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTORGANIZATIONALUNITSTATISTICSPUSHED_HPP_
#define ALIBABACLOUD_MODELS_LISTSYNCHRONIZATIONJOBSRESPONSEBODYSYNCHRONIZATIONJOBSRESULTORGANIZATIONALUNITSTATISTICSPUSHED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed& obj) { 
      DARABONBA_PTR_TO_JSON(Failed, failed_);
      DARABONBA_PTR_TO_JSON(Skipped, skipped_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed& obj) { 
      DARABONBA_PTR_FROM_JSON(Failed, failed_);
      DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed(const ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed(ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed &&) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed() = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed& operator=(const ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed &) = default ;
    ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed& operator=(ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failed_ != nullptr
        && this->skipped_ != nullptr && this->success_ != nullptr && this->total_ != nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline int64_t failed() const { DARABONBA_PTR_GET_DEFAULT(failed_, 0L) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed& setFailed(int64_t failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };


    // skipped Field Functions 
    bool hasSkipped() const { return this->skipped_ != nullptr;};
    void deleteSkipped() { this->skipped_ = nullptr;};
    inline int64_t skipped() const { DARABONBA_PTR_GET_DEFAULT(skipped_, 0L) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed& setSkipped(int64_t skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline int64_t success() const { DARABONBA_PTR_GET_DEFAULT(success_, 0L) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed& setSuccess(int64_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListSynchronizationJobsResponseBodySynchronizationJobsResultOrganizationalUnitStatisticsPushed& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // 失败数目
    std::shared_ptr<int64_t> failed_ = nullptr;
    // 跳过数目
    std::shared_ptr<int64_t> skipped_ = nullptr;
    // 成功数目
    std::shared_ptr<int64_t> success_ = nullptr;
    // 总共数目
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
