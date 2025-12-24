// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDOWNLOADURLFORSYNCHRONIZATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDOWNLOADURLFORSYNCHRONIZATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateDownloadUrlForSynchronizationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDownloadUrlForSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDownloadUrlForSynchronizationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
    };
    GenerateDownloadUrlForSynchronizationJobRequest() = default ;
    GenerateDownloadUrlForSynchronizationJobRequest(const GenerateDownloadUrlForSynchronizationJobRequest &) = default ;
    GenerateDownloadUrlForSynchronizationJobRequest(GenerateDownloadUrlForSynchronizationJobRequest &&) = default ;
    GenerateDownloadUrlForSynchronizationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDownloadUrlForSynchronizationJobRequest() = default ;
    GenerateDownloadUrlForSynchronizationJobRequest& operator=(const GenerateDownloadUrlForSynchronizationJobRequest &) = default ;
    GenerateDownloadUrlForSynchronizationJobRequest& operator=(GenerateDownloadUrlForSynchronizationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->synchronizationJobId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateDownloadUrlForSynchronizationJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string synchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline GenerateDownloadUrlForSynchronizationJobRequest& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


  protected:
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 同步任务ID
    // 
    // This parameter is required.
    std::shared_ptr<string> synchronizationJobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
