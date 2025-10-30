// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYSECRETS_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYSECRETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecretsResponseBodySecretsSecrets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSecretsResponseBodySecrets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBodySecrets& obj) { 
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBodySecrets& obj) { 
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    ListSecretsResponseBodySecrets() = default ;
    ListSecretsResponseBodySecrets(const ListSecretsResponseBodySecrets &) = default ;
    ListSecretsResponseBodySecrets(ListSecretsResponseBodySecrets &&) = default ;
    ListSecretsResponseBodySecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBodySecrets() = default ;
    ListSecretsResponseBodySecrets& operator=(const ListSecretsResponseBodySecrets &) = default ;
    ListSecretsResponseBodySecrets& operator=(ListSecretsResponseBodySecrets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secrets_ == nullptr; };
    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<Models::ListSecretsResponseBodySecretsSecrets> & secrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<Models::ListSecretsResponseBodySecretsSecrets>) };
    inline vector<Models::ListSecretsResponseBodySecretsSecrets> secrets() { DARABONBA_PTR_GET(secrets_, vector<Models::ListSecretsResponseBodySecretsSecrets>) };
    inline ListSecretsResponseBodySecrets& setSecrets(const vector<Models::ListSecretsResponseBodySecretsSecrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ListSecretsResponseBodySecrets& setSecrets(vector<Models::ListSecretsResponseBodySecretsSecrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    std::shared_ptr<vector<Models::ListSecretsResponseBodySecretsSecrets>> secrets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
