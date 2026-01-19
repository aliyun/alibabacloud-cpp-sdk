// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    CreateSampleResponseBody() = default ;
    CreateSampleResponseBody(const CreateSampleResponseBody &) = default ;
    CreateSampleResponseBody(CreateSampleResponseBody &&) = default ;
    CreateSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSampleResponseBody() = default ;
    CreateSampleResponseBody& operator=(const CreateSampleResponseBody &) = default ;
    CreateSampleResponseBody& operator=(CreateSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(communityCount, communityCount_);
        DARABONBA_PTR_TO_JSON(failCount, failCount_);
        DARABONBA_PTR_TO_JSON(recallProbability, recallProbability_);
        DARABONBA_PTR_TO_JSON(riskDensity, riskDensity_);
        DARABONBA_PTR_TO_JSON(sampleCount, sampleCount_);
        DARABONBA_PTR_TO_JSON(successCount, successCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(communityCount, communityCount_);
        DARABONBA_PTR_FROM_JSON(failCount, failCount_);
        DARABONBA_PTR_FROM_JSON(recallProbability, recallProbability_);
        DARABONBA_PTR_FROM_JSON(riskDensity, riskDensity_);
        DARABONBA_PTR_FROM_JSON(sampleCount, sampleCount_);
        DARABONBA_PTR_FROM_JSON(successCount, successCount_);
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
      virtual bool empty() const override { return this->communityCount_ == nullptr
        && this->failCount_ == nullptr && this->recallProbability_ == nullptr && this->riskDensity_ == nullptr && this->sampleCount_ == nullptr && this->successCount_ == nullptr; };
      // communityCount Field Functions 
      bool hasCommunityCount() const { return this->communityCount_ != nullptr;};
      void deleteCommunityCount() { this->communityCount_ = nullptr;};
      inline int32_t getCommunityCount() const { DARABONBA_PTR_GET_DEFAULT(communityCount_, 0) };
      inline ResultObject& setCommunityCount(int32_t communityCount) { DARABONBA_PTR_SET_VALUE(communityCount_, communityCount) };


      // failCount Field Functions 
      bool hasFailCount() const { return this->failCount_ != nullptr;};
      void deleteFailCount() { this->failCount_ = nullptr;};
      inline int32_t getFailCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
      inline ResultObject& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


      // recallProbability Field Functions 
      bool hasRecallProbability() const { return this->recallProbability_ != nullptr;};
      void deleteRecallProbability() { this->recallProbability_ = nullptr;};
      inline string getRecallProbability() const { DARABONBA_PTR_GET_DEFAULT(recallProbability_, "") };
      inline ResultObject& setRecallProbability(string recallProbability) { DARABONBA_PTR_SET_VALUE(recallProbability_, recallProbability) };


      // riskDensity Field Functions 
      bool hasRiskDensity() const { return this->riskDensity_ != nullptr;};
      void deleteRiskDensity() { this->riskDensity_ = nullptr;};
      inline string getRiskDensity() const { DARABONBA_PTR_GET_DEFAULT(riskDensity_, "") };
      inline ResultObject& setRiskDensity(string riskDensity) { DARABONBA_PTR_SET_VALUE(riskDensity_, riskDensity) };


      // sampleCount Field Functions 
      bool hasSampleCount() const { return this->sampleCount_ != nullptr;};
      void deleteSampleCount() { this->sampleCount_ = nullptr;};
      inline int32_t getSampleCount() const { DARABONBA_PTR_GET_DEFAULT(sampleCount_, 0) };
      inline ResultObject& setSampleCount(int32_t sampleCount) { DARABONBA_PTR_SET_VALUE(sampleCount_, sampleCount) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
      inline ResultObject& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    protected:
      // Number of colored groups
      shared_ptr<int32_t> communityCount_ {};
      // Number of failed samples
      shared_ptr<int32_t> failCount_ {};
      // Recall probability
      shared_ptr<string> recallProbability_ {};
      // Risk density
      shared_ptr<string> riskDensity_ {};
      // Number of samples
      shared_ptr<int32_t> sampleCount_ {};
      // Number of successful samples
      shared_ptr<int32_t> successCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const CreateSampleResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, CreateSampleResponseBody::ResultObject) };
    inline CreateSampleResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, CreateSampleResponseBody::ResultObject) };
    inline CreateSampleResponseBody& setResultObject(const CreateSampleResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline CreateSampleResponseBody& setResultObject(CreateSampleResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return object
    shared_ptr<CreateSampleResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
