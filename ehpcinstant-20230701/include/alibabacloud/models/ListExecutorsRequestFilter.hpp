// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTORSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTORSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListExecutorsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutorsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TimeCreatedAfter, timeCreatedAfter_);
      DARABONBA_PTR_TO_JSON(TimeCreatedBefore, timeCreatedBefore_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutorsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(IpAddresses, ipAddresses_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TimeCreatedAfter, timeCreatedAfter_);
      DARABONBA_PTR_FROM_JSON(TimeCreatedBefore, timeCreatedBefore_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    ListExecutorsRequestFilter() = default ;
    ListExecutorsRequestFilter(const ListExecutorsRequestFilter &) = default ;
    ListExecutorsRequestFilter(ListExecutorsRequestFilter &&) = default ;
    ListExecutorsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutorsRequestFilter() = default ;
    ListExecutorsRequestFilter& operator=(const ListExecutorsRequestFilter &) = default ;
    ListExecutorsRequestFilter& operator=(ListExecutorsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executorIds_ != nullptr
        && this->image_ != nullptr && this->ipAddresses_ != nullptr && this->jobName_ != nullptr && this->status_ != nullptr && this->timeCreatedAfter_ != nullptr
        && this->timeCreatedBefore_ != nullptr && this->vswitchId_ != nullptr; };
    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & executorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> executorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline ListExecutorsRequestFilter& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline ListExecutorsRequestFilter& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ListExecutorsRequestFilter& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // ipAddresses Field Functions 
    bool hasIpAddresses() const { return this->ipAddresses_ != nullptr;};
    void deleteIpAddresses() { this->ipAddresses_ = nullptr;};
    inline const vector<string> & ipAddresses() const { DARABONBA_PTR_GET_CONST(ipAddresses_, vector<string>) };
    inline vector<string> ipAddresses() { DARABONBA_PTR_GET(ipAddresses_, vector<string>) };
    inline ListExecutorsRequestFilter& setIpAddresses(const vector<string> & ipAddresses) { DARABONBA_PTR_SET_VALUE(ipAddresses_, ipAddresses) };
    inline ListExecutorsRequestFilter& setIpAddresses(vector<string> && ipAddresses) { DARABONBA_PTR_SET_RVALUE(ipAddresses_, ipAddresses) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListExecutorsRequestFilter& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListExecutorsRequestFilter& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListExecutorsRequestFilter& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // timeCreatedAfter Field Functions 
    bool hasTimeCreatedAfter() const { return this->timeCreatedAfter_ != nullptr;};
    void deleteTimeCreatedAfter() { this->timeCreatedAfter_ = nullptr;};
    inline int32_t timeCreatedAfter() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedAfter_, 0) };
    inline ListExecutorsRequestFilter& setTimeCreatedAfter(int32_t timeCreatedAfter) { DARABONBA_PTR_SET_VALUE(timeCreatedAfter_, timeCreatedAfter) };


    // timeCreatedBefore Field Functions 
    bool hasTimeCreatedBefore() const { return this->timeCreatedBefore_ != nullptr;};
    void deleteTimeCreatedBefore() { this->timeCreatedBefore_ = nullptr;};
    inline int32_t timeCreatedBefore() const { DARABONBA_PTR_GET_DEFAULT(timeCreatedBefore_, 0) };
    inline ListExecutorsRequestFilter& setTimeCreatedBefore(int32_t timeCreatedBefore) { DARABONBA_PTR_SET_VALUE(timeCreatedBefore_, timeCreatedBefore) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ListExecutorsRequestFilter& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    std::shared_ptr<vector<string>> executorIds_ = nullptr;
    std::shared_ptr<string> image_ = nullptr;
    std::shared_ptr<vector<string>> ipAddresses_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<vector<string>> status_ = nullptr;
    std::shared_ptr<int32_t> timeCreatedAfter_ = nullptr;
    std::shared_ptr<int32_t> timeCreatedBefore_ = nullptr;
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
