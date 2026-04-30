// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLIENTBALANCEDTO_HPP_
#define ALIBABACLOUD_MODELS_CLIENTBALANCEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ClientBalanceDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClientBalanceDTO& obj) { 
      DARABONBA_PTR_TO_JSON(balance, balance_);
      DARABONBA_PTR_TO_JSON(balanceType, balanceType_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(enableBalance, enableBalance_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ClientBalanceDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(balance, balance_);
      DARABONBA_PTR_FROM_JSON(balanceType, balanceType_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(enableBalance, enableBalance_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    ClientBalanceDTO() = default ;
    ClientBalanceDTO(const ClientBalanceDTO &) = default ;
    ClientBalanceDTO(ClientBalanceDTO &&) = default ;
    ClientBalanceDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClientBalanceDTO() = default ;
    ClientBalanceDTO& operator=(const ClientBalanceDTO &) = default ;
    ClientBalanceDTO& operator=(ClientBalanceDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balance_ == nullptr
        && this->balanceType_ == nullptr && this->clientId_ == nullptr && this->enableBalance_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr; };
    // balance Field Functions 
    bool hasBalance() const { return this->balance_ != nullptr;};
    void deleteBalance() { this->balance_ = nullptr;};
    inline double getBalance() const { DARABONBA_PTR_GET_DEFAULT(balance_, 0.0) };
    inline ClientBalanceDTO& setBalance(double balance) { DARABONBA_PTR_SET_VALUE(balance_, balance) };


    // balanceType Field Functions 
    bool hasBalanceType() const { return this->balanceType_ != nullptr;};
    void deleteBalanceType() { this->balanceType_ = nullptr;};
    inline string getBalanceType() const { DARABONBA_PTR_GET_DEFAULT(balanceType_, "") };
    inline ClientBalanceDTO& setBalanceType(string balanceType) { DARABONBA_PTR_SET_VALUE(balanceType_, balanceType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ClientBalanceDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // enableBalance Field Functions 
    bool hasEnableBalance() const { return this->enableBalance_ != nullptr;};
    void deleteEnableBalance() { this->enableBalance_ = nullptr;};
    inline bool getEnableBalance() const { DARABONBA_PTR_GET_DEFAULT(enableBalance_, false) };
    inline ClientBalanceDTO& setEnableBalance(bool enableBalance) { DARABONBA_PTR_SET_VALUE(enableBalance_, enableBalance) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ClientBalanceDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ClientBalanceDTO& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ClientBalanceDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<double> balance_ {};
    shared_ptr<string> balanceType_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<bool> enableBalance_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    // ID
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
