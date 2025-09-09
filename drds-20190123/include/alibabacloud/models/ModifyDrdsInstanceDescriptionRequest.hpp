// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDRDSINSTANCEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDRDSINSTANCEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ModifyDrdsInstanceDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDrdsInstanceDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDrdsInstanceDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
    };
    ModifyDrdsInstanceDescriptionRequest() = default ;
    ModifyDrdsInstanceDescriptionRequest(const ModifyDrdsInstanceDescriptionRequest &) = default ;
    ModifyDrdsInstanceDescriptionRequest(ModifyDrdsInstanceDescriptionRequest &&) = default ;
    ModifyDrdsInstanceDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDrdsInstanceDescriptionRequest() = default ;
    ModifyDrdsInstanceDescriptionRequest& operator=(const ModifyDrdsInstanceDescriptionRequest &) = default ;
    ModifyDrdsInstanceDescriptionRequest& operator=(ModifyDrdsInstanceDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->drdsInstanceId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyDrdsInstanceDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ModifyDrdsInstanceDescriptionRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


  protected:
    // The description of the DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the DRDS instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
