// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeSampleInfoResponseBody() = default ;
    DescribeSampleInfoResponseBody(const DescribeSampleInfoResponseBody &) = default ;
    DescribeSampleInfoResponseBody(DescribeSampleInfoResponseBody &&) = default ;
    DescribeSampleInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleInfoResponseBody() = default ;
    DescribeSampleInfoResponseBody& operator=(const DescribeSampleInfoResponseBody &) = default ;
    DescribeSampleInfoResponseBody& operator=(DescribeSampleInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(sampleTags, sampleTags_);
        DARABONBA_PTR_TO_JSON(sampleType, sampleType_);
        DARABONBA_PTR_TO_JSON(sampleValue, sampleValue_);
        DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(sampleTags, sampleTags_);
        DARABONBA_PTR_FROM_JSON(sampleType, sampleType_);
        DARABONBA_PTR_FROM_JSON(sampleValue, sampleValue_);
        DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->sampleTags_ == nullptr && this->sampleType_ == nullptr && this->sampleValue_ == nullptr && this->updateTime_ == nullptr && this->version_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // sampleTags Field Functions 
      bool hasSampleTags() const { return this->sampleTags_ != nullptr;};
      void deleteSampleTags() { this->sampleTags_ = nullptr;};
      inline string getSampleTags() const { DARABONBA_PTR_GET_DEFAULT(sampleTags_, "") };
      inline ResultObject& setSampleTags(string sampleTags) { DARABONBA_PTR_SET_VALUE(sampleTags_, sampleTags) };


      // sampleType Field Functions 
      bool hasSampleType() const { return this->sampleType_ != nullptr;};
      void deleteSampleType() { this->sampleType_ = nullptr;};
      inline string getSampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, "") };
      inline ResultObject& setSampleType(string sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


      // sampleValue Field Functions 
      bool hasSampleValue() const { return this->sampleValue_ != nullptr;};
      void deleteSampleValue() { this->sampleValue_ = nullptr;};
      inline string getSampleValue() const { DARABONBA_PTR_GET_DEFAULT(sampleValue_, "") };
      inline ResultObject& setSampleValue(string sampleValue) { DARABONBA_PTR_SET_VALUE(sampleValue_, sampleValue) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ResultObject& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline ResultObject& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Primary key ID
      shared_ptr<int64_t> id_ {};
      // Sample tags.
      shared_ptr<string> sampleTags_ {};
      // Sample type
      shared_ptr<string> sampleType_ {};
      // Sample value.
      shared_ptr<string> sampleValue_ {};
      // Update time.
      shared_ptr<string> updateTime_ {};
      // Version number.
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSampleInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeSampleInfoResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeSampleInfoResponseBody::ResultObject) };
    inline DescribeSampleInfoResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeSampleInfoResponseBody::ResultObject) };
    inline DescribeSampleInfoResponseBody& setResultObject(const DescribeSampleInfoResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSampleInfoResponseBody& setResultObject(DescribeSampleInfoResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeSampleInfoResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
