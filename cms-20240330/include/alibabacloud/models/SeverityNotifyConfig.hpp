// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEVERITYNOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SEVERITYNOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DirectNotifyReceiver.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SeverityNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SeverityNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(receivers, receivers_);
      DARABONBA_PTR_TO_JSON(sendRecoverNotification, sendRecoverNotification_);
    };
    friend void from_json(const Darabonba::Json& j, SeverityNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(receivers, receivers_);
      DARABONBA_PTR_FROM_JSON(sendRecoverNotification, sendRecoverNotification_);
    };
    SeverityNotifyConfig() = default ;
    SeverityNotifyConfig(const SeverityNotifyConfig &) = default ;
    SeverityNotifyConfig(SeverityNotifyConfig &&) = default ;
    SeverityNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SeverityNotifyConfig() = default ;
    SeverityNotifyConfig& operator=(const SeverityNotifyConfig &) = default ;
    SeverityNotifyConfig& operator=(SeverityNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->receivers_ == nullptr
        && this->sendRecoverNotification_ == nullptr; };
    // receivers Field Functions 
    bool hasReceivers() const { return this->receivers_ != nullptr;};
    void deleteReceivers() { this->receivers_ = nullptr;};
    inline const vector<DirectNotifyReceiver> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<DirectNotifyReceiver>) };
    inline vector<DirectNotifyReceiver> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<DirectNotifyReceiver>) };
    inline SeverityNotifyConfig& setReceivers(const vector<DirectNotifyReceiver> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
    inline SeverityNotifyConfig& setReceivers(vector<DirectNotifyReceiver> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    // sendRecoverNotification Field Functions 
    bool hasSendRecoverNotification() const { return this->sendRecoverNotification_ != nullptr;};
    void deleteSendRecoverNotification() { this->sendRecoverNotification_ = nullptr;};
    inline bool getSendRecoverNotification() const { DARABONBA_PTR_GET_DEFAULT(sendRecoverNotification_, false) };
    inline SeverityNotifyConfig& setSendRecoverNotification(bool sendRecoverNotification) { DARABONBA_PTR_SET_VALUE(sendRecoverNotification_, sendRecoverNotification) };


  protected:
    shared_ptr<vector<DirectNotifyReceiver>> receivers_ {};
    shared_ptr<bool> sendRecoverNotification_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
