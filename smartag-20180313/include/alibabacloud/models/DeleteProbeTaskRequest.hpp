// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROBETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROBETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DeleteProbeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProbeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProbeTaskId, probeTaskId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagId, sagId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProbeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProbeTaskId, probeTaskId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagId, sagId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    DeleteProbeTaskRequest() = default ;
    DeleteProbeTaskRequest(const DeleteProbeTaskRequest &) = default ;
    DeleteProbeTaskRequest(DeleteProbeTaskRequest &&) = default ;
    DeleteProbeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProbeTaskRequest() = default ;
    DeleteProbeTaskRequest& operator=(const DeleteProbeTaskRequest &) = default ;
    DeleteProbeTaskRequest& operator=(DeleteProbeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->probeTaskId_ == nullptr
        && this->regionId_ == nullptr && this->sagId_ == nullptr && this->sn_ == nullptr; };
    // probeTaskId Field Functions 
    bool hasProbeTaskId() const { return this->probeTaskId_ != nullptr;};
    void deleteProbeTaskId() { this->probeTaskId_ = nullptr;};
    inline string getProbeTaskId() const { DARABONBA_PTR_GET_DEFAULT(probeTaskId_, "") };
    inline DeleteProbeTaskRequest& setProbeTaskId(string probeTaskId) { DARABONBA_PTR_SET_VALUE(probeTaskId_, probeTaskId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteProbeTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagId Field Functions 
    bool hasSagId() const { return this->sagId_ != nullptr;};
    void deleteSagId() { this->sagId_ = nullptr;};
    inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
    inline DeleteProbeTaskRequest& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline DeleteProbeTaskRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The ID of the probe task.
    // 
    // This parameter is required.
    shared_ptr<string> probeTaskId_ {};
    // The region ID of the Smart Access Gateway (SAG) instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the SAG instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
