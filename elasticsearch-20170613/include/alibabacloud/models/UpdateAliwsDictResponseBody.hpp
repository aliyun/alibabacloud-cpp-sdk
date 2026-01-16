// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALIWSDICTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALIWSDICTRESPONSEBODY_HPP_
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
  class UpdateAliwsDictResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAliwsDictResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAliwsDictResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    UpdateAliwsDictResponseBody() = default ;
    UpdateAliwsDictResponseBody(const UpdateAliwsDictResponseBody &) = default ;
    UpdateAliwsDictResponseBody(UpdateAliwsDictResponseBody &&) = default ;
    UpdateAliwsDictResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAliwsDictResponseBody() = default ;
    UpdateAliwsDictResponseBody& operator=(const UpdateAliwsDictResponseBody &) = default ;
    UpdateAliwsDictResponseBody& operator=(UpdateAliwsDictResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->name_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
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
      // The size of the dictionary file. Unit: bytes.
      shared_ptr<int64_t> fileSize_ {};
      // The name of the uploaded dictionary file.
      shared_ptr<string> name_ {};
      // The source type of the dictionary file. Valid values:
      // 
      // *   OSS
      // *   ORIGIN
      shared_ptr<string> sourceType_ {};
      // The dictionary type. The value is fixed as ALI_WS.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAliwsDictResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<UpdateAliwsDictResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<UpdateAliwsDictResponseBody::Result>) };
    inline vector<UpdateAliwsDictResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<UpdateAliwsDictResponseBody::Result>) };
    inline UpdateAliwsDictResponseBody& setResult(const vector<UpdateAliwsDictResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateAliwsDictResponseBody& setResult(vector<UpdateAliwsDictResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<vector<UpdateAliwsDictResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
