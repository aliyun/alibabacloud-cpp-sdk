// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERIDBYEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERIDBYEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserIdByEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserIdByEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(email, email_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserIdByEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(email, email_);
    };
    GetUserIdByEmailRequest() = default ;
    GetUserIdByEmailRequest(const GetUserIdByEmailRequest &) = default ;
    GetUserIdByEmailRequest(GetUserIdByEmailRequest &&) = default ;
    GetUserIdByEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserIdByEmailRequest() = default ;
    GetUserIdByEmailRequest& operator=(const GetUserIdByEmailRequest &) = default ;
    GetUserIdByEmailRequest& operator=(GetUserIdByEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserIdByEmailRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


  protected:
    // The email address of the user who owns the account.
    // 
    // This parameter is required.
    std::shared_ptr<string> email_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
