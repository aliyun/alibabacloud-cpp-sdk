// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NEURONAPPBIZUSER_HPP_
#define ALIBABACLOUD_MODELS_NEURONAPPBIZUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class NeuronAppBizUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NeuronAppBizUser& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(permission, permission_);
    };
    friend void from_json(const Darabonba::Json& j, NeuronAppBizUser& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(permission, permission_);
    };
    NeuronAppBizUser() = default ;
    NeuronAppBizUser(const NeuronAppBizUser &) = default ;
    NeuronAppBizUser(NeuronAppBizUser &&) = default ;
    NeuronAppBizUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NeuronAppBizUser() = default ;
    NeuronAppBizUser& operator=(const NeuronAppBizUser &) = default ;
    NeuronAppBizUser& operator=(NeuronAppBizUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->bizId_ == nullptr && this->permission_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline NeuronAppBizUser& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline NeuronAppBizUser& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline NeuronAppBizUser& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


  protected:
    shared_ptr<int64_t> accountId_ {};
    shared_ptr<string> bizId_ {};
    shared_ptr<string> permission_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
