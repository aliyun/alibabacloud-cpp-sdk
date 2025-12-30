// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSFERFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSFERFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListTransferFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransferFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransferFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListTransferFilesResponseBody() = default ;
    ListTransferFilesResponseBody(const ListTransferFilesResponseBody &) = default ;
    ListTransferFilesResponseBody(ListTransferFilesResponseBody &&) = default ;
    ListTransferFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransferFilesResponseBody() = default ;
    ListTransferFilesResponseBody& operator=(const ListTransferFilesResponseBody &) = default ;
    ListTransferFilesResponseBody& operator=(ListTransferFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OssFileName, ossFileName_);
        DARABONBA_PTR_TO_JSON(OssFilePath, ossFilePath_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OssFileName, ossFileName_);
        DARABONBA_PTR_FROM_JSON(OssFilePath, ossFilePath_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->iconUrl_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->ossFileName_ == nullptr && this->ossFilePath_ == nullptr && this->size_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline Files& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Files& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Files& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ossFileName Field Functions 
      bool hasOssFileName() const { return this->ossFileName_ != nullptr;};
      void deleteOssFileName() { this->ossFileName_ = nullptr;};
      inline string getOssFileName() const { DARABONBA_PTR_GET_DEFAULT(ossFileName_, "") };
      inline Files& setOssFileName(string ossFileName) { DARABONBA_PTR_SET_VALUE(ossFileName_, ossFileName) };


      // ossFilePath Field Functions 
      bool hasOssFilePath() const { return this->ossFilePath_ != nullptr;};
      void deleteOssFilePath() { this->ossFilePath_ = nullptr;};
      inline string getOssFilePath() const { DARABONBA_PTR_GET_DEFAULT(ossFilePath_, "") };
      inline Files& setOssFilePath(string ossFilePath) { DARABONBA_PTR_SET_VALUE(ossFilePath_, ossFilePath) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Files& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Files& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Files& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The URL of the file icon.
      // 
      // > 
      // 
      // *   For image file types (.png, .jpg, .jpeg, .gif, .webp, and .svg), the URL of the specific image is returned.
      // 
      // *   For other file types, the URL of the default image is returned.
      shared_ptr<string> iconUrl_ {};
      // The file ID.
      shared_ptr<string> id_ {};
      // The file name.
      shared_ptr<string> name_ {};
      // The name of the object stored in OSS.
      // 
      // > 
      // 
      // *   A value is returned for this parameter only when the object is stored in a custom OSS bucket.
      shared_ptr<string> ossFileName_ {};
      // The path of the object in the OSS bucket.
      // 
      // > 
      // 
      // *   A value is returned for this parameter only when the object is stored in a custom OSS bucket.
      shared_ptr<string> ossFilePath_ {};
      // The file size.
      shared_ptr<string> size_ {};
      // The file status.
      // 
      // Valid values:
      // 
      // *   DELETING
      // *   DELETED
      // *   UPLOADED
      shared_ptr<string> status_ {};
      // The file type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->files_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ListTransferFilesResponseBody::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<ListTransferFilesResponseBody::Files>) };
    inline vector<ListTransferFilesResponseBody::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<ListTransferFilesResponseBody::Files>) };
    inline ListTransferFilesResponseBody& setFiles(const vector<ListTransferFilesResponseBody::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ListTransferFilesResponseBody& setFiles(vector<ListTransferFilesResponseBody::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransferFilesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransferFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransferFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The files.
    shared_ptr<vector<ListTransferFilesResponseBody::Files>> files_ {};
    // The number of entries to return on each page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of `NextToken` is a pagination token, which can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
