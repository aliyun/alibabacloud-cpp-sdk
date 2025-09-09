// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKACCOUNTEXISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKACCOUNTEXISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CheckAccountExistResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAccountExistResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAccountExistResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CheckAccountExistResponseBodyData() = default ;
    CheckAccountExistResponseBodyData(const CheckAccountExistResponseBodyData &) = default ;
    CheckAccountExistResponseBodyData(CheckAccountExistResponseBodyData &&) = default ;
    CheckAccountExistResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAccountExistResponseBodyData() = default ;
    CheckAccountExistResponseBodyData& operator=(const CheckAccountExistResponseBodyData &) = default ;
    CheckAccountExistResponseBodyData& operator=(CheckAccountExistResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->nickName_ != nullptr && this->pk_ != nullptr && this->result_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CheckAccountExistResponseBodyData& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline CheckAccountExistResponseBodyData& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string pk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline CheckAccountExistResponseBodyData& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline CheckAccountExistResponseBodyData& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<string> pk_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
