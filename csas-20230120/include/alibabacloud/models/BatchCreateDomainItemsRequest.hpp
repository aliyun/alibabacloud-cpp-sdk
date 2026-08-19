// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEDOMAINITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEDOMAINITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class BatchCreateDomainItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateDomainItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainItems, domainItems_);
      DARABONBA_PTR_TO_JSON(ListId, listId_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateDomainItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainItems, domainItems_);
      DARABONBA_PTR_FROM_JSON(ListId, listId_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
    };
    BatchCreateDomainItemsRequest() = default ;
    BatchCreateDomainItemsRequest(const BatchCreateDomainItemsRequest &) = default ;
    BatchCreateDomainItemsRequest(BatchCreateDomainItemsRequest &&) = default ;
    BatchCreateDomainItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateDomainItemsRequest() = default ;
    BatchCreateDomainItemsRequest& operator=(const BatchCreateDomainItemsRequest &) = default ;
    BatchCreateDomainItemsRequest& operator=(BatchCreateDomainItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainItems_ == nullptr
        && this->listId_ == nullptr && this->listType_ == nullptr; };
    // domainItems Field Functions 
    bool hasDomainItems() const { return this->domainItems_ != nullptr;};
    void deleteDomainItems() { this->domainItems_ = nullptr;};
    inline const vector<string> & getDomainItems() const { DARABONBA_PTR_GET_CONST(domainItems_, vector<string>) };
    inline vector<string> getDomainItems() { DARABONBA_PTR_GET(domainItems_, vector<string>) };
    inline BatchCreateDomainItemsRequest& setDomainItems(const vector<string> & domainItems) { DARABONBA_PTR_SET_VALUE(domainItems_, domainItems) };
    inline BatchCreateDomainItemsRequest& setDomainItems(vector<string> && domainItems) { DARABONBA_PTR_SET_RVALUE(domainItems_, domainItems) };


    // listId Field Functions 
    bool hasListId() const { return this->listId_ != nullptr;};
    void deleteListId() { this->listId_ = nullptr;};
    inline string getListId() const { DARABONBA_PTR_GET_DEFAULT(listId_, "") };
    inline BatchCreateDomainItemsRequest& setListId(string listId) { DARABONBA_PTR_SET_VALUE(listId_, listId) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline BatchCreateDomainItemsRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


  protected:
    // The domain name list.
    shared_ptr<vector<string>> domainItems_ {};
    // The list ID. This is a unique business identifier used for policy references and add, delete, and modify operations.
    shared_ptr<string> listId_ {};
    // The list type (Blacklist/Whitelist).
    shared_ptr<string> listType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
