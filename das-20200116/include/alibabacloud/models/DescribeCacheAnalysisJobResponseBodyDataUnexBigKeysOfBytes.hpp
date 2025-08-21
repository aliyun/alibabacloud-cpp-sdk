// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAUNEXBIGKEYSOFBYTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBRESPONSEBODYDATAUNEXBIGKEYSOFBYTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytesKeyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes& obj) { 
      DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
    };
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes() = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes(const DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes(DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes &&) = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes() = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes& operator=(const DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes &) = default ;
    DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes& operator=(DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyInfo_ != nullptr; };
    // keyInfo Field Functions 
    bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
    void deleteKeyInfo() { this->keyInfo_ = nullptr;};
    inline const vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytesKeyInfo> & keyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytesKeyInfo>) };
    inline vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytesKeyInfo> keyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytesKeyInfo>) };
    inline DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes& setKeyInfo(const vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytesKeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
    inline DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytes& setKeyInfo(vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytesKeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


  protected:
    std::shared_ptr<vector<Models::DescribeCacheAnalysisJobResponseBodyDataUnexBigKeysOfBytesKeyInfo>> keyInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
