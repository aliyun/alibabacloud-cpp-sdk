// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTDESTINATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTDESTINATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateAlertDestinationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertDestinationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(params, params_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertDestinationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(params, params_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(target, target_);
    };
    UpdateAlertDestinationRequest() = default ;
    UpdateAlertDestinationRequest(const UpdateAlertDestinationRequest &) = default ;
    UpdateAlertDestinationRequest(UpdateAlertDestinationRequest &&) = default ;
    UpdateAlertDestinationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertDestinationRequest() = default ;
    UpdateAlertDestinationRequest& operator=(const UpdateAlertDestinationRequest &) = default ;
    UpdateAlertDestinationRequest& operator=(UpdateAlertDestinationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(sec, sec_);
        DARABONBA_PTR_TO_JSON(webhook, webhook_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(sec, sec_);
        DARABONBA_PTR_FROM_JSON(webhook, webhook_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->phone_ == nullptr && this->sec_ == nullptr && this->webhook_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Params& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Params& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // sec Field Functions 
      bool hasSec() const { return this->sec_ != nullptr;};
      void deleteSec() { this->sec_ = nullptr;};
      inline string getSec() const { DARABONBA_PTR_GET_DEFAULT(sec_, "") };
      inline Params& setSec(string sec) { DARABONBA_PTR_SET_VALUE(sec_, sec) };


      // webhook Field Functions 
      bool hasWebhook() const { return this->webhook_ != nullptr;};
      void deleteWebhook() { this->webhook_ = nullptr;};
      inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
      inline Params& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


    protected:
      shared_ptr<string> email_ {};
      shared_ptr<string> phone_ {};
      shared_ptr<string> sec_ {};
      shared_ptr<string> webhook_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->params_ == nullptr && this->source_ == nullptr && this->target_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateAlertDestinationRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAlertDestinationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const UpdateAlertDestinationRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, UpdateAlertDestinationRequest::Params) };
    inline UpdateAlertDestinationRequest::Params getParams() { DARABONBA_PTR_GET(params_, UpdateAlertDestinationRequest::Params) };
    inline UpdateAlertDestinationRequest& setParams(const UpdateAlertDestinationRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline UpdateAlertDestinationRequest& setParams(UpdateAlertDestinationRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateAlertDestinationRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline UpdateAlertDestinationRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<UpdateAlertDestinationRequest::Params> params_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> target_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
