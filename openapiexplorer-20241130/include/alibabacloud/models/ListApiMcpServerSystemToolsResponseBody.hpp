// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSYSTEMTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIMCPSERVERSYSTEMTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiMcpServerSystemToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiMcpServerSystemToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(systemTools, systemTools_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiMcpServerSystemToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(systemTools, systemTools_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListApiMcpServerSystemToolsResponseBody() = default ;
    ListApiMcpServerSystemToolsResponseBody(const ListApiMcpServerSystemToolsResponseBody &) = default ;
    ListApiMcpServerSystemToolsResponseBody(ListApiMcpServerSystemToolsResponseBody &&) = default ;
    ListApiMcpServerSystemToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiMcpServerSystemToolsResponseBody() = default ;
    ListApiMcpServerSystemToolsResponseBody& operator=(const ListApiMcpServerSystemToolsResponseBody &) = default ;
    ListApiMcpServerSystemToolsResponseBody& operator=(ListApiMcpServerSystemToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemTools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemTools& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, SystemTools& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      SystemTools() = default ;
      SystemTools(const SystemTools &) = default ;
      SystemTools(SystemTools &&) = default ;
      SystemTools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemTools() = default ;
      SystemTools& operator=(const SystemTools &) = default ;
      SystemTools& operator=(SystemTools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SystemTools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SystemTools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The description of the system tool.
      shared_ptr<string> description_ {};
      // The name of the system tool.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->systemTools_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListApiMcpServerSystemToolsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApiMcpServerSystemToolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiMcpServerSystemToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemTools Field Functions 
    bool hasSystemTools() const { return this->systemTools_ != nullptr;};
    void deleteSystemTools() { this->systemTools_ = nullptr;};
    inline const vector<ListApiMcpServerSystemToolsResponseBody::SystemTools> & getSystemTools() const { DARABONBA_PTR_GET_CONST(systemTools_, vector<ListApiMcpServerSystemToolsResponseBody::SystemTools>) };
    inline vector<ListApiMcpServerSystemToolsResponseBody::SystemTools> getSystemTools() { DARABONBA_PTR_GET(systemTools_, vector<ListApiMcpServerSystemToolsResponseBody::SystemTools>) };
    inline ListApiMcpServerSystemToolsResponseBody& setSystemTools(const vector<ListApiMcpServerSystemToolsResponseBody::SystemTools> & systemTools) { DARABONBA_PTR_SET_VALUE(systemTools_, systemTools) };
    inline ListApiMcpServerSystemToolsResponseBody& setSystemTools(vector<ListApiMcpServerSystemToolsResponseBody::SystemTools> && systemTools) { DARABONBA_PTR_SET_RVALUE(systemTools_, systemTools) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListApiMcpServerSystemToolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries to return on each page. The maximum value is 100. The default value is 20.
    shared_ptr<int32_t> maxResults_ {};
    // The NextToken value. Use this value to retrieve more results.
    // 
    // > If this parameter is not returned, no more results are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of system tools.
    shared_ptr<vector<ListApiMcpServerSystemToolsResponseBody::SystemTools>> systemTools_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
