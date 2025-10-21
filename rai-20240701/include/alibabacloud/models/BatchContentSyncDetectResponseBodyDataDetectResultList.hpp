// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCONTENTSYNCDETECTRESPONSEBODYDATADETECTRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCONTENTSYNCDETECTRESPONSEBODYDATADETECTRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class BatchContentSyncDetectResponseBodyDataDetectResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchContentSyncDetectResponseBodyDataDetectResultList& obj) { 
      DARABONBA_PTR_TO_JSON(RiskInfo, riskInfo_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
    };
    friend void from_json(const Darabonba::Json& j, BatchContentSyncDetectResponseBodyDataDetectResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskInfo, riskInfo_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
    };
    BatchContentSyncDetectResponseBodyDataDetectResultList() = default ;
    BatchContentSyncDetectResponseBodyDataDetectResultList(const BatchContentSyncDetectResponseBodyDataDetectResultList &) = default ;
    BatchContentSyncDetectResponseBodyDataDetectResultList(BatchContentSyncDetectResponseBodyDataDetectResultList &&) = default ;
    BatchContentSyncDetectResponseBodyDataDetectResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchContentSyncDetectResponseBodyDataDetectResultList() = default ;
    BatchContentSyncDetectResponseBodyDataDetectResultList& operator=(const BatchContentSyncDetectResponseBodyDataDetectResultList &) = default ;
    BatchContentSyncDetectResponseBodyDataDetectResultList& operator=(BatchContentSyncDetectResponseBodyDataDetectResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskInfo_ == nullptr
        && return this->riskResult_ == nullptr; };
    // riskInfo Field Functions 
    bool hasRiskInfo() const { return this->riskInfo_ != nullptr;};
    void deleteRiskInfo() { this->riskInfo_ = nullptr;};
    inline string riskInfo() const { DARABONBA_PTR_GET_DEFAULT(riskInfo_, "") };
    inline BatchContentSyncDetectResponseBodyDataDetectResultList& setRiskInfo(string riskInfo) { DARABONBA_PTR_SET_VALUE(riskInfo_, riskInfo) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline BatchContentSyncDetectResponseBodyDataDetectResultList& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


  protected:
    std::shared_ptr<string> riskInfo_ = nullptr;
    std::shared_ptr<int32_t> riskResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
