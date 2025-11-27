// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMPROMPT_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMPROMPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CustomPrompt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomPrompt& obj) { 
      DARABONBA_PTR_TO_JSON(RoleDefinition, roleDefinition_);
    };
    friend void from_json(const Darabonba::Json& j, CustomPrompt& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleDefinition, roleDefinition_);
    };
    CustomPrompt() = default ;
    CustomPrompt(const CustomPrompt &) = default ;
    CustomPrompt(CustomPrompt &&) = default ;
    CustomPrompt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomPrompt() = default ;
    CustomPrompt& operator=(const CustomPrompt &) = default ;
    CustomPrompt& operator=(CustomPrompt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleDefinition_ == nullptr; };
    // roleDefinition Field Functions 
    bool hasRoleDefinition() const { return this->roleDefinition_ != nullptr;};
    void deleteRoleDefinition() { this->roleDefinition_ = nullptr;};
    inline string roleDefinition() const { DARABONBA_PTR_GET_DEFAULT(roleDefinition_, "") };
    inline CustomPrompt& setRoleDefinition(string roleDefinition) { DARABONBA_PTR_SET_VALUE(roleDefinition_, roleDefinition) };


  protected:
    std::shared_ptr<string> roleDefinition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
