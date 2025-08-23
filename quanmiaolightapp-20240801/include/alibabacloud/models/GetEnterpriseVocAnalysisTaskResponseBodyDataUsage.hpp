// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATAUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETENTERPRISEVOCANALYSISTASKRESPONSEBODYDATAUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetEnterpriseVocAnalysisTaskResponseBodyDataUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnterpriseVocAnalysisTaskResponseBodyDataUsage& obj) { 
      DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnterpriseVocAnalysisTaskResponseBodyDataUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
      DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
    };
    GetEnterpriseVocAnalysisTaskResponseBodyDataUsage() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataUsage(const GetEnterpriseVocAnalysisTaskResponseBodyDataUsage &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataUsage(GetEnterpriseVocAnalysisTaskResponseBodyDataUsage &&) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnterpriseVocAnalysisTaskResponseBodyDataUsage() = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataUsage& operator=(const GetEnterpriseVocAnalysisTaskResponseBodyDataUsage &) = default ;
    GetEnterpriseVocAnalysisTaskResponseBodyDataUsage& operator=(GetEnterpriseVocAnalysisTaskResponseBodyDataUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputTokens_ != nullptr
        && this->outputTokens_ != nullptr; };
    // inputTokens Field Functions 
    bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
    void deleteInputTokens() { this->inputTokens_ = nullptr;};
    inline int32_t inputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataUsage& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


    // outputTokens Field Functions 
    bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
    void deleteOutputTokens() { this->outputTokens_ = nullptr;};
    inline int32_t outputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
    inline GetEnterpriseVocAnalysisTaskResponseBodyDataUsage& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


  protected:
    std::shared_ptr<int32_t> inputTokens_ = nullptr;
    std::shared_ptr<int32_t> outputTokens_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
