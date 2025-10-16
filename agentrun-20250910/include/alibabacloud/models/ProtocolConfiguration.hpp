// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROTOCOLCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_PROTOCOLCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ProtocolConfiguration& obj) { 
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
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ProtocolConfiguration& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
