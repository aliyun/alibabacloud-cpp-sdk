// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRESOURCESTOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKRESOURCESTOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CheckResourceStockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckResourceStockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcpSpecId, acpSpecId_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckResourceStockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcpSpecId, acpSpecId_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(GpuAcceleration, gpuAcceleration_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CheckResourceStockRequest() = default ;
    CheckResourceStockRequest(const CheckResourceStockRequest &) = default ;
    CheckResourceStockRequest(CheckResourceStockRequest &&) = default ;
    CheckResourceStockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckResourceStockRequest() = default ;
    CheckResourceStockRequest& operator=(const CheckResourceStockRequest &) = default ;
    CheckResourceStockRequest& operator=(CheckResourceStockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acpSpecId_ != nullptr
        && this->amount_ != nullptr && this->bizRegionId_ != nullptr && this->gpuAcceleration_ != nullptr && this->zoneId_ != nullptr; };
    // acpSpecId Field Functions 
    bool hasAcpSpecId() const { return this->acpSpecId_ != nullptr;};
    void deleteAcpSpecId() { this->acpSpecId_ = nullptr;};
    inline string acpSpecId() const { DARABONBA_PTR_GET_DEFAULT(acpSpecId_, "") };
    inline CheckResourceStockRequest& setAcpSpecId(string acpSpecId) { DARABONBA_PTR_SET_VALUE(acpSpecId_, acpSpecId) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CheckResourceStockRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CheckResourceStockRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // gpuAcceleration Field Functions 
    bool hasGpuAcceleration() const { return this->gpuAcceleration_ != nullptr;};
    void deleteGpuAcceleration() { this->gpuAcceleration_ = nullptr;};
    inline bool gpuAcceleration() const { DARABONBA_PTR_GET_DEFAULT(gpuAcceleration_, false) };
    inline CheckResourceStockRequest& setGpuAcceleration(bool gpuAcceleration) { DARABONBA_PTR_SET_VALUE(gpuAcceleration_, gpuAcceleration) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CheckResourceStockRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specification ID.
    std::shared_ptr<string> acpSpecId_ = nullptr;
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    std::shared_ptr<bool> gpuAcceleration_ = nullptr;
    // The availability zone of the resource.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
