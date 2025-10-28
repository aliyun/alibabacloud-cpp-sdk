// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODYDATALISTCACHEANALYSISJOBBIGKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBSRESPONSEBODYDATALISTCACHEANALYSISJOBBIGKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys& obj) { 
      DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
    };
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys() = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys(const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys &) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys(DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys &&) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys() = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys& operator=(const DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys &) = default ;
    DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys& operator=(DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyInfo_ == nullptr; };
    // keyInfo Field Functions 
    bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
    void deleteKeyInfo() { this->keyInfo_ = nullptr;};
    inline const vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo> & keyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo>) };
    inline vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo> keyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo>) };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys& setKeyInfo(const vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
    inline DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeys& setKeyInfo(vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCacheAnalysisJobsResponseBodyDataListCacheAnalysisJobBigKeysKeyInfo>> keyInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
