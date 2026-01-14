// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANUALRUNMAILTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MANUALRUNMAILTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ManualRunMailTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManualRunMailTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MailId, mailId_);
    };
    friend void from_json(const Darabonba::Json& j, ManualRunMailTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MailId, mailId_);
    };
    ManualRunMailTaskRequest() = default ;
    ManualRunMailTaskRequest(const ManualRunMailTaskRequest &) = default ;
    ManualRunMailTaskRequest(ManualRunMailTaskRequest &&) = default ;
    ManualRunMailTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManualRunMailTaskRequest() = default ;
    ManualRunMailTaskRequest& operator=(const ManualRunMailTaskRequest &) = default ;
    ManualRunMailTaskRequest& operator=(ManualRunMailTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mailId_ == nullptr; };
    // mailId Field Functions 
    bool hasMailId() const { return this->mailId_ != nullptr;};
    void deleteMailId() { this->mailId_ = nullptr;};
    inline string getMailId() const { DARABONBA_PTR_GET_DEFAULT(mailId_, "") };
    inline ManualRunMailTaskRequest& setMailId(string mailId) { DARABONBA_PTR_SET_VALUE(mailId_, mailId) };


  protected:
    // The ID of the email task in the subscription management interface.
    // 
    // This parameter is required.
    shared_ptr<string> mailId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
