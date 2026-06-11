// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMPTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMPTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIRegistry20260317
{
namespace Models
{
  class ListPromptsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPromptsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPromptsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPromptsResponseBody() = default ;
    ListPromptsResponseBody(const ListPromptsResponseBody &) = default ;
    ListPromptsResponseBody(ListPromptsResponseBody &&) = default ;
    ListPromptsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPromptsResponseBody() = default ;
    ListPromptsResponseBody& operator=(const ListPromptsResponseBody &) = default ;
    ListPromptsResponseBody& operator=(ListPromptsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(EditingVersion, editingVersion_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
          DARABONBA_PTR_TO_JSON(OnlineCnt, onlineCnt_);
          DARABONBA_PTR_TO_JSON(PromptKey, promptKey_);
          DARABONBA_PTR_TO_JSON(ReviewingVersion, reviewingVersion_);
          DARABONBA_PTR_TO_JSON(SchemaVersion, schemaVersion_);
        };
        friend void from_json(const Darabonba::Json& j, PageItems& obj) { 
          DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EditingVersion, editingVersion_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
          DARABONBA_PTR_FROM_JSON(OnlineCnt, onlineCnt_);
          DARABONBA_PTR_FROM_JSON(PromptKey, promptKey_);
          DARABONBA_PTR_FROM_JSON(ReviewingVersion, reviewingVersion_);
          DARABONBA_PTR_FROM_JSON(SchemaVersion, schemaVersion_);
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
        && this->description_ == nullptr && this->editingVersion_ == nullptr && this->gmtModified_ == nullptr && this->labels_ == nullptr && this->latestVersion_ == nullptr
        && this->onlineCnt_ == nullptr && this->promptKey_ == nullptr && this->reviewingVersion_ == nullptr && this->schemaVersion_ == nullptr; };
        // bizTags Field Functions 
        bool hasBizTags() const { return this->bizTags_ != nullptr;};
        void deleteBizTags() { this->bizTags_ = nullptr;};
        inline const vector<string> & getBizTags() const { DARABONBA_PTR_GET_CONST(bizTags_, vector<string>) };
        inline vector<string> getBizTags() { DARABONBA_PTR_GET(bizTags_, vector<string>) };
        inline PageItems& setBizTags(const vector<string> & bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };
        inline PageItems& setBizTags(vector<string> && bizTags) { DARABONBA_PTR_SET_RVALUE(bizTags_, bizTags) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PageItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // editingVersion Field Functions 
        bool hasEditingVersion() const { return this->editingVersion_ != nullptr;};
        void deleteEditingVersion() { this->editingVersion_ = nullptr;};
        inline string getEditingVersion() const { DARABONBA_PTR_GET_DEFAULT(editingVersion_, "") };
        inline PageItems& setEditingVersion(string editingVersion) { DARABONBA_PTR_SET_VALUE(editingVersion_, editingVersion) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline PageItems& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
        inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
        inline PageItems& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline PageItems& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // latestVersion Field Functions 
        bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
        void deleteLatestVersion() { this->latestVersion_ = nullptr;};
        inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
        inline PageItems& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


        // onlineCnt Field Functions 
        bool hasOnlineCnt() const { return this->onlineCnt_ != nullptr;};
        void deleteOnlineCnt() { this->onlineCnt_ = nullptr;};
        inline int32_t getOnlineCnt() const { DARABONBA_PTR_GET_DEFAULT(onlineCnt_, 0) };
        inline PageItems& setOnlineCnt(int32_t onlineCnt) { DARABONBA_PTR_SET_VALUE(onlineCnt_, onlineCnt) };


        // promptKey Field Functions 
        bool hasPromptKey() const { return this->promptKey_ != nullptr;};
        void deletePromptKey() { this->promptKey_ = nullptr;};
        inline string getPromptKey() const { DARABONBA_PTR_GET_DEFAULT(promptKey_, "") };
        inline PageItems& setPromptKey(string promptKey) { DARABONBA_PTR_SET_VALUE(promptKey_, promptKey) };


        // reviewingVersion Field Functions 
        bool hasReviewingVersion() const { return this->reviewingVersion_ != nullptr;};
        void deleteReviewingVersion() { this->reviewingVersion_ = nullptr;};
        inline string getReviewingVersion() const { DARABONBA_PTR_GET_DEFAULT(reviewingVersion_, "") };
        inline PageItems& setReviewingVersion(string reviewingVersion) { DARABONBA_PTR_SET_VALUE(reviewingVersion_, reviewingVersion) };


        // schemaVersion Field Functions 
        bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
        void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
        inline int32_t getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, 0) };
        inline PageItems& setSchemaVersion(int32_t schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


      protected:
        shared_ptr<vector<string>> bizTags_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> editingVersion_ {};
        shared_ptr<int64_t> gmtModified_ {};
        shared_ptr<map<string, string>> labels_ {};
        shared_ptr<string> latestVersion_ {};
        shared_ptr<int32_t> onlineCnt_ {};
        shared_ptr<string> promptKey_ {};
        shared_ptr<string> reviewingVersion_ {};
        shared_ptr<int32_t> schemaVersion_ {};
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
    inline const ListPromptsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPromptsResponseBody::Data) };
    inline ListPromptsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPromptsResponseBody::Data) };
    inline ListPromptsResponseBody& setData(const ListPromptsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPromptsResponseBody& setData(ListPromptsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPromptsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListPromptsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIRegistry20260317
#endif
