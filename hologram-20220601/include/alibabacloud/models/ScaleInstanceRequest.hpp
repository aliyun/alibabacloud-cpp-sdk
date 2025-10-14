// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ScaleInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(coldStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(enableServerlessComputing, enableServerlessComputing_);
      DARABONBA_PTR_TO_JSON(gatewayCount, gatewayCount_);
      DARABONBA_PTR_TO_JSON(scaleType, scaleType_);
      DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(coldStorageSize, coldStorageSize_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(enableServerlessComputing, enableServerlessComputing_);
      DARABONBA_PTR_FROM_JSON(gatewayCount, gatewayCount_);
      DARABONBA_PTR_FROM_JSON(scaleType, scaleType_);
      DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
    };
    ScaleInstanceRequest() = default ;
    ScaleInstanceRequest(const ScaleInstanceRequest &) = default ;
    ScaleInstanceRequest(ScaleInstanceRequest &&) = default ;
    ScaleInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleInstanceRequest() = default ;
    ScaleInstanceRequest& operator=(const ScaleInstanceRequest &) = default ;
    ScaleInstanceRequest& operator=(ScaleInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coldStorageSize_ == nullptr
        && return this->cpu_ == nullptr && return this->enableServerlessComputing_ == nullptr && return this->gatewayCount_ == nullptr && return this->scaleType_ == nullptr && return this->storageSize_ == nullptr; };
    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline int64_t coldStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, 0L) };
    inline ScaleInstanceRequest& setColdStorageSize(int64_t coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline ScaleInstanceRequest& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // enableServerlessComputing Field Functions 
    bool hasEnableServerlessComputing() const { return this->enableServerlessComputing_ != nullptr;};
    void deleteEnableServerlessComputing() { this->enableServerlessComputing_ = nullptr;};
    inline bool enableServerlessComputing() const { DARABONBA_PTR_GET_DEFAULT(enableServerlessComputing_, false) };
    inline ScaleInstanceRequest& setEnableServerlessComputing(bool enableServerlessComputing) { DARABONBA_PTR_SET_VALUE(enableServerlessComputing_, enableServerlessComputing) };


    // gatewayCount Field Functions 
    bool hasGatewayCount() const { return this->gatewayCount_ != nullptr;};
    void deleteGatewayCount() { this->gatewayCount_ = nullptr;};
    inline int64_t gatewayCount() const { DARABONBA_PTR_GET_DEFAULT(gatewayCount_, 0L) };
    inline ScaleInstanceRequest& setGatewayCount(int64_t gatewayCount) { DARABONBA_PTR_SET_VALUE(gatewayCount_, gatewayCount) };


    // scaleType Field Functions 
    bool hasScaleType() const { return this->scaleType_ != nullptr;};
    void deleteScaleType() { this->scaleType_ = nullptr;};
    inline string scaleType() const { DARABONBA_PTR_GET_DEFAULT(scaleType_, "") };
    inline ScaleInstanceRequest& setScaleType(string scaleType) { DARABONBA_PTR_SET_VALUE(scaleType_, scaleType) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline ScaleInstanceRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


  protected:
    // The infrequent access (IA) storage space of the instance. Unit: GB.
    // 
    // > Ignore this parameter for pay-as-you-go instances.
    std::shared_ptr<int64_t> coldStorageSize_ = nullptr;
    // The specifications of the instance. Valid values:
    // 
    // *   8-core 32GB (number of compute nodes: 1)
    // *   16-core 64GB (number of compute nodes: 1)
    // *   32-core 128GB (number of compute nodes: 2)
    // *   64-core 256GB (number of compute nodes: 4)
    // *   96-core 384GB (number of compute nodes: 6)
    // *   128-core 512GB (number of compute nodes: 8)
    // *   Others
    // 
    // > 
    // 
    // *   Set this parameter to the number of cores.
    // 
    // *   If you want to set this parameter to specifications with more than 1,024 compute units (CUs), you must submit a ticket.
    // 
    // *   This parameter is invalid for Hologres Shared Cluster instances.
    // 
    // *   The specifications of 8-core 32GB (number of compute nodes: 1) are for trial use only and cannot be used for production.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    // 是否开启ServerlessComputing
    std::shared_ptr<bool> enableServerlessComputing_ = nullptr;
    // The number of gateways. Valid values: 2 to 50.
    // 
    // > This parameter is required only for virtual warehouse instances.
    std::shared_ptr<int64_t> gatewayCount_ = nullptr;
    // The specification change type. Valid values:
    // 
    // *   UPGRADE
    // *   DOWNGRADE
    // 
    // > 
    // 
    // *   If you set this parameter to UPGRADE, the new specifications must be higher than the original specifications. You must configure at least one of the cpu, storageSize, and coldStorageSize parameters. If you leave a parameter empty, the related configuration remains unchanged.
    // 
    // *   If you set this parameter to DOWNGRADE, the new specifications must be lower than the original specifications. You must configure at least one of the cpu, storageSize, and coldStorageSize parameters. If you leave a parameter empty, the related configuration remains unchanged.
    // 
    // This parameter is required.
    std::shared_ptr<string> scaleType_ = nullptr;
    // The standard storage space of the instance. Unit: GB.
    // 
    // > Ignore this parameter for pay-as-you-go instances.
    std::shared_ptr<int64_t> storageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
