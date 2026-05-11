// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class ListArtifactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(artifacts, artifacts_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(artifacts, artifacts_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListArtifactsResponseBody() = default ;
    ListArtifactsResponseBody(const ListArtifactsResponseBody &) = default ;
    ListArtifactsResponseBody(ListArtifactsResponseBody &&) = default ;
    ListArtifactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactsResponseBody() = default ;
    ListArtifactsResponseBody& operator=(const ListArtifactsResponseBody &) = default ;
    ListArtifactsResponseBody& operator=(ListArtifactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Artifacts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
        DARABONBA_PTR_TO_JSON(isDirectory, isDirectory_);
        DARABONBA_PTR_TO_JSON(lastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(path, path_);
        DARABONBA_PTR_TO_JSON(size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
        DARABONBA_PTR_FROM_JSON(isDirectory, isDirectory_);
        DARABONBA_PTR_FROM_JSON(lastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(path, path_);
        DARABONBA_PTR_FROM_JSON(size, size_);
      };
      Artifacts() = default ;
      Artifacts(const Artifacts &) = default ;
      Artifacts(Artifacts &&) = default ;
      Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Artifacts() = default ;
      Artifacts& operator=(const Artifacts &) = default ;
      Artifacts& operator=(Artifacts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isDirectory_ == nullptr
        && this->lastModified_ == nullptr && this->path_ == nullptr && this->size_ == nullptr; };
      // isDirectory Field Functions 
      bool hasIsDirectory() const { return this->isDirectory_ != nullptr;};
      void deleteIsDirectory() { this->isDirectory_ = nullptr;};
      inline bool getIsDirectory() const { DARABONBA_PTR_GET_DEFAULT(isDirectory_, false) };
      inline Artifacts& setIsDirectory(bool isDirectory) { DARABONBA_PTR_SET_VALUE(isDirectory_, isDirectory) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Artifacts& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Artifacts& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Artifacts& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      shared_ptr<bool> isDirectory_ {};
      shared_ptr<string> lastModified_ {};
      shared_ptr<string> path_ {};
      shared_ptr<int64_t> size_ {};
    };

    virtual bool empty() const override { return this->artifacts_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // artifacts Field Functions 
    bool hasArtifacts() const { return this->artifacts_ != nullptr;};
    void deleteArtifacts() { this->artifacts_ = nullptr;};
    inline const vector<ListArtifactsResponseBody::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<ListArtifactsResponseBody::Artifacts>) };
    inline vector<ListArtifactsResponseBody::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<ListArtifactsResponseBody::Artifacts>) };
    inline ListArtifactsResponseBody& setArtifacts(const vector<ListArtifactsResponseBody::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
    inline ListArtifactsResponseBody& setArtifacts(vector<ListArtifactsResponseBody::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListArtifactsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListArtifactsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListArtifactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListArtifactsResponseBody::Artifacts>> artifacts_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
