// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITREPOSITORYCONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGITREPOSITORYCONTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Contents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contents& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Contents& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Contents() = default ;
      Contents(const Contents &) = default ;
      Contents(Contents &&) = default ;
      Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contents() = default ;
      Contents& operator=(const Contents &) = default ;
      Contents& operator=(Contents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->name_ == nullptr && this->path_ == nullptr && this->type_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Contents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Contents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Contents& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Contents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> path_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->contents_ == nullptr
        && this->count_ == nullptr && this->requestId_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<ListGitRepositoryContentsResponseBody::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<ListGitRepositoryContentsResponseBody::Contents>) };
    inline vector<ListGitRepositoryContentsResponseBody::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<ListGitRepositoryContentsResponseBody::Contents>) };
    inline ListGitRepositoryContentsResponseBody& setContents(const vector<ListGitRepositoryContentsResponseBody::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline ListGitRepositoryContentsResponseBody& setContents(vector<ListGitRepositoryContentsResponseBody::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListGitRepositoryContentsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGitRepositoryContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListGitRepositoryContentsResponseBody::Contents>> contents_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
