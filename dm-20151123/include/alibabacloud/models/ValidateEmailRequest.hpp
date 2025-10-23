// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class ValidateEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    ValidateEmailRequest() = default ;
    ValidateEmailRequest(const ValidateEmailRequest &) = default ;
    ValidateEmailRequest(ValidateEmailRequest &&) = default ;
    ValidateEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateEmailRequest() = default ;
    ValidateEmailRequest& operator=(const ValidateEmailRequest &) = default ;
    ValidateEmailRequest& operator=(ValidateEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->timeout_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ValidateEmailRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline ValidateEmailRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
