// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROBETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROBETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListProbeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProbeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProbeTaskId, probeTaskId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagId, sagId_);
      DARABONBA_PTR_TO_JSON(SagName, sagName_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProbeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProbeTaskId, probeTaskId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagId, sagId_);
      DARABONBA_PTR_FROM_JSON(SagName, sagName_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    ListProbeTaskRequest() = default ;
    ListProbeTaskRequest(const ListProbeTaskRequest &) = default ;
    ListProbeTaskRequest(ListProbeTaskRequest &&) = default ;
    ListProbeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProbeTaskRequest() = default ;
    ListProbeTaskRequest& operator=(const ListProbeTaskRequest &) = default ;
    ListProbeTaskRequest& operator=(ListProbeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->probeTaskId_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr && this->sagId_ == nullptr
        && this->sagName_ == nullptr && this->sn_ == nullptr && this->taskName_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProbeTaskRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProbeTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // probeTaskId Field Functions 
    bool hasProbeTaskId() const { return this->probeTaskId_ != nullptr;};
    void deleteProbeTaskId() { this->probeTaskId_ = nullptr;};
    inline string getProbeTaskId() const { DARABONBA_PTR_GET_DEFAULT(probeTaskId_, "") };
    inline ListProbeTaskRequest& setProbeTaskId(string probeTaskId) { DARABONBA_PTR_SET_VALUE(probeTaskId_, probeTaskId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListProbeTaskRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListProbeTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagId Field Functions 
    bool hasSagId() const { return this->sagId_ != nullptr;};
    void deleteSagId() { this->sagId_ = nullptr;};
    inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
    inline ListProbeTaskRequest& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


    // sagName Field Functions 
    bool hasSagName() const { return this->sagName_ != nullptr;};
    void deleteSagName() { this->sagName_ = nullptr;};
    inline string getSagName() const { DARABONBA_PTR_GET_DEFAULT(sagName_, "") };
    inline ListProbeTaskRequest& setSagName(string sagName) { DARABONBA_PTR_SET_VALUE(sagName_, sagName) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ListProbeTaskRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListProbeTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Maximum value: **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the probe task.
    shared_ptr<string> probeTaskId_ {};
    // The protocol of the probe task. Valid values:
    // 
    // *   **ICMP**
    // *   **TCP**
    // *   **HTTP**
    // 
    // >  Tasks that probe private networks support only ICMP and TCP.
    shared_ptr<string> protocol_ {};
    // The region ID of the SAG instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the SAG instance.
    shared_ptr<string> sagId_ {};
    // The name of the SAG instance.
    shared_ptr<string> sagName_ {};
    // The serial number of the SAG device.
    shared_ptr<string> sn_ {};
    // The name of the probe task.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
