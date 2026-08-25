// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTERMINALCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTERMINALCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class GetTerminalCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTerminalCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTerminalCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
    };
    GetTerminalCountRequest() = default ;
    GetTerminalCountRequest(const GetTerminalCountRequest &) = default ;
    GetTerminalCountRequest(GetTerminalCountRequest &&) = default ;
    GetTerminalCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTerminalCountRequest() = default ;
    GetTerminalCountRequest& operator=(const GetTerminalCountRequest &) = default ;
    GetTerminalCountRequest& operator=(GetTerminalCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientType_ == nullptr; };
    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline GetTerminalCountRequest& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


  protected:
    // The terminal type. Valid values:
    // 
    // - 1: hardware terminal.
    // - 2: software terminal.
    // - 3: secure browser plug-in.
    // - 4: GuestOS application.
    // - 5: DingTalk Wuying plug-in.
    // - 6: cloud application component.
    // - 7: Cloud Hub.
    // - 8: H5.
    // 
    // Default value: 1.
    shared_ptr<int32_t> clientType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
