// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FAILUREPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_FAILUREPERMISSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Permission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class FailurePermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FailurePermission& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(permission, permission_);
    };
    friend void from_json(const Darabonba::Json& j, FailurePermission& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(permission, permission_);
    };
    FailurePermission() = default ;
    FailurePermission(const FailurePermission &) = default ;
    FailurePermission(FailurePermission &&) = default ;
    FailurePermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FailurePermission() = default ;
    FailurePermission& operator=(const FailurePermission &) = default ;
    FailurePermission& operator=(FailurePermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->permission_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline FailurePermission& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline FailurePermission& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline const Permission & permission() const { DARABONBA_PTR_GET_CONST(permission_, Permission) };
    inline Permission permission() { DARABONBA_PTR_GET(permission_, Permission) };
    inline FailurePermission& setPermission(const Permission & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
    inline FailurePermission& setPermission(Permission && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<Permission> permission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
