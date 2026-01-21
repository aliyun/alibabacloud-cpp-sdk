// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTSACTIVEADDRESSTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTSACTIVEADDRESSTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostsActiveAddressTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostsActiveAddressTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostsActiveAddressTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    ModifyHostsActiveAddressTypeResponseBody() = default ;
    ModifyHostsActiveAddressTypeResponseBody(const ModifyHostsActiveAddressTypeResponseBody &) = default ;
    ModifyHostsActiveAddressTypeResponseBody(ModifyHostsActiveAddressTypeResponseBody &&) = default ;
    ModifyHostsActiveAddressTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostsActiveAddressTypeResponseBody() = default ;
    ModifyHostsActiveAddressTypeResponseBody& operator=(const ModifyHostsActiveAddressTypeResponseBody &) = default ;
    ModifyHostsActiveAddressTypeResponseBody& operator=(ModifyHostsActiveAddressTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->hostId_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Results& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The return code that indicates whether the call was successful. Valid values:
      // 
      // *   **OK**: The call was successful.
      // *   **UNEXPECTED**: An unknown error occurred.
      // *   **INVALID_ARGUMENT**: A request parameter is invalid.
      // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
      // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
      shared_ptr<string> code_ {};
      // The ID of the host.
      shared_ptr<string> hostId_ {};
      // This parameter is deprecated.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->results_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyHostsActiveAddressTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<ModifyHostsActiveAddressTypeResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<ModifyHostsActiveAddressTypeResponseBody::Results>) };
    inline vector<ModifyHostsActiveAddressTypeResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<ModifyHostsActiveAddressTypeResponseBody::Results>) };
    inline ModifyHostsActiveAddressTypeResponseBody& setResults(const vector<ModifyHostsActiveAddressTypeResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ModifyHostsActiveAddressTypeResponseBody& setResults(vector<ModifyHostsActiveAddressTypeResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The result of the call.
    shared_ptr<vector<ModifyHostsActiveAddressTypeResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
