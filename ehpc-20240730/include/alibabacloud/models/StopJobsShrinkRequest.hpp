// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class StopJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StopJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIdsShrink_);
    };
    StopJobsShrinkRequest() = default ;
    StopJobsShrinkRequest(const StopJobsShrinkRequest &) = default ;
    StopJobsShrinkRequest(StopJobsShrinkRequest &&) = default ;
    StopJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopJobsShrinkRequest() = default ;
    StopJobsShrinkRequest& operator=(const StopJobsShrinkRequest &) = default ;
    StopJobsShrinkRequest& operator=(StopJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->jobIdsShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline StopJobsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobIdsShrink Field Functions 
    bool hasJobIdsShrink() const { return this->jobIdsShrink_ != nullptr;};
    void deleteJobIdsShrink() { this->jobIdsShrink_ = nullptr;};
    inline string jobIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(jobIdsShrink_, "") };
    inline StopJobsShrinkRequest& setJobIdsShrink(string jobIdsShrink) { DARABONBA_PTR_SET_VALUE(jobIdsShrink_, jobIdsShrink) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The IDs of the jobs that you want to stop.
    std::shared_ptr<string> jobIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
