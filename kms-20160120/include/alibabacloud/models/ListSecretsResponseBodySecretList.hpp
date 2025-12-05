// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYSECRETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYSECRETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecretsResponseBodySecretListSecret.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretsResponseBodySecretList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBodySecretList& obj) { 
      DARABONBA_PTR_TO_JSON(Secret, secret_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBodySecretList& obj) { 
      DARABONBA_PTR_FROM_JSON(Secret, secret_);
    };
    ListSecretsResponseBodySecretList() = default ;
    ListSecretsResponseBodySecretList(const ListSecretsResponseBodySecretList &) = default ;
    ListSecretsResponseBodySecretList(ListSecretsResponseBodySecretList &&) = default ;
    ListSecretsResponseBodySecretList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBodySecretList() = default ;
    ListSecretsResponseBodySecretList& operator=(const ListSecretsResponseBodySecretList &) = default ;
    ListSecretsResponseBodySecretList& operator=(ListSecretsResponseBodySecretList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secret_ == nullptr; };
    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline const vector<Models::ListSecretsResponseBodySecretListSecret> & secret() const { DARABONBA_PTR_GET_CONST(secret_, vector<Models::ListSecretsResponseBodySecretListSecret>) };
    inline vector<Models::ListSecretsResponseBodySecretListSecret> secret() { DARABONBA_PTR_GET(secret_, vector<Models::ListSecretsResponseBodySecretListSecret>) };
    inline ListSecretsResponseBodySecretList& setSecret(const vector<Models::ListSecretsResponseBodySecretListSecret> & secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };
    inline ListSecretsResponseBodySecretList& setSecret(vector<Models::ListSecretsResponseBodySecretListSecret> && secret) { DARABONBA_PTR_SET_RVALUE(secret_, secret) };


  protected:
    std::shared_ptr<vector<Models::ListSecretsResponseBodySecretListSecret>> secret_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
