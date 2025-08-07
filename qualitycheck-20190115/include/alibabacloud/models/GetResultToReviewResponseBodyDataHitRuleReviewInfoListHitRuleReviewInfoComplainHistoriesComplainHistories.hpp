// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOCOMPLAINHISTORIESCOMPLAINHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLISTHITRULEREVIEWINFOCOMPLAINHISTORIESCOMPLAINHISTORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
    };
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories &&) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& operator=(const GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& operator=(GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comments_ != nullptr
        && this->operationTime_ != nullptr && this->operationType_ != nullptr && this->operator_ != nullptr && this->operatorName_ != nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline string operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline int32_t operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, 0) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& setOperationType(int32_t operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline int64_t _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, 0L) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& setOperator(int64_t _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorName Field Functions 
    bool hasOperatorName() const { return this->operatorName_ != nullptr;};
    void deleteOperatorName() { this->operatorName_ = nullptr;};
    inline string operatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfoComplainHistoriesComplainHistories& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


  protected:
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<string> operationTime_ = nullptr;
    std::shared_ptr<int32_t> operationType_ = nullptr;
    std::shared_ptr<int64_t> operator_ = nullptr;
    std::shared_ptr<string> operatorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
