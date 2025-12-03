// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESYSTEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESYSTEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFileSystemsResponseBodyFileSystems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListFileSystemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileSystemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystems, fileSystems_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFileSystemsResponseBody() = default ;
    ListFileSystemsResponseBody(const ListFileSystemsResponseBody &) = default ;
    ListFileSystemsResponseBody(ListFileSystemsResponseBody &&) = default ;
    ListFileSystemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileSystemsResponseBody() = default ;
    ListFileSystemsResponseBody& operator=(const ListFileSystemsResponseBody &) = default ;
    ListFileSystemsResponseBody& operator=(ListFileSystemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystems_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // fileSystems Field Functions 
    bool hasFileSystems() const { return this->fileSystems_ != nullptr;};
    void deleteFileSystems() { this->fileSystems_ = nullptr;};
    inline const vector<ListFileSystemsResponseBodyFileSystems> & fileSystems() const { DARABONBA_PTR_GET_CONST(fileSystems_, vector<ListFileSystemsResponseBodyFileSystems>) };
    inline vector<ListFileSystemsResponseBodyFileSystems> fileSystems() { DARABONBA_PTR_GET(fileSystems_, vector<ListFileSystemsResponseBodyFileSystems>) };
    inline ListFileSystemsResponseBody& setFileSystems(const vector<ListFileSystemsResponseBodyFileSystems> & fileSystems) { DARABONBA_PTR_SET_VALUE(fileSystems_, fileSystems) };
    inline ListFileSystemsResponseBody& setFileSystems(vector<ListFileSystemsResponseBodyFileSystems> && fileSystems) { DARABONBA_PTR_SET_RVALUE(fileSystems_, fileSystems) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFileSystemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileSystemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFileSystemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListFileSystemsResponseBodyFileSystems>> fileSystems_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
