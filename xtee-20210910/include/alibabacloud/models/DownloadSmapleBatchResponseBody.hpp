// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADSMAPLEBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADSMAPLEBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DownloadSmapleBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadSmapleBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadSmapleBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DownloadSmapleBatchResponseBody() = default ;
    DownloadSmapleBatchResponseBody(const DownloadSmapleBatchResponseBody &) = default ;
    DownloadSmapleBatchResponseBody(DownloadSmapleBatchResponseBody &&) = default ;
    DownloadSmapleBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadSmapleBatchResponseBody() = default ;
    DownloadSmapleBatchResponseBody& operator=(const DownloadSmapleBatchResponseBody &) = default ;
    DownloadSmapleBatchResponseBody& operator=(DownloadSmapleBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(fileDownloadURL, fileDownloadURL_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(fileDownloadURL, fileDownloadURL_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileDownloadURL_ == nullptr; };
      // fileDownloadURL Field Functions 
      bool hasFileDownloadURL() const { return this->fileDownloadURL_ != nullptr;};
      void deleteFileDownloadURL() { this->fileDownloadURL_ = nullptr;};
      inline string getFileDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(fileDownloadURL_, "") };
      inline ResultObject& setFileDownloadURL(string fileDownloadURL) { DARABONBA_PTR_SET_VALUE(fileDownloadURL_, fileDownloadURL) };


    protected:
      // Download URL
      shared_ptr<string> fileDownloadURL_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DownloadSmapleBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DownloadSmapleBatchResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DownloadSmapleBatchResponseBody::ResultObject) };
    inline DownloadSmapleBatchResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DownloadSmapleBatchResponseBody::ResultObject) };
    inline DownloadSmapleBatchResponseBody& setResultObject(const DownloadSmapleBatchResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DownloadSmapleBatchResponseBody& setResultObject(DownloadSmapleBatchResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DownloadSmapleBatchResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
