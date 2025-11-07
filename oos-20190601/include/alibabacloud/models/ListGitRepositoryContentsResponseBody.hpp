// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITREPOSITORYCONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITREPOSITORYCONTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGitRepositoryContentsResponseBodyContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitRepositoryContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitRepositoryContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitRepositoryContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListGitRepositoryContentsResponseBody() = default ;
    ListGitRepositoryContentsResponseBody(const ListGitRepositoryContentsResponseBody &) = default ;
    ListGitRepositoryContentsResponseBody(ListGitRepositoryContentsResponseBody &&) = default ;
    ListGitRepositoryContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitRepositoryContentsResponseBody() = default ;
    ListGitRepositoryContentsResponseBody& operator=(const ListGitRepositoryContentsResponseBody &) = default ;
    ListGitRepositoryContentsResponseBody& operator=(ListGitRepositoryContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contents_ == nullptr
        && return this->count_ == nullptr && return this->requestId_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<ListGitRepositoryContentsResponseBodyContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<ListGitRepositoryContentsResponseBodyContents>) };
    inline vector<ListGitRepositoryContentsResponseBodyContents> contents() { DARABONBA_PTR_GET(contents_, vector<ListGitRepositoryContentsResponseBodyContents>) };
    inline ListGitRepositoryContentsResponseBody& setContents(const vector<ListGitRepositoryContentsResponseBodyContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline ListGitRepositoryContentsResponseBody& setContents(vector<ListGitRepositoryContentsResponseBodyContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitRepositoryContentsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitRepositoryContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListGitRepositoryContentsResponseBodyContents>> contents_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
