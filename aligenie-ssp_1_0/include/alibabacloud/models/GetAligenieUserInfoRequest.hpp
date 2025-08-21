// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIGENIEUSERINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIGENIEUSERINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAligenieUserInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAligenieUserInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoginStateAccessToken, loginStateAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetAligenieUserInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoginStateAccessToken, loginStateAccessToken_);
    };
    GetAligenieUserInfoRequest() = default ;
    GetAligenieUserInfoRequest(const GetAligenieUserInfoRequest &) = default ;
    GetAligenieUserInfoRequest(GetAligenieUserInfoRequest &&) = default ;
    GetAligenieUserInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAligenieUserInfoRequest() = default ;
    GetAligenieUserInfoRequest& operator=(const GetAligenieUserInfoRequest &) = default ;
    GetAligenieUserInfoRequest& operator=(GetAligenieUserInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loginStateAccessToken_ != nullptr; };
    // loginStateAccessToken Field Functions 
    bool hasLoginStateAccessToken() const { return this->loginStateAccessToken_ != nullptr;};
    void deleteLoginStateAccessToken() { this->loginStateAccessToken_ = nullptr;};
    inline string loginStateAccessToken() const { DARABONBA_PTR_GET_DEFAULT(loginStateAccessToken_, "") };
    inline GetAligenieUserInfoRequest& setLoginStateAccessToken(string loginStateAccessToken) { DARABONBA_PTR_SET_VALUE(loginStateAccessToken_, loginStateAccessToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> loginStateAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
