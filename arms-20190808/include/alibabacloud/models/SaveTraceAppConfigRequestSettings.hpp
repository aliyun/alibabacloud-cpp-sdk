// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETRACEAPPCONFIGREQUESTSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_SAVETRACEAPPCONFIGREQUESTSETTINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SaveTraceAppConfigRequestSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTraceAppConfigRequestSettings& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTraceAppConfigRequestSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SaveTraceAppConfigRequestSettings() = default ;
    SaveTraceAppConfigRequestSettings(const SaveTraceAppConfigRequestSettings &) = default ;
    SaveTraceAppConfigRequestSettings(SaveTraceAppConfigRequestSettings &&) = default ;
    SaveTraceAppConfigRequestSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTraceAppConfigRequestSettings() = default ;
    SaveTraceAppConfigRequestSettings& operator=(const SaveTraceAppConfigRequestSettings &) = default ;
    SaveTraceAppConfigRequestSettings& operator=(SaveTraceAppConfigRequestSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SaveTraceAppConfigRequestSettings& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SaveTraceAppConfigRequestSettings& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the settings that you want to modify. For more information about the supported settings, see the following sections.
    // 
    // *   Trace sampling settings
    // *   Agent switch settings
    // *   Threshold settings
    // *   Advanced settings
    // *   Thread settings
    // *   Memory snapshot settings
    // *   URL convergence settings
    // *   Business log association settings
    std::shared_ptr<string> key_ = nullptr;
    // The value of the settings that you want to modify. For more information about the supported settings, see the following sections.
    // 
    // *   Trace sampling settings
    // *   Agent switch settings
    // *   Threshold settings
    // *   Advanced settings
    // *   Thread settings
    // *   Memory snapshot settings
    // *   URL convergence settings
    // *   Business log association settings
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
