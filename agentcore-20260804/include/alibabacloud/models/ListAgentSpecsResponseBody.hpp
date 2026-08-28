// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListAgentSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAgentSpecsResponseBody() = default ;
    ListAgentSpecsResponseBody(const ListAgentSpecsResponseBody &) = default ;
    ListAgentSpecsResponseBody(ListAgentSpecsResponseBody &&) = default ;
    ListAgentSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSpecsResponseBody() = default ;
    ListAgentSpecsResponseBody& operator=(const ListAgentSpecsResponseBody &) = default ;
    ListAgentSpecsResponseBody& operator=(ListAgentSpecsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(pageItems, pageItems_);
        DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(pagesAvailable, pagesAvailable_);
        DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(pageItems, pageItems_);
        DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(pagesAvailable, pagesAvailable_);
        DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
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
          DARABONBA_PTR_TO_JSON(bizTags, bizTags_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(downloadCount, downloadCount_);
          DARABONBA_PTR_TO_JSON(editingVersion, editingVersion_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(from, from_);
          DARABONBA_PTR_TO_JSON(labels, labels_);
          DARABONBA_PTR_TO_JSON(mcpServers, mcpServers_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(onlineCnt, onlineCnt_);
          DARABONBA_PTR_TO_JSON(reviewingVersion, reviewingVersion_);
          DARABONBA_PTR_TO_JSON(scope, scope_);
          DARABONBA_PTR_TO_JSON(skills, skills_);
          DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, PageItems& obj) { 
          DARABONBA_PTR_FROM_JSON(bizTags, bizTags_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(downloadCount, downloadCount_);
          DARABONBA_PTR_FROM_JSON(editingVersion, editingVersion_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(from, from_);
          DARABONBA_PTR_FROM_JSON(labels, labels_);
          DARABONBA_PTR_FROM_JSON(mcpServers, mcpServers_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(onlineCnt, onlineCnt_);
          DARABONBA_PTR_FROM_JSON(reviewingVersion, reviewingVersion_);
          DARABONBA_PTR_FROM_JSON(scope, scope_);
          DARABONBA_PTR_FROM_JSON(skills, skills_);
          DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
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
        class Skills : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Skills& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Skills& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          Skills() = default ;
          Skills(const Skills &) = default ;
          Skills(Skills &&) = default ;
          Skills(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Skills() = default ;
          Skills& operator=(const Skills &) = default ;
          Skills& operator=(Skills &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Skills& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The name.
          shared_ptr<string> name_ {};
        };

        class McpServers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const McpServers& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, McpServers& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          McpServers() = default ;
          McpServers(const McpServers &) = default ;
          McpServers(McpServers &&) = default ;
          McpServers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~McpServers() = default ;
          McpServers& operator=(const McpServers &) = default ;
          McpServers& operator=(McpServers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline McpServers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The name.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->bizTags_ == nullptr
        && this->description_ == nullptr && this->downloadCount_ == nullptr && this->editingVersion_ == nullptr && this->enable_ == nullptr && this->from_ == nullptr
        && this->labels_ == nullptr && this->mcpServers_ == nullptr && this->name_ == nullptr && this->onlineCnt_ == nullptr && this->reviewingVersion_ == nullptr
        && this->scope_ == nullptr && this->skills_ == nullptr && this->updateTime_ == nullptr; };
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


        // mcpServers Field Functions 
        bool hasMcpServers() const { return this->mcpServers_ != nullptr;};
        void deleteMcpServers() { this->mcpServers_ = nullptr;};
        inline const vector<PageItems::McpServers> & getMcpServers() const { DARABONBA_PTR_GET_CONST(mcpServers_, vector<PageItems::McpServers>) };
        inline vector<PageItems::McpServers> getMcpServers() { DARABONBA_PTR_GET(mcpServers_, vector<PageItems::McpServers>) };
        inline PageItems& setMcpServers(const vector<PageItems::McpServers> & mcpServers) { DARABONBA_PTR_SET_VALUE(mcpServers_, mcpServers) };
        inline PageItems& setMcpServers(vector<PageItems::McpServers> && mcpServers) { DARABONBA_PTR_SET_RVALUE(mcpServers_, mcpServers) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PageItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // onlineCnt Field Functions 
        bool hasOnlineCnt() const { return this->onlineCnt_ != nullptr;};
        void deleteOnlineCnt() { this->onlineCnt_ = nullptr;};
        inline int32_t getOnlineCnt() const { DARABONBA_PTR_GET_DEFAULT(onlineCnt_, 0) };
        inline PageItems& setOnlineCnt(int32_t onlineCnt) { DARABONBA_PTR_SET_VALUE(onlineCnt_, onlineCnt) };


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


        // skills Field Functions 
        bool hasSkills() const { return this->skills_ != nullptr;};
        void deleteSkills() { this->skills_ = nullptr;};
        inline const vector<PageItems::Skills> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<PageItems::Skills>) };
        inline vector<PageItems::Skills> getSkills() { DARABONBA_PTR_GET(skills_, vector<PageItems::Skills>) };
        inline PageItems& setSkills(const vector<PageItems::Skills> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
        inline PageItems& setSkills(vector<PageItems::Skills> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline PageItems& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The business tags.
        shared_ptr<string> bizTags_ {};
        // The description.
        shared_ptr<string> description_ {};
        // The download count.
        shared_ptr<int64_t> downloadCount_ {};
        // The version currently being edited.
        shared_ptr<string> editingVersion_ {};
        // Indicates whether the AgentSpec is enabled.
        shared_ptr<bool> enable_ {};
        // The source.
        shared_ptr<string> from_ {};
        // The version labels.
        shared_ptr<map<string, string>> labels_ {};
        // The list of MCP server references.
        shared_ptr<vector<PageItems::McpServers>> mcpServers_ {};
        // The name.
        shared_ptr<string> name_ {};
        // The number of online versions.
        shared_ptr<int32_t> onlineCnt_ {};
        // The version currently under review.
        shared_ptr<string> reviewingVersion_ {};
        // The visibility scope.
        shared_ptr<string> scope_ {};
        // The list of Skill references.
        shared_ptr<vector<PageItems::Skills>> skills_ {};
        // The update time. This value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> updateTime_ {};
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
      // The data on the current page.
      shared_ptr<vector<Data::PageItems>> pageItems_ {};
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The total number of pages.
      shared_ptr<int32_t> pagesAvailable_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAgentSpecsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAgentSpecsResponseBody::Data) };
    inline ListAgentSpecsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAgentSpecsResponseBody::Data) };
    inline ListAgentSpecsResponseBody& setData(const ListAgentSpecsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgentSpecsResponseBody& setData(ListAgentSpecsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListAgentSpecsResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
