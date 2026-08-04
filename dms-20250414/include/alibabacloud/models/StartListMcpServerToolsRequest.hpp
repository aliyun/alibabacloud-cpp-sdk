// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLISTMCPSERVERTOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTLISTMCPSERVERTOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class StartListMcpServerToolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartListMcpServerToolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(McpServerUuid, mcpServerUuid_);
    };
    friend void from_json(const Darabonba::Json& j, StartListMcpServerToolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(McpServerUuid, mcpServerUuid_);
    };
    StartListMcpServerToolsRequest() = default ;
    StartListMcpServerToolsRequest(const StartListMcpServerToolsRequest &) = default ;
    StartListMcpServerToolsRequest(StartListMcpServerToolsRequest &&) = default ;
    StartListMcpServerToolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartListMcpServerToolsRequest() = default ;
    StartListMcpServerToolsRequest& operator=(const StartListMcpServerToolsRequest &) = default ;
    StartListMcpServerToolsRequest& operator=(StartListMcpServerToolsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->language_ == nullptr && this->mcpServerUuid_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline StartListMcpServerToolsRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline StartListMcpServerToolsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // mcpServerUuid Field Functions 
    bool hasMcpServerUuid() const { return this->mcpServerUuid_ != nullptr;};
    void deleteMcpServerUuid() { this->mcpServerUuid_ = nullptr;};
    inline string getMcpServerUuid() const { DARABONBA_PTR_GET_DEFAULT(mcpServerUuid_, "") };
    inline StartListMcpServerToolsRequest& setMcpServerUuid(string mcpServerUuid) { DARABONBA_PTR_SET_VALUE(mcpServerUuid_, mcpServerUuid) };


  protected:
    // The identifier of the Data Management unit that runs the Data Agent resources.
    shared_ptr<string> DMSUnit_ {};
    // The language used for the detection session.
    shared_ptr<string> language_ {};
    // The ID of the MCP Server for which to detect connectivity and query the tool list. Only the service creator can trigger the detection.
    shared_ptr<string> mcpServerUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
