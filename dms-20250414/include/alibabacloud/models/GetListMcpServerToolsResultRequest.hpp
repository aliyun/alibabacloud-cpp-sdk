// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTMCPSERVERTOOLSRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLISTMCPSERVERTOOLSRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetListMcpServerToolsResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListMcpServerToolsResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(McpServerUuid, mcpServerUuid_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetListMcpServerToolsResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(McpServerUuid, mcpServerUuid_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    GetListMcpServerToolsResultRequest() = default ;
    GetListMcpServerToolsResultRequest(const GetListMcpServerToolsResultRequest &) = default ;
    GetListMcpServerToolsResultRequest(GetListMcpServerToolsResultRequest &&) = default ;
    GetListMcpServerToolsResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListMcpServerToolsResultRequest() = default ;
    GetListMcpServerToolsResultRequest& operator=(const GetListMcpServerToolsResultRequest &) = default ;
    GetListMcpServerToolsResultRequest& operator=(GetListMcpServerToolsResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->mcpServerUuid_ == nullptr && this->sessionId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline GetListMcpServerToolsResultRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // mcpServerUuid Field Functions 
    bool hasMcpServerUuid() const { return this->mcpServerUuid_ != nullptr;};
    void deleteMcpServerUuid() { this->mcpServerUuid_ = nullptr;};
    inline string getMcpServerUuid() const { DARABONBA_PTR_GET_DEFAULT(mcpServerUuid_, "") };
    inline GetListMcpServerToolsResultRequest& setMcpServerUuid(string mcpServerUuid) { DARABONBA_PTR_SET_VALUE(mcpServerUuid_, mcpServerUuid) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetListMcpServerToolsResultRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The DMS unit identifier. This value is typically the same as the DMSUnit used in the request that started the tool detection.
    shared_ptr<string> DMSUnit_ {};
    // The MCP Server ID used when the detection was started. This value must match the detection record associated with the SessionId.
    shared_ptr<string> mcpServerUuid_ {};
    // The temporary session ID returned by StartListMcpServerTools. This ID is used to locate the connectivity detection task.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
