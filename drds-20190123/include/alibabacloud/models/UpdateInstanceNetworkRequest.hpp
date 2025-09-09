// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCENETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCENETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class UpdateInstanceNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClassicExpiredDays, classicExpiredDays_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RetainClassic, retainClassic_);
      DARABONBA_PTR_TO_JSON(SrcInstanceNetworkType, srcInstanceNetworkType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassicExpiredDays, classicExpiredDays_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RetainClassic, retainClassic_);
      DARABONBA_PTR_FROM_JSON(SrcInstanceNetworkType, srcInstanceNetworkType_);
    };
    UpdateInstanceNetworkRequest() = default ;
    UpdateInstanceNetworkRequest(const UpdateInstanceNetworkRequest &) = default ;
    UpdateInstanceNetworkRequest(UpdateInstanceNetworkRequest &&) = default ;
    UpdateInstanceNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceNetworkRequest() = default ;
    UpdateInstanceNetworkRequest& operator=(const UpdateInstanceNetworkRequest &) = default ;
    UpdateInstanceNetworkRequest& operator=(UpdateInstanceNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classicExpiredDays_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->retainClassic_ != nullptr && this->srcInstanceNetworkType_ != nullptr; };
    // classicExpiredDays Field Functions 
    bool hasClassicExpiredDays() const { return this->classicExpiredDays_ != nullptr;};
    void deleteClassicExpiredDays() { this->classicExpiredDays_ = nullptr;};
    inline int32_t classicExpiredDays() const { DARABONBA_PTR_GET_DEFAULT(classicExpiredDays_, 0) };
    inline UpdateInstanceNetworkRequest& setClassicExpiredDays(int32_t classicExpiredDays) { DARABONBA_PTR_SET_VALUE(classicExpiredDays_, classicExpiredDays) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline UpdateInstanceNetworkRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // retainClassic Field Functions 
    bool hasRetainClassic() const { return this->retainClassic_ != nullptr;};
    void deleteRetainClassic() { this->retainClassic_ = nullptr;};
    inline bool retainClassic() const { DARABONBA_PTR_GET_DEFAULT(retainClassic_, false) };
    inline UpdateInstanceNetworkRequest& setRetainClassic(bool retainClassic) { DARABONBA_PTR_SET_VALUE(retainClassic_, retainClassic) };


    // srcInstanceNetworkType Field Functions 
    bool hasSrcInstanceNetworkType() const { return this->srcInstanceNetworkType_ != nullptr;};
    void deleteSrcInstanceNetworkType() { this->srcInstanceNetworkType_ = nullptr;};
    inline string srcInstanceNetworkType() const { DARABONBA_PTR_GET_DEFAULT(srcInstanceNetworkType_, "") };
    inline UpdateInstanceNetworkRequest& setSrcInstanceNetworkType(string srcInstanceNetworkType) { DARABONBA_PTR_SET_VALUE(srcInstanceNetworkType_, srcInstanceNetworkType) };


  protected:
    // Specifies the retention period of the classic network endpoint. Unit: days.
    std::shared_ptr<int32_t> classicExpiredDays_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // Specifies whether to retain the classic network endpoint.
    std::shared_ptr<bool> retainClassic_ = nullptr;
    // The network type of the PolarDB-X 1.0 instance. Valid values:
    // 
    // *   vpc: Virtual Private Cloud (VPC)
    // *   classic: classic network
    // 
    // This parameter is required.
    std::shared_ptr<string> srcInstanceNetworkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
