// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATABIGKEYSOFNUM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATABIGKEYSOFNUM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNumKeyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum& obj) { 
      DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
    };
    DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum() = default ;
    DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum(const DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum(DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum &&) = default ;
    DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum() = default ;
    DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum& operator=(const DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum& operator=(DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyInfo_ == nullptr; };
    // keyInfo Field Functions 
    bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
    void deleteKeyInfo() { this->keyInfo_ = nullptr;};
    inline const vector<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNumKeyInfo> & keyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNumKeyInfo>) };
    inline vector<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNumKeyInfo> keyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNumKeyInfo>) };
    inline DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum& setKeyInfo(const vector<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNumKeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
    inline DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNum& setKeyInfo(vector<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNumKeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCacheAnalysisJobResponseBodyDataBigKeysOfNumKeyInfo>> keyInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
