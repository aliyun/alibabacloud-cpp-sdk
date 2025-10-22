// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKPUSHRECEIVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKPUSHRECEIVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CheckPushReceiverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckPushReceiverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ReceiverAccount, receiverAccount_);
    };
    friend void from_json(const Darabonba::Json& j, CheckPushReceiverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ReceiverAccount, receiverAccount_);
    };
    CheckPushReceiverRequest() = default ;
    CheckPushReceiverRequest(const CheckPushReceiverRequest &) = default ;
    CheckPushReceiverRequest(CheckPushReceiverRequest &&) = default ;
    CheckPushReceiverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckPushReceiverRequest() = default ;
    CheckPushReceiverRequest& operator=(const CheckPushReceiverRequest &) = default ;
    CheckPushReceiverRequest& operator=(CheckPushReceiverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->receiverAccount_ == nullptr; };
    // receiverAccount Field Functions 
    bool hasReceiverAccount() const { return this->receiverAccount_ != nullptr;};
    void deleteReceiverAccount() { this->receiverAccount_ = nullptr;};
    inline string receiverAccount() const { DARABONBA_PTR_GET_DEFAULT(receiverAccount_, "") };
    inline CheckPushReceiverRequest& setReceiverAccount(string receiverAccount) { DARABONBA_PTR_SET_VALUE(receiverAccount_, receiverAccount) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> receiverAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
