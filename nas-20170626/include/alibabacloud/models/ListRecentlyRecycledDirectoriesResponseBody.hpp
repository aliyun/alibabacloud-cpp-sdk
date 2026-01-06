// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTLYRECYCLEDDIRECTORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTLYRECYCLEDDIRECTORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListRecentlyRecycledDirectoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentlyRecycledDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Entries, entries_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentlyRecycledDirectoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Entries, entries_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecentlyRecycledDirectoriesResponseBody() = default ;
    ListRecentlyRecycledDirectoriesResponseBody(const ListRecentlyRecycledDirectoriesResponseBody &) = default ;
    ListRecentlyRecycledDirectoriesResponseBody(ListRecentlyRecycledDirectoriesResponseBody &&) = default ;
    ListRecentlyRecycledDirectoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentlyRecycledDirectoriesResponseBody() = default ;
    ListRecentlyRecycledDirectoriesResponseBody& operator=(const ListRecentlyRecycledDirectoriesResponseBody &) = default ;
    ListRecentlyRecycledDirectoriesResponseBody& operator=(ListRecentlyRecycledDirectoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Entries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Entries& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(LastDeleteTime, lastDeleteTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, Entries& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(LastDeleteTime, lastDeleteTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      Entries() = default ;
      Entries(const Entries &) = default ;
      Entries(Entries &&) = default ;
      Entries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Entries() = default ;
      Entries& operator=(const Entries &) = default ;
      Entries& operator=(Entries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->lastDeleteTime_ == nullptr && this->name_ == nullptr && this->path_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Entries& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // lastDeleteTime Field Functions 
      bool hasLastDeleteTime() const { return this->lastDeleteTime_ != nullptr;};
      void deleteLastDeleteTime() { this->lastDeleteTime_ = nullptr;};
      inline string getLastDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(lastDeleteTime_, "") };
      inline Entries& setLastDeleteTime(string lastDeleteTime) { DARABONBA_PTR_SET_VALUE(lastDeleteTime_, lastDeleteTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Entries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Entries& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The ID of the directory.
      shared_ptr<string> fileId_ {};
      // The time when the directory was last deleted.
      shared_ptr<string> lastDeleteTime_ {};
      // The name of the directory.
      shared_ptr<string> name_ {};
      // The absolute path to the directory.
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->entries_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // entries Field Functions 
    bool hasEntries() const { return this->entries_ != nullptr;};
    void deleteEntries() { this->entries_ = nullptr;};
    inline const vector<ListRecentlyRecycledDirectoriesResponseBody::Entries> & getEntries() const { DARABONBA_PTR_GET_CONST(entries_, vector<ListRecentlyRecycledDirectoriesResponseBody::Entries>) };
    inline vector<ListRecentlyRecycledDirectoriesResponseBody::Entries> getEntries() { DARABONBA_PTR_GET(entries_, vector<ListRecentlyRecycledDirectoriesResponseBody::Entries>) };
    inline ListRecentlyRecycledDirectoriesResponseBody& setEntries(const vector<ListRecentlyRecycledDirectoriesResponseBody::Entries> & entries) { DARABONBA_PTR_SET_VALUE(entries_, entries) };
    inline ListRecentlyRecycledDirectoriesResponseBody& setEntries(vector<ListRecentlyRecycledDirectoriesResponseBody::Entries> && entries) { DARABONBA_PTR_SET_RVALUE(entries_, entries) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRecentlyRecycledDirectoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentlyRecycledDirectoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the directories that are recently deleted.
    shared_ptr<vector<ListRecentlyRecycledDirectoriesResponseBody::Entries>> entries_ {};
    // A pagination token.
    // 
    // If not all directories are returned in a query, the return value of the NextToken parameter is not empty. In this case, you can specify a valid value for the NextToken parameter to continue the query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
