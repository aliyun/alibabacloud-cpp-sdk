// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLIENTBALANCELOGDTO_HPP_
#define ALIBABACLOUD_MODELS_CLIENTBALANCELOGDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ClientBalanceLogDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClientBalanceLogDTO& obj) { 
      DARABONBA_PTR_TO_JSON(balanceAfter, balanceAfter_);
      DARABONBA_PTR_TO_JSON(balanceBefore, balanceBefore_);
      DARABONBA_PTR_TO_JSON(changeAmount, changeAmount_);
      DARABONBA_PTR_TO_JSON(changeType, changeType_);
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, ClientBalanceLogDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(balanceAfter, balanceAfter_);
      DARABONBA_PTR_FROM_JSON(balanceBefore, balanceBefore_);
      DARABONBA_PTR_FROM_JSON(changeAmount, changeAmount_);
      DARABONBA_PTR_FROM_JSON(changeType, changeType_);
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
    };
    ClientBalanceLogDTO() = default ;
    ClientBalanceLogDTO(const ClientBalanceLogDTO &) = default ;
    ClientBalanceLogDTO(ClientBalanceLogDTO &&) = default ;
    ClientBalanceLogDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClientBalanceLogDTO() = default ;
    ClientBalanceLogDTO& operator=(const ClientBalanceLogDTO &) = default ;
    ClientBalanceLogDTO& operator=(ClientBalanceLogDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->balanceAfter_ == nullptr
        && this->balanceBefore_ == nullptr && this->changeAmount_ == nullptr && this->changeType_ == nullptr && this->clientId_ == nullptr && this->gmtCreate_ == nullptr
        && this->id_ == nullptr && this->remark_ == nullptr; };
    // balanceAfter Field Functions 
    bool hasBalanceAfter() const { return this->balanceAfter_ != nullptr;};
    void deleteBalanceAfter() { this->balanceAfter_ = nullptr;};
    inline double getBalanceAfter() const { DARABONBA_PTR_GET_DEFAULT(balanceAfter_, 0.0) };
    inline ClientBalanceLogDTO& setBalanceAfter(double balanceAfter) { DARABONBA_PTR_SET_VALUE(balanceAfter_, balanceAfter) };


    // balanceBefore Field Functions 
    bool hasBalanceBefore() const { return this->balanceBefore_ != nullptr;};
    void deleteBalanceBefore() { this->balanceBefore_ = nullptr;};
    inline double getBalanceBefore() const { DARABONBA_PTR_GET_DEFAULT(balanceBefore_, 0.0) };
    inline ClientBalanceLogDTO& setBalanceBefore(double balanceBefore) { DARABONBA_PTR_SET_VALUE(balanceBefore_, balanceBefore) };


    // changeAmount Field Functions 
    bool hasChangeAmount() const { return this->changeAmount_ != nullptr;};
    void deleteChangeAmount() { this->changeAmount_ = nullptr;};
    inline double getChangeAmount() const { DARABONBA_PTR_GET_DEFAULT(changeAmount_, 0.0) };
    inline ClientBalanceLogDTO& setChangeAmount(double changeAmount) { DARABONBA_PTR_SET_VALUE(changeAmount_, changeAmount) };


    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline ClientBalanceLogDTO& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ClientBalanceLogDTO& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ClientBalanceLogDTO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ClientBalanceLogDTO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ClientBalanceLogDTO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    shared_ptr<double> balanceAfter_ {};
    shared_ptr<double> balanceBefore_ {};
    shared_ptr<double> changeAmount_ {};
    shared_ptr<string> changeType_ {};
    shared_ptr<int64_t> clientId_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
