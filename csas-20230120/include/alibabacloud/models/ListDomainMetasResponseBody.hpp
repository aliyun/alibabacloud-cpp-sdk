// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINMETASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINMETASRESPONSEBODY_HPP_
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
  class ListDomainMetasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainMetasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainMetas, domainMetas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainMetasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainMetas, domainMetas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListDomainMetasResponseBody() = default ;
    ListDomainMetasResponseBody(const ListDomainMetasResponseBody &) = default ;
    ListDomainMetasResponseBody(ListDomainMetasResponseBody &&) = default ;
    ListDomainMetasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainMetasResponseBody() = default ;
    ListDomainMetasResponseBody& operator=(const ListDomainMetasResponseBody &) = default ;
    ListDomainMetasResponseBody& operator=(ListDomainMetasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainMetas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainMetas& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ItemCount, itemCount_);
        DARABONBA_PTR_TO_JSON(ListId, listId_);
        DARABONBA_PTR_TO_JSON(ListType, listType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      };
      friend void from_json(const Darabonba::Json& j, DomainMetas& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ItemCount, itemCount_);
        DARABONBA_PTR_FROM_JSON(ListId, listId_);
        DARABONBA_PTR_FROM_JSON(ListType, listType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      };
      DomainMetas() = default ;
      DomainMetas(const DomainMetas &) = default ;
      DomainMetas(DomainMetas &&) = default ;
      DomainMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainMetas() = default ;
      DomainMetas& operator=(const DomainMetas &) = default ;
      DomainMetas& operator=(DomainMetas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->itemCount_ == nullptr && this->listId_ == nullptr && this->listType_ == nullptr && this->name_ == nullptr
        && this->resourceId_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline DomainMetas& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline DomainMetas& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // itemCount Field Functions 
      bool hasItemCount() const { return this->itemCount_ != nullptr;};
      void deleteItemCount() { this->itemCount_ = nullptr;};
      inline int64_t getItemCount() const { DARABONBA_PTR_GET_DEFAULT(itemCount_, 0L) };
      inline DomainMetas& setItemCount(int64_t itemCount) { DARABONBA_PTR_SET_VALUE(itemCount_, itemCount) };


      // listId Field Functions 
      bool hasListId() const { return this->listId_ != nullptr;};
      void deleteListId() { this->listId_ = nullptr;};
      inline string getListId() const { DARABONBA_PTR_GET_DEFAULT(listId_, "") };
      inline DomainMetas& setListId(string listId) { DARABONBA_PTR_SET_VALUE(listId_, listId) };


      // listType Field Functions 
      bool hasListType() const { return this->listType_ != nullptr;};
      void deleteListType() { this->listType_ = nullptr;};
      inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
      inline DomainMetas& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DomainMetas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline DomainMetas& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    protected:
      // The time when the list was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the list was last modified.
      shared_ptr<string> gmtModified_ {};
      // The number of domain name entries in the list.
      shared_ptr<int64_t> itemCount_ {};
      // The list ID, which is a unique business identifier used for policy references and CRUD operations.
      shared_ptr<string> listId_ {};
      // The list type.
      shared_ptr<string> listType_ {};
      // The list name.
      shared_ptr<string> name_ {};
      // The resource ID.
      shared_ptr<string> resourceId_ {};
    };

    virtual bool empty() const override { return this->domainMetas_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // domainMetas Field Functions 
    bool hasDomainMetas() const { return this->domainMetas_ != nullptr;};
    void deleteDomainMetas() { this->domainMetas_ = nullptr;};
    inline const vector<ListDomainMetasResponseBody::DomainMetas> & getDomainMetas() const { DARABONBA_PTR_GET_CONST(domainMetas_, vector<ListDomainMetasResponseBody::DomainMetas>) };
    inline vector<ListDomainMetasResponseBody::DomainMetas> getDomainMetas() { DARABONBA_PTR_GET(domainMetas_, vector<ListDomainMetasResponseBody::DomainMetas>) };
    inline ListDomainMetasResponseBody& setDomainMetas(const vector<ListDomainMetasResponseBody::DomainMetas> & domainMetas) { DARABONBA_PTR_SET_VALUE(domainMetas_, domainMetas) };
    inline ListDomainMetasResponseBody& setDomainMetas(vector<ListDomainMetasResponseBody::DomainMetas> && domainMetas) { DARABONBA_PTR_SET_RVALUE(domainMetas_, domainMetas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainMetasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListDomainMetasResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The list of domain name lists.
    shared_ptr<vector<ListDomainMetasResponseBody::DomainMetas>> domainMetas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of lists that match the specified conditions.
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
