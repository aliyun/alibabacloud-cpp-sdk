// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGDATAAGENTMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGDATAAGENTMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ConfigDataAgentMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigDataAgentMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RecallEnabled, recallEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigDataAgentMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RecallEnabled, recallEnabled_);
    };
    ConfigDataAgentMemoryRequest() = default ;
    ConfigDataAgentMemoryRequest(const ConfigDataAgentMemoryRequest &) = default ;
    ConfigDataAgentMemoryRequest(ConfigDataAgentMemoryRequest &&) = default ;
    ConfigDataAgentMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigDataAgentMemoryRequest() = default ;
    ConfigDataAgentMemoryRequest& operator=(const ConfigDataAgentMemoryRequest &) = default ;
    ConfigDataAgentMemoryRequest& operator=(ConfigDataAgentMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->enabled_ == nullptr && this->recallEnabled_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline ConfigDataAgentMemoryRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ConfigDataAgentMemoryRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // recallEnabled Field Functions 
    bool hasRecallEnabled() const { return this->recallEnabled_ != nullptr;};
    void deleteRecallEnabled() { this->recallEnabled_ = nullptr;};
    inline bool getRecallEnabled() const { DARABONBA_PTR_GET_DEFAULT(recallEnabled_, false) };
    inline ConfigDataAgentMemoryRequest& setRecallEnabled(bool recallEnabled) { DARABONBA_PTR_SET_VALUE(recallEnabled_, recallEnabled) };


  protected:
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<bool> recallEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
