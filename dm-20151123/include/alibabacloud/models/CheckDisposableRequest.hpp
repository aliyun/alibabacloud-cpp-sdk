// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDISPOSABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDISPOSABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class CheckDisposableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDisposableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDisposableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
    };
    CheckDisposableRequest() = default ;
    CheckDisposableRequest(const CheckDisposableRequest &) = default ;
    CheckDisposableRequest(CheckDisposableRequest &&) = default ;
    CheckDisposableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDisposableRequest() = default ;
    CheckDisposableRequest& operator=(const CheckDisposableRequest &) = default ;
    CheckDisposableRequest& operator=(CheckDisposableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CheckDisposableRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


  protected:
    shared_ptr<string> email_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
