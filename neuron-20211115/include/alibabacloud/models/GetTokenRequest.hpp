// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class GetTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
    };
    GetTokenRequest() = default ;
    GetTokenRequest(const GetTokenRequest &) = default ;
    GetTokenRequest(GetTokenRequest &&) = default ;
    GetTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenRequest() = default ;
    GetTokenRequest& operator=(const GetTokenRequest &) = default ;
    GetTokenRequest& operator=(GetTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->pbcId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetTokenRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline GetTokenRequest& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<int64_t> pbcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
