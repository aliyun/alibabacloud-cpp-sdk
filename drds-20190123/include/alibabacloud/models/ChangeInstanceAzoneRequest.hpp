// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEINSTANCEAZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEINSTANCEAZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ChangeInstanceAzoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeInstanceAzoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeVSwitch, changeVSwitch_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(DrdsRegionId, drdsRegionId_);
      DARABONBA_PTR_TO_JSON(NewVSwitch, newVSwitch_);
      DARABONBA_PTR_TO_JSON(OriginAzoneId, originAzoneId_);
      DARABONBA_PTR_TO_JSON(TargetAzoneId, targetAzoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeInstanceAzoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeVSwitch, changeVSwitch_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DrdsRegionId, drdsRegionId_);
      DARABONBA_PTR_FROM_JSON(NewVSwitch, newVSwitch_);
      DARABONBA_PTR_FROM_JSON(OriginAzoneId, originAzoneId_);
      DARABONBA_PTR_FROM_JSON(TargetAzoneId, targetAzoneId_);
    };
    ChangeInstanceAzoneRequest() = default ;
    ChangeInstanceAzoneRequest(const ChangeInstanceAzoneRequest &) = default ;
    ChangeInstanceAzoneRequest(ChangeInstanceAzoneRequest &&) = default ;
    ChangeInstanceAzoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeInstanceAzoneRequest() = default ;
    ChangeInstanceAzoneRequest& operator=(const ChangeInstanceAzoneRequest &) = default ;
    ChangeInstanceAzoneRequest& operator=(ChangeInstanceAzoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeVSwitch_ != nullptr
        && this->drdsInstanceId_ != nullptr && this->drdsRegionId_ != nullptr && this->newVSwitch_ != nullptr && this->originAzoneId_ != nullptr && this->targetAzoneId_ != nullptr; };
    // changeVSwitch Field Functions 
    bool hasChangeVSwitch() const { return this->changeVSwitch_ != nullptr;};
    void deleteChangeVSwitch() { this->changeVSwitch_ = nullptr;};
    inline bool changeVSwitch() const { DARABONBA_PTR_GET_DEFAULT(changeVSwitch_, false) };
    inline ChangeInstanceAzoneRequest& setChangeVSwitch(bool changeVSwitch) { DARABONBA_PTR_SET_VALUE(changeVSwitch_, changeVSwitch) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ChangeInstanceAzoneRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // drdsRegionId Field Functions 
    bool hasDrdsRegionId() const { return this->drdsRegionId_ != nullptr;};
    void deleteDrdsRegionId() { this->drdsRegionId_ = nullptr;};
    inline string drdsRegionId() const { DARABONBA_PTR_GET_DEFAULT(drdsRegionId_, "") };
    inline ChangeInstanceAzoneRequest& setDrdsRegionId(string drdsRegionId) { DARABONBA_PTR_SET_VALUE(drdsRegionId_, drdsRegionId) };


    // newVSwitch Field Functions 
    bool hasNewVSwitch() const { return this->newVSwitch_ != nullptr;};
    void deleteNewVSwitch() { this->newVSwitch_ = nullptr;};
    inline string newVSwitch() const { DARABONBA_PTR_GET_DEFAULT(newVSwitch_, "") };
    inline ChangeInstanceAzoneRequest& setNewVSwitch(string newVSwitch) { DARABONBA_PTR_SET_VALUE(newVSwitch_, newVSwitch) };


    // originAzoneId Field Functions 
    bool hasOriginAzoneId() const { return this->originAzoneId_ != nullptr;};
    void deleteOriginAzoneId() { this->originAzoneId_ = nullptr;};
    inline string originAzoneId() const { DARABONBA_PTR_GET_DEFAULT(originAzoneId_, "") };
    inline ChangeInstanceAzoneRequest& setOriginAzoneId(string originAzoneId) { DARABONBA_PTR_SET_VALUE(originAzoneId_, originAzoneId) };


    // targetAzoneId Field Functions 
    bool hasTargetAzoneId() const { return this->targetAzoneId_ != nullptr;};
    void deleteTargetAzoneId() { this->targetAzoneId_ = nullptr;};
    inline string targetAzoneId() const { DARABONBA_PTR_GET_DEFAULT(targetAzoneId_, "") };
    inline ChangeInstanceAzoneRequest& setTargetAzoneId(string targetAzoneId) { DARABONBA_PTR_SET_VALUE(targetAzoneId_, targetAzoneId) };


  protected:
    std::shared_ptr<bool> changeVSwitch_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsRegionId_ = nullptr;
    std::shared_ptr<string> newVSwitch_ = nullptr;
    // The source zone of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> originAzoneId_ = nullptr;
    // The destination zone to which you want to modify
    // 
    // This parameter is required.
    std::shared_ptr<string> targetAzoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
