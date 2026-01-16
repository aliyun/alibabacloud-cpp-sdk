// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTENDFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTENDFILESRESPONSEBODY_HPP_
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
  class ListExtendfilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExtendfilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListExtendfilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListExtendfilesResponseBody() = default ;
    ListExtendfilesResponseBody(const ListExtendfilesResponseBody &) = default ;
    ListExtendfilesResponseBody(ListExtendfilesResponseBody &&) = default ;
    ListExtendfilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExtendfilesResponseBody() = default ;
    ListExtendfilesResponseBody& operator=(const ListExtendfilesResponseBody &) = default ;
    ListExtendfilesResponseBody& operator=(ListExtendfilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(filePath, filePath_);
        DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(filePath, filePath_);
        DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
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
      virtual bool empty() const override { return this->filePath_ == nullptr
        && this->fileSize_ == nullptr && this->name_ == nullptr && this->sourceType_ == nullptr; };
      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Result& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


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


    protected:
      // The path of the driver file.
      shared_ptr<string> filePath_ {};
      // The size of the driver file.
      shared_ptr<int64_t> fileSize_ {};
      // The name of the driver file.
      shared_ptr<string> name_ {};
      // The source type.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExtendfilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListExtendfilesResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListExtendfilesResponseBody::Result>) };
    inline vector<ListExtendfilesResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListExtendfilesResponseBody::Result>) };
    inline ListExtendfilesResponseBody& setResult(const vector<ListExtendfilesResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListExtendfilesResponseBody& setResult(vector<ListExtendfilesResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<ListExtendfilesResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
