// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    GetInstanceAccountRequest() = default ;
    GetInstanceAccountRequest(const GetInstanceAccountRequest &) = default ;
    GetInstanceAccountRequest(GetInstanceAccountRequest &&) = default ;
    GetInstanceAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAccountRequest() = default ;
    GetInstanceAccountRequest& operator=(const GetInstanceAccountRequest &) = default ;
    GetInstanceAccountRequest& operator=(GetInstanceAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->username_ != nullptr; };
    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetInstanceAccountRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The username of the account.
    // 
    // If you do not configure this parameter, the default username of the instance is used.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
