// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBASELINECHECKWHITERECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListBaselineCheckWhiteRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBaselineCheckWhiteRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBaselineCheckWhiteRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBaselineCheckWhiteRecordResponseBody() = default ;
    ListBaselineCheckWhiteRecordResponseBody(const ListBaselineCheckWhiteRecordResponseBody &) = default ;
    ListBaselineCheckWhiteRecordResponseBody(ListBaselineCheckWhiteRecordResponseBody &&) = default ;
    ListBaselineCheckWhiteRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBaselineCheckWhiteRecordResponseBody() = default ;
    ListBaselineCheckWhiteRecordResponseBody& operator=(const ListBaselineCheckWhiteRecordResponseBody &) = default ;
    ListBaselineCheckWhiteRecordResponseBody& operator=(ListBaselineCheckWhiteRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
        DARABONBA_PTR_TO_JSON(CheckType, checkType_);
        DARABONBA_PTR_TO_JSON(CheckTypeDisName, checkTypeDisName_);
        DARABONBA_PTR_TO_JSON(ContainerItems, containerItems_);
        DARABONBA_PTR_TO_JSON(Lang, lang_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
        DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
        DARABONBA_PTR_FROM_JSON(CheckTypeDisName, checkTypeDisName_);
        DARABONBA_PTR_FROM_JSON(ContainerItems, containerItems_);
        DARABONBA_PTR_FROM_JSON(Lang, lang_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ContainerItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContainerItems& obj) { 
          DARABONBA_PTR_TO_JSON(ContainerNames, containerNames_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, ContainerItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ContainerNames, containerNames_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        ContainerItems() = default ;
        ContainerItems(const ContainerItems &) = default ;
        ContainerItems(ContainerItems &&) = default ;
        ContainerItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContainerItems() = default ;
        ContainerItems& operator=(const ContainerItems &) = default ;
        ContainerItems& operator=(ContainerItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->containerNames_ == nullptr
        && this->uuid_ == nullptr; };
        // containerNames Field Functions 
        bool hasContainerNames() const { return this->containerNames_ != nullptr;};
        void deleteContainerNames() { this->containerNames_ = nullptr;};
        inline string getContainerNames() const { DARABONBA_PTR_GET_DEFAULT(containerNames_, "") };
        inline ContainerItems& setContainerNames(string containerNames) { DARABONBA_PTR_SET_VALUE(containerNames_, containerNames) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline ContainerItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // Names of the whitelisted containers for the current asset, separated by English commas.
        shared_ptr<string> containerNames_ {};
        // Server UUID.
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->checkItem_ == nullptr && this->checkType_ == nullptr && this->checkTypeDisName_ == nullptr && this->containerItems_ == nullptr && this->lang_ == nullptr
        && this->reason_ == nullptr && this->recordId_ == nullptr && this->source_ == nullptr && this->target_ == nullptr && this->targetType_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline List& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // checkItem Field Functions 
      bool hasCheckItem() const { return this->checkItem_ != nullptr;};
      void deleteCheckItem() { this->checkItem_ = nullptr;};
      inline string getCheckItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
      inline List& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


      // checkType Field Functions 
      bool hasCheckType() const { return this->checkType_ != nullptr;};
      void deleteCheckType() { this->checkType_ = nullptr;};
      inline string getCheckType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, "") };
      inline List& setCheckType(string checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


      // checkTypeDisName Field Functions 
      bool hasCheckTypeDisName() const { return this->checkTypeDisName_ != nullptr;};
      void deleteCheckTypeDisName() { this->checkTypeDisName_ = nullptr;};
      inline string getCheckTypeDisName() const { DARABONBA_PTR_GET_DEFAULT(checkTypeDisName_, "") };
      inline List& setCheckTypeDisName(string checkTypeDisName) { DARABONBA_PTR_SET_VALUE(checkTypeDisName_, checkTypeDisName) };


      // containerItems Field Functions 
      bool hasContainerItems() const { return this->containerItems_ != nullptr;};
      void deleteContainerItems() { this->containerItems_ = nullptr;};
      inline const vector<List::ContainerItems> & getContainerItems() const { DARABONBA_PTR_GET_CONST(containerItems_, vector<List::ContainerItems>) };
      inline vector<List::ContainerItems> getContainerItems() { DARABONBA_PTR_GET(containerItems_, vector<List::ContainerItems>) };
      inline List& setContainerItems(const vector<List::ContainerItems> & containerItems) { DARABONBA_PTR_SET_VALUE(containerItems_, containerItems) };
      inline List& setContainerItems(vector<List::ContainerItems> && containerItems) { DARABONBA_PTR_SET_RVALUE(containerItems_, containerItems) };


      // lang Field Functions 
      bool hasLang() const { return this->lang_ != nullptr;};
      void deleteLang() { this->lang_ = nullptr;};
      inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
      inline List& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline List& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline List& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline List& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline List& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline List& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The description of the check item.
      shared_ptr<string> checkItem_ {};
      // The type of the check item.
      shared_ptr<string> checkType_ {};
      // The display name of the check item type.
      shared_ptr<string> checkTypeDisName_ {};
      // List of whitelisted container names in the check item.
      shared_ptr<vector<List::ContainerItems>> containerItems_ {};
      // The language of the content within the request and response. Default value: **zh**. Valid values:
      // 
      // *   **zh**: Chinese
      // *   **en**: English
      shared_ptr<string> lang_ {};
      // The reason why the check item is added to the whitelist.
      shared_ptr<string> reason_ {};
      // The ID of the whitelist rule.
      shared_ptr<int64_t> recordId_ {};
      // The data source. Valid values:
      // 
      // *   **default**: server
      // *   **agentless**: agentless detection
      shared_ptr<string> source_ {};
      // The object that is added to the whitelist.
      shared_ptr<string> target_ {};
      // The type of the assets on which the whitelist rule takes effect. Valid values:
      // 
      // *   **all_instance**: all servers
      // *   **instance**: specific servers
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListBaselineCheckWhiteRecordResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListBaselineCheckWhiteRecordResponseBody::List>) };
    inline vector<ListBaselineCheckWhiteRecordResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListBaselineCheckWhiteRecordResponseBody::List>) };
    inline ListBaselineCheckWhiteRecordResponseBody& setList(const vector<ListBaselineCheckWhiteRecordResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListBaselineCheckWhiteRecordResponseBody& setList(vector<ListBaselineCheckWhiteRecordResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListBaselineCheckWhiteRecordResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListBaselineCheckWhiteRecordResponseBody::PageInfo) };
    inline ListBaselineCheckWhiteRecordResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListBaselineCheckWhiteRecordResponseBody::PageInfo) };
    inline ListBaselineCheckWhiteRecordResponseBody& setPageInfo(const ListBaselineCheckWhiteRecordResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListBaselineCheckWhiteRecordResponseBody& setPageInfo(ListBaselineCheckWhiteRecordResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBaselineCheckWhiteRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The whitelist rules.
    shared_ptr<vector<ListBaselineCheckWhiteRecordResponseBody::List>> list_ {};
    // The pagination information.
    shared_ptr<ListBaselineCheckWhiteRecordResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
