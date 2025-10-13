// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSecretsResponseBodyDataSecrets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListSecretsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    ListSecretsResponseBodyData() = default ;
    ListSecretsResponseBodyData(const ListSecretsResponseBodyData &) = default ;
    ListSecretsResponseBodyData(ListSecretsResponseBodyData &&) = default ;
    ListSecretsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBodyData() = default ;
    ListSecretsResponseBodyData& operator=(const ListSecretsResponseBodyData &) = default ;
    ListSecretsResponseBodyData& operator=(ListSecretsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secrets_ == nullptr; };
    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<Models::ListSecretsResponseBodyDataSecrets> & secrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<Models::ListSecretsResponseBodyDataSecrets>) };
    inline vector<Models::ListSecretsResponseBodyDataSecrets> secrets() { DARABONBA_PTR_GET(secrets_, vector<Models::ListSecretsResponseBodyDataSecrets>) };
    inline ListSecretsResponseBodyData& setSecrets(const vector<Models::ListSecretsResponseBodyDataSecrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ListSecretsResponseBodyData& setSecrets(vector<Models::ListSecretsResponseBodyDataSecrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    // The Secrets.
    std::shared_ptr<vector<Models::ListSecretsResponseBodyDataSecrets>> secrets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
