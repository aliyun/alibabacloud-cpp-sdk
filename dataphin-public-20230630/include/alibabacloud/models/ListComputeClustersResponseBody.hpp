// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTECLUSTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTECLUSTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListComputeClustersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeClustersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeClustersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListComputeClustersResponseBody() = default ;
    ListComputeClustersResponseBody(const ListComputeClustersResponseBody &) = default ;
    ListComputeClustersResponseBody(ListComputeClustersResponseBody &&) = default ;
    ListComputeClustersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeClustersResponseBody() = default ;
    ListComputeClustersResponseBody& operator=(const ListComputeClustersResponseBody &) = default ;
    ListComputeClustersResponseBody& operator=(ListComputeClustersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterList, clusterList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterList, clusterList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ClusterList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(Des, des_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(ModifierName, modifierName_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(TypeVersion, typeVersion_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(Des, des_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(ModifierName, modifierName_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(TypeVersion, typeVersion_);
        };
        ClusterList() = default ;
        ClusterList(const ClusterList &) = default ;
        ClusterList(ClusterList &&) = default ;
        ClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterList() = default ;
        ClusterList& operator=(const ClusterList &) = default ;
        ClusterList& operator=(ClusterList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->creatorName_ == nullptr && this->des_ == nullptr && this->id_ == nullptr && this->modifier_ == nullptr
        && this->modifierName_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->typeVersion_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ClusterList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline ClusterList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline ClusterList& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // des Field Functions 
        bool hasDes() const { return this->des_ != nullptr;};
        void deleteDes() { this->des_ = nullptr;};
        inline string getDes() const { DARABONBA_PTR_GET_DEFAULT(des_, "") };
        inline ClusterList& setDes(string des) { DARABONBA_PTR_SET_VALUE(des_, des) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ClusterList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline ClusterList& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // modifierName Field Functions 
        bool hasModifierName() const { return this->modifierName_ != nullptr;};
        void deleteModifierName() { this->modifierName_ = nullptr;};
        inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
        inline ClusterList& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
        inline ClusterList& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ClusterList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // typeVersion Field Functions 
        bool hasTypeVersion() const { return this->typeVersion_ != nullptr;};
        void deleteTypeVersion() { this->typeVersion_ = nullptr;};
        inline string getTypeVersion() const { DARABONBA_PTR_GET_DEFAULT(typeVersion_, "") };
        inline ClusterList& setTypeVersion(string typeVersion) { DARABONBA_PTR_SET_VALUE(typeVersion_, typeVersion) };


      protected:
        // The time when the cluster was created.
        shared_ptr<string> createTime_ {};
        // The creator.
        shared_ptr<string> creator_ {};
        // The creator.
        shared_ptr<string> creatorName_ {};
        // The cluster description.
        shared_ptr<string> des_ {};
        // The cluster ID.
        shared_ptr<int64_t> id_ {};
        // The user who last modified the cluster.
        shared_ptr<string> modifier_ {};
        // The user who last modified the cluster.
        shared_ptr<string> modifierName_ {};
        // The time when the cluster was last updated.
        shared_ptr<string> modifyTime_ {};
        // The cluster name.
        shared_ptr<string> name_ {};
        // The cluster version.
        shared_ptr<string> typeVersion_ {};
      };

      virtual bool empty() const override { return this->clusterList_ == nullptr
        && this->totalCount_ == nullptr; };
      // clusterList Field Functions 
      bool hasClusterList() const { return this->clusterList_ != nullptr;};
      void deleteClusterList() { this->clusterList_ = nullptr;};
      inline const vector<PageResult::ClusterList> & getClusterList() const { DARABONBA_PTR_GET_CONST(clusterList_, vector<PageResult::ClusterList>) };
      inline vector<PageResult::ClusterList> getClusterList() { DARABONBA_PTR_GET(clusterList_, vector<PageResult::ClusterList>) };
      inline PageResult& setClusterList(const vector<PageResult::ClusterList> & clusterList) { DARABONBA_PTR_SET_VALUE(clusterList_, clusterList) };
      inline PageResult& setClusterList(vector<PageResult::ClusterList> && clusterList) { DARABONBA_PTR_SET_RVALUE(clusterList_, clusterList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The paged list of clusters.
      shared_ptr<vector<PageResult::ClusterList>> clusterList_ {};
      // The total number of records.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->pageResult_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListComputeClustersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListComputeClustersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComputeClustersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListComputeClustersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComputeClustersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListComputeClustersResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListComputeClustersResponseBody::PageResult) };
    inline ListComputeClustersResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListComputeClustersResponseBody::PageResult) };
    inline ListComputeClustersResponseBody& setPageResult(const ListComputeClustersResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListComputeClustersResponseBody& setPageResult(ListComputeClustersResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComputeClustersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListComputeClustersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The page size. Valid values: 1 to 50. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The details of the backend exception.
    shared_ptr<string> message_ {};
    // Indicates whether a token for the next query exists. If NextToken is empty, no more results are available. If NextToken is returned, the value indicates the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The paged query result.
    shared_ptr<ListComputeClustersResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
