// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMERMODULEBASICINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMERMODULEBASICINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class CreateCustomerModuleBasicInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomerModuleBasicInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleName, customerModuleName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ModuleType, moduleType_);
      DARABONBA_PTR_TO_JSON(StorePath, storePath_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomerModuleBasicInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleName, customerModuleName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ModuleType, moduleType_);
      DARABONBA_PTR_FROM_JSON(StorePath, storePath_);
    };
    CreateCustomerModuleBasicInfoRequest() = default ;
    CreateCustomerModuleBasicInfoRequest(const CreateCustomerModuleBasicInfoRequest &) = default ;
    CreateCustomerModuleBasicInfoRequest(CreateCustomerModuleBasicInfoRequest &&) = default ;
    CreateCustomerModuleBasicInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomerModuleBasicInfoRequest() = default ;
    CreateCustomerModuleBasicInfoRequest& operator=(const CreateCustomerModuleBasicInfoRequest &) = default ;
    CreateCustomerModuleBasicInfoRequest& operator=(CreateCustomerModuleBasicInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleName_ == nullptr
        && this->description_ == nullptr && this->moduleType_ == nullptr && this->storePath_ == nullptr; };
    // customerModuleName Field Functions 
    bool hasCustomerModuleName() const { return this->customerModuleName_ != nullptr;};
    void deleteCustomerModuleName() { this->customerModuleName_ = nullptr;};
    inline string getCustomerModuleName() const { DARABONBA_PTR_GET_DEFAULT(customerModuleName_, "") };
    inline CreateCustomerModuleBasicInfoRequest& setCustomerModuleName(string customerModuleName) { DARABONBA_PTR_SET_VALUE(customerModuleName_, customerModuleName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCustomerModuleBasicInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // moduleType Field Functions 
    bool hasModuleType() const { return this->moduleType_ != nullptr;};
    void deleteModuleType() { this->moduleType_ = nullptr;};
    inline string getModuleType() const { DARABONBA_PTR_GET_DEFAULT(moduleType_, "") };
    inline CreateCustomerModuleBasicInfoRequest& setModuleType(string moduleType) { DARABONBA_PTR_SET_VALUE(moduleType_, moduleType) };


    // storePath Field Functions 
    bool hasStorePath() const { return this->storePath_ != nullptr;};
    void deleteStorePath() { this->storePath_ = nullptr;};
    inline string getStorePath() const { DARABONBA_PTR_GET_DEFAULT(storePath_, "") };
    inline CreateCustomerModuleBasicInfoRequest& setStorePath(string storePath) { DARABONBA_PTR_SET_VALUE(storePath_, storePath) };


  protected:
    // The display identifier of the model for customers.
    shared_ptr<string> customerModuleName_ {};
    // Model description.
    shared_ptr<string> description_ {};
    // Model deployment type.
    shared_ptr<string> moduleType_ {};
    // Model storage path.
    shared_ptr<string> storePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
