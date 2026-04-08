// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListExtensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExtensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExtensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListExtensionsResponseBody() = default ;
    ListExtensionsResponseBody(const ListExtensionsResponseBody &) = default ;
    ListExtensionsResponseBody(ListExtensionsResponseBody &&) = default ;
    ListExtensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExtensionsResponseBody() = default ;
    ListExtensionsResponseBody& operator=(const ListExtensionsResponseBody &) = default ;
    ListExtensionsResponseBody& operator=(ListExtensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Extensions, extensions_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Extensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Extensions& obj) { 
          DARABONBA_PTR_TO_JSON(BindEventList, bindEventList_);
          DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
          DARABONBA_PTR_TO_JSON(ExtensionDesc, extensionDesc_);
          DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Extensions& obj) { 
          DARABONBA_PTR_FROM_JSON(BindEventList, bindEventList_);
          DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
          DARABONBA_PTR_FROM_JSON(ExtensionDesc, extensionDesc_);
          DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Extensions() = default ;
        Extensions(const Extensions &) = default ;
        Extensions(Extensions &&) = default ;
        Extensions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Extensions() = default ;
        Extensions& operator=(const Extensions &) = default ;
        Extensions& operator=(Extensions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BindEventList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BindEventList& obj) { 
            DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
            DARABONBA_PTR_TO_JSON(EventName, eventName_);
          };
          friend void from_json(const Darabonba::Json& j, BindEventList& obj) { 
            DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
            DARABONBA_PTR_FROM_JSON(EventName, eventName_);
          };
          BindEventList() = default ;
          BindEventList(const BindEventList &) = default ;
          BindEventList(BindEventList &&) = default ;
          BindEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BindEventList() = default ;
          BindEventList& operator=(const BindEventList &) = default ;
          BindEventList& operator=(BindEventList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventName_ == nullptr; };
          // eventCode Field Functions 
          bool hasEventCode() const { return this->eventCode_ != nullptr;};
          void deleteEventCode() { this->eventCode_ = nullptr;};
          inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
          inline BindEventList& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


          // eventName Field Functions 
          bool hasEventName() const { return this->eventName_ != nullptr;};
          void deleteEventName() { this->eventName_ = nullptr;};
          inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
          inline BindEventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


        protected:
          // The code of the event.
          shared_ptr<string> eventCode_ {};
          // The name of the event.
          shared_ptr<string> eventName_ {};
        };

        virtual bool empty() const override { return this->bindEventList_ == nullptr
        && this->extensionCode_ == nullptr && this->extensionDesc_ == nullptr && this->extensionName_ == nullptr && this->owner_ == nullptr && this->status_ == nullptr; };
        // bindEventList Field Functions 
        bool hasBindEventList() const { return this->bindEventList_ != nullptr;};
        void deleteBindEventList() { this->bindEventList_ = nullptr;};
        inline const vector<Extensions::BindEventList> & getBindEventList() const { DARABONBA_PTR_GET_CONST(bindEventList_, vector<Extensions::BindEventList>) };
        inline vector<Extensions::BindEventList> getBindEventList() { DARABONBA_PTR_GET(bindEventList_, vector<Extensions::BindEventList>) };
        inline Extensions& setBindEventList(const vector<Extensions::BindEventList> & bindEventList) { DARABONBA_PTR_SET_VALUE(bindEventList_, bindEventList) };
        inline Extensions& setBindEventList(vector<Extensions::BindEventList> && bindEventList) { DARABONBA_PTR_SET_RVALUE(bindEventList_, bindEventList) };


        // extensionCode Field Functions 
        bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
        void deleteExtensionCode() { this->extensionCode_ = nullptr;};
        inline string getExtensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
        inline Extensions& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


        // extensionDesc Field Functions 
        bool hasExtensionDesc() const { return this->extensionDesc_ != nullptr;};
        void deleteExtensionDesc() { this->extensionDesc_ = nullptr;};
        inline string getExtensionDesc() const { DARABONBA_PTR_GET_DEFAULT(extensionDesc_, "") };
        inline Extensions& setExtensionDesc(string extensionDesc) { DARABONBA_PTR_SET_VALUE(extensionDesc_, extensionDesc) };


        // extensionName Field Functions 
        bool hasExtensionName() const { return this->extensionName_ != nullptr;};
        void deleteExtensionName() { this->extensionName_ = nullptr;};
        inline string getExtensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
        inline Extensions& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Extensions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Extensions& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The list of extension point events.
        shared_ptr<vector<Extensions::BindEventList>> bindEventList_ {};
        // The unique code of the extension.
        shared_ptr<string> extensionCode_ {};
        // The description of the extension.
        shared_ptr<string> extensionDesc_ {};
        // The name of the extension.
        shared_ptr<string> extensionName_ {};
        // The ID of the RAM user.
        shared_ptr<string> owner_ {};
        // The state of the extension. Valid values: 0: Testing 1: Publishing 3: Disabled 4: Processing 5: Approved 6: Approve Failed
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->extensions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // extensions Field Functions 
      bool hasExtensions() const { return this->extensions_ != nullptr;};
      void deleteExtensions() { this->extensions_ = nullptr;};
      inline const vector<PagingInfo::Extensions> & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, vector<PagingInfo::Extensions>) };
      inline vector<PagingInfo::Extensions> getExtensions() { DARABONBA_PTR_GET(extensions_, vector<PagingInfo::Extensions>) };
      inline PagingInfo& setExtensions(const vector<PagingInfo::Extensions> & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
      inline PagingInfo& setExtensions(vector<PagingInfo::Extensions> && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of extensions.
      shared_ptr<vector<PagingInfo::Extensions>> extensions_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListExtensionsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListExtensionsResponseBody::PagingInfo) };
    inline ListExtensionsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListExtensionsResponseBody::PagingInfo) };
    inline ListExtensionsResponseBody& setPagingInfo(const ListExtensionsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListExtensionsResponseBody& setPagingInfo(ListExtensionsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListExtensionsResponseBody::PagingInfo> pagingInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
