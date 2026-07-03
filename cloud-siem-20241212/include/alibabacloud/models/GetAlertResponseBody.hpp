// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alert, alert_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alert, alert_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAlertResponseBody() = default ;
    GetAlertResponseBody(const GetAlertResponseBody &) = default ;
    GetAlertResponseBody(GetAlertResponseBody &&) = default ;
    GetAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertResponseBody() = default ;
    GetAlertResponseBody& operator=(const GetAlertResponseBody &) = default ;
    GetAlertResponseBody& operator=(GetAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Alert : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Alert& obj) { 
        DARABONBA_PTR_TO_JSON(AlertRecord, alertRecord_);
        DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
      };
      friend void from_json(const Darabonba::Json& j, Alert& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertRecord, alertRecord_);
        DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
      };
      Alert() = default ;
      Alert(const Alert &) = default ;
      Alert(Alert &&) = default ;
      Alert(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Alert() = default ;
      Alert& operator=(const Alert &) = default ;
      Alert& operator=(Alert &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertRecord_ == nullptr
        && this->alertUuid_ == nullptr; };
      // alertRecord Field Functions 
      bool hasAlertRecord() const { return this->alertRecord_ != nullptr;};
      void deleteAlertRecord() { this->alertRecord_ = nullptr;};
      inline string getAlertRecord() const { DARABONBA_PTR_GET_DEFAULT(alertRecord_, "") };
      inline Alert& setAlertRecord(string alertRecord) { DARABONBA_PTR_SET_VALUE(alertRecord_, alertRecord) };


      // alertUuid Field Functions 
      bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
      void deleteAlertUuid() { this->alertUuid_ = nullptr;};
      inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
      inline Alert& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


    protected:
      // The alert content.
      shared_ptr<string> alertRecord_ {};
      // The alert UUID.
      shared_ptr<string> alertUuid_ {};
    };

    virtual bool empty() const override { return this->alert_ == nullptr
        && this->requestId_ == nullptr; };
    // alert Field Functions 
    bool hasAlert() const { return this->alert_ != nullptr;};
    void deleteAlert() { this->alert_ = nullptr;};
    inline const GetAlertResponseBody::Alert & getAlert() const { DARABONBA_PTR_GET_CONST(alert_, GetAlertResponseBody::Alert) };
    inline GetAlertResponseBody::Alert getAlert() { DARABONBA_PTR_GET(alert_, GetAlertResponseBody::Alert) };
    inline GetAlertResponseBody& setAlert(const GetAlertResponseBody::Alert & alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };
    inline GetAlertResponseBody& setAlert(GetAlertResponseBody::Alert && alert) { DARABONBA_PTR_SET_RVALUE(alert_, alert) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // If this value is true, the minor engine version is not the latest version.
    // 
    // > If the minor engine version of your server is not the latest version, the sampling logs may be inaccurate, which causes inaccurate IP statistics. We recommend that you upgrade the minor engine version at your earliest convenience.
    shared_ptr<GetAlertResponseBody::Alert> alert_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
