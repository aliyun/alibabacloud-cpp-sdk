// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODYSUMMARYS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSUMMARYRESPONSEBODYSUMMARYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckSummaryResponseBodySummarysStandards.hpp>
#include <alibabacloud/models/GetCheckSummaryResponseBodySummarysTypeStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckSummaryResponseBodySummarys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSummaryResponseBodySummarys& obj) { 
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(PassCount, passCount_);
      DARABONBA_PTR_TO_JSON(Standards, standards_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeStatistic, typeStatistic_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSummaryResponseBodySummarys& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(PassCount, passCount_);
      DARABONBA_PTR_FROM_JSON(Standards, standards_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeStatistic, typeStatistic_);
    };
    GetCheckSummaryResponseBodySummarys() = default ;
    GetCheckSummaryResponseBodySummarys(const GetCheckSummaryResponseBodySummarys &) = default ;
    GetCheckSummaryResponseBodySummarys(GetCheckSummaryResponseBodySummarys &&) = default ;
    GetCheckSummaryResponseBodySummarys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSummaryResponseBodySummarys() = default ;
    GetCheckSummaryResponseBodySummarys& operator=(const GetCheckSummaryResponseBodySummarys &) = default ;
    GetCheckSummaryResponseBodySummarys& operator=(GetCheckSummaryResponseBodySummarys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failCount_ != nullptr
        && this->passCount_ != nullptr && this->standards_ != nullptr && this->type_ != nullptr && this->typeStatistic_ != nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline GetCheckSummaryResponseBodySummarys& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // passCount Field Functions 
    bool hasPassCount() const { return this->passCount_ != nullptr;};
    void deletePassCount() { this->passCount_ = nullptr;};
    inline int64_t passCount() const { DARABONBA_PTR_GET_DEFAULT(passCount_, 0L) };
    inline GetCheckSummaryResponseBodySummarys& setPassCount(int64_t passCount) { DARABONBA_PTR_SET_VALUE(passCount_, passCount) };


    // standards Field Functions 
    bool hasStandards() const { return this->standards_ != nullptr;};
    void deleteStandards() { this->standards_ = nullptr;};
    inline const vector<Models::GetCheckSummaryResponseBodySummarysStandards> & standards() const { DARABONBA_PTR_GET_CONST(standards_, vector<Models::GetCheckSummaryResponseBodySummarysStandards>) };
    inline vector<Models::GetCheckSummaryResponseBodySummarysStandards> standards() { DARABONBA_PTR_GET(standards_, vector<Models::GetCheckSummaryResponseBodySummarysStandards>) };
    inline GetCheckSummaryResponseBodySummarys& setStandards(const vector<Models::GetCheckSummaryResponseBodySummarysStandards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
    inline GetCheckSummaryResponseBodySummarys& setStandards(vector<Models::GetCheckSummaryResponseBodySummarysStandards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCheckSummaryResponseBodySummarys& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeStatistic Field Functions 
    bool hasTypeStatistic() const { return this->typeStatistic_ != nullptr;};
    void deleteTypeStatistic() { this->typeStatistic_ = nullptr;};
    inline const Models::GetCheckSummaryResponseBodySummarysTypeStatistic & typeStatistic() const { DARABONBA_PTR_GET_CONST(typeStatistic_, Models::GetCheckSummaryResponseBodySummarysTypeStatistic) };
    inline Models::GetCheckSummaryResponseBodySummarysTypeStatistic typeStatistic() { DARABONBA_PTR_GET(typeStatistic_, Models::GetCheckSummaryResponseBodySummarysTypeStatistic) };
    inline GetCheckSummaryResponseBodySummarys& setTypeStatistic(const Models::GetCheckSummaryResponseBodySummarysTypeStatistic & typeStatistic) { DARABONBA_PTR_SET_VALUE(typeStatistic_, typeStatistic) };
    inline GetCheckSummaryResponseBodySummarys& setTypeStatistic(Models::GetCheckSummaryResponseBodySummarysTypeStatistic && typeStatistic) { DARABONBA_PTR_SET_RVALUE(typeStatistic_, typeStatistic) };


  protected:
    // The number of detected risk items.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The number of check items that pass the check.
    std::shared_ptr<int64_t> passCount_ = nullptr;
    // The information about the check items.
    std::shared_ptr<vector<Models::GetCheckSummaryResponseBodySummarysStandards>> standards_ = nullptr;
    // The type of the check item. Valid values:
    // 
    // *   **COMPLIANCE**
    // *   **RISK**
    // *   **IDENTITY_PERMISSION**
    std::shared_ptr<string> type_ = nullptr;
    // The risk statistics by type.
    std::shared_ptr<Models::GetCheckSummaryResponseBodySummarysTypeStatistic> typeStatistic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
