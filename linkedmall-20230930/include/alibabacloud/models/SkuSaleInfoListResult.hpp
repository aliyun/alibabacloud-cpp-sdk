// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKUSALEINFOLISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_SKUSALEINFOLISTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SkuSaleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class SkuSaleInfoListResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkuSaleInfoListResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(skuSaleInfos, skuSaleInfos_);
    };
    friend void from_json(const Darabonba::Json& j, SkuSaleInfoListResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(skuSaleInfos, skuSaleInfos_);
    };
    SkuSaleInfoListResult() = default ;
    SkuSaleInfoListResult(const SkuSaleInfoListResult &) = default ;
    SkuSaleInfoListResult(SkuSaleInfoListResult &&) = default ;
    SkuSaleInfoListResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkuSaleInfoListResult() = default ;
    SkuSaleInfoListResult& operator=(const SkuSaleInfoListResult &) = default ;
    SkuSaleInfoListResult& operator=(SkuSaleInfoListResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->skuSaleInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SkuSaleInfoListResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skuSaleInfos Field Functions 
    bool hasSkuSaleInfos() const { return this->skuSaleInfos_ != nullptr;};
    void deleteSkuSaleInfos() { this->skuSaleInfos_ = nullptr;};
    inline const vector<SkuSaleInfo> & getSkuSaleInfos() const { DARABONBA_PTR_GET_CONST(skuSaleInfos_, vector<SkuSaleInfo>) };
    inline vector<SkuSaleInfo> getSkuSaleInfos() { DARABONBA_PTR_GET(skuSaleInfos_, vector<SkuSaleInfo>) };
    inline SkuSaleInfoListResult& setSkuSaleInfos(const vector<SkuSaleInfo> & skuSaleInfos) { DARABONBA_PTR_SET_VALUE(skuSaleInfos_, skuSaleInfos) };
    inline SkuSaleInfoListResult& setSkuSaleInfos(vector<SkuSaleInfo> && skuSaleInfos) { DARABONBA_PTR_SET_RVALUE(skuSaleInfos_, skuSaleInfos) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<SkuSaleInfo>> skuSaleInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
