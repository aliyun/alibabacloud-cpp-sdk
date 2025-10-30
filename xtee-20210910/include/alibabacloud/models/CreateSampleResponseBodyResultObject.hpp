// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESAMPLERESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_CREATESAMPLERESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class CreateSampleResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSampleResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(communityCount, communityCount_);
      DARABONBA_PTR_TO_JSON(failCount, failCount_);
      DARABONBA_PTR_TO_JSON(recallProbability, recallProbability_);
      DARABONBA_PTR_TO_JSON(riskDensity, riskDensity_);
      DARABONBA_PTR_TO_JSON(sampleCount, sampleCount_);
      DARABONBA_PTR_TO_JSON(successCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSampleResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(communityCount, communityCount_);
      DARABONBA_PTR_FROM_JSON(failCount, failCount_);
      DARABONBA_PTR_FROM_JSON(recallProbability, recallProbability_);
      DARABONBA_PTR_FROM_JSON(riskDensity, riskDensity_);
      DARABONBA_PTR_FROM_JSON(sampleCount, sampleCount_);
      DARABONBA_PTR_FROM_JSON(successCount, successCount_);
    };
    CreateSampleResponseBodyResultObject() = default ;
    CreateSampleResponseBodyResultObject(const CreateSampleResponseBodyResultObject &) = default ;
    CreateSampleResponseBodyResultObject(CreateSampleResponseBodyResultObject &&) = default ;
    CreateSampleResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSampleResponseBodyResultObject() = default ;
    CreateSampleResponseBodyResultObject& operator=(const CreateSampleResponseBodyResultObject &) = default ;
    CreateSampleResponseBodyResultObject& operator=(CreateSampleResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->communityCount_ == nullptr
        && return this->failCount_ == nullptr && return this->recallProbability_ == nullptr && return this->riskDensity_ == nullptr && return this->sampleCount_ == nullptr && return this->successCount_ == nullptr; };
    // communityCount Field Functions 
    bool hasCommunityCount() const { return this->communityCount_ != nullptr;};
    void deleteCommunityCount() { this->communityCount_ = nullptr;};
    inline int32_t communityCount() const { DARABONBA_PTR_GET_DEFAULT(communityCount_, 0) };
    inline CreateSampleResponseBodyResultObject& setCommunityCount(int32_t communityCount) { DARABONBA_PTR_SET_VALUE(communityCount_, communityCount) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline CreateSampleResponseBodyResultObject& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // recallProbability Field Functions 
    bool hasRecallProbability() const { return this->recallProbability_ != nullptr;};
    void deleteRecallProbability() { this->recallProbability_ = nullptr;};
    inline string recallProbability() const { DARABONBA_PTR_GET_DEFAULT(recallProbability_, "") };
    inline CreateSampleResponseBodyResultObject& setRecallProbability(string recallProbability) { DARABONBA_PTR_SET_VALUE(recallProbability_, recallProbability) };


    // riskDensity Field Functions 
    bool hasRiskDensity() const { return this->riskDensity_ != nullptr;};
    void deleteRiskDensity() { this->riskDensity_ = nullptr;};
    inline string riskDensity() const { DARABONBA_PTR_GET_DEFAULT(riskDensity_, "") };
    inline CreateSampleResponseBodyResultObject& setRiskDensity(string riskDensity) { DARABONBA_PTR_SET_VALUE(riskDensity_, riskDensity) };


    // sampleCount Field Functions 
    bool hasSampleCount() const { return this->sampleCount_ != nullptr;};
    void deleteSampleCount() { this->sampleCount_ = nullptr;};
    inline int32_t sampleCount() const { DARABONBA_PTR_GET_DEFAULT(sampleCount_, 0) };
    inline CreateSampleResponseBodyResultObject& setSampleCount(int32_t sampleCount) { DARABONBA_PTR_SET_VALUE(sampleCount_, sampleCount) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline CreateSampleResponseBodyResultObject& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // Number of colored groups
    std::shared_ptr<int32_t> communityCount_ = nullptr;
    // Number of failed samples
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // Recall probability
    std::shared_ptr<string> recallProbability_ = nullptr;
    // Risk density
    std::shared_ptr<string> riskDensity_ = nullptr;
    // Number of samples
    std::shared_ptr<int32_t> sampleCount_ = nullptr;
    // Number of successful samples
    std::shared_ptr<int32_t> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
