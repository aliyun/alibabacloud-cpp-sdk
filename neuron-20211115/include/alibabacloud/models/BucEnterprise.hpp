// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BUCENTERPRISE_HPP_
#define ALIBABACLOUD_MODELS_BUCENTERPRISE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class BucEnterprise : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BucEnterprise& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(codeupEnterpriseId, codeupEnterpriseId_);
      DARABONBA_PTR_TO_JSON(codeupNamespaceId, codeupNamespaceId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, BucEnterprise& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(codeupEnterpriseId, codeupEnterpriseId_);
      DARABONBA_PTR_FROM_JSON(codeupNamespaceId, codeupNamespaceId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    BucEnterprise() = default ;
    BucEnterprise(const BucEnterprise &) = default ;
    BucEnterprise(BucEnterprise &&) = default ;
    BucEnterprise(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BucEnterprise() = default ;
    BucEnterprise& operator=(const BucEnterprise &) = default ;
    BucEnterprise& operator=(BucEnterprise &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->codeupEnterpriseId_ == nullptr && this->codeupNamespaceId_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->type_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline BucEnterprise& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // codeupEnterpriseId Field Functions 
    bool hasCodeupEnterpriseId() const { return this->codeupEnterpriseId_ != nullptr;};
    void deleteCodeupEnterpriseId() { this->codeupEnterpriseId_ = nullptr;};
    inline string getCodeupEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(codeupEnterpriseId_, "") };
    inline BucEnterprise& setCodeupEnterpriseId(string codeupEnterpriseId) { DARABONBA_PTR_SET_VALUE(codeupEnterpriseId_, codeupEnterpriseId) };


    // codeupNamespaceId Field Functions 
    bool hasCodeupNamespaceId() const { return this->codeupNamespaceId_ != nullptr;};
    void deleteCodeupNamespaceId() { this->codeupNamespaceId_ = nullptr;};
    inline int64_t getCodeupNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(codeupNamespaceId_, 0L) };
    inline BucEnterprise& setCodeupNamespaceId(int64_t codeupNamespaceId) { DARABONBA_PTR_SET_VALUE(codeupNamespaceId_, codeupNamespaceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BucEnterprise& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline BucEnterprise& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BucEnterprise& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BucEnterprise& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> codeupEnterpriseId_ {};
    shared_ptr<int64_t> codeupNamespaceId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
