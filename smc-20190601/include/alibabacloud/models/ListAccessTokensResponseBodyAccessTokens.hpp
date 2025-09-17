// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSTOKENSRESPONSEBODYACCESSTOKENS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSTOKENSRESPONSEBODYACCESSTOKENS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccessTokensResponseBodyAccessTokensAccessToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class ListAccessTokensResponseBodyAccessTokens : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessTokensResponseBodyAccessTokens& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessTokensResponseBodyAccessTokens& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
    };
    ListAccessTokensResponseBodyAccessTokens() = default ;
    ListAccessTokensResponseBodyAccessTokens(const ListAccessTokensResponseBodyAccessTokens &) = default ;
    ListAccessTokensResponseBodyAccessTokens(ListAccessTokensResponseBodyAccessTokens &&) = default ;
    ListAccessTokensResponseBodyAccessTokens(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessTokensResponseBodyAccessTokens() = default ;
    ListAccessTokensResponseBodyAccessTokens& operator=(const ListAccessTokensResponseBodyAccessTokens &) = default ;
    ListAccessTokensResponseBodyAccessTokens& operator=(ListAccessTokensResponseBodyAccessTokens &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline const vector<Models::ListAccessTokensResponseBodyAccessTokensAccessToken> & accessToken() const { DARABONBA_PTR_GET_CONST(accessToken_, vector<Models::ListAccessTokensResponseBodyAccessTokensAccessToken>) };
    inline vector<Models::ListAccessTokensResponseBodyAccessTokensAccessToken> accessToken() { DARABONBA_PTR_GET(accessToken_, vector<Models::ListAccessTokensResponseBodyAccessTokensAccessToken>) };
    inline ListAccessTokensResponseBodyAccessTokens& setAccessToken(const vector<Models::ListAccessTokensResponseBodyAccessTokensAccessToken> & accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };
    inline ListAccessTokensResponseBodyAccessTokens& setAccessToken(vector<Models::ListAccessTokensResponseBodyAccessTokensAccessToken> && accessToken) { DARABONBA_PTR_SET_RVALUE(accessToken_, accessToken) };


  protected:
    std::shared_ptr<vector<Models::ListAccessTokensResponseBodyAccessTokensAccessToken>> accessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
