// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUESTREMOTECONNECTIONOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEATTRIBUTEREQUESTREMOTECONNECTIONOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceAttributeRequestRemoteConnectionOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAttributeRequestRemoteConnectionOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAttributeRequestRemoteConnectionOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyInstanceAttributeRequestRemoteConnectionOptions() = default ;
    ModifyInstanceAttributeRequestRemoteConnectionOptions(const ModifyInstanceAttributeRequestRemoteConnectionOptions &) = default ;
    ModifyInstanceAttributeRequestRemoteConnectionOptions(ModifyInstanceAttributeRequestRemoteConnectionOptions &&) = default ;
    ModifyInstanceAttributeRequestRemoteConnectionOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAttributeRequestRemoteConnectionOptions() = default ;
    ModifyInstanceAttributeRequestRemoteConnectionOptions& operator=(const ModifyInstanceAttributeRequestRemoteConnectionOptions &) = default ;
    ModifyInstanceAttributeRequestRemoteConnectionOptions& operator=(ModifyInstanceAttributeRequestRemoteConnectionOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && return this->type_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyInstanceAttributeRequestRemoteConnectionOptions& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyInstanceAttributeRequestRemoteConnectionOptions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> password_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
