// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEDESIGNATEEXECUTORSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEDESIGNATEEXECUTORSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateDesignateExecutorsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateDesignateExecutorsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressList, addressListShrink_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DesignateType, designateType_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Transferable, transferable_);
    };
    friend void from_json(const Darabonba::Json& j, OperateDesignateExecutorsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressList, addressListShrink_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DesignateType, designateType_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Transferable, transferable_);
    };
    OperateDesignateExecutorsShrinkRequest() = default ;
    OperateDesignateExecutorsShrinkRequest(const OperateDesignateExecutorsShrinkRequest &) = default ;
    OperateDesignateExecutorsShrinkRequest(OperateDesignateExecutorsShrinkRequest &&) = default ;
    OperateDesignateExecutorsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateDesignateExecutorsShrinkRequest() = default ;
    OperateDesignateExecutorsShrinkRequest& operator=(const OperateDesignateExecutorsShrinkRequest &) = default ;
    OperateDesignateExecutorsShrinkRequest& operator=(OperateDesignateExecutorsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressListShrink_ != nullptr
        && this->appName_ != nullptr && this->clusterId_ != nullptr && this->designateType_ != nullptr && this->jobId_ != nullptr && this->transferable_ != nullptr; };
    // addressListShrink Field Functions 
    bool hasAddressListShrink() const { return this->addressListShrink_ != nullptr;};
    void deleteAddressListShrink() { this->addressListShrink_ = nullptr;};
    inline string addressListShrink() const { DARABONBA_PTR_GET_DEFAULT(addressListShrink_, "") };
    inline OperateDesignateExecutorsShrinkRequest& setAddressListShrink(string addressListShrink) { DARABONBA_PTR_SET_VALUE(addressListShrink_, addressListShrink) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateDesignateExecutorsShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateDesignateExecutorsShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // designateType Field Functions 
    bool hasDesignateType() const { return this->designateType_ != nullptr;};
    void deleteDesignateType() { this->designateType_ = nullptr;};
    inline int32_t designateType() const { DARABONBA_PTR_GET_DEFAULT(designateType_, 0) };
    inline OperateDesignateExecutorsShrinkRequest& setDesignateType(int32_t designateType) { DARABONBA_PTR_SET_VALUE(designateType_, designateType) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline OperateDesignateExecutorsShrinkRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // transferable Field Functions 
    bool hasTransferable() const { return this->transferable_ != nullptr;};
    void deleteTransferable() { this->transferable_ = nullptr;};
    inline bool transferable() const { DARABONBA_PTR_GET_DEFAULT(transferable_, false) };
    inline OperateDesignateExecutorsShrinkRequest& setTransferable(bool transferable) { DARABONBA_PTR_SET_VALUE(transferable_, transferable) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> addressListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> designateType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    std::shared_ptr<bool> transferable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
