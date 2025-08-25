// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTURNCREDENTIALSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTURNCREDENTIALSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetTurnCredentialsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTurnCredentialsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTurnCredentialsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GetTurnCredentialsResponseBodyData() = default ;
    GetTurnCredentialsResponseBodyData(const GetTurnCredentialsResponseBodyData &) = default ;
    GetTurnCredentialsResponseBodyData(GetTurnCredentialsResponseBodyData &&) = default ;
    GetTurnCredentialsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTurnCredentialsResponseBodyData() = default ;
    GetTurnCredentialsResponseBodyData& operator=(const GetTurnCredentialsResponseBodyData &) = default ;
    GetTurnCredentialsResponseBodyData& operator=(GetTurnCredentialsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->password_ != nullptr
        && this->userName_ != nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GetTurnCredentialsResponseBodyData& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetTurnCredentialsResponseBodyData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
