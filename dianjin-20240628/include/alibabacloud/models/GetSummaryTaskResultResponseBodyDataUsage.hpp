// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUMMARYTASKRESULTRESPONSEBODYDATAUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETSUMMARYTASKRESULTRESPONSEBODYDATAUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetSummaryTaskResultResponseBodyDataUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSummaryTaskResultResponseBodyDataUsage& obj) { 
      DARABONBA_PTR_TO_JSON(imageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(imageTokens, imageTokens_);
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
    };
    friend void from_json(const Darabonba::Json& j, GetSummaryTaskResultResponseBodyDataUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(imageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(imageTokens, imageTokens_);
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
      DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
    };
    GetSummaryTaskResultResponseBodyDataUsage() = default ;
    GetSummaryTaskResultResponseBodyDataUsage(const GetSummaryTaskResultResponseBodyDataUsage &) = default ;
    GetSummaryTaskResultResponseBodyDataUsage(GetSummaryTaskResultResponseBodyDataUsage &&) = default ;
    GetSummaryTaskResultResponseBodyDataUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSummaryTaskResultResponseBodyDataUsage() = default ;
    GetSummaryTaskResultResponseBodyDataUsage& operator=(const GetSummaryTaskResultResponseBodyDataUsage &) = default ;
    GetSummaryTaskResultResponseBodyDataUsage& operator=(GetSummaryTaskResultResponseBodyDataUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageCount_ == nullptr
        && return this->imageTokens_ == nullptr && return this->inputTokens_ == nullptr && return this->outputTokens_ == nullptr && return this->totalTokens_ == nullptr; };
    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline GetSummaryTaskResultResponseBodyDataUsage& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // imageTokens Field Functions 
    bool hasImageTokens() const { return this->imageTokens_ != nullptr;};
    void deleteImageTokens() { this->imageTokens_ = nullptr;};
    inline int32_t imageTokens() const { DARABONBA_PTR_GET_DEFAULT(imageTokens_, 0) };
    inline GetSummaryTaskResultResponseBodyDataUsage& setImageTokens(int32_t imageTokens) { DARABONBA_PTR_SET_VALUE(imageTokens_, imageTokens) };


    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int32_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
    inline GetSummaryTaskResultResponseBodyDataUsage& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int32_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
    inline GetSummaryTaskResultResponseBodyDataUsage& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


    // totalTokens Field Functions 
    bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
    void deleteTotalTokens() { this->totalTokens_ = nullptr;};
    inline int32_t totalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
    inline GetSummaryTaskResultResponseBodyDataUsage& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


  protected:
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    std::shared_ptr<int32_t> imageTokens_ = nullptr;
    std::shared_ptr<int32_t> inputTokens_ = nullptr;
    std::shared_ptr<int32_t> outputTokens_ = nullptr;
    std::shared_ptr<int32_t> totalTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
