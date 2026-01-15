// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODULEBASICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODULEBASICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class UpdateModuleBasicInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModuleBasicInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_TO_JSON(CustomerModuleName, customerModuleName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModuleType, moduleType_);
      DARABONBA_PTR_TO_JSON(StorePath, storePath_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModuleBasicInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_FROM_JSON(CustomerModuleName, customerModuleName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModuleType, moduleType_);
      DARABONBA_PTR_FROM_JSON(StorePath, storePath_);
    };
    UpdateModuleBasicInfoRequest() = default ;
    UpdateModuleBasicInfoRequest(const UpdateModuleBasicInfoRequest &) = default ;
    UpdateModuleBasicInfoRequest(UpdateModuleBasicInfoRequest &&) = default ;
    UpdateModuleBasicInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModuleBasicInfoRequest() = default ;
    UpdateModuleBasicInfoRequest& operator=(const UpdateModuleBasicInfoRequest &) = default ;
    UpdateModuleBasicInfoRequest& operator=(UpdateModuleBasicInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr
        && this->customerModuleName_ == nullptr && this->description_ == nullptr && this->moduleType_ == nullptr && this->storePath_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline UpdateModuleBasicInfoRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


    // customerModuleName Field Functions 
    bool hasCustomerModuleName() const { return this->customerModuleName_ != nullptr;};
    void deleteCustomerModuleName() { this->customerModuleName_ = nullptr;};
    inline string getCustomerModuleName() const { DARABONBA_PTR_GET_DEFAULT(customerModuleName_, "") };
    inline UpdateModuleBasicInfoRequest& setCustomerModuleName(string customerModuleName) { DARABONBA_PTR_SET_VALUE(customerModuleName_, customerModuleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModuleBasicInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // moduleType Field Functions 
    bool hasModuleType() const { return this->moduleType_ != nullptr;};
    void deleteModuleType() { this->moduleType_ = nullptr;};
    inline string getModuleType() const { DARABONBA_PTR_GET_DEFAULT(moduleType_, "") };
    inline UpdateModuleBasicInfoRequest& setModuleType(string moduleType) { DARABONBA_PTR_SET_VALUE(moduleType_, moduleType) };


    // storePath Field Functions 
    bool hasStorePath() const { return this->storePath_ != nullptr;};
    void deleteStorePath() { this->storePath_ = nullptr;};
    inline string getStorePath() const { DARABONBA_PTR_GET_DEFAULT(storePath_, "") };
    inline UpdateModuleBasicInfoRequest& setStorePath(string storePath) { DARABONBA_PTR_SET_VALUE(storePath_, storePath) };


  protected:
    // Customer model ID
    shared_ptr<int32_t> customerModuleId_ {};
    // Model name.
    shared_ptr<string> customerModuleName_ {};
    // Description.
    shared_ptr<string> description_ {};
    // Module type.
    shared_ptr<string> moduleType_ {};
    // Test address.
    shared_ptr<string> storePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
