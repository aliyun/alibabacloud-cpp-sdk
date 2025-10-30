// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDBATCHAXGRESPONSEBODYSECRETBINDLIST_HPP_
#define ALIBABACLOUD_MODELS_BINDBATCHAXGRESPONSEBODYSECRETBINDLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BindBatchAxgResponseBodySecretBindListSecretBind.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindBatchAxgResponseBodySecretBindList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindBatchAxgResponseBodySecretBindList& obj) { 
      DARABONBA_PTR_TO_JSON(SecretBind, secretBind_);
    };
    friend void from_json(const Darabonba::Json& j, BindBatchAxgResponseBodySecretBindList& obj) { 
      DARABONBA_PTR_FROM_JSON(SecretBind, secretBind_);
    };
    BindBatchAxgResponseBodySecretBindList() = default ;
    BindBatchAxgResponseBodySecretBindList(const BindBatchAxgResponseBodySecretBindList &) = default ;
    BindBatchAxgResponseBodySecretBindList(BindBatchAxgResponseBodySecretBindList &&) = default ;
    BindBatchAxgResponseBodySecretBindList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindBatchAxgResponseBodySecretBindList() = default ;
    BindBatchAxgResponseBodySecretBindList& operator=(const BindBatchAxgResponseBodySecretBindList &) = default ;
    BindBatchAxgResponseBodySecretBindList& operator=(BindBatchAxgResponseBodySecretBindList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->secretBind_ == nullptr; };
    // secretBind Field Functions 
    bool hasSecretBind() const { return this->secretBind_ != nullptr;};
    void deleteSecretBind() { this->secretBind_ = nullptr;};
    inline const vector<Models::BindBatchAxgResponseBodySecretBindListSecretBind> & secretBind() const { DARABONBA_PTR_GET_CONST(secretBind_, vector<Models::BindBatchAxgResponseBodySecretBindListSecretBind>) };
    inline vector<Models::BindBatchAxgResponseBodySecretBindListSecretBind> secretBind() { DARABONBA_PTR_GET(secretBind_, vector<Models::BindBatchAxgResponseBodySecretBindListSecretBind>) };
    inline BindBatchAxgResponseBodySecretBindList& setSecretBind(const vector<Models::BindBatchAxgResponseBodySecretBindListSecretBind> & secretBind) { DARABONBA_PTR_SET_VALUE(secretBind_, secretBind) };
    inline BindBatchAxgResponseBodySecretBindList& setSecretBind(vector<Models::BindBatchAxgResponseBodySecretBindListSecretBind> && secretBind) { DARABONBA_PTR_SET_RVALUE(secretBind_, secretBind) };


  protected:
    std::shared_ptr<vector<Models::BindBatchAxgResponseBodySecretBindListSecretBind>> secretBind_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
