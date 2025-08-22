// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEDESIGNATEEXECUTORSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEDESIGNATEEXECUTORSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class OperateDesignateExecutorsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateDesignateExecutorsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressList, addressList_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DesignateType, designateType_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Transferable, transferable_);
    };
    friend void from_json(const Darabonba::Json& j, OperateDesignateExecutorsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressList, addressList_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DesignateType, designateType_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Transferable, transferable_);
    };
    OperateDesignateExecutorsRequest() = default ;
    OperateDesignateExecutorsRequest(const OperateDesignateExecutorsRequest &) = default ;
    OperateDesignateExecutorsRequest(OperateDesignateExecutorsRequest &&) = default ;
    OperateDesignateExecutorsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateDesignateExecutorsRequest() = default ;
    OperateDesignateExecutorsRequest& operator=(const OperateDesignateExecutorsRequest &) = default ;
    OperateDesignateExecutorsRequest& operator=(OperateDesignateExecutorsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressList_ != nullptr
        && this->appName_ != nullptr && this->clusterId_ != nullptr && this->designateType_ != nullptr && this->jobId_ != nullptr && this->transferable_ != nullptr; };
    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline const vector<string> & addressList() const { DARABONBA_PTR_GET_CONST(addressList_, vector<string>) };
    inline vector<string> addressList() { DARABONBA_PTR_GET(addressList_, vector<string>) };
    inline OperateDesignateExecutorsRequest& setAddressList(const vector<string> & addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };
    inline OperateDesignateExecutorsRequest& setAddressList(vector<string> && addressList) { DARABONBA_PTR_SET_RVALUE(addressList_, addressList) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline OperateDesignateExecutorsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline OperateDesignateExecutorsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // designateType Field Functions 
    bool hasDesignateType() const { return this->designateType_ != nullptr;};
    void deleteDesignateType() { this->designateType_ = nullptr;};
    inline int32_t designateType() const { DARABONBA_PTR_GET_DEFAULT(designateType_, 0) };
    inline OperateDesignateExecutorsRequest& setDesignateType(int32_t designateType) { DARABONBA_PTR_SET_VALUE(designateType_, designateType) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline OperateDesignateExecutorsRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // transferable Field Functions 
    bool hasTransferable() const { return this->transferable_ != nullptr;};
    void deleteTransferable() { this->transferable_ = nullptr;};
    inline bool transferable() const { DARABONBA_PTR_GET_DEFAULT(transferable_, false) };
    inline OperateDesignateExecutorsRequest& setTransferable(bool transferable) { DARABONBA_PTR_SET_VALUE(transferable_, transferable) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> addressList_ = nullptr;
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
