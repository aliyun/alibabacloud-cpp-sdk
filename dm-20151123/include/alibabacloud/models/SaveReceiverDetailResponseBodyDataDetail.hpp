// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSEBODYDATADETAIL_HPP_
#define ALIBABACLOUD_MODELS_SAVERECEIVERDETAILRESPONSEBODYDATADETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SaveReceiverDetailResponseBodyDataDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveReceiverDetailResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
    };
    friend void from_json(const Darabonba::Json& j, SaveReceiverDetailResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
    };
    SaveReceiverDetailResponseBodyDataDetail() = default ;
    SaveReceiverDetailResponseBodyDataDetail(const SaveReceiverDetailResponseBodyDataDetail &) = default ;
    SaveReceiverDetailResponseBodyDataDetail(SaveReceiverDetailResponseBodyDataDetail &&) = default ;
    SaveReceiverDetailResponseBodyDataDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveReceiverDetailResponseBodyDataDetail() = default ;
    SaveReceiverDetailResponseBodyDataDetail& operator=(const SaveReceiverDetailResponseBodyDataDetail &) = default ;
    SaveReceiverDetailResponseBodyDataDetail& operator=(SaveReceiverDetailResponseBodyDataDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->errMessage_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SaveReceiverDetailResponseBodyDataDetail& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline SaveReceiverDetailResponseBodyDataDetail& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


  protected:
    // Recipient address.
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
