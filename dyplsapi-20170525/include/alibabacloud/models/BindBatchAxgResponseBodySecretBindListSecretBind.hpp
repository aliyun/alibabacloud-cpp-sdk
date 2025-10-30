// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDBATCHAXGRESPONSEBODYSECRETBINDLISTSECRETBIND_HPP_
#define ALIBABACLOUD_MODELS_BINDBATCHAXGRESPONSEBODYSECRETBINDLISTSECRETBIND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindBatchAxgResponseBodySecretBindListSecretBind : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindBatchAxgResponseBodySecretBindListSecretBind& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_TO_JSON(SubsId, subsId_);
    };
    friend void from_json(const Darabonba::Json& j, BindBatchAxgResponseBodySecretBindListSecretBind& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
      DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
      DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
    };
    BindBatchAxgResponseBodySecretBindListSecretBind() = default ;
    BindBatchAxgResponseBodySecretBindListSecretBind(const BindBatchAxgResponseBodySecretBindListSecretBind &) = default ;
    BindBatchAxgResponseBodySecretBindListSecretBind(BindBatchAxgResponseBodySecretBindListSecretBind &&) = default ;
    BindBatchAxgResponseBodySecretBindListSecretBind(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindBatchAxgResponseBodySecretBindListSecretBind() = default ;
    BindBatchAxgResponseBodySecretBindListSecretBind& operator=(const BindBatchAxgResponseBodySecretBindListSecretBind &) = default ;
    BindBatchAxgResponseBodySecretBindListSecretBind& operator=(BindBatchAxgResponseBodySecretBindListSecretBind &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->extension_ == nullptr && return this->groupId_ == nullptr && return this->message_ == nullptr && return this->phoneNoA_ == nullptr && return this->secretNo_ == nullptr
        && return this->subsId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindBatchAxgResponseBodySecretBindListSecretBind& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline BindBatchAxgResponseBodySecretBindListSecretBind& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BindBatchAxgResponseBodySecretBindListSecretBind& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindBatchAxgResponseBodySecretBindListSecretBind& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phoneNoA Field Functions 
    bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
    void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
    inline string phoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
    inline BindBatchAxgResponseBodySecretBindListSecretBind& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


    // secretNo Field Functions 
    bool hasSecretNo() const { return this->secretNo_ != nullptr;};
    void deleteSecretNo() { this->secretNo_ = nullptr;};
    inline string secretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
    inline BindBatchAxgResponseBodySecretBindListSecretBind& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


    // subsId Field Functions 
    bool hasSubsId() const { return this->subsId_ != nullptr;};
    void deleteSubsId() { this->subsId_ = nullptr;};
    inline string subsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, "") };
    inline BindBatchAxgResponseBodySecretBindListSecretBind& setSubsId(string subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> phoneNoA_ = nullptr;
    std::shared_ptr<string> secretNo_ = nullptr;
    std::shared_ptr<string> subsId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
