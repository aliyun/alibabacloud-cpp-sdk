// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERALARMCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserAlarmConfigResponseBodyAlarmConfig.hpp>
#include <alibabacloud/models/DescribeUserAlarmConfigResponseBodyContactConfig.hpp>
#include <alibabacloud/models/DescribeUserAlarmConfigResponseBodyDefaultContact.hpp>
#include <alibabacloud/models/DescribeUserAlarmConfigResponseBodyNotifyConfig.hpp>
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
    virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && return this->alarmLang_ == nullptr && return this->contactConfig_ == nullptr && return this->defaultContact_ == nullptr && return this->notifyConfig_ == nullptr && return this->requestId_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const vector<DescribeUserAlarmConfigResponseBodyAlarmConfig> & alarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, vector<DescribeUserAlarmConfigResponseBodyAlarmConfig>) };
    inline vector<DescribeUserAlarmConfigResponseBodyAlarmConfig> alarmConfig() { DARABONBA_PTR_GET(alarmConfig_, vector<DescribeUserAlarmConfigResponseBodyAlarmConfig>) };
    inline DescribeUserAlarmConfigResponseBody& setAlarmConfig(const vector<DescribeUserAlarmConfigResponseBodyAlarmConfig> & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline DescribeUserAlarmConfigResponseBody& setAlarmConfig(vector<DescribeUserAlarmConfigResponseBodyAlarmConfig> && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // alarmLang Field Functions 
    bool hasAlarmLang() const { return this->alarmLang_ != nullptr;};
    void deleteAlarmLang() { this->alarmLang_ = nullptr;};
    inline string alarmLang() const { DARABONBA_PTR_GET_DEFAULT(alarmLang_, "") };
    inline DescribeUserAlarmConfigResponseBody& setAlarmLang(string alarmLang) { DARABONBA_PTR_SET_VALUE(alarmLang_, alarmLang) };


    // contactConfig Field Functions 
    bool hasContactConfig() const { return this->contactConfig_ != nullptr;};
    void deleteContactConfig() { this->contactConfig_ = nullptr;};
    inline const vector<DescribeUserAlarmConfigResponseBodyContactConfig> & contactConfig() const { DARABONBA_PTR_GET_CONST(contactConfig_, vector<DescribeUserAlarmConfigResponseBodyContactConfig>) };
    inline vector<DescribeUserAlarmConfigResponseBodyContactConfig> contactConfig() { DARABONBA_PTR_GET(contactConfig_, vector<DescribeUserAlarmConfigResponseBodyContactConfig>) };
    inline DescribeUserAlarmConfigResponseBody& setContactConfig(const vector<DescribeUserAlarmConfigResponseBodyContactConfig> & contactConfig) { DARABONBA_PTR_SET_VALUE(contactConfig_, contactConfig) };
    inline DescribeUserAlarmConfigResponseBody& setContactConfig(vector<DescribeUserAlarmConfigResponseBodyContactConfig> && contactConfig) { DARABONBA_PTR_SET_RVALUE(contactConfig_, contactConfig) };


    // defaultContact Field Functions 
    bool hasDefaultContact() const { return this->defaultContact_ != nullptr;};
    void deleteDefaultContact() { this->defaultContact_ = nullptr;};
    inline const DescribeUserAlarmConfigResponseBodyDefaultContact & defaultContact() const { DARABONBA_PTR_GET_CONST(defaultContact_, DescribeUserAlarmConfigResponseBodyDefaultContact) };
    inline DescribeUserAlarmConfigResponseBodyDefaultContact defaultContact() { DARABONBA_PTR_GET(defaultContact_, DescribeUserAlarmConfigResponseBodyDefaultContact) };
    inline DescribeUserAlarmConfigResponseBody& setDefaultContact(const DescribeUserAlarmConfigResponseBodyDefaultContact & defaultContact) { DARABONBA_PTR_SET_VALUE(defaultContact_, defaultContact) };
    inline DescribeUserAlarmConfigResponseBody& setDefaultContact(DescribeUserAlarmConfigResponseBodyDefaultContact && defaultContact) { DARABONBA_PTR_SET_RVALUE(defaultContact_, defaultContact) };


    // notifyConfig Field Functions 
    bool hasNotifyConfig() const { return this->notifyConfig_ != nullptr;};
    void deleteNotifyConfig() { this->notifyConfig_ = nullptr;};
    inline const vector<DescribeUserAlarmConfigResponseBodyNotifyConfig> & notifyConfig() const { DARABONBA_PTR_GET_CONST(notifyConfig_, vector<DescribeUserAlarmConfigResponseBodyNotifyConfig>) };
    inline vector<DescribeUserAlarmConfigResponseBodyNotifyConfig> notifyConfig() { DARABONBA_PTR_GET(notifyConfig_, vector<DescribeUserAlarmConfigResponseBodyNotifyConfig>) };
    inline DescribeUserAlarmConfigResponseBody& setNotifyConfig(const vector<DescribeUserAlarmConfigResponseBodyNotifyConfig> & notifyConfig) { DARABONBA_PTR_SET_VALUE(notifyConfig_, notifyConfig) };
    inline DescribeUserAlarmConfigResponseBody& setNotifyConfig(vector<DescribeUserAlarmConfigResponseBodyNotifyConfig> && notifyConfig) { DARABONBA_PTR_SET_RVALUE(notifyConfig_, notifyConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAlarmConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeUserAlarmConfigResponseBodyAlarmConfig>> alarmConfig_ = nullptr;
    std::shared_ptr<string> alarmLang_ = nullptr;
    std::shared_ptr<vector<DescribeUserAlarmConfigResponseBodyContactConfig>> contactConfig_ = nullptr;
    std::shared_ptr<DescribeUserAlarmConfigResponseBodyDefaultContact> defaultContact_ = nullptr;
    std::shared_ptr<vector<DescribeUserAlarmConfigResponseBodyNotifyConfig>> notifyConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
