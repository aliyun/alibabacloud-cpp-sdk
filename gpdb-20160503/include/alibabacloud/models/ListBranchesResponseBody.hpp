// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBRANCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBRANCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListBranchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBranchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Branches, branches_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBranchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Branches, branches_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBranchesResponseBody() = default ;
    ListBranchesResponseBody(const ListBranchesResponseBody &) = default ;
    ListBranchesResponseBody(ListBranchesResponseBody &&) = default ;
    ListBranchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBranchesResponseBody() = default ;
    ListBranchesResponseBody& operator=(const ListBranchesResponseBody &) = default ;
    ListBranchesResponseBody& operator=(ListBranchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Branches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Branches& obj) { 
        DARABONBA_PTR_TO_JSON(Branch, branch_);
      };
      friend void from_json(const Darabonba::Json& j, Branches& obj) { 
        DARABONBA_PTR_FROM_JSON(Branch, branch_);
      };
      Branches() = default ;
      Branches(const Branches &) = default ;
      Branches(Branches &&) = default ;
      Branches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Branches() = default ;
      Branches& operator=(const Branches &) = default ;
      Branches& operator=(Branches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Branch : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Branch& obj) { 
          DARABONBA_PTR_TO_JSON(BranchId, branchId_);
          DARABONBA_PTR_TO_JSON(BranchName, branchName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
          DARABONBA_PTR_TO_JSON(InitSource, initSource_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(ParentBranchId, parentBranchId_);
          DARABONBA_PTR_TO_JSON(ParentBranchName, parentBranchName_);
          DARABONBA_PTR_TO_JSON(ParentLSN, parentLSN_);
          DARABONBA_PTR_TO_JSON(ParentTimestamp, parentTimestamp_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Protected, protected_);
          DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, Branch& obj) { 
          DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
          DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
          DARABONBA_PTR_FROM_JSON(InitSource, initSource_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(ParentBranchId, parentBranchId_);
          DARABONBA_PTR_FROM_JSON(ParentBranchName, parentBranchName_);
          DARABONBA_PTR_FROM_JSON(ParentLSN, parentLSN_);
          DARABONBA_PTR_FROM_JSON(ParentTimestamp, parentTimestamp_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Protected, protected_);
          DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        Branch() = default ;
        Branch(const Branch &) = default ;
        Branch(Branch &&) = default ;
        Branch(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Branch() = default ;
        Branch& operator=(const Branch &) = default ;
        Branch& operator=(Branch &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        virtual bool empty() const override { return this->branchId_ == nullptr
        && this->branchName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->expiresAt_ == nullptr && this->initSource_ == nullptr
        && this->isDefault_ == nullptr && this->parentBranchId_ == nullptr && this->parentBranchName_ == nullptr && this->parentLSN_ == nullptr && this->parentTimestamp_ == nullptr
        && this->projectId_ == nullptr && this->protected_ == nullptr && this->serviceType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
        // branchId Field Functions 
        bool hasBranchId() const { return this->branchId_ != nullptr;};
        void deleteBranchId() { this->branchId_ = nullptr;};
        inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
        inline Branch& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


        // branchName Field Functions 
        bool hasBranchName() const { return this->branchName_ != nullptr;};
        void deleteBranchName() { this->branchName_ = nullptr;};
        inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
        inline Branch& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Branch& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Branch& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // expiresAt Field Functions 
        bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
        void deleteExpiresAt() { this->expiresAt_ = nullptr;};
        inline string getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, "") };
        inline Branch& setExpiresAt(string expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


        // initSource Field Functions 
        bool hasInitSource() const { return this->initSource_ != nullptr;};
        void deleteInitSource() { this->initSource_ = nullptr;};
        inline string getInitSource() const { DARABONBA_PTR_GET_DEFAULT(initSource_, "") };
        inline Branch& setInitSource(string initSource) { DARABONBA_PTR_SET_VALUE(initSource_, initSource) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline Branch& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // parentBranchId Field Functions 
        bool hasParentBranchId() const { return this->parentBranchId_ != nullptr;};
        void deleteParentBranchId() { this->parentBranchId_ = nullptr;};
        inline string getParentBranchId() const { DARABONBA_PTR_GET_DEFAULT(parentBranchId_, "") };
        inline Branch& setParentBranchId(string parentBranchId) { DARABONBA_PTR_SET_VALUE(parentBranchId_, parentBranchId) };


        // parentBranchName Field Functions 
        bool hasParentBranchName() const { return this->parentBranchName_ != nullptr;};
        void deleteParentBranchName() { this->parentBranchName_ = nullptr;};
        inline string getParentBranchName() const { DARABONBA_PTR_GET_DEFAULT(parentBranchName_, "") };
        inline Branch& setParentBranchName(string parentBranchName) { DARABONBA_PTR_SET_VALUE(parentBranchName_, parentBranchName) };


        // parentLSN Field Functions 
        bool hasParentLSN() const { return this->parentLSN_ != nullptr;};
        void deleteParentLSN() { this->parentLSN_ = nullptr;};
        inline string getParentLSN() const { DARABONBA_PTR_GET_DEFAULT(parentLSN_, "") };
        inline Branch& setParentLSN(string parentLSN) { DARABONBA_PTR_SET_VALUE(parentLSN_, parentLSN) };


        // parentTimestamp Field Functions 
        bool hasParentTimestamp() const { return this->parentTimestamp_ != nullptr;};
        void deleteParentTimestamp() { this->parentTimestamp_ = nullptr;};
        inline string getParentTimestamp() const { DARABONBA_PTR_GET_DEFAULT(parentTimestamp_, "") };
        inline Branch& setParentTimestamp(string parentTimestamp) { DARABONBA_PTR_SET_VALUE(parentTimestamp_, parentTimestamp) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline Branch& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // protected Field Functions 
        bool hasProtected() const { return this->protected_ != nullptr;};
        void deleteProtected() { this->protected_ = nullptr;};
        inline bool getProtected() const { DARABONBA_PTR_GET_DEFAULT(protected_, false) };
        inline Branch& setProtected(bool _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
        inline Branch& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Branch& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Branch::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Branch::Tags) };
        inline Branch::Tags getTags() { DARABONBA_PTR_GET(tags_, Branch::Tags) };
        inline Branch& setTags(const Branch::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Branch& setTags(Branch::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        shared_ptr<string> branchId_ {};
        shared_ptr<string> branchName_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> expiresAt_ {};
        shared_ptr<string> initSource_ {};
        shared_ptr<bool> isDefault_ {};
        shared_ptr<string> parentBranchId_ {};
        shared_ptr<string> parentBranchName_ {};
        shared_ptr<string> parentLSN_ {};
        shared_ptr<string> parentTimestamp_ {};
        shared_ptr<string> projectId_ {};
        shared_ptr<bool> protected_ {};
        shared_ptr<string> serviceType_ {};
        shared_ptr<string> status_ {};
        shared_ptr<Branch::Tags> tags_ {};
      };

      virtual bool empty() const override { return this->branch_ == nullptr; };
      // branch Field Functions 
      bool hasBranch() const { return this->branch_ != nullptr;};
      void deleteBranch() { this->branch_ = nullptr;};
      inline const vector<Branches::Branch> & getBranch() const { DARABONBA_PTR_GET_CONST(branch_, vector<Branches::Branch>) };
      inline vector<Branches::Branch> getBranch() { DARABONBA_PTR_GET(branch_, vector<Branches::Branch>) };
      inline Branches& setBranch(const vector<Branches::Branch> & branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };
      inline Branches& setBranch(vector<Branches::Branch> && branch) { DARABONBA_PTR_SET_RVALUE(branch_, branch) };


    protected:
      shared_ptr<vector<Branches::Branch>> branch_ {};
    };

    virtual bool empty() const override { return this->branches_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // branches Field Functions 
    bool hasBranches() const { return this->branches_ != nullptr;};
    void deleteBranches() { this->branches_ = nullptr;};
    inline const ListBranchesResponseBody::Branches & getBranches() const { DARABONBA_PTR_GET_CONST(branches_, ListBranchesResponseBody::Branches) };
    inline ListBranchesResponseBody::Branches getBranches() { DARABONBA_PTR_GET(branches_, ListBranchesResponseBody::Branches) };
    inline ListBranchesResponseBody& setBranches(const ListBranchesResponseBody::Branches & branches) { DARABONBA_PTR_SET_VALUE(branches_, branches) };
    inline ListBranchesResponseBody& setBranches(ListBranchesResponseBody::Branches && branches) { DARABONBA_PTR_SET_RVALUE(branches_, branches) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListBranchesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBranchesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBranchesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBranchesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBranchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBranchesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListBranchesResponseBody::Branches> branches_ {};
    // The maximum number of records returned in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. It is not required for the first query. For subsequent queries, use the NextToken returned from the previous query.
    shared_ptr<string> nextToken_ {};
    // The page number. The value must be greater than 0. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    // 
    // Valid values:
    // - 10
    // - 20
    // - 50
    // - 100
    // 
    // Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of branches that match the query conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
