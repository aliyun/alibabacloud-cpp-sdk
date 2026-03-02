// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISETRANSFERCMD_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISETRANSFERCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class EnterpriseTransferCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseTransferCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseTransferCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    EnterpriseTransferCmd() = default ;
    EnterpriseTransferCmd(const EnterpriseTransferCmd &) = default ;
    EnterpriseTransferCmd(EnterpriseTransferCmd &&) = default ;
    EnterpriseTransferCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseTransferCmd() = default ;
    EnterpriseTransferCmd& operator=(const EnterpriseTransferCmd &) = default ;
    EnterpriseTransferCmd& operator=(EnterpriseTransferCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->id_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline EnterpriseTransferCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline EnterpriseTransferCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
