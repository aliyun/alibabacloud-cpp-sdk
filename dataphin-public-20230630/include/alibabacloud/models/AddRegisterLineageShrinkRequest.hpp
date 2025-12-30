// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDREGISTERLINEAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDREGISTERLINEAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddRegisterLineageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRegisterLineageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddRegisterLineageCommand, addRegisterLineageCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddRegisterLineageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddRegisterLineageCommand, addRegisterLineageCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddRegisterLineageShrinkRequest() = default ;
    AddRegisterLineageShrinkRequest(const AddRegisterLineageShrinkRequest &) = default ;
    AddRegisterLineageShrinkRequest(AddRegisterLineageShrinkRequest &&) = default ;
    AddRegisterLineageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRegisterLineageShrinkRequest() = default ;
    AddRegisterLineageShrinkRequest& operator=(const AddRegisterLineageShrinkRequest &) = default ;
    AddRegisterLineageShrinkRequest& operator=(AddRegisterLineageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addRegisterLineageCommandShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // addRegisterLineageCommandShrink Field Functions 
    bool hasAddRegisterLineageCommandShrink() const { return this->addRegisterLineageCommandShrink_ != nullptr;};
    void deleteAddRegisterLineageCommandShrink() { this->addRegisterLineageCommandShrink_ = nullptr;};
    inline string getAddRegisterLineageCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(addRegisterLineageCommandShrink_, "") };
    inline AddRegisterLineageShrinkRequest& setAddRegisterLineageCommandShrink(string addRegisterLineageCommandShrink) { DARABONBA_PTR_SET_VALUE(addRegisterLineageCommandShrink_, addRegisterLineageCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddRegisterLineageShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> addRegisterLineageCommandShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
