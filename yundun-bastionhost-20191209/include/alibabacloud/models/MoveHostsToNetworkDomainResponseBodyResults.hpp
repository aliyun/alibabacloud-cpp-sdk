// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEHOSTSTONETWORKDOMAINRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_MOVEHOSTSTONETWORKDOMAINRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class MoveHostsToNetworkDomainResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveHostsToNetworkDomainResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, MoveHostsToNetworkDomainResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    MoveHostsToNetworkDomainResponseBodyResults() = default ;
    MoveHostsToNetworkDomainResponseBodyResults(const MoveHostsToNetworkDomainResponseBodyResults &) = default ;
    MoveHostsToNetworkDomainResponseBodyResults(MoveHostsToNetworkDomainResponseBodyResults &&) = default ;
    MoveHostsToNetworkDomainResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveHostsToNetworkDomainResponseBodyResults() = default ;
    MoveHostsToNetworkDomainResponseBodyResults& operator=(const MoveHostsToNetworkDomainResponseBodyResults &) = default ;
    MoveHostsToNetworkDomainResponseBodyResults& operator=(MoveHostsToNetworkDomainResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->hostId_ != nullptr && this->message_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MoveHostsToNetworkDomainResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline MoveHostsToNetworkDomainResponseBodyResults& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MoveHostsToNetworkDomainResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The return code that indicates whether the host is added to the network domain.
    // 
    // > The code LICENSE_OUT_OF_LIMIT indicates that the network domain feature is not supported by the current Bastionhost edition.
    std::shared_ptr<string> code_ = nullptr;
    // The host ID.
    std::shared_ptr<string> hostId_ = nullptr;
    // The error message that is returned.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
