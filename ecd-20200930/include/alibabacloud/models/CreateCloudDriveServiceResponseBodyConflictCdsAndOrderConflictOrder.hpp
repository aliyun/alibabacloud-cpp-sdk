// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODYCONFLICTCDSANDORDERCONFLICTORDER_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODYCONFLICTCDSANDORDERCONFLICTORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder() = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder(const CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder &) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder(CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder &&) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder() = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder& operator=(const CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder &) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder& operator=(CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cdsId_ != nullptr
        && this->orderId_ != nullptr && this->regionId_ != nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string cdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the enterprise drive. The enterprise drive cannot be used if the order is unpaid.
    std::shared_ptr<string> cdsId_ = nullptr;
    // The ID of the order. You can obtain an order ID on the **Orders** page in the Expenses and Costs console.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
