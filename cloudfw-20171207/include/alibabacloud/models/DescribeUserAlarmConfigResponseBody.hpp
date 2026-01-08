// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeUserAlarmConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAlarmConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_TO_JSON(AlarmLang, alarmLang_);
      DARABONBA_PTR_TO_JSON(ContactConfig, contactConfig_);
      DARABONBA_PTR_TO_JSON(DefaultContact, defaultContact_);
      DARABONBA_PTR_TO_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAlarmConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_FROM_JSON(AlarmLang, alarmLang_);
      DARABONBA_PTR_FROM_JSON(ContactConfig, contactConfig_);
      DARABONBA_PTR_FROM_JSON(DefaultContact, defaultContact_);
      DARABONBA_PTR_FROM_JSON(NotifyConfig, notifyConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserAlarmConfigResponseBody() = default ;
    DescribeUserAlarmConfigResponseBody(const DescribeUserAlarmConfigResponseBody &) = default ;
    DescribeUserAlarmConfigResponseBody(DescribeUserAlarmConfigResponseBody &&) = default ;
    DescribeUserAlarmConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAlarmConfigResponseBody() = default ;
    DescribeUserAlarmConfigResponseBody& operator=(const DescribeUserAlarmConfigResponseBody &) = default ;
    DescribeUserAlarmConfigResponseBody& operator=(DescribeUserAlarmConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NotifyConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotifyConfig& obj) { 
        DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
        DARABONBA_PTR_TO_JSON(NotifyValue, notifyValue_);
      };
      friend void from_json(const Darabonba::Json& j, NotifyConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
        DARABONBA_PTR_FROM_JSON(NotifyValue, notifyValue_);
      };
      NotifyConfig() = default ;
      NotifyConfig(const NotifyConfig &) = default ;
      NotifyConfig(NotifyConfig &&) = default ;
      NotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotifyConfig() = default ;
      NotifyConfig& operator=(const NotifyConfig &) = default ;
      NotifyConfig& operator=(NotifyConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->notifyType_ == nullptr
        && this->notifyValue_ == nullptr; };
      // notifyType Field Functions 
      bool hasNotifyType() const { return this->notifyType_ != nullptr;};
      void deleteNotifyType() { this->notifyType_ = nullptr;};
      inline string getNotifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
      inline NotifyConfig& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


      // notifyValue Field Functions 
      bool hasNotifyValue() const { return this->notifyValue_ != nullptr;};
      void deleteNotifyValue() { this->notifyValue_ = nullptr;};
      inline string getNotifyValue() const { DARABONBA_PTR_GET_DEFAULT(notifyValue_, "") };
      inline NotifyConfig& setNotifyValue(string notifyValue) { DARABONBA_PTR_SET_VALUE(notifyValue_, notifyValue) };


    protected:
      shared_ptr<string> notifyType_ {};
      shared_ptr<string> notifyValue_ {};
    };

    class DefaultContact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultContact& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultContact& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DefaultContact() = default ;
      DefaultContact(const DefaultContact &) = default ;
      DefaultContact(DefaultContact &&) = default ;
      DefaultContact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultContact() = default ;
      DefaultContact& operator=(const DefaultContact &) = default ;
      DefaultContact& operator=(DefaultContact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->mobilePhone_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline DefaultContact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // mobilePhone Field Functions 
      bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
      void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
      inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
      inline DefaultContact& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DefaultContact& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DefaultContact& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> email_ {};
      shared_ptr<string> mobilePhone_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> status_ {};
    };

    class ContactConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContactConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ContactConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ContactConfig() = default ;
      ContactConfig(const ContactConfig &) = default ;
      ContactConfig(ContactConfig &&) = default ;
      ContactConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContactConfig() = default ;
      ContactConfig& operator=(const ContactConfig &) = default ;
      ContactConfig& operator=(ContactConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->mobilePhone_ == nullptr && this->name_ == nullptr && this->status_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline ContactConfig& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // mobilePhone Field Functions 
      bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
      void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
      inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
      inline ContactConfig& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ContactConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline ContactConfig& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> email_ {};
      shared_ptr<string> mobilePhone_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> status_ {};
    };

    class AlarmConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlarmConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmHour, alarmHour_);
        DARABONBA_PTR_TO_JSON(AlarmNotify, alarmNotify_);
        DARABONBA_PTR_TO_JSON(AlarmPeriod, alarmPeriod_);
        DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
        DARABONBA_PTR_TO_JSON(AlarmValue, alarmValue_);
        DARABONBA_PTR_TO_JSON(AlarmWeekDay, alarmWeekDay_);
      };
      friend void from_json(const Darabonba::Json& j, AlarmConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmHour, alarmHour_);
        DARABONBA_PTR_FROM_JSON(AlarmNotify, alarmNotify_);
        DARABONBA_PTR_FROM_JSON(AlarmPeriod, alarmPeriod_);
        DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
        DARABONBA_PTR_FROM_JSON(AlarmValue, alarmValue_);
        DARABONBA_PTR_FROM_JSON(AlarmWeekDay, alarmWeekDay_);
      };
      AlarmConfig() = default ;
      AlarmConfig(const AlarmConfig &) = default ;
      AlarmConfig(AlarmConfig &&) = default ;
      AlarmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlarmConfig() = default ;
      AlarmConfig& operator=(const AlarmConfig &) = default ;
      AlarmConfig& operator=(AlarmConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alarmHour_ == nullptr
        && this->alarmNotify_ == nullptr && this->alarmPeriod_ == nullptr && this->alarmType_ == nullptr && this->alarmValue_ == nullptr && this->alarmWeekDay_ == nullptr; };
      // alarmHour Field Functions 
      bool hasAlarmHour() const { return this->alarmHour_ != nullptr;};
      void deleteAlarmHour() { this->alarmHour_ = nullptr;};
      inline int32_t getAlarmHour() const { DARABONBA_PTR_GET_DEFAULT(alarmHour_, 0) };
      inline AlarmConfig& setAlarmHour(int32_t alarmHour) { DARABONBA_PTR_SET_VALUE(alarmHour_, alarmHour) };


      // alarmNotify Field Functions 
      bool hasAlarmNotify() const { return this->alarmNotify_ != nullptr;};
      void deleteAlarmNotify() { this->alarmNotify_ = nullptr;};
      inline int32_t getAlarmNotify() const { DARABONBA_PTR_GET_DEFAULT(alarmNotify_, 0) };
      inline AlarmConfig& setAlarmNotify(int32_t alarmNotify) { DARABONBA_PTR_SET_VALUE(alarmNotify_, alarmNotify) };


      // alarmPeriod Field Functions 
      bool hasAlarmPeriod() const { return this->alarmPeriod_ != nullptr;};
      void deleteAlarmPeriod() { this->alarmPeriod_ = nullptr;};
      inline int32_t getAlarmPeriod() const { DARABONBA_PTR_GET_DEFAULT(alarmPeriod_, 0) };
      inline AlarmConfig& setAlarmPeriod(int32_t alarmPeriod) { DARABONBA_PTR_SET_VALUE(alarmPeriod_, alarmPeriod) };


      // alarmType Field Functions 
      bool hasAlarmType() const { return this->alarmType_ != nullptr;};
      void deleteAlarmType() { this->alarmType_ = nullptr;};
      inline string getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
      inline AlarmConfig& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


      // alarmValue Field Functions 
      bool hasAlarmValue() const { return this->alarmValue_ != nullptr;};
      void deleteAlarmValue() { this->alarmValue_ = nullptr;};
      inline string getAlarmValue() const { DARABONBA_PTR_GET_DEFAULT(alarmValue_, "") };
      inline AlarmConfig& setAlarmValue(string alarmValue) { DARABONBA_PTR_SET_VALUE(alarmValue_, alarmValue) };


      // alarmWeekDay Field Functions 
      bool hasAlarmWeekDay() const { return this->alarmWeekDay_ != nullptr;};
      void deleteAlarmWeekDay() { this->alarmWeekDay_ = nullptr;};
      inline int32_t getAlarmWeekDay() const { DARABONBA_PTR_GET_DEFAULT(alarmWeekDay_, 0) };
      inline AlarmConfig& setAlarmWeekDay(int32_t alarmWeekDay) { DARABONBA_PTR_SET_VALUE(alarmWeekDay_, alarmWeekDay) };


    protected:
      shared_ptr<int32_t> alarmHour_ {};
      shared_ptr<int32_t> alarmNotify_ {};
      shared_ptr<int32_t> alarmPeriod_ {};
      shared_ptr<string> alarmType_ {};
      shared_ptr<string> alarmValue_ {};
      shared_ptr<int32_t> alarmWeekDay_ {};
    };

    virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && this->alarmLang_ == nullptr && this->contactConfig_ == nullptr && this->defaultContact_ == nullptr && this->notifyConfig_ == nullptr && this->requestId_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const vector<DescribeUserAlarmConfigResponseBody::AlarmConfig> & getAlarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, vector<DescribeUserAlarmConfigResponseBody::AlarmConfig>) };
    inline vector<DescribeUserAlarmConfigResponseBody::AlarmConfig> getAlarmConfig() { DARABONBA_PTR_GET(alarmConfig_, vector<DescribeUserAlarmConfigResponseBody::AlarmConfig>) };
    inline DescribeUserAlarmConfigResponseBody& setAlarmConfig(const vector<DescribeUserAlarmConfigResponseBody::AlarmConfig> & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline DescribeUserAlarmConfigResponseBody& setAlarmConfig(vector<DescribeUserAlarmConfigResponseBody::AlarmConfig> && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // alarmLang Field Functions 
    bool hasAlarmLang() const { return this->alarmLang_ != nullptr;};
    void deleteAlarmLang() { this->alarmLang_ = nullptr;};
    inline string getAlarmLang() const { DARABONBA_PTR_GET_DEFAULT(alarmLang_, "") };
    inline DescribeUserAlarmConfigResponseBody& setAlarmLang(string alarmLang) { DARABONBA_PTR_SET_VALUE(alarmLang_, alarmLang) };


    // contactConfig Field Functions 
    bool hasContactConfig() const { return this->contactConfig_ != nullptr;};
    void deleteContactConfig() { this->contactConfig_ = nullptr;};
    inline const vector<DescribeUserAlarmConfigResponseBody::ContactConfig> & getContactConfig() const { DARABONBA_PTR_GET_CONST(contactConfig_, vector<DescribeUserAlarmConfigResponseBody::ContactConfig>) };
    inline vector<DescribeUserAlarmConfigResponseBody::ContactConfig> getContactConfig() { DARABONBA_PTR_GET(contactConfig_, vector<DescribeUserAlarmConfigResponseBody::ContactConfig>) };
    inline DescribeUserAlarmConfigResponseBody& setContactConfig(const vector<DescribeUserAlarmConfigResponseBody::ContactConfig> & contactConfig) { DARABONBA_PTR_SET_VALUE(contactConfig_, contactConfig) };
    inline DescribeUserAlarmConfigResponseBody& setContactConfig(vector<DescribeUserAlarmConfigResponseBody::ContactConfig> && contactConfig) { DARABONBA_PTR_SET_RVALUE(contactConfig_, contactConfig) };


    // defaultContact Field Functions 
    bool hasDefaultContact() const { return this->defaultContact_ != nullptr;};
    void deleteDefaultContact() { this->defaultContact_ = nullptr;};
    inline const DescribeUserAlarmConfigResponseBody::DefaultContact & getDefaultContact() const { DARABONBA_PTR_GET_CONST(defaultContact_, DescribeUserAlarmConfigResponseBody::DefaultContact) };
    inline DescribeUserAlarmConfigResponseBody::DefaultContact getDefaultContact() { DARABONBA_PTR_GET(defaultContact_, DescribeUserAlarmConfigResponseBody::DefaultContact) };
    inline DescribeUserAlarmConfigResponseBody& setDefaultContact(const DescribeUserAlarmConfigResponseBody::DefaultContact & defaultContact) { DARABONBA_PTR_SET_VALUE(defaultContact_, defaultContact) };
    inline DescribeUserAlarmConfigResponseBody& setDefaultContact(DescribeUserAlarmConfigResponseBody::DefaultContact && defaultContact) { DARABONBA_PTR_SET_RVALUE(defaultContact_, defaultContact) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const vector<DescribeUserAlarmConfigResponseBody::NotifyConfig> & getNotifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, vector<DescribeUserAlarmConfigResponseBody::NotifyConfig>) };
    inline vector<DescribeUserAlarmConfigResponseBody::NotifyConfig> getNotifyConfig() { DARABONBA_PTR_GET(notifyConfig_, vector<DescribeUserAlarmConfigResponseBody::NotifyConfig>) };
    inline DescribeUserAlarmConfigResponseBody& setNotifyConfig(const vector<DescribeUserAlarmConfigResponseBody::NotifyConfig> & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline DescribeUserAlarmConfigResponseBody& setNotifyConfig(vector<DescribeUserAlarmConfigResponseBody::NotifyConfig> && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAlarmConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeUserAlarmConfigResponseBody::AlarmConfig>> alarmConfig_ {};
    shared_ptr<string> alarmLang_ {};
    shared_ptr<vector<DescribeUserAlarmConfigResponseBody::ContactConfig>> contactConfig_ {};
    shared_ptr<DescribeUserAlarmConfigResponseBody::DefaultContact> defaultContact_ {};
    shared_ptr<vector<DescribeUserAlarmConfigResponseBody::NotifyConfig>> notifyConfig_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
