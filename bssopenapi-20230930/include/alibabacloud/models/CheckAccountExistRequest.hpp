// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKACCOUNTEXISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKACCOUNTEXISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class CheckAccountExistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAccountExistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(ToUserType, toUserType_);
      DARABONBA_PTR_TO_JSON(TransferAccount, transferAccount_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAccountExistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(ToUserType, toUserType_);
      DARABONBA_PTR_FROM_JSON(TransferAccount, transferAccount_);
    };
    CheckAccountExistRequest() = default ;
    CheckAccountExistRequest(const CheckAccountExistRequest &) = default ;
    CheckAccountExistRequest(CheckAccountExistRequest &&) = default ;
    CheckAccountExistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAccountExistRequest() = default ;
    CheckAccountExistRequest& operator=(const CheckAccountExistRequest &) = default ;
    CheckAccountExistRequest& operator=(CheckAccountExistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcIdAccountIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcIdAccountIds& obj) { 
        DARABONBA_PTR_TO_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_TO_JSON(EcId, ecId_);
      };
      friend void from_json(const Darabonba::Json& j, EcIdAccountIds& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountIds, accountIds_);
        DARABONBA_PTR_FROM_JSON(EcId, ecId_);
      };
      EcIdAccountIds() = default ;
      EcIdAccountIds(const EcIdAccountIds &) = default ;
      EcIdAccountIds(EcIdAccountIds &&) = default ;
      EcIdAccountIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcIdAccountIds() = default ;
      EcIdAccountIds& operator=(const EcIdAccountIds &) = default ;
      EcIdAccountIds& operator=(EcIdAccountIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountIds_ == nullptr
        && this->ecId_ == nullptr; };
      // accountIds Field Functions 
      bool hasAccountIds() const { return this->accountIds_ != nullptr;};
      void deleteAccountIds() { this->accountIds_ = nullptr;};
      inline const vector<int64_t> & getAccountIds() const { DARABONBA_PTR_GET_CONST(accountIds_, vector<int64_t>) };
      inline vector<int64_t> getAccountIds() { DARABONBA_PTR_GET(accountIds_, vector<int64_t>) };
      inline EcIdAccountIds& setAccountIds(const vector<int64_t> & accountIds) { DARABONBA_PTR_SET_VALUE(accountIds_, accountIds) };
      inline EcIdAccountIds& setAccountIds(vector<int64_t> && accountIds) { DARABONBA_PTR_SET_RVALUE(accountIds_, accountIds) };


      // ecId Field Functions 
      bool hasEcId() const { return this->ecId_ != nullptr;};
      void deleteEcId() { this->ecId_ = nullptr;};
      inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
      inline EcIdAccountIds& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


    protected:
      shared_ptr<vector<int64_t>> accountIds_ {};
      // This parameter is required.
      shared_ptr<string> ecId_ {};
    };

    virtual bool empty() const override { return this->ecIdAccountIds_ == nullptr
        && this->nbid_ == nullptr && this->toUserType_ == nullptr && this->transferAccount_ == nullptr; };
    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<CheckAccountExistRequest::EcIdAccountIds> & getEcIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<CheckAccountExistRequest::EcIdAccountIds>) };
    inline vector<CheckAccountExistRequest::EcIdAccountIds> getEcIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<CheckAccountExistRequest::EcIdAccountIds>) };
    inline CheckAccountExistRequest& setEcIdAccountIds(const vector<CheckAccountExistRequest::EcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline CheckAccountExistRequest& setEcIdAccountIds(vector<CheckAccountExistRequest::EcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline CheckAccountExistRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // toUserType Field Functions 
    bool hasToUserType() const { return this->toUserType_ != nullptr;};
    void deleteToUserType() { this->toUserType_ = nullptr;};
    inline int32_t getToUserType() const { DARABONBA_PTR_GET_DEFAULT(toUserType_, 0) };
    inline CheckAccountExistRequest& setToUserType(int32_t toUserType) { DARABONBA_PTR_SET_VALUE(toUserType_, toUserType) };


    // transferAccount Field Functions 
    bool hasTransferAccount() const { return this->transferAccount_ != nullptr;};
    void deleteTransferAccount() { this->transferAccount_ = nullptr;};
    inline string getTransferAccount() const { DARABONBA_PTR_GET_DEFAULT(transferAccount_, "") };
    inline CheckAccountExistRequest& setTransferAccount(string transferAccount) { DARABONBA_PTR_SET_VALUE(transferAccount_, transferAccount) };


  protected:
    shared_ptr<vector<CheckAccountExistRequest::EcIdAccountIds>> ecIdAccountIds_ {};
    shared_ptr<string> nbid_ {};
    shared_ptr<int32_t> toUserType_ {};
    shared_ptr<string> transferAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
