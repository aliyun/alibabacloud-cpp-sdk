// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILECHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILECHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class UploadFileCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, UploadFileCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    UploadFileCheckResponseBody() = default ;
    UploadFileCheckResponseBody(const UploadFileCheckResponseBody &) = default ;
    UploadFileCheckResponseBody(UploadFileCheckResponseBody &&) = default ;
    UploadFileCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadFileCheckResponseBody() = default ;
    UploadFileCheckResponseBody& operator=(const UploadFileCheckResponseBody &) = default ;
    UploadFileCheckResponseBody& operator=(UploadFileCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(effectiveNumber, effectiveNumber_);
        DARABONBA_PTR_TO_JSON(resultList, resultList_);
        DARABONBA_PTR_TO_JSON(totalNumber, totalNumber_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(effectiveNumber, effectiveNumber_);
        DARABONBA_PTR_FROM_JSON(resultList, resultList_);
        DARABONBA_PTR_FROM_JSON(totalNumber, totalNumber_);
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
      virtual bool empty() const override { return this->effectiveNumber_ == nullptr
        && this->resultList_ == nullptr && this->totalNumber_ == nullptr; };
      // effectiveNumber Field Functions 
      bool hasEffectiveNumber() const { return this->effectiveNumber_ != nullptr;};
      void deleteEffectiveNumber() { this->effectiveNumber_ = nullptr;};
      inline int32_t getEffectiveNumber() const { DARABONBA_PTR_GET_DEFAULT(effectiveNumber_, 0) };
      inline ResultObject& setEffectiveNumber(int32_t effectiveNumber) { DARABONBA_PTR_SET_VALUE(effectiveNumber_, effectiveNumber) };


      // resultList Field Functions 
      bool hasResultList() const { return this->resultList_ != nullptr;};
      void deleteResultList() { this->resultList_ = nullptr;};
      inline const vector<string> & getResultList() const { DARABONBA_PTR_GET_CONST(resultList_, vector<string>) };
      inline vector<string> getResultList() { DARABONBA_PTR_GET(resultList_, vector<string>) };
      inline ResultObject& setResultList(const vector<string> & resultList) { DARABONBA_PTR_SET_VALUE(resultList_, resultList) };
      inline ResultObject& setResultList(vector<string> && resultList) { DARABONBA_PTR_SET_RVALUE(resultList_, resultList) };


      // totalNumber Field Functions 
      bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
      void deleteTotalNumber() { this->totalNumber_ = nullptr;};
      inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
      inline ResultObject& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


    protected:
      // Number of effective rows
      shared_ptr<int32_t> effectiveNumber_ {};
      // Valid sample data
      shared_ptr<vector<string>> resultList_ {};
      // Total number of rows
      shared_ptr<int32_t> totalNumber_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadFileCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const UploadFileCheckResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, UploadFileCheckResponseBody::ResultObject) };
    inline UploadFileCheckResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, UploadFileCheckResponseBody::ResultObject) };
    inline UploadFileCheckResponseBody& setResultObject(const UploadFileCheckResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline UploadFileCheckResponseBody& setResultObject(UploadFileCheckResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<UploadFileCheckResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
