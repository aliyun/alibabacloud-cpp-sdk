// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODYRESTOREJOBSRESTOREJOBOTSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODYRESTOREJOBSRESTOREJOBOTSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BatchChannelCount, batchChannelCount_);
      DARABONBA_PTR_TO_JSON(OverwriteExisting, overwriteExisting_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchChannelCount, batchChannelCount_);
      DARABONBA_PTR_FROM_JSON(OverwriteExisting, overwriteExisting_);
    };
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail() = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail(const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail &) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail(DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail &&) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail() = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail& operator=(const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail &) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail& operator=(DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchChannelCount_ != nullptr
        && this->overwriteExisting_ != nullptr; };
    // batchChannelCount Field Functions 
    bool hasBatchChannelCount() const { return this->batchChannelCount_ != nullptr;};
    void deleteBatchChannelCount() { this->batchChannelCount_ = nullptr;};
    inline int32_t batchChannelCount() const { DARABONBA_PTR_GET_DEFAULT(batchChannelCount_, 0) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail& setBatchChannelCount(int32_t batchChannelCount) { DARABONBA_PTR_SET_VALUE(batchChannelCount_, batchChannelCount) };


    // overwriteExisting Field Functions 
    bool hasOverwriteExisting() const { return this->overwriteExisting_ != nullptr;};
    void deleteOverwriteExisting() { this->overwriteExisting_ = nullptr;};
    inline bool overwriteExisting() const { DARABONBA_PTR_GET_DEFAULT(overwriteExisting_, false) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail& setOverwriteExisting(bool overwriteExisting) { DARABONBA_PTR_SET_VALUE(overwriteExisting_, overwriteExisting) };


  protected:
    // The number of channels processed by each Tablestore restore job.
    std::shared_ptr<int32_t> batchChannelCount_ = nullptr;
    // Indicates whether the existing Tablestore restore job was overwritten.
    std::shared_ptr<bool> overwriteExisting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
