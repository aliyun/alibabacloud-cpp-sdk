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
    };
    friend void from_json(const Darabonba::Json& j, SaveReceiverDetailResponseBodyDataDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
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
    virtual bool empty() const override { this->email_ != nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SaveReceiverDetailResponseBodyDataDetail& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


  protected:
    // Recipient address.
    std::shared_ptr<string> email_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
