// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSECRETIDSRESPONSEBODYAPPSECRETS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSECRETIDSRESPONSEBODYAPPSECRETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppSecretIdsResponseBodyAppSecretsAppSecret.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListAppSecretIdsResponseBodyAppSecrets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppSecretIdsResponseBodyAppSecrets& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppSecretIdsResponseBodyAppSecrets& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
    };
    ListAppSecretIdsResponseBodyAppSecrets() = default ;
    ListAppSecretIdsResponseBodyAppSecrets(const ListAppSecretIdsResponseBodyAppSecrets &) = default ;
    ListAppSecretIdsResponseBodyAppSecrets(ListAppSecretIdsResponseBodyAppSecrets &&) = default ;
    ListAppSecretIdsResponseBodyAppSecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppSecretIdsResponseBodyAppSecrets() = default ;
    ListAppSecretIdsResponseBodyAppSecrets& operator=(const ListAppSecretIdsResponseBodyAppSecrets &) = default ;
    ListAppSecretIdsResponseBodyAppSecrets& operator=(ListAppSecretIdsResponseBodyAppSecrets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appSecret_ != nullptr; };
    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline const vector<Models::ListAppSecretIdsResponseBodyAppSecretsAppSecret> & appSecret() const { DARABONBA_PTR_GET_CONST(appSecret_, vector<Models::ListAppSecretIdsResponseBodyAppSecretsAppSecret>) };
    inline vector<Models::ListAppSecretIdsResponseBodyAppSecretsAppSecret> appSecret() { DARABONBA_PTR_GET(appSecret_, vector<Models::ListAppSecretIdsResponseBodyAppSecretsAppSecret>) };
    inline ListAppSecretIdsResponseBodyAppSecrets& setAppSecret(const vector<Models::ListAppSecretIdsResponseBodyAppSecretsAppSecret> & appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };
    inline ListAppSecretIdsResponseBodyAppSecrets& setAppSecret(vector<Models::ListAppSecretIdsResponseBodyAppSecretsAppSecret> && appSecret) { DARABONBA_PTR_SET_RVALUE(appSecret_, appSecret) };


  protected:
    std::shared_ptr<vector<Models::ListAppSecretIdsResponseBodyAppSecretsAppSecret>> appSecret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
