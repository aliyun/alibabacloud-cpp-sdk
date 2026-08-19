// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINITEMSRESPONSEBODY_HPP_
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
  class ListDomainItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainItems, domainItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainItems, domainItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListDomainItemsResponseBody() = default ;
    ListDomainItemsResponseBody(const ListDomainItemsResponseBody &) = default ;
    ListDomainItemsResponseBody(ListDomainItemsResponseBody &&) = default ;
    ListDomainItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainItemsResponseBody() = default ;
    ListDomainItemsResponseBody& operator=(const ListDomainItemsResponseBody &) = default ;
    ListDomainItemsResponseBody& operator=(ListDomainItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainItems& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
        DARABONBA_PTR_TO_JSON(ItemValue, itemValue_);
      };
      friend void from_json(const Darabonba::Json& j, DomainItems& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
        DARABONBA_PTR_FROM_JSON(ItemValue, itemValue_);
      };
      DomainItems() = default ;
      DomainItems(const DomainItems &) = default ;
      DomainItems(DomainItems &&) = default ;
      DomainItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainItems() = default ;
      DomainItems& operator=(const DomainItems &) = default ;
      DomainItems& operator=(DomainItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->itemId_ == nullptr && this->itemValue_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline DomainItems& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline DomainItems& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
      inline DomainItems& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // itemValue Field Functions 
      bool hasItemValue() const { return this->itemValue_ != nullptr;};
      void deleteItemValue() { this->itemValue_ = nullptr;};
      inline string getItemValue() const { DARABONBA_PTR_GET_DEFAULT(itemValue_, "") };
      inline DomainItems& setItemValue(string itemValue) { DARABONBA_PTR_SET_VALUE(itemValue_, itemValue) };


    protected:
      // The time when the entry was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the entry was last modified.
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> itemId_ {};
      // The domain name. Wildcard domain names are supported.
      shared_ptr<string> itemValue_ {};
    };

    virtual bool empty() const override { return this->domainItems_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // domainItems Field Functions 
    bool hasDomainItems() const { return this->domainItems_ != nullptr;};
    void deleteDomainItems() { this->domainItems_ = nullptr;};
    inline const vector<ListDomainItemsResponseBody::DomainItems> & getDomainItems() const { DARABONBA_PTR_GET_CONST(domainItems_, vector<ListDomainItemsResponseBody::DomainItems>) };
    inline vector<ListDomainItemsResponseBody::DomainItems> getDomainItems() { DARABONBA_PTR_GET(domainItems_, vector<ListDomainItemsResponseBody::DomainItems>) };
    inline ListDomainItemsResponseBody& setDomainItems(const vector<ListDomainItemsResponseBody::DomainItems> & domainItems) { DARABONBA_PTR_SET_VALUE(domainItems_, domainItems) };
    inline ListDomainItemsResponseBody& setDomainItems(vector<ListDomainItemsResponseBody::DomainItems> && domainItems) { DARABONBA_PTR_SET_RVALUE(domainItems_, domainItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListDomainItemsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The list of domain name entries.
    shared_ptr<vector<ListDomainItemsResponseBody::DomainItems>> domainItems_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of records that match the specified conditions. This is an optional parameter and may not be returned by default.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
