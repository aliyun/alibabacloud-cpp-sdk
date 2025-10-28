// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECACHEANALYSISJOBRESPONSEBODYDATABIGKEYS_HPP_
#define ALIBABACLOUD_MODELS_CREATECACHEANALYSISJOBRESPONSEBODYDATABIGKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCacheAnalysisJobResponseBodyDataBigKeysKeyInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateCacheAnalysisJobResponseBodyDataBigKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCacheAnalysisJobResponseBodyDataBigKeys& obj) { 
      DARABONBA_PTR_TO_JSON(KeyInfo, keyInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCacheAnalysisJobResponseBodyDataBigKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyInfo, keyInfo_);
    };
    CreateCacheAnalysisJobResponseBodyDataBigKeys() = default ;
    CreateCacheAnalysisJobResponseBodyDataBigKeys(const CreateCacheAnalysisJobResponseBodyDataBigKeys &) = default ;
    CreateCacheAnalysisJobResponseBodyDataBigKeys(CreateCacheAnalysisJobResponseBodyDataBigKeys &&) = default ;
    CreateCacheAnalysisJobResponseBodyDataBigKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCacheAnalysisJobResponseBodyDataBigKeys() = default ;
    CreateCacheAnalysisJobResponseBodyDataBigKeys& operator=(const CreateCacheAnalysisJobResponseBodyDataBigKeys &) = default ;
    CreateCacheAnalysisJobResponseBodyDataBigKeys& operator=(CreateCacheAnalysisJobResponseBodyDataBigKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyInfo_ == nullptr; };
    // keyInfo Field Functions 
    bool hasKeyInfo() const { return this->keyInfo_ != nullptr;};
    void deleteKeyInfo() { this->keyInfo_ = nullptr;};
    inline const vector<Models::CreateCacheAnalysisJobResponseBodyDataBigKeysKeyInfo> & keyInfo() const { DARABONBA_PTR_GET_CONST(keyInfo_, vector<Models::CreateCacheAnalysisJobResponseBodyDataBigKeysKeyInfo>) };
    inline vector<Models::CreateCacheAnalysisJobResponseBodyDataBigKeysKeyInfo> keyInfo() { DARABONBA_PTR_GET(keyInfo_, vector<Models::CreateCacheAnalysisJobResponseBodyDataBigKeysKeyInfo>) };
    inline CreateCacheAnalysisJobResponseBodyDataBigKeys& setKeyInfo(const vector<Models::CreateCacheAnalysisJobResponseBodyDataBigKeysKeyInfo> & keyInfo) { DARABONBA_PTR_SET_VALUE(keyInfo_, keyInfo) };
    inline CreateCacheAnalysisJobResponseBodyDataBigKeys& setKeyInfo(vector<Models::CreateCacheAnalysisJobResponseBodyDataBigKeysKeyInfo> && keyInfo) { DARABONBA_PTR_SET_RVALUE(keyInfo_, keyInfo) };


  protected:
    std::shared_ptr<vector<Models::CreateCacheAnalysisJobResponseBodyDataBigKeysKeyInfo>> keyInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
