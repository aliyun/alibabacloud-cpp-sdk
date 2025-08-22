// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPRESPONSEBODYNETWORKPACKAGEORDERMODEL_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPRESPONSEBODYNETWORKPACKAGEORDERMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageOrderId, bandwidthPackageOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageOrderId, bandwidthPackageOrderId_);
    };
    CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel() = default ;
    CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel(const CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel &) = default ;
    CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel(CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel &&) = default ;
    CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel() = default ;
    CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel& operator=(const CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel &) = default ;
    CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel& operator=(CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackageId_ != nullptr
        && this->bandwidthPackageOrderId_ != nullptr; };
    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageOrderId Field Functions 
    bool hasBandwidthPackageOrderId() const { return this->bandwidthPackageOrderId_ != nullptr;};
    void deleteBandwidthPackageOrderId() { this->bandwidthPackageOrderId_ = nullptr;};
    inline string bandwidthPackageOrderId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageOrderId_, "") };
    inline CreateAndroidInstanceGroupResponseBodyNetworkPackageOrderModel& setBandwidthPackageOrderId(string bandwidthPackageOrderId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageOrderId_, bandwidthPackageOrderId) };


  protected:
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
