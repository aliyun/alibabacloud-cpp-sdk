// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNAMESPACECHANGEORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNAMESPACECHANGEORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListNamespaceChangeOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNamespaceChangeOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CoStatus, coStatus_);
      DARABONBA_PTR_TO_JSON(CoType, coType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListNamespaceChangeOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CoStatus, coStatus_);
      DARABONBA_PTR_FROM_JSON(CoType, coType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListNamespaceChangeOrdersRequest() = default ;
    ListNamespaceChangeOrdersRequest(const ListNamespaceChangeOrdersRequest &) = default ;
    ListNamespaceChangeOrdersRequest(ListNamespaceChangeOrdersRequest &&) = default ;
    ListNamespaceChangeOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNamespaceChangeOrdersRequest() = default ;
    ListNamespaceChangeOrdersRequest& operator=(const ListNamespaceChangeOrdersRequest &) = default ;
    ListNamespaceChangeOrdersRequest& operator=(ListNamespaceChangeOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coStatus_ == nullptr
        && this->coType_ == nullptr && this->currentPage_ == nullptr && this->key_ == nullptr && this->namespaceId_ == nullptr && this->pageSize_ == nullptr; };
    // coStatus Field Functions 
    bool hasCoStatus() const { return this->coStatus_ != nullptr;};
    void deleteCoStatus() { this->coStatus_ = nullptr;};
    inline string getCoStatus() const { DARABONBA_PTR_GET_DEFAULT(coStatus_, "") };
    inline ListNamespaceChangeOrdersRequest& setCoStatus(string coStatus) { DARABONBA_PTR_SET_VALUE(coStatus_, coStatus) };


    // coType Field Functions 
    bool hasCoType() const { return this->coType_ != nullptr;};
    void deleteCoType() { this->coType_ = nullptr;};
    inline string getCoType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
    inline ListNamespaceChangeOrdersRequest& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListNamespaceChangeOrdersRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListNamespaceChangeOrdersRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListNamespaceChangeOrdersRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNamespaceChangeOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // 2
    shared_ptr<string> coStatus_ {};
    // CoBatchStartApplication
    shared_ptr<string> coType_ {};
    // 1
    shared_ptr<int32_t> currentPage_ {};
    // test
    shared_ptr<string> key_ {};
    // cn-shanghai:test
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // 20
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
