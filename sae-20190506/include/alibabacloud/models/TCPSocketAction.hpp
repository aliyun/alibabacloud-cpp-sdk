// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TCPSOCKETACTION_HPP_
#define ALIBABACLOUD_MODELS_TCPSOCKETACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class TCPSocketAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TCPSocketAction& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, TCPSocketAction& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    TCPSocketAction() = default ;
    TCPSocketAction(const TCPSocketAction &) = default ;
    TCPSocketAction(TCPSocketAction &&) = default ;
    TCPSocketAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TCPSocketAction() = default ;
    TCPSocketAction& operator=(const TCPSocketAction &) = default ;
    TCPSocketAction& operator=(TCPSocketAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->host_ == nullptr
        && this->port_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline TCPSocketAction& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline TCPSocketAction& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    shared_ptr<string> host_ {};
    shared_ptr<int32_t> port_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
