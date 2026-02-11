// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DUPLICATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DUPLICATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class DuplicateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DuplicateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DuplicateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
    };
    DuplicateModelRequest() = default ;
    DuplicateModelRequest(const DuplicateModelRequest &) = default ;
    DuplicateModelRequest(DuplicateModelRequest &&) = default ;
    DuplicateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DuplicateModelRequest() = default ;
    DuplicateModelRequest& operator=(const DuplicateModelRequest &) = default ;
    DuplicateModelRequest& operator=(DuplicateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline DuplicateModelRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


  protected:
    // Customer model ID
    shared_ptr<int32_t> customerModuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
