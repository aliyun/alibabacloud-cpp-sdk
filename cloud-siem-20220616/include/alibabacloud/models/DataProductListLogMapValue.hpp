// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAPRODUCTLISTLOGMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAPRODUCTLISTLOGMAPVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DataProductListLogMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataProductListLogMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(LogName, logName_);
      DARABONBA_PTR_TO_JSON(LogNameEn, logNameEn_);
      DARABONBA_PTR_TO_JSON(LogNameKey, logNameKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(CanOperateOrNot, canOperateOrNot_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(ExtraParameters, extraParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DataProductListLogMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(LogName, logName_);
      DARABONBA_PTR_FROM_JSON(LogNameEn, logNameEn_);
      DARABONBA_PTR_FROM_JSON(LogNameKey, logNameKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(CanOperateOrNot, canOperateOrNot_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(ExtraParameters, extraParameters_);
    };
    DataProductListLogMapValue() = default ;
    DataProductListLogMapValue(const DataProductListLogMapValue &) = default ;
    DataProductListLogMapValue(DataProductListLogMapValue &&) = default ;
    DataProductListLogMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataProductListLogMapValue() = default ;
    DataProductListLogMapValue& operator=(const DataProductListLogMapValue &) = default ;
    DataProductListLogMapValue& operator=(DataProductListLogMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExtraParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtraParameters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ExtraParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ExtraParameters() = default ;
      ExtraParameters(const ExtraParameters &) = default ;
      ExtraParameters(ExtraParameters &&) = default ;
      ExtraParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtraParameters() = default ;
      ExtraParameters& operator=(const ExtraParameters &) = default ;
      ExtraParameters& operator=(ExtraParameters &&) = default ;
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
      inline ExtraParameters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ExtraParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The ID of the extended parameter.
      shared_ptr<string> key_ {};
      // The value of the extended parameter.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->logCode_ == nullptr
        && this->logName_ == nullptr && this->logNameEn_ == nullptr && this->logNameKey_ == nullptr && this->status_ == nullptr && this->canOperateOrNot_ == nullptr
        && this->topic_ == nullptr && this->extraParameters_ == nullptr; };
    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline DataProductListLogMapValue& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // logName Field Functions 
    bool hasLogName() const { return this->logName_ != nullptr;};
    void deleteLogName() { this->logName_ = nullptr;};
    inline string getLogName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
    inline DataProductListLogMapValue& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


    // logNameEn Field Functions 
    bool hasLogNameEn() const { return this->logNameEn_ != nullptr;};
    void deleteLogNameEn() { this->logNameEn_ = nullptr;};
    inline string getLogNameEn() const { DARABONBA_PTR_GET_DEFAULT(logNameEn_, "") };
    inline DataProductListLogMapValue& setLogNameEn(string logNameEn) { DARABONBA_PTR_SET_VALUE(logNameEn_, logNameEn) };


    // logNameKey Field Functions 
    bool hasLogNameKey() const { return this->logNameKey_ != nullptr;};
    void deleteLogNameKey() { this->logNameKey_ = nullptr;};
    inline string getLogNameKey() const { DARABONBA_PTR_GET_DEFAULT(logNameKey_, "") };
    inline DataProductListLogMapValue& setLogNameKey(string logNameKey) { DARABONBA_PTR_SET_VALUE(logNameKey_, logNameKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DataProductListLogMapValue& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // canOperateOrNot Field Functions 
    bool hasCanOperateOrNot() const { return this->canOperateOrNot_ != nullptr;};
    void deleteCanOperateOrNot() { this->canOperateOrNot_ = nullptr;};
    inline bool getCanOperateOrNot() const { DARABONBA_PTR_GET_DEFAULT(canOperateOrNot_, false) };
    inline DataProductListLogMapValue& setCanOperateOrNot(bool canOperateOrNot) { DARABONBA_PTR_SET_VALUE(canOperateOrNot_, canOperateOrNot) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DataProductListLogMapValue& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // extraParameters Field Functions 
    bool hasExtraParameters() const { return this->extraParameters_ != nullptr;};
    void deleteExtraParameters() { this->extraParameters_ = nullptr;};
    inline const vector<DataProductListLogMapValue::ExtraParameters> & getExtraParameters() const { DARABONBA_PTR_GET_CONST(extraParameters_, vector<DataProductListLogMapValue::ExtraParameters>) };
    inline vector<DataProductListLogMapValue::ExtraParameters> getExtraParameters() { DARABONBA_PTR_GET(extraParameters_, vector<DataProductListLogMapValue::ExtraParameters>) };
    inline DataProductListLogMapValue& setExtraParameters(const vector<DataProductListLogMapValue::ExtraParameters> & extraParameters) { DARABONBA_PTR_SET_VALUE(extraParameters_, extraParameters) };
    inline DataProductListLogMapValue& setExtraParameters(vector<DataProductListLogMapValue::ExtraParameters> && extraParameters) { DARABONBA_PTR_SET_RVALUE(extraParameters_, extraParameters) };


  protected:
    // The code of the log.
    shared_ptr<string> logCode_ {};
    // This parameter is deprecated.
    shared_ptr<string> logName_ {};
    // This parameter is deprecated.
    shared_ptr<string> logNameEn_ {};
    // The language code of the log that is used to indicate the language in which the log is displayed.
    shared_ptr<string> logNameKey_ {};
    // The status of the log delivery. Valid values:
    // 
    // *   true: The logs are being delivered.
    // *   false: The log delivery feature is disabled.
    shared_ptr<bool> status_ {};
    // Indicates whether the log delivery feature can be enabled or disabled. The feature can be enabled or disabled only by the administrator of the threat analysis feature. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> canOperateOrNot_ {};
    // The topic of the log in the Logstore. The value is an index field in the Logstore that can be used to distinguish different logs.
    shared_ptr<string> topic_ {};
    // The extended parameter.
    shared_ptr<vector<DataProductListLogMapValue::ExtraParameters>> extraParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
