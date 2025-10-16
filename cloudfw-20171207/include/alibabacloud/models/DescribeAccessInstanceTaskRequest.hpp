// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSINSTANCETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAccessInstanceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessInstanceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_TO_JSON(AccessInstanceType, accessInstanceType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessInstanceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessInstanceId, accessInstanceId_);
      DARABONBA_PTR_FROM_JSON(AccessInstanceType, accessInstanceType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    DescribeAccessInstanceTaskRequest() = default ;
    DescribeAccessInstanceTaskRequest(const DescribeAccessInstanceTaskRequest &) = default ;
    DescribeAccessInstanceTaskRequest(DescribeAccessInstanceTaskRequest &&) = default ;
    DescribeAccessInstanceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessInstanceTaskRequest() = default ;
    DescribeAccessInstanceTaskRequest& operator=(const DescribeAccessInstanceTaskRequest &) = default ;
    DescribeAccessInstanceTaskRequest& operator=(DescribeAccessInstanceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessInstanceId_ == nullptr
        && return this->accessInstanceType_ == nullptr && return this->lang_ == nullptr && return this->regionNo_ == nullptr && return this->taskId_ == nullptr; };
    // accessInstanceId Field Functions 
    bool hasAccessInstanceId() const { return this->accessInstanceId_ != nullptr;};
    void deleteAccessInstanceId() { this->accessInstanceId_ = nullptr;};
    inline string accessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceId_, "") };
    inline DescribeAccessInstanceTaskRequest& setAccessInstanceId(string accessInstanceId) { DARABONBA_PTR_SET_VALUE(accessInstanceId_, accessInstanceId) };


    // accessInstanceType Field Functions 
    bool hasAccessInstanceType() const { return this->accessInstanceType_ != nullptr;};
    void deleteAccessInstanceType() { this->accessInstanceType_ = nullptr;};
    inline string accessInstanceType() const { DARABONBA_PTR_GET_DEFAULT(accessInstanceType_, "") };
    inline DescribeAccessInstanceTaskRequest& setAccessInstanceType(string accessInstanceType) { DARABONBA_PTR_SET_VALUE(accessInstanceType_, accessInstanceType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAccessInstanceTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeAccessInstanceTaskRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeAccessInstanceTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> accessInstanceId_ = nullptr;
    std::shared_ptr<string> accessInstanceType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
