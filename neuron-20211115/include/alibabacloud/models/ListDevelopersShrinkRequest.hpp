// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVELOPERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVELOPERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListDevelopersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDevelopersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accountIds, accountIdsShrink_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(roleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDevelopersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accountIds, accountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(roleId, roleId_);
    };
    ListDevelopersShrinkRequest() = default ;
    ListDevelopersShrinkRequest(const ListDevelopersShrinkRequest &) = default ;
    ListDevelopersShrinkRequest(ListDevelopersShrinkRequest &&) = default ;
    ListDevelopersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDevelopersShrinkRequest() = default ;
    ListDevelopersShrinkRequest& operator=(const ListDevelopersShrinkRequest &) = default ;
    ListDevelopersShrinkRequest& operator=(ListDevelopersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIdsShrink_ == nullptr
        && this->enterpriseId_ == nullptr && this->name_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->roleId_ == nullptr; };
    // accountIdsShrink Field Functions 
    bool hasAccountIdsShrink() const { return this->accountIdsShrink_ != nullptr;};
    void deleteAccountIdsShrink() { this->accountIdsShrink_ = nullptr;};
    inline string getAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(accountIdsShrink_, "") };
    inline ListDevelopersShrinkRequest& setAccountIdsShrink(string accountIdsShrink) { DARABONBA_PTR_SET_VALUE(accountIdsShrink_, accountIdsShrink) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ListDevelopersShrinkRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDevelopersShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListDevelopersShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListDevelopersShrinkRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDevelopersShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDevelopersShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline ListDevelopersShrinkRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    shared_ptr<string> accountIdsShrink_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
