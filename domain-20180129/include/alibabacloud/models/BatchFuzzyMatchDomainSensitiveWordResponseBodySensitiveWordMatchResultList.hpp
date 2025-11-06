// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODYSENSITIVEWORDMATCHRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHFUZZYMATCHDOMAINSENSITIVEWORDRESPONSEBODYSENSITIVEWORDMATCHRESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList& obj) { 
      DARABONBA_PTR_TO_JSON(SensitiveWordMatchResult, sensitiveWordMatchResult_);
    };
    friend void from_json(const Darabonba::Json& j, BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(SensitiveWordMatchResult, sensitiveWordMatchResult_);
    };
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList() = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList(const BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList &) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList(BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList &&) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList() = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList& operator=(const BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList &) = default ;
    BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList& operator=(BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sensitiveWordMatchResult_ == nullptr; };
    // sensitiveWordMatchResult Field Functions 
    bool hasSensitiveWordMatchResult() const { return this->sensitiveWordMatchResult_ != nullptr;};
    void deleteSensitiveWordMatchResult() { this->sensitiveWordMatchResult_ = nullptr;};
    inline const vector<Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult> & sensitiveWordMatchResult() const { DARABONBA_PTR_GET_CONST(sensitiveWordMatchResult_, vector<Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult>) };
    inline vector<Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult> sensitiveWordMatchResult() { DARABONBA_PTR_GET(sensitiveWordMatchResult_, vector<Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult>) };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList& setSensitiveWordMatchResult(const vector<Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult> & sensitiveWordMatchResult) { DARABONBA_PTR_SET_VALUE(sensitiveWordMatchResult_, sensitiveWordMatchResult) };
    inline BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultList& setSensitiveWordMatchResult(vector<Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult> && sensitiveWordMatchResult) { DARABONBA_PTR_SET_RVALUE(sensitiveWordMatchResult_, sensitiveWordMatchResult) };


  protected:
    std::shared_ptr<vector<Models::BatchFuzzyMatchDomainSensitiveWordResponseBodySensitiveWordMatchResultListSensitiveWordMatchResult>> sensitiveWordMatchResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
