// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSKILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSKILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class ListSkillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSkillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSkillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSkillsResponseBody() = default ;
    ListSkillsResponseBody(const ListSkillsResponseBody &) = default ;
    ListSkillsResponseBody(ListSkillsResponseBody &&) = default ;
    ListSkillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSkillsResponseBody() = default ;
    ListSkillsResponseBody& operator=(const ListSkillsResponseBody &) = default ;
    ListSkillsResponseBody& operator=(ListSkillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageItems, pageItems_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PagesAvailable, pagesAvailable_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageItems, pageItems_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PagesAvailable, pagesAvailable_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PageItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageItems& obj) { 
          DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DownloadCount, downloadCount_);
          DARABONBA_PTR_TO_JSON(EditingVersion, editingVersion_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(From, from_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_TO_JSON(OnlineCnt, onlineCnt_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ReviewingVersion, reviewingVersion_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(Writeable, writeable_);
        };
        friend void from_json(const Darabonba::Json& j, PageItems& obj) { 
          DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DownloadCount, downloadCount_);
          DARABONBA_PTR_FROM_JSON(EditingVersion, editingVersion_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(From, from_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
          DARABONBA_PTR_FROM_JSON(OnlineCnt, onlineCnt_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ReviewingVersion, reviewingVersion_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(Writeable, writeable_);
        };
        PageItems() = default ;
        PageItems(const PageItems &) = default ;
        PageItems(PageItems &&) = default ;
        PageItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageItems() = default ;
        PageItems& operator=(const PageItems &) = default ;
        PageItems& operator=(PageItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->description_ == nullptr && this->downloadCount_ == nullptr && this->editingVersion_ == nullptr && this->enable_ == nullptr && this->from_ == nullptr
        && this->labels_ == nullptr && this->name_ == nullptr && this->namespaceId_ == nullptr && this->onlineCnt_ == nullptr && this->owner_ == nullptr
        && this->reviewingVersion_ == nullptr && this->scope_ == nullptr && this->updateTime_ == nullptr && this->writeable_ == nullptr; };
        // bizTags Field Functions 
        bool hasBizTags() const { return this->bizTags_ != nullptr;};
        void deleteBizTags() { this->bizTags_ = nullptr;};
        inline string getBizTags() const { DARABONBA_PTR_GET_DEFAULT(bizTags_, "") };
        inline PageItems& setBizTags(string bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PageItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // downloadCount Field Functions 
        bool hasDownloadCount() const { return this->downloadCount_ != nullptr;};
        void deleteDownloadCount() { this->downloadCount_ = nullptr;};
        inline int64_t getDownloadCount() const { DARABONBA_PTR_GET_DEFAULT(downloadCount_, 0L) };
        inline PageItems& setDownloadCount(int64_t downloadCount) { DARABONBA_PTR_SET_VALUE(downloadCount_, downloadCount) };


        // editingVersion Field Functions 
        bool hasEditingVersion() const { return this->editingVersion_ != nullptr;};
        void deleteEditingVersion() { this->editingVersion_ = nullptr;};
        inline string getEditingVersion() const { DARABONBA_PTR_GET_DEFAULT(editingVersion_, "") };
        inline PageItems& setEditingVersion(string editingVersion) { DARABONBA_PTR_SET_VALUE(editingVersion_, editingVersion) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline PageItems& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // from Field Functions 
        bool hasFrom() const { return this->from_ != nullptr;};
        void deleteFrom() { this->from_ = nullptr;};
        inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
        inline PageItems& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
        inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
        inline PageItems& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline PageItems& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PageItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespaceId Field Functions 
        bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
        void deleteNamespaceId() { this->namespaceId_ = nullptr;};
        inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
        inline PageItems& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


        // onlineCnt Field Functions 
        bool hasOnlineCnt() const { return this->onlineCnt_ != nullptr;};
        void deleteOnlineCnt() { this->onlineCnt_ = nullptr;};
        inline int32_t getOnlineCnt() const { DARABONBA_PTR_GET_DEFAULT(onlineCnt_, 0) };
        inline PageItems& setOnlineCnt(int32_t onlineCnt) { DARABONBA_PTR_SET_VALUE(onlineCnt_, onlineCnt) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline PageItems& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // reviewingVersion Field Functions 
        bool hasReviewingVersion() const { return this->reviewingVersion_ != nullptr;};
        void deleteReviewingVersion() { this->reviewingVersion_ = nullptr;};
        inline string getReviewingVersion() const { DARABONBA_PTR_GET_DEFAULT(reviewingVersion_, "") };
        inline PageItems& setReviewingVersion(string reviewingVersion) { DARABONBA_PTR_SET_VALUE(reviewingVersion_, reviewingVersion) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline PageItems& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline PageItems& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // writeable Field Functions 
        bool hasWriteable() const { return this->writeable_ != nullptr;};
        void deleteWriteable() { this->writeable_ = nullptr;};
        inline bool getWriteable() const { DARABONBA_PTR_GET_DEFAULT(writeable_, false) };
        inline PageItems& setWriteable(bool writeable) { DARABONBA_PTR_SET_VALUE(writeable_, writeable) };


      protected:
        shared_ptr<string> bizTags_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> downloadCount_ {};
        shared_ptr<string> editingVersion_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<string> from_ {};
        shared_ptr<map<string, string>> labels_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> namespaceId_ {};
        shared_ptr<int32_t> onlineCnt_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> reviewingVersion_ {};
        shared_ptr<string> scope_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<bool> writeable_ {};
      };

      virtual bool empty() const override { return this->pageItems_ == nullptr
        && this->pageNumber_ == nullptr && this->pagesAvailable_ == nullptr && this->totalCount_ == nullptr; };
      // pageItems Field Functions 
      bool hasPageItems() const { return this->pageItems_ != nullptr;};
      void deletePageItems() { this->pageItems_ = nullptr;};
      inline const vector<Data::PageItems> & getPageItems() const { DARABONBA_PTR_GET_CONST(pageItems_, vector<Data::PageItems>) };
      inline vector<Data::PageItems> getPageItems() { DARABONBA_PTR_GET(pageItems_, vector<Data::PageItems>) };
      inline Data& setPageItems(const vector<Data::PageItems> & pageItems) { DARABONBA_PTR_SET_VALUE(pageItems_, pageItems) };
      inline Data& setPageItems(vector<Data::PageItems> && pageItems) { DARABONBA_PTR_SET_RVALUE(pageItems_, pageItems) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pagesAvailable Field Functions 
      bool hasPagesAvailable() const { return this->pagesAvailable_ != nullptr;};
      void deletePagesAvailable() { this->pagesAvailable_ = nullptr;};
      inline int32_t getPagesAvailable() const { DARABONBA_PTR_GET_DEFAULT(pagesAvailable_, 0) };
      inline Data& setPagesAvailable(int32_t pagesAvailable) { DARABONBA_PTR_SET_VALUE(pagesAvailable_, pagesAvailable) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::PageItems>> pageItems_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pagesAvailable_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSkillsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSkillsResponseBody::Data) };
    inline ListSkillsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSkillsResponseBody::Data) };
    inline ListSkillsResponseBody& setData(const ListSkillsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSkillsResponseBody& setData(ListSkillsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSkillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListSkillsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
