// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANRESULTSBYENGINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANRESULTSBYENGINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
namespace Models
{
  class DescribeScanResultsByEngineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScanResultsByEngineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(baselineState, baselineState_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(packageName, packageName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScanResultsByEngineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(baselineState, baselineState_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(packageName, packageName_);
    };
    DescribeScanResultsByEngineRequest() = default ;
    DescribeScanResultsByEngineRequest(const DescribeScanResultsByEngineRequest &) = default ;
    DescribeScanResultsByEngineRequest(DescribeScanResultsByEngineRequest &&) = default ;
    DescribeScanResultsByEngineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScanResultsByEngineRequest() = default ;
    DescribeScanResultsByEngineRequest& operator=(const DescribeScanResultsByEngineRequest &) = default ;
    DescribeScanResultsByEngineRequest& operator=(DescribeScanResultsByEngineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineState_ == nullptr
        && this->lang_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->packageName_ == nullptr; };
    // baselineState Field Functions 
    bool hasBaselineState() const { return this->baselineState_ != nullptr;};
    void deleteBaselineState() { this->baselineState_ = nullptr;};
    inline string getBaselineState() const { DARABONBA_PTR_GET_DEFAULT(baselineState_, "") };
    inline DescribeScanResultsByEngineRequest& setBaselineState(string baselineState) { DARABONBA_PTR_SET_VALUE(baselineState_, baselineState) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeScanResultsByEngineRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeScanResultsByEngineRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeScanResultsByEngineRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // packageName Field Functions 
    bool hasPackageName() const { return this->packageName_ != nullptr;};
    void deletePackageName() { this->packageName_ = nullptr;};
    inline string getPackageName() const { DARABONBA_PTR_GET_DEFAULT(packageName_, "") };
    inline DescribeScanResultsByEngineRequest& setPackageName(string packageName) { DARABONBA_PTR_SET_VALUE(packageName_, packageName) };


  protected:
    // 按 baseline_state 过滤 findings。值为 new/unchanged/absent/updated 之一。
    shared_ptr<string> baselineState_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> packageName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
