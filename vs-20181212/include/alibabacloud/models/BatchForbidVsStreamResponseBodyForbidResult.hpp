// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODYFORBIDRESULT_HPP_
#define ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODYFORBIDRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchForbidVsStreamResponseBodyForbidResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchForbidVsStreamResponseBodyForbidResult& obj) { 
      DARABONBA_PTR_TO_JSON(ForbidResultInfo, forbidResultInfo_);
    };
    friend void from_json(const Darabonba::Json& j, BatchForbidVsStreamResponseBodyForbidResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbidResultInfo, forbidResultInfo_);
    };
    BatchForbidVsStreamResponseBodyForbidResult() = default ;
    BatchForbidVsStreamResponseBodyForbidResult(const BatchForbidVsStreamResponseBodyForbidResult &) = default ;
    BatchForbidVsStreamResponseBodyForbidResult(BatchForbidVsStreamResponseBodyForbidResult &&) = default ;
    BatchForbidVsStreamResponseBodyForbidResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchForbidVsStreamResponseBodyForbidResult() = default ;
    BatchForbidVsStreamResponseBodyForbidResult& operator=(const BatchForbidVsStreamResponseBodyForbidResult &) = default ;
    BatchForbidVsStreamResponseBodyForbidResult& operator=(BatchForbidVsStreamResponseBodyForbidResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forbidResultInfo_ == nullptr; };
    // forbidResultInfo Field Functions 
    bool hasForbidResultInfo() const { return this->forbidResultInfo_ != nullptr;};
    void deleteForbidResultInfo() { this->forbidResultInfo_ = nullptr;};
    inline const vector<Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo> & forbidResultInfo() const { DARABONBA_PTR_GET_CONST(forbidResultInfo_, vector<Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo>) };
    inline vector<Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo> forbidResultInfo() { DARABONBA_PTR_GET(forbidResultInfo_, vector<Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo>) };
    inline BatchForbidVsStreamResponseBodyForbidResult& setForbidResultInfo(const vector<Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo> & forbidResultInfo) { DARABONBA_PTR_SET_VALUE(forbidResultInfo_, forbidResultInfo) };
    inline BatchForbidVsStreamResponseBodyForbidResult& setForbidResultInfo(vector<Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo> && forbidResultInfo) { DARABONBA_PTR_SET_RVALUE(forbidResultInfo_, forbidResultInfo) };


  protected:
    std::shared_ptr<vector<Models::BatchForbidVsStreamResponseBodyForbidResultForbidResultInfo>> forbidResultInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
