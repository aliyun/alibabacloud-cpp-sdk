// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAUNEXBIGKEYSOFNUM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAUNEXBIGKEYSOFNUM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNumKeyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum& obj) { 
      DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
    };
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum() = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum(const DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum(DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum &&) = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum() = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum& operator=(const DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum& operator=(DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyInfo_ != nullptr; };
    // keyInfo Field Functions 
    bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
    void deleteKeyInfo() { this->keyInfo_ = nullptr;};
    inline const vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNumKeyInfo> & keyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNumKeyInfo>) };
    inline vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNumKeyInfo> keyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNumKeyInfo>) };
    inline DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum& setKeyInfo(const vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNumKeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
    inline DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNum& setKeyInfo(vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNumKeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfNumKeyInfo>> keyInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
