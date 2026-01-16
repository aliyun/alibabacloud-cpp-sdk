// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDICTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDICTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDictsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDictsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListDictsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListDictsResponseBody() = default ;
    ListDictsResponseBody(const ListDictsResponseBody &) = default ;
    ListDictsResponseBody(ListDictsResponseBody &&) = default ;
    ListDictsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDictsResponseBody() = default ;
    ListDictsResponseBody& operator=(const ListDictsResponseBody &) = default ;
    ListDictsResponseBody& operator=(ListDictsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->fileSize_ == nullptr && this->name_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Result& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Result& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Result& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The link that is used to download the dictionary over the Internet. The link is valid for 90s.
      shared_ptr<string> downloadUrl_ {};
      // The size of the dictionary file. Unit: byte.
      shared_ptr<int64_t> fileSize_ {};
      // The name of the dictionary file.
      shared_ptr<string> name_ {};
      // The source type.
      shared_ptr<string> sourceType_ {};
      // The type of the IK dictionary. Valid values:
      // 
      // *   MAIN: main dictionary
      // *   STOP: stopword list
      shared_ptr<string> type_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The total number of entries returned.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListDictsResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListDictsResponseBody::Headers) };
    inline ListDictsResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListDictsResponseBody::Headers) };
    inline ListDictsResponseBody& setHeaders(const ListDictsResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDictsResponseBody& setHeaders(ListDictsResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDictsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListDictsResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListDictsResponseBody::Result>) };
    inline vector<ListDictsResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListDictsResponseBody::Result>) };
    inline ListDictsResponseBody& setResult(const vector<ListDictsResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDictsResponseBody& setResult(vector<ListDictsResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The header of the response.
    shared_ptr<ListDictsResponseBody::Headers> headers_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListDictsResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
