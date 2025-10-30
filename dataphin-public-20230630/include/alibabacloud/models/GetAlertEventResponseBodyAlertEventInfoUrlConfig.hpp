// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFOURLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODYALERTEVENTINFOURLCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAlertEventResponseBodyAlertEventInfoUrlConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertEventResponseBodyAlertEventInfoUrlConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfigUrl, alertConfigUrl_);
      DARABONBA_PTR_TO_JSON(LogUrl, logUrl_);
      DARABONBA_PTR_TO_JSON(ObjectUrl, objectUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertEventResponseBodyAlertEventInfoUrlConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfigUrl, alertConfigUrl_);
      DARABONBA_PTR_FROM_JSON(LogUrl, logUrl_);
      DARABONBA_PTR_FROM_JSON(ObjectUrl, objectUrl_);
    };
    GetAlertEventResponseBodyAlertEventInfoUrlConfig() = default ;
    GetAlertEventResponseBodyAlertEventInfoUrlConfig(const GetAlertEventResponseBodyAlertEventInfoUrlConfig &) = default ;
    GetAlertEventResponseBodyAlertEventInfoUrlConfig(GetAlertEventResponseBodyAlertEventInfoUrlConfig &&) = default ;
    GetAlertEventResponseBodyAlertEventInfoUrlConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertEventResponseBodyAlertEventInfoUrlConfig() = default ;
    GetAlertEventResponseBodyAlertEventInfoUrlConfig& operator=(const GetAlertEventResponseBodyAlertEventInfoUrlConfig &) = default ;
    GetAlertEventResponseBodyAlertEventInfoUrlConfig& operator=(GetAlertEventResponseBodyAlertEventInfoUrlConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfigUrl_ == nullptr
        && return this->logUrl_ == nullptr && return this->objectUrl_ == nullptr; };
    // alertConfigUrl Field Functions 
    bool hasAlertConfigUrl() const { return this->alertConfigUrl_ != nullptr;};
    void deleteAlertConfigUrl() { this->alertConfigUrl_ = nullptr;};
    inline string alertConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(alertConfigUrl_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoUrlConfig& setAlertConfigUrl(string alertConfigUrl) { DARABONBA_PTR_SET_VALUE(alertConfigUrl_, alertConfigUrl) };


    // logUrl Field Functions 
    bool hasLogUrl() const { return this->logUrl_ != nullptr;};
    void deleteLogUrl() { this->logUrl_ = nullptr;};
    inline string logUrl() const { DARABONBA_PTR_GET_DEFAULT(logUrl_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoUrlConfig& setLogUrl(string logUrl) { DARABONBA_PTR_SET_VALUE(logUrl_, logUrl) };


    // objectUrl Field Functions 
    bool hasObjectUrl() const { return this->objectUrl_ != nullptr;};
    void deleteObjectUrl() { this->objectUrl_ = nullptr;};
    inline string objectUrl() const { DARABONBA_PTR_GET_DEFAULT(objectUrl_, "") };
    inline GetAlertEventResponseBodyAlertEventInfoUrlConfig& setObjectUrl(string objectUrl) { DARABONBA_PTR_SET_VALUE(objectUrl_, objectUrl) };


  protected:
    std::shared_ptr<string> alertConfigUrl_ = nullptr;
    std::shared_ptr<string> logUrl_ = nullptr;
    std::shared_ptr<string> objectUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
