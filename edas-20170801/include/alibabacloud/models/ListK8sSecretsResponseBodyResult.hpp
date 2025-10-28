// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sSecretsResponseBodyResultSecrets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sSecretsResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sSecretsResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sSecretsResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListK8sSecretsResponseBodyResult() = default ;
    ListK8sSecretsResponseBodyResult(const ListK8sSecretsResponseBodyResult &) = default ;
    ListK8sSecretsResponseBodyResult(ListK8sSecretsResponseBodyResult &&) = default ;
    ListK8sSecretsResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sSecretsResponseBodyResult() = default ;
    ListK8sSecretsResponseBodyResult& operator=(const ListK8sSecretsResponseBodyResult &) = default ;
    ListK8sSecretsResponseBodyResult& operator=(ListK8sSecretsResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secrets_ == nullptr
        && return this->total_ == nullptr; };
    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const vector<Models::ListK8sSecretsResponseBodyResultSecrets> & secrets() const { DARABONBA_PTR_GET_CONST(secrets_, vector<Models::ListK8sSecretsResponseBodyResultSecrets>) };
    inline vector<Models::ListK8sSecretsResponseBodyResultSecrets> secrets() { DARABONBA_PTR_GET(secrets_, vector<Models::ListK8sSecretsResponseBodyResultSecrets>) };
    inline ListK8sSecretsResponseBodyResult& setSecrets(const vector<Models::ListK8sSecretsResponseBodyResultSecrets> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline ListK8sSecretsResponseBodyResult& setSecrets(vector<Models::ListK8sSecretsResponseBodyResultSecrets> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListK8sSecretsResponseBodyResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The information about Kubernetes Secrets.
    std::shared_ptr<vector<Models::ListK8sSecretsResponseBodyResultSecrets>> secrets_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
