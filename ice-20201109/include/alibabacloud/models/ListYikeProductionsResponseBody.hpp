// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTYIKEPRODUCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTYIKEPRODUCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListYikeProductionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListYikeProductionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductionList, productionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListYikeProductionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductionList, productionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListYikeProductionsResponseBody() = default ;
    ListYikeProductionsResponseBody(const ListYikeProductionsResponseBody &) = default ;
    ListYikeProductionsResponseBody(ListYikeProductionsResponseBody &&) = default ;
    ListYikeProductionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListYikeProductionsResponseBody() = default ;
    ListYikeProductionsResponseBody& operator=(const ListYikeProductionsResponseBody &) = default ;
    ListYikeProductionsResponseBody& operator=(ListYikeProductionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductionList& obj) { 
        DARABONBA_PTR_TO_JSON(Auth, auth_);
        DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, ProductionList& obj) { 
        DARABONBA_PTR_FROM_JSON(Auth, auth_);
        DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUserName, createUserName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      ProductionList() = default ;
      ProductionList(const ProductionList &) = default ;
      ProductionList(ProductionList &&) = default ;
      ProductionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductionList() = default ;
      ProductionList& operator=(const ProductionList &) = default ;
      ProductionList& operator=(ProductionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auth_ == nullptr
        && this->coverUrl_ == nullptr && this->createTime_ == nullptr && this->createUserName_ == nullptr && this->description_ == nullptr && this->productionId_ == nullptr
        && this->title_ == nullptr && this->workspaceId_ == nullptr; };
      // auth Field Functions 
      bool hasAuth() const { return this->auth_ != nullptr;};
      void deleteAuth() { this->auth_ = nullptr;};
      inline string getAuth() const { DARABONBA_PTR_GET_DEFAULT(auth_, "") };
      inline ProductionList& setAuth(string auth) { DARABONBA_PTR_SET_VALUE(auth_, auth) };


      // coverUrl Field Functions 
      bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
      void deleteCoverUrl() { this->coverUrl_ = nullptr;};
      inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
      inline ProductionList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProductionList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUserName Field Functions 
      bool hasCreateUserName() const { return this->createUserName_ != nullptr;};
      void deleteCreateUserName() { this->createUserName_ = nullptr;};
      inline string getCreateUserName() const { DARABONBA_PTR_GET_DEFAULT(createUserName_, "") };
      inline ProductionList& setCreateUserName(string createUserName) { DARABONBA_PTR_SET_VALUE(createUserName_, createUserName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductionList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // productionId Field Functions 
      bool hasProductionId() const { return this->productionId_ != nullptr;};
      void deleteProductionId() { this->productionId_ = nullptr;};
      inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
      inline ProductionList& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ProductionList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline ProductionList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> auth_ {};
      shared_ptr<string> coverUrl_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> createUserName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> productionId_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->productionList_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListYikeProductionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListYikeProductionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productionList Field Functions 
    bool hasProductionList() const { return this->productionList_ != nullptr;};
    void deleteProductionList() { this->productionList_ = nullptr;};
    inline const vector<ListYikeProductionsResponseBody::ProductionList> & getProductionList() const { DARABONBA_PTR_GET_CONST(productionList_, vector<ListYikeProductionsResponseBody::ProductionList>) };
    inline vector<ListYikeProductionsResponseBody::ProductionList> getProductionList() { DARABONBA_PTR_GET(productionList_, vector<ListYikeProductionsResponseBody::ProductionList>) };
    inline ListYikeProductionsResponseBody& setProductionList(const vector<ListYikeProductionsResponseBody::ProductionList> & productionList) { DARABONBA_PTR_SET_VALUE(productionList_, productionList) };
    inline ListYikeProductionsResponseBody& setProductionList(vector<ListYikeProductionsResponseBody::ProductionList> && productionList) { DARABONBA_PTR_SET_RVALUE(productionList_, productionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListYikeProductionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListYikeProductionsResponseBody::ProductionList>> productionList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
