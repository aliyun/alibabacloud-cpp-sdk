// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MCPSERVERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MCPSERVERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class McpServerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const McpServerConfig& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, McpServerConfig& obj) { 
    };
    McpServerConfig() = default ;
    McpServerConfig(const McpServerConfig &) = default ;
    McpServerConfig(McpServerConfig &&) = default ;
    McpServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~McpServerConfig() = default ;
    McpServerConfig& operator=(const McpServerConfig &) = default ;
    McpServerConfig& operator=(McpServerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { ; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
