// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHANALYSISCOREINDEXRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHANALYSISCOREINDEXRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushAnalysisCoreIndexResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushAnalysisCoreIndexResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(ArrivalNum, arrivalNum_);
      DARABONBA_PTR_TO_JSON(ArrivalRate, arrivalRate_);
      DARABONBA_PTR_TO_JSON(IgnoreNum, ignoreNum_);
      DARABONBA_PTR_TO_JSON(IgnoreRate, ignoreRate_);
      DARABONBA_PTR_TO_JSON(OpenNum, openNum_);
      DARABONBA_PTR_TO_JSON(OpenRate, openRate_);
      DARABONBA_PTR_TO_JSON(PushNum, pushNum_);
      DARABONBA_PTR_TO_JSON(PushTotalNum, pushTotalNum_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushAnalysisCoreIndexResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrivalNum, arrivalNum_);
      DARABONBA_PTR_FROM_JSON(ArrivalRate, arrivalRate_);
      DARABONBA_PTR_FROM_JSON(IgnoreNum, ignoreNum_);
      DARABONBA_PTR_FROM_JSON(IgnoreRate, ignoreRate_);
      DARABONBA_PTR_FROM_JSON(OpenNum, openNum_);
      DARABONBA_PTR_FROM_JSON(OpenRate, openRate_);
      DARABONBA_PTR_FROM_JSON(PushNum, pushNum_);
      DARABONBA_PTR_FROM_JSON(PushTotalNum, pushTotalNum_);
    };
    QueryPushAnalysisCoreIndexResponseBodyResultContentData() = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContentData(const QueryPushAnalysisCoreIndexResponseBodyResultContentData &) = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContentData(QueryPushAnalysisCoreIndexResponseBodyResultContentData &&) = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushAnalysisCoreIndexResponseBodyResultContentData() = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContentData& operator=(const QueryPushAnalysisCoreIndexResponseBodyResultContentData &) = default ;
    QueryPushAnalysisCoreIndexResponseBodyResultContentData& operator=(QueryPushAnalysisCoreIndexResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrivalNum_ == nullptr
        && return this->arrivalRate_ == nullptr && return this->ignoreNum_ == nullptr && return this->ignoreRate_ == nullptr && return this->openNum_ == nullptr && return this->openRate_ == nullptr
        && return this->pushNum_ == nullptr && return this->pushTotalNum_ == nullptr; };
    // arrivalNum Field Functions 
    bool hasArrivalNum() const { return this->arrivalNum_ != nullptr;};
    void deleteArrivalNum() { this->arrivalNum_ = nullptr;};
    inline float arrivalNum() const { DARABONBA_PTR_GET_DEFAULT(arrivalNum_, 0.0) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContentData& setArrivalNum(float arrivalNum) { DARABONBA_PTR_SET_VALUE(arrivalNum_, arrivalNum) };


    // arrivalRate Field Functions 
    bool hasArrivalRate() const { return this->arrivalRate_ != nullptr;};
    void deleteArrivalRate() { this->arrivalRate_ = nullptr;};
    inline float arrivalRate() const { DARABONBA_PTR_GET_DEFAULT(arrivalRate_, 0.0) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContentData& setArrivalRate(float arrivalRate) { DARABONBA_PTR_SET_VALUE(arrivalRate_, arrivalRate) };


    // ignoreNum Field Functions 
    bool hasIgnoreNum() const { return this->ignoreNum_ != nullptr;};
    void deleteIgnoreNum() { this->ignoreNum_ = nullptr;};
    inline float ignoreNum() const { DARABONBA_PTR_GET_DEFAULT(ignoreNum_, 0.0) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContentData& setIgnoreNum(float ignoreNum) { DARABONBA_PTR_SET_VALUE(ignoreNum_, ignoreNum) };


    // ignoreRate Field Functions 
    bool hasIgnoreRate() const { return this->ignoreRate_ != nullptr;};
    void deleteIgnoreRate() { this->ignoreRate_ = nullptr;};
    inline float ignoreRate() const { DARABONBA_PTR_GET_DEFAULT(ignoreRate_, 0.0) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContentData& setIgnoreRate(float ignoreRate) { DARABONBA_PTR_SET_VALUE(ignoreRate_, ignoreRate) };


    // openNum Field Functions 
    bool hasOpenNum() const { return this->openNum_ != nullptr;};
    void deleteOpenNum() { this->openNum_ = nullptr;};
    inline float openNum() const { DARABONBA_PTR_GET_DEFAULT(openNum_, 0.0) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContentData& setOpenNum(float openNum) { DARABONBA_PTR_SET_VALUE(openNum_, openNum) };


    // openRate Field Functions 
    bool hasOpenRate() const { return this->openRate_ != nullptr;};
    void deleteOpenRate() { this->openRate_ = nullptr;};
    inline float openRate() const { DARABONBA_PTR_GET_DEFAULT(openRate_, 0.0) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContentData& setOpenRate(float openRate) { DARABONBA_PTR_SET_VALUE(openRate_, openRate) };


    // pushNum Field Functions 
    bool hasPushNum() const { return this->pushNum_ != nullptr;};
    void deletePushNum() { this->pushNum_ = nullptr;};
    inline float pushNum() const { DARABONBA_PTR_GET_DEFAULT(pushNum_, 0.0) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContentData& setPushNum(float pushNum) { DARABONBA_PTR_SET_VALUE(pushNum_, pushNum) };


    // pushTotalNum Field Functions 
    bool hasPushTotalNum() const { return this->pushTotalNum_ != nullptr;};
    void deletePushTotalNum() { this->pushTotalNum_ = nullptr;};
    inline float pushTotalNum() const { DARABONBA_PTR_GET_DEFAULT(pushTotalNum_, 0.0) };
    inline QueryPushAnalysisCoreIndexResponseBodyResultContentData& setPushTotalNum(float pushTotalNum) { DARABONBA_PTR_SET_VALUE(pushTotalNum_, pushTotalNum) };


  protected:
    std::shared_ptr<float> arrivalNum_ = nullptr;
    std::shared_ptr<float> arrivalRate_ = nullptr;
    std::shared_ptr<float> ignoreNum_ = nullptr;
    std::shared_ptr<float> ignoreRate_ = nullptr;
    std::shared_ptr<float> openNum_ = nullptr;
    std::shared_ptr<float> openRate_ = nullptr;
    std::shared_ptr<float> pushNum_ = nullptr;
    std::shared_ptr<float> pushTotalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
