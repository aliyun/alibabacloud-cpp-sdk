// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROBEPROBEHANDLERHTTPGETHTTPHEADERS_HPP_
#define ALIBABACLOUD_MODELS_PROBEPROBEHANDLERHTTPGETHTTPHEADERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ProbeProbeHandlerHttpGetHttpHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProbeProbeHandlerHttpGetHttpHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ProbeProbeHandlerHttpGetHttpHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ProbeProbeHandlerHttpGetHttpHeaders() = default ;
    ProbeProbeHandlerHttpGetHttpHeaders(const ProbeProbeHandlerHttpGetHttpHeaders &) = default ;
    ProbeProbeHandlerHttpGetHttpHeaders(ProbeProbeHandlerHttpGetHttpHeaders &&) = default ;
    ProbeProbeHandlerHttpGetHttpHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProbeProbeHandlerHttpGetHttpHeaders() = default ;
    ProbeProbeHandlerHttpGetHttpHeaders& operator=(const ProbeProbeHandlerHttpGetHttpHeaders &) = default ;
    ProbeProbeHandlerHttpGetHttpHeaders& operator=(ProbeProbeHandlerHttpGetHttpHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ProbeProbeHandlerHttpGetHttpHeaders& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ProbeProbeHandlerHttpGetHttpHeaders& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
