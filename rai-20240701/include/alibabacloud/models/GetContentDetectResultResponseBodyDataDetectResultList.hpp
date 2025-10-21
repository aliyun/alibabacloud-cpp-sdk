// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTENTDETECTRESULTRESPONSEBODYDATADETECTRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTENTDETECTRESULTRESPONSEBODYDATADETECTRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class GetContentDetectResultResponseBodyDataDetectResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContentDetectResultResponseBodyDataDetectResultList& obj) { 
      DARABONBA_PTR_TO_JSON(RiskInfo, riskInfo_);
      DARABONBA_PTR_TO_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetContentDetectResultResponseBodyDataDetectResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskInfo, riskInfo_);
      DARABONBA_PTR_FROM_JSON(RiskResult, riskResult_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetContentDetectResultResponseBodyDataDetectResultList() = default ;
    GetContentDetectResultResponseBodyDataDetectResultList(const GetContentDetectResultResponseBodyDataDetectResultList &) = default ;
    GetContentDetectResultResponseBodyDataDetectResultList(GetContentDetectResultResponseBodyDataDetectResultList &&) = default ;
    GetContentDetectResultResponseBodyDataDetectResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContentDetectResultResponseBodyDataDetectResultList() = default ;
    GetContentDetectResultResponseBodyDataDetectResultList& operator=(const GetContentDetectResultResponseBodyDataDetectResultList &) = default ;
    GetContentDetectResultResponseBodyDataDetectResultList& operator=(GetContentDetectResultResponseBodyDataDetectResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskInfo_ == nullptr
        && return this->riskResult_ == nullptr && return this->status_ == nullptr; };
    // riskInfo Field Functions 
    bool hasRiskInfo() const { return this->riskInfo_ != nullptr;};
    void deleteRiskInfo() { this->riskInfo_ = nullptr;};
    inline string riskInfo() const { DARABONBA_PTR_GET_DEFAULT(riskInfo_, "") };
    inline GetContentDetectResultResponseBodyDataDetectResultList& setRiskInfo(string riskInfo) { DARABONBA_PTR_SET_VALUE(riskInfo_, riskInfo) };


    // riskResult Field Functions 
    bool hasRiskResult() const { return this->riskResult_ != nullptr;};
    void deleteRiskResult() { this->riskResult_ = nullptr;};
    inline int32_t riskResult() const { DARABONBA_PTR_GET_DEFAULT(riskResult_, 0) };
    inline GetContentDetectResultResponseBodyDataDetectResultList& setRiskResult(int32_t riskResult) { DARABONBA_PTR_SET_VALUE(riskResult_, riskResult) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetContentDetectResultResponseBodyDataDetectResultList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> riskInfo_ = nullptr;
    std::shared_ptr<int32_t> riskResult_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
