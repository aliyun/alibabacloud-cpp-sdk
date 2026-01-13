// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROTOCOLCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_PROTOCOLCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProtocolSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ProtocolConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProtocolConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(protocolSettings, protocolSettings_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ProtocolConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(protocolSettings, protocolSettings_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ProtocolConfiguration() = default ;
    ProtocolConfiguration(const ProtocolConfiguration &) = default ;
    ProtocolConfiguration(ProtocolConfiguration &&) = default ;
    ProtocolConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProtocolConfiguration() = default ;
    ProtocolConfiguration& operator=(const ProtocolConfiguration &) = default ;
    ProtocolConfiguration& operator=(ProtocolConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->protocolSettings_ == nullptr
        && this->type_ == nullptr; };
    // protocolSettings Field Functions 
    bool hasProtocolSettings() const { return this->protocolSettings_ != nullptr;};
    void deleteProtocolSettings() { this->protocolSettings_ = nullptr;};
    inline const vector<ProtocolSettings> & getProtocolSettings() const { DARABONBA_PTR_GET_CONST(protocolSettings_, vector<ProtocolSettings>) };
    inline vector<ProtocolSettings> getProtocolSettings() { DARABONBA_PTR_GET(protocolSettings_, vector<ProtocolSettings>) };
    inline ProtocolConfiguration& setProtocolSettings(const vector<ProtocolSettings> & protocolSettings) { DARABONBA_PTR_SET_VALUE(protocolSettings_, protocolSettings) };
    inline ProtocolConfiguration& setProtocolSettings(vector<ProtocolSettings> && protocolSettings) { DARABONBA_PTR_SET_RVALUE(protocolSettings_, protocolSettings) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ProtocolConfiguration& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 详细的协议配置信息
    shared_ptr<vector<ProtocolSettings>> protocolSettings_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
