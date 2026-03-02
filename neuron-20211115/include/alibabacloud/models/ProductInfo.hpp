// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isAuthorized, isAuthorized_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isAuthorized, isAuthorized_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ProductInfo() = default ;
    ProductInfo(const ProductInfo &) = default ;
    ProductInfo(ProductInfo &&) = default ;
    ProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductInfo() = default ;
    ProductInfo& operator=(const ProductInfo &) = default ;
    ProductInfo& operator=(ProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->companyId_ == nullptr && this->id_ == nullptr && this->isAuthorized_ == nullptr && this->name_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ProductInfo& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline ProductInfo& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ProductInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAuthorized Field Functions 
    bool hasIsAuthorized() const { return this->isAuthorized_ != nullptr;};
    void deleteIsAuthorized() { this->isAuthorized_ = nullptr;};
    inline bool getIsAuthorized() const { DARABONBA_PTR_GET_DEFAULT(isAuthorized_, false) };
    inline ProductInfo& setIsAuthorized(bool isAuthorized) { DARABONBA_PTR_SET_VALUE(isAuthorized_, isAuthorized) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ProductInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> isAuthorized_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
