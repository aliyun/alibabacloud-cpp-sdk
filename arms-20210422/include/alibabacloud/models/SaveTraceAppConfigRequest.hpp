// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETRACEAPPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETRACEAPPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SaveTraceAppConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTraceAppConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Settings, settings_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTraceAppConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
    };
    SaveTraceAppConfigRequest() = default ;
    SaveTraceAppConfigRequest(const SaveTraceAppConfigRequest &) = default ;
    SaveTraceAppConfigRequest(SaveTraceAppConfigRequest &&) = default ;
    SaveTraceAppConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTraceAppConfigRequest() = default ;
    SaveTraceAppConfigRequest& operator=(const SaveTraceAppConfigRequest &) = default ;
    SaveTraceAppConfigRequest& operator=(SaveTraceAppConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Settings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Settings& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Settings& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Settings() = default ;
      Settings(const Settings &) = default ;
      Settings(Settings &&) = default ;
      Settings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Settings() = default ;
      Settings& operator=(const Settings &) = default ;
      Settings& operator=(Settings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Settings& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Settings& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->pid_ == nullptr
        && this->settings_ == nullptr; };
    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SaveTraceAppConfigRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const vector<SaveTraceAppConfigRequest::Settings> & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, vector<SaveTraceAppConfigRequest::Settings>) };
    inline vector<SaveTraceAppConfigRequest::Settings> getSettings() { DARABONBA_PTR_GET(settings_, vector<SaveTraceAppConfigRequest::Settings>) };
    inline SaveTraceAppConfigRequest& setSettings(const vector<SaveTraceAppConfigRequest::Settings> & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline SaveTraceAppConfigRequest& setSettings(vector<SaveTraceAppConfigRequest::Settings> && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


  protected:
    // This parameter is required.
    shared_ptr<string> pid_ {};
    shared_ptr<vector<SaveTraceAppConfigRequest::Settings>> settings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
