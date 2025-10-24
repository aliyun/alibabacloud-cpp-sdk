// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTMERGELISTMERGE_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTMERGELISTMERGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(MergeURL, mergeURL_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(MergeURL, mergeURL_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge(const SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge(SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->mergeURL_ == nullptr && return this->roleArn_ == nullptr && return this->start_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // mergeURL Field Functions 
    bool hasMergeURL() const { return this->mergeURL_ != nullptr;};
    void deleteMergeURL() { this->mergeURL_ = nullptr;};
    inline string mergeURL() const { DARABONBA_PTR_GET_DEFAULT(mergeURL_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge& setMergeURL(string mergeURL) { DARABONBA_PTR_SET_VALUE(mergeURL_, mergeURL) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputMergeListMerge& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The duration of the clip.
    // 
    // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
    // *   Examples: 01:59:59.999 and 32000.23.
    std::shared_ptr<string> duration_ = nullptr;
    // The OSS URL of the clip.
    // 
    // *   Example: `http://example-bucket-****.oss-cn-hangzhou.aliyuncs.com/example-object-****.flv`.
    // *   The OSS URL of the object must be URL-encoded by using the UTF-8 standard.
    std::shared_ptr<string> mergeURL_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the Resource Access Management (RAM) role used for delegated authorization.
    std::shared_ptr<string> roleArn_ = nullptr;
    // The start point in time of the clip.
    // 
    // *   Format: `hh:mm:ss[.SSS]` or `sssss[.SSS]`.
    // *   Examples: 01:59:59.999 and 32000.23.
    std::shared_ptr<string> start_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
