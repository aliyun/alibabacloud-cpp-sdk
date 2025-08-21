// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIMCONNECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIMCONNECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class InitIMConnectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitIMConnectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(UserAccessToken, userAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, InitIMConnectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(UserAccessToken, userAccessToken_);
    };
    InitIMConnectRequest() = default ;
    InitIMConnectRequest(const InitIMConnectRequest &) = default ;
    InitIMConnectRequest(InitIMConnectRequest &&) = default ;
    InitIMConnectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitIMConnectRequest() = default ;
    InitIMConnectRequest& operator=(const InitIMConnectRequest &) = default ;
    InitIMConnectRequest& operator=(InitIMConnectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->from_ != nullptr && this->userAccessToken_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline InitIMConnectRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline InitIMConnectRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // userAccessToken Field Functions 
    bool hasUserAccessToken() const { return this->userAccessToken_ != nullptr;};
    void deleteUserAccessToken() { this->userAccessToken_ = nullptr;};
    inline string userAccessToken() const { DARABONBA_PTR_GET_DEFAULT(userAccessToken_, "") };
    inline InitIMConnectRequest& setUserAccessToken(string userAccessToken) { DARABONBA_PTR_SET_VALUE(userAccessToken_, userAccessToken) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> from_ = nullptr;
    std::shared_ptr<string> userAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
