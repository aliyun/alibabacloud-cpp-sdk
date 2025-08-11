// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATALEVELPERMISSIONSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATALEVELPERMISSIONSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateDataLevelPermissionStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataLevelPermissionStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(IsOpen, isOpen_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataLevelPermissionStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(IsOpen, isOpen_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    UpdateDataLevelPermissionStatusRequest() = default ;
    UpdateDataLevelPermissionStatusRequest(const UpdateDataLevelPermissionStatusRequest &) = default ;
    UpdateDataLevelPermissionStatusRequest(UpdateDataLevelPermissionStatusRequest &&) = default ;
    UpdateDataLevelPermissionStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataLevelPermissionStatusRequest() = default ;
    UpdateDataLevelPermissionStatusRequest& operator=(const UpdateDataLevelPermissionStatusRequest &) = default ;
    UpdateDataLevelPermissionStatusRequest& operator=(UpdateDataLevelPermissionStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cubeId_ != nullptr
        && this->isOpen_ != nullptr && this->ruleType_ != nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline UpdateDataLevelPermissionStatusRequest& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // isOpen Field Functions 
    bool hasIsOpen() const { return this->isOpen_ != nullptr;};
    void deleteIsOpen() { this->isOpen_ = nullptr;};
    inline int32_t isOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, 0) };
    inline UpdateDataLevelPermissionStatusRequest& setIsOpen(int32_t isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline UpdateDataLevelPermissionStatusRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The ID of the training dataset that you want to remove from the specified custom linguistic model.
    // 
    // This parameter is required.
    std::shared_ptr<string> cubeId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> isOpen_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
