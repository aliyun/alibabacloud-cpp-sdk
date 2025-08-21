// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAEXPIRYKEYSLEVELCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAEXPIRYKEYSLEVELCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiryLevel, expiryLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiryLevel, expiryLevel_);
    };
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount() = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount(const DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount(DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount &&) = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount() = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount& operator=(const DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount& operator=(DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expiryLevel_ != nullptr; };
    // expiryLevel Field Functions 
    bool hasExpiryLevel() const { return this->expiryLevel_ != nullptr;};
    void deleteExpiryLevel() { this->expiryLevel_ = nullptr;};
    inline const vector<Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel> & expiryLevel() const { DARABONBA_PTR_GET_CONST(expiryLevel_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel>) };
    inline vector<Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel> expiryLevel() { DARABONBA_PTR_GET(expiryLevel_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel>) };
    inline DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount& setExpiryLevel(const vector<Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel> & expiryLevel) { DARABONBA_PTR_SET_VALUE(expiryLevel_, expiryLevel) };
    inline DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCount& setExpiryLevel(vector<Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel> && expiryLevel) { DARABONBA_PTR_SET_RVALUE(expiryLevel_, expiryLevel) };


  protected:
    std::shared_ptr<vector<Models::DescribeCacheAnalysisJobResponseBodyDataExpiryKeysLevelCountExpiryLevel>> expiryLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
