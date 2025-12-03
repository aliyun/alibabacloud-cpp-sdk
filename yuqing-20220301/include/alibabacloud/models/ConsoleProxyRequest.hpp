// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSOLEPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONSOLEPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class ConsoleProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConsoleProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appCode, appCode_);
      DARABONBA_PTR_TO_JSON(interfaceName, interfaceName_);
      DARABONBA_PTR_TO_JSON(paramJson, paramJson_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(teamHashId, teamHashId_);
    };
    friend void from_json(const Darabonba::Json& j, ConsoleProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appCode, appCode_);
      DARABONBA_PTR_FROM_JSON(interfaceName, interfaceName_);
      DARABONBA_PTR_FROM_JSON(paramJson, paramJson_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(teamHashId, teamHashId_);
    };
    ConsoleProxyRequest() = default ;
    ConsoleProxyRequest(const ConsoleProxyRequest &) = default ;
    ConsoleProxyRequest(ConsoleProxyRequest &&) = default ;
    ConsoleProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConsoleProxyRequest() = default ;
    ConsoleProxyRequest& operator=(const ConsoleProxyRequest &) = default ;
    ConsoleProxyRequest& operator=(ConsoleProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->interfaceName_ == nullptr && return this->paramJson_ == nullptr && return this->requestId_ == nullptr && return this->teamHashId_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ConsoleProxyRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // interfaceName Field Functions 
    bool hasInterfaceName() const { return this->interfaceName_ != nullptr;};
    void deleteInterfaceName() { this->interfaceName_ = nullptr;};
    inline string interfaceName() const { DARABONBA_PTR_GET_DEFAULT(interfaceName_, "") };
    inline ConsoleProxyRequest& setInterfaceName(string interfaceName) { DARABONBA_PTR_SET_VALUE(interfaceName_, interfaceName) };


    // paramJson Field Functions 
    bool hasParamJson() const { return this->paramJson_ != nullptr;};
    void deleteParamJson() { this->paramJson_ = nullptr;};
    inline string paramJson() const { DARABONBA_PTR_GET_DEFAULT(paramJson_, "") };
    inline ConsoleProxyRequest& setParamJson(string paramJson) { DARABONBA_PTR_SET_VALUE(paramJson_, paramJson) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConsoleProxyRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // teamHashId Field Functions 
    bool hasTeamHashId() const { return this->teamHashId_ != nullptr;};
    void deleteTeamHashId() { this->teamHashId_ = nullptr;};
    inline string teamHashId() const { DARABONBA_PTR_GET_DEFAULT(teamHashId_, "") };
    inline ConsoleProxyRequest& setTeamHashId(string teamHashId) { DARABONBA_PTR_SET_VALUE(teamHashId_, teamHashId) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> interfaceName_ = nullptr;
    std::shared_ptr<string> paramJson_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> teamHashId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
