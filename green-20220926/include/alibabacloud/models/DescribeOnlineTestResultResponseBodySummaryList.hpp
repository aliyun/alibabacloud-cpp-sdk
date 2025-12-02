// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTRESPONSEBODYSUMMARYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONLINETESTRESULTRESPONSEBODYSUMMARYLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class DescribeOnlineTestResultResponseBodySummaryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnlineTestResultResponseBodySummaryList& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskLevelSummary, riskLevelSummary_);
      DARABONBA_PTR_TO_JSON(SliceCount, sliceCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnlineTestResultResponseBodySummaryList& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskLevelSummary, riskLevelSummary_);
      DARABONBA_PTR_FROM_JSON(SliceCount, sliceCount_);
    };
    DescribeOnlineTestResultResponseBodySummaryList() = default ;
    DescribeOnlineTestResultResponseBodySummaryList(const DescribeOnlineTestResultResponseBodySummaryList &) = default ;
    DescribeOnlineTestResultResponseBodySummaryList(DescribeOnlineTestResultResponseBodySummaryList &&) = default ;
    DescribeOnlineTestResultResponseBodySummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnlineTestResultResponseBodySummaryList() = default ;
    DescribeOnlineTestResultResponseBodySummaryList& operator=(const DescribeOnlineTestResultResponseBodySummaryList &) = default ;
    DescribeOnlineTestResultResponseBodySummaryList& operator=(DescribeOnlineTestResultResponseBodySummaryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr
        && return this->riskLevel_ == nullptr && return this->riskLevelSummary_ == nullptr && return this->sliceCount_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeOnlineTestResultResponseBodySummaryList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeOnlineTestResultResponseBodySummaryList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskLevelSummary Field Functions 
    bool hasRiskLevelSummary() const { return this->riskLevelSummary_ != nullptr;};
    void deleteRiskLevelSummary() { this->riskLevelSummary_ = nullptr;};
    inline const map<string, int64_t> & riskLevelSummary() const { DARABONBA_PTR_GET_CONST(riskLevelSummary_, map<string, int64_t>) };
    inline map<string, int64_t> riskLevelSummary() { DARABONBA_PTR_GET(riskLevelSummary_, map<string, int64_t>) };
    inline DescribeOnlineTestResultResponseBodySummaryList& setRiskLevelSummary(const map<string, int64_t> & riskLevelSummary) { DARABONBA_PTR_SET_VALUE(riskLevelSummary_, riskLevelSummary) };
    inline DescribeOnlineTestResultResponseBodySummaryList& setRiskLevelSummary(map<string, int64_t> && riskLevelSummary) { DARABONBA_PTR_SET_RVALUE(riskLevelSummary_, riskLevelSummary) };


    // sliceCount Field Functions 
    bool hasSliceCount() const { return this->sliceCount_ != nullptr;};
    void deleteSliceCount() { this->sliceCount_ = nullptr;};
    inline int32_t sliceCount() const { DARABONBA_PTR_GET_DEFAULT(sliceCount_, 0) };
    inline DescribeOnlineTestResultResponseBodySummaryList& setSliceCount(int32_t sliceCount) { DARABONBA_PTR_SET_VALUE(sliceCount_, sliceCount) };


  protected:
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<map<string, int64_t>> riskLevelSummary_ = nullptr;
    std::shared_ptr<int32_t> sliceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
