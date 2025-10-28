// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJVMCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJVMCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateJvmConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJvmConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxHeapSize, maxHeapSize_);
      DARABONBA_PTR_TO_JSON(MaxPermSize, maxPermSize_);
      DARABONBA_PTR_TO_JSON(MinHeapSize, minHeapSize_);
      DARABONBA_PTR_TO_JSON(Options, options_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJvmConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxHeapSize, maxHeapSize_);
      DARABONBA_PTR_FROM_JSON(MaxPermSize, maxPermSize_);
      DARABONBA_PTR_FROM_JSON(MinHeapSize, minHeapSize_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
    };
    UpdateJvmConfigurationRequest() = default ;
    UpdateJvmConfigurationRequest(const UpdateJvmConfigurationRequest &) = default ;
    UpdateJvmConfigurationRequest(UpdateJvmConfigurationRequest &&) = default ;
    UpdateJvmConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJvmConfigurationRequest() = default ;
    UpdateJvmConfigurationRequest& operator=(const UpdateJvmConfigurationRequest &) = default ;
    UpdateJvmConfigurationRequest& operator=(UpdateJvmConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->groupId_ == nullptr && return this->maxHeapSize_ == nullptr && return this->maxPermSize_ == nullptr && return this->minHeapSize_ == nullptr && return this->options_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateJvmConfigurationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateJvmConfigurationRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxHeapSize Field Functions 
    bool hasMaxHeapSize() const { return this->maxHeapSize_ != nullptr;};
    void deleteMaxHeapSize() { this->maxHeapSize_ = nullptr;};
    inline int32_t maxHeapSize() const { DARABONBA_PTR_GET_DEFAULT(maxHeapSize_, 0) };
    inline UpdateJvmConfigurationRequest& setMaxHeapSize(int32_t maxHeapSize) { DARABONBA_PTR_SET_VALUE(maxHeapSize_, maxHeapSize) };


    // maxPermSize Field Functions 
    bool hasMaxPermSize() const { return this->maxPermSize_ != nullptr;};
    void deleteMaxPermSize() { this->maxPermSize_ = nullptr;};
    inline int32_t maxPermSize() const { DARABONBA_PTR_GET_DEFAULT(maxPermSize_, 0) };
    inline UpdateJvmConfigurationRequest& setMaxPermSize(int32_t maxPermSize) { DARABONBA_PTR_SET_VALUE(maxPermSize_, maxPermSize) };


    // minHeapSize Field Functions 
    bool hasMinHeapSize() const { return this->minHeapSize_ != nullptr;};
    void deleteMinHeapSize() { this->minHeapSize_ = nullptr;};
    inline int32_t minHeapSize() const { DARABONBA_PTR_GET_DEFAULT(minHeapSize_, 0) };
    inline UpdateJvmConfigurationRequest& setMinHeapSize(int32_t minHeapSize) { DARABONBA_PTR_SET_VALUE(minHeapSize_, minHeapSize) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline UpdateJvmConfigurationRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


  protected:
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the instance group where the application is deployed. You can call the ListDeployGroup operation to query the group ID. For more information, see [ListDeployGroup](https://help.aliyun.com/document_detail/62077.html).
    // 
    // > 
    // 
    // *   To configure the JVM parameters for an instance group, set this parameter to a specific ID.
    // 
    // *   To configure the JVM parameters for an application, leave this parameter empty.
    std::shared_ptr<string> groupId_ = nullptr;
    // The maximum size of the heap memory. Unit: MB.
    // 
    // > 
    // 
    // *   If this parameter is not specified in the group configuration, the value specified in the application configuration is used.
    // 
    // *   If this parameter is not specified in the application configuration, the default value is used.
    std::shared_ptr<int32_t> maxHeapSize_ = nullptr;
    // The size of the permanent generation heap memory. Unit: MB.
    // 
    // > 
    // 
    // *   If this parameter is not specified in the group configuration, the value specified in the application configuration is used.
    // 
    // *   If this parameter is not specified in the application configuration, the default value is used.
    std::shared_ptr<int32_t> maxPermSize_ = nullptr;
    // The initial size of the heap memory. Unit: MB.
    // 
    // > 
    // 
    // *   If this parameter is not specified in the group configuration, the value specified in the application configuration is used.
    // 
    // *   If this parameter is not specified in the application configuration, the default value is used.
    std::shared_ptr<int32_t> minHeapSize_ = nullptr;
    // The custom JVM parameters.
    // 
    // > 
    // 
    // *   If this parameter is not specified in the group configuration, the value specified in the application configuration is used.
    // 
    // *   If this parameter is not specified in the application configuration, the default value is used.
    std::shared_ptr<string> options_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
