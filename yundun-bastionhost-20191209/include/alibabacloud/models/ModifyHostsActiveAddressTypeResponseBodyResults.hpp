// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTSACTIVEADDRESSTYPERESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTSACTIVEADDRESSTYPERESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostsActiveAddressTypeResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostsActiveAddressTypeResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostsActiveAddressTypeResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ModifyHostsActiveAddressTypeResponseBodyResults() = default ;
    ModifyHostsActiveAddressTypeResponseBodyResults(const ModifyHostsActiveAddressTypeResponseBodyResults &) = default ;
    ModifyHostsActiveAddressTypeResponseBodyResults(ModifyHostsActiveAddressTypeResponseBodyResults &&) = default ;
    ModifyHostsActiveAddressTypeResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostsActiveAddressTypeResponseBodyResults() = default ;
    ModifyHostsActiveAddressTypeResponseBodyResults& operator=(const ModifyHostsActiveAddressTypeResponseBodyResults &) = default ;
    ModifyHostsActiveAddressTypeResponseBodyResults& operator=(ModifyHostsActiveAddressTypeResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->hostId_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyHostsActiveAddressTypeResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ModifyHostsActiveAddressTypeResponseBodyResults& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyHostsActiveAddressTypeResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The return code that indicates whether the call was successful. Valid values:
    // 
    // *   **OK**: The call was successful.
    // *   **UNEXPECTED**: An unknown error occurred.
    // *   **INVALID_ARGUMENT**: A request parameter is invalid.
    // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
    // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
    std::shared_ptr<string> code_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
