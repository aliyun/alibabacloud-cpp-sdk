// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSQLLOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSQLLOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifySqlLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySqlLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(HotRetention, hotRetention_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestEnable, requestEnable_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySqlLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(HotRetention, hotRetention_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestEnable, requestEnable_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
    };
    ModifySqlLogConfigRequest() = default ;
    ModifySqlLogConfigRequest(const ModifySqlLogConfigRequest &) = default ;
    ModifySqlLogConfigRequest(ModifySqlLogConfigRequest &&) = default ;
    ModifySqlLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySqlLogConfigRequest() = default ;
    ModifySqlLogConfigRequest& operator=(const ModifySqlLogConfigRequest &) = default ;
    ModifySqlLogConfigRequest& operator=(ModifySqlLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
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
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // A reserved parameter.
      shared_ptr<string> key_ {};
      // A reserved parameter.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->enable_ == nullptr
        && this->enableAudit_ == nullptr && this->filters_ == nullptr && this->hotRetention_ == nullptr && this->instanceId_ == nullptr && this->requestEnable_ == nullptr
        && this->retention_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifySqlLogConfigRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableAudit Field Functions 
    bool hasEnableAudit() const { return this->enableAudit_ != nullptr;};
    void deleteEnableAudit() { this->enableAudit_ = nullptr;};
    inline bool getEnableAudit() const { DARABONBA_PTR_GET_DEFAULT(enableAudit_, false) };
    inline ModifySqlLogConfigRequest& setEnableAudit(bool enableAudit) { DARABONBA_PTR_SET_VALUE(enableAudit_, enableAudit) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ModifySqlLogConfigRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ModifySqlLogConfigRequest::Filters>) };
    inline vector<ModifySqlLogConfigRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ModifySqlLogConfigRequest::Filters>) };
    inline ModifySqlLogConfigRequest& setFilters(const vector<ModifySqlLogConfigRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ModifySqlLogConfigRequest& setFilters(vector<ModifySqlLogConfigRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // hotRetention Field Functions 
    bool hasHotRetention() const { return this->hotRetention_ != nullptr;};
    void deleteHotRetention() { this->hotRetention_ = nullptr;};
    inline int32_t getHotRetention() const { DARABONBA_PTR_GET_DEFAULT(hotRetention_, 0) };
    inline ModifySqlLogConfigRequest& setHotRetention(int32_t hotRetention) { DARABONBA_PTR_SET_VALUE(hotRetention_, hotRetention) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifySqlLogConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestEnable Field Functions 
    bool hasRequestEnable() const { return this->requestEnable_ != nullptr;};
    void deleteRequestEnable() { this->requestEnable_ = nullptr;};
    inline bool getRequestEnable() const { DARABONBA_PTR_GET_DEFAULT(requestEnable_, false) };
    inline ModifySqlLogConfigRequest& setRequestEnable(bool requestEnable) { DARABONBA_PTR_SET_VALUE(requestEnable_, requestEnable) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline ModifySqlLogConfigRequest& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


  protected:
    // Specifies whether to enable DAS Enterprise Edition. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is required if you want to enable DAS Enterprise Edition. By default, the latest version of DAS Enterprise Edition that supports the database instance is enabled.
    shared_ptr<bool> enable_ {};
    shared_ptr<bool> enableAudit_ {};
    // A reserved parameter.
    shared_ptr<vector<ModifySqlLogConfigRequest::Filters>> filters_ {};
    // The number of days for which the SQL Explorer and Audit data is stored in hot storage. Valid values: 1 to 7.
    // 
    // >  This parameter is required if only DAS Enterprise Edition V3 can be enabled for the database instance.
    shared_ptr<int32_t> hotRetention_ {};
    // The ID of the database instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Specifies whether to enable the SQL Explorer feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter is required if only DAS Enterprise Edition V3 can be enabled for the database instance.
    shared_ptr<bool> requestEnable_ {};
    // The total storage duration of the SQL Explorer and Audit data. Unit: day. Valid values:
    // 
    // *   7
    // *   30
    // *   180
    // *   365
    // 
    // >  If you want to enable DAS Enterprise Edition V3, the value of this parameter must be greater than or equal to 30.
    shared_ptr<int32_t> retention_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
