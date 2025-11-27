// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKRDSCUSTOMINITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKRDSCUSTOMINITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CheckRdsCustomInitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRdsCustomInitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HasServiceLinkedRole, hasServiceLinkedRole_);
      DARABONBA_PTR_TO_JSON(RegisterUidSuccess, registerUidSuccess_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequireServiceLinkedRole, requireServiceLinkedRole_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRdsCustomInitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HasServiceLinkedRole, hasServiceLinkedRole_);
      DARABONBA_PTR_FROM_JSON(RegisterUidSuccess, registerUidSuccess_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequireServiceLinkedRole, requireServiceLinkedRole_);
    };
    CheckRdsCustomInitResponseBody() = default ;
    CheckRdsCustomInitResponseBody(const CheckRdsCustomInitResponseBody &) = default ;
    CheckRdsCustomInitResponseBody(CheckRdsCustomInitResponseBody &&) = default ;
    CheckRdsCustomInitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRdsCustomInitResponseBody() = default ;
    CheckRdsCustomInitResponseBody& operator=(const CheckRdsCustomInitResponseBody &) = default ;
    CheckRdsCustomInitResponseBody& operator=(CheckRdsCustomInitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasServiceLinkedRole_ == nullptr
        && return this->registerUidSuccess_ == nullptr && return this->requestId_ == nullptr && return this->requireServiceLinkedRole_ == nullptr; };
    // hasServiceLinkedRole Field Functions 
    bool hasHasServiceLinkedRole() const { return this->hasServiceLinkedRole_ != nullptr;};
    void deleteHasServiceLinkedRole() { this->hasServiceLinkedRole_ = nullptr;};
    inline string hasServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(hasServiceLinkedRole_, "") };
    inline CheckRdsCustomInitResponseBody& setHasServiceLinkedRole(string hasServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(hasServiceLinkedRole_, hasServiceLinkedRole) };


    // registerUidSuccess Field Functions 
    bool hasRegisterUidSuccess() const { return this->registerUidSuccess_ != nullptr;};
    void deleteRegisterUidSuccess() { this->registerUidSuccess_ = nullptr;};
    inline bool registerUidSuccess() const { DARABONBA_PTR_GET_DEFAULT(registerUidSuccess_, false) };
    inline CheckRdsCustomInitResponseBody& setRegisterUidSuccess(bool registerUidSuccess) { DARABONBA_PTR_SET_VALUE(registerUidSuccess_, registerUidSuccess) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckRdsCustomInitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requireServiceLinkedRole Field Functions 
    bool hasRequireServiceLinkedRole() const { return this->requireServiceLinkedRole_ != nullptr;};
    void deleteRequireServiceLinkedRole() { this->requireServiceLinkedRole_ = nullptr;};
    inline string requireServiceLinkedRole() const { DARABONBA_PTR_GET_DEFAULT(requireServiceLinkedRole_, "") };
    inline CheckRdsCustomInitResponseBody& setRequireServiceLinkedRole(string requireServiceLinkedRole) { DARABONBA_PTR_SET_VALUE(requireServiceLinkedRole_, requireServiceLinkedRole) };


  protected:
    std::shared_ptr<string> hasServiceLinkedRole_ = nullptr;
    std::shared_ptr<bool> registerUidSuccess_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> requireServiceLinkedRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
