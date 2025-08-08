// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELAICALLDETAILSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CANCELAICALLDETAILSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CancelAiCallDetailsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelAiCallDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_ANY_TO_JSON(FailedDetails, failedDetails_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(SucceedCount, succeedCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, CancelAiCallDetailsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_ANY_FROM_JSON(FailedDetails, failedDetails_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(SucceedCount, succeedCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    CancelAiCallDetailsResponseBodyData() = default ;
    CancelAiCallDetailsResponseBodyData(const CancelAiCallDetailsResponseBodyData &) = default ;
    CancelAiCallDetailsResponseBodyData(CancelAiCallDetailsResponseBodyData &&) = default ;
    CancelAiCallDetailsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelAiCallDetailsResponseBodyData() = default ;
    CancelAiCallDetailsResponseBodyData& operator=(const CancelAiCallDetailsResponseBodyData &) = default ;
    CancelAiCallDetailsResponseBodyData& operator=(CancelAiCallDetailsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedCount_ != nullptr
        && this->failedDetails_ != nullptr && this->resultCode_ != nullptr && this->succeedCount_ != nullptr && this->totalCount_ != nullptr; };
    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int64_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
    inline CancelAiCallDetailsResponseBodyData& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // failedDetails Field Functions 
    bool hasFailedDetails() const { return this->failedDetails_ != nullptr;};
    void deleteFailedDetails() { this->failedDetails_ = nullptr;};
    inline     const Darabonba::Json & failedDetails() const { DARABONBA_GET(failedDetails_) };
    Darabonba::Json & failedDetails() { DARABONBA_GET(failedDetails_) };
    inline CancelAiCallDetailsResponseBodyData& setFailedDetails(const Darabonba::Json & failedDetails) { DARABONBA_SET_VALUE(failedDetails_, failedDetails) };
    inline CancelAiCallDetailsResponseBodyData& setFailedDetails(Darabonba::Json & failedDetails) { DARABONBA_SET_RVALUE(failedDetails_, failedDetails) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline CancelAiCallDetailsResponseBodyData& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // succeedCount Field Functions 
    bool hasSucceedCount() const { return this->succeedCount_ != nullptr;};
    void deleteSucceedCount() { this->succeedCount_ = nullptr;};
    inline int64_t succeedCount() const { DARABONBA_PTR_GET_DEFAULT(succeedCount_, 0L) };
    inline CancelAiCallDetailsResponseBodyData& setSucceedCount(int64_t succeedCount) { DARABONBA_PTR_SET_VALUE(succeedCount_, succeedCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline CancelAiCallDetailsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> failedCount_ = nullptr;
    Darabonba::Json failedDetails_ = nullptr;
    std::shared_ptr<string> resultCode_ = nullptr;
    std::shared_ptr<int64_t> succeedCount_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
