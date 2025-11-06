// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANALYSISCOREINDEXRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTANALYSISCOREINDEXRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListAnalysisCoreIndexResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnalysisCoreIndexResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(ArrivalNum, arrivalNum_);
      DARABONBA_PTR_TO_JSON(ArrivalRate, arrivalRate_);
      DARABONBA_PTR_TO_JSON(IgnoreNum, ignoreNum_);
      DARABONBA_PTR_TO_JSON(IgnoreRate, ignoreRate_);
      DARABONBA_PTR_TO_JSON(OpenNum, openNum_);
      DARABONBA_PTR_TO_JSON(OpenRate, openRate_);
      DARABONBA_PTR_TO_JSON(PushNum, pushNum_);
      DARABONBA_PTR_TO_JSON(PushTotalNum, pushTotalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnalysisCoreIndexResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrivalNum, arrivalNum_);
      DARABONBA_PTR_FROM_JSON(ArrivalRate, arrivalRate_);
      DARABONBA_PTR_FROM_JSON(IgnoreNum, ignoreNum_);
      DARABONBA_PTR_FROM_JSON(IgnoreRate, ignoreRate_);
      DARABONBA_PTR_FROM_JSON(OpenNum, openNum_);
      DARABONBA_PTR_FROM_JSON(OpenRate, openRate_);
      DARABONBA_PTR_FROM_JSON(PushNum, pushNum_);
      DARABONBA_PTR_FROM_JSON(PushTotalNum, pushTotalNum_);
    };
    ListAnalysisCoreIndexResponseBodyResultContentData() = default ;
    ListAnalysisCoreIndexResponseBodyResultContentData(const ListAnalysisCoreIndexResponseBodyResultContentData &) = default ;
    ListAnalysisCoreIndexResponseBodyResultContentData(ListAnalysisCoreIndexResponseBodyResultContentData &&) = default ;
    ListAnalysisCoreIndexResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnalysisCoreIndexResponseBodyResultContentData() = default ;
    ListAnalysisCoreIndexResponseBodyResultContentData& operator=(const ListAnalysisCoreIndexResponseBodyResultContentData &) = default ;
    ListAnalysisCoreIndexResponseBodyResultContentData& operator=(ListAnalysisCoreIndexResponseBodyResultContentData &&) = default ;
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
    inline string arrivalNum() const { DARABONBA_PTR_GET_DEFAULT(arrivalNum_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContentData& setArrivalNum(string arrivalNum) { DARABONBA_PTR_SET_VALUE(arrivalNum_, arrivalNum) };


    // arrivalRate Field Functions 
    bool hasArrivalRate() const { return this->arrivalRate_ != nullptr;};
    void deleteArrivalRate() { this->arrivalRate_ = nullptr;};
    inline string arrivalRate() const { DARABONBA_PTR_GET_DEFAULT(arrivalRate_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContentData& setArrivalRate(string arrivalRate) { DARABONBA_PTR_SET_VALUE(arrivalRate_, arrivalRate) };


    // ignoreNum Field Functions 
    bool hasIgnoreNum() const { return this->ignoreNum_ != nullptr;};
    void deleteIgnoreNum() { this->ignoreNum_ = nullptr;};
    inline string ignoreNum() const { DARABONBA_PTR_GET_DEFAULT(ignoreNum_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContentData& setIgnoreNum(string ignoreNum) { DARABONBA_PTR_SET_VALUE(ignoreNum_, ignoreNum) };


    // ignoreRate Field Functions 
    bool hasIgnoreRate() const { return this->ignoreRate_ != nullptr;};
    void deleteIgnoreRate() { this->ignoreRate_ = nullptr;};
    inline string ignoreRate() const { DARABONBA_PTR_GET_DEFAULT(ignoreRate_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContentData& setIgnoreRate(string ignoreRate) { DARABONBA_PTR_SET_VALUE(ignoreRate_, ignoreRate) };


    // openNum Field Functions 
    bool hasOpenNum() const { return this->openNum_ != nullptr;};
    void deleteOpenNum() { this->openNum_ = nullptr;};
    inline string openNum() const { DARABONBA_PTR_GET_DEFAULT(openNum_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContentData& setOpenNum(string openNum) { DARABONBA_PTR_SET_VALUE(openNum_, openNum) };


    // openRate Field Functions 
    bool hasOpenRate() const { return this->openRate_ != nullptr;};
    void deleteOpenRate() { this->openRate_ = nullptr;};
    inline string openRate() const { DARABONBA_PTR_GET_DEFAULT(openRate_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContentData& setOpenRate(string openRate) { DARABONBA_PTR_SET_VALUE(openRate_, openRate) };


    // pushNum Field Functions 
    bool hasPushNum() const { return this->pushNum_ != nullptr;};
    void deletePushNum() { this->pushNum_ = nullptr;};
    inline string pushNum() const { DARABONBA_PTR_GET_DEFAULT(pushNum_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContentData& setPushNum(string pushNum) { DARABONBA_PTR_SET_VALUE(pushNum_, pushNum) };


    // pushTotalNum Field Functions 
    bool hasPushTotalNum() const { return this->pushTotalNum_ != nullptr;};
    void deletePushTotalNum() { this->pushTotalNum_ = nullptr;};
    inline string pushTotalNum() const { DARABONBA_PTR_GET_DEFAULT(pushTotalNum_, "") };
    inline ListAnalysisCoreIndexResponseBodyResultContentData& setPushTotalNum(string pushTotalNum) { DARABONBA_PTR_SET_VALUE(pushTotalNum_, pushTotalNum) };


  protected:
    // 0
    std::shared_ptr<string> arrivalNum_ = nullptr;
    // 0
    std::shared_ptr<string> arrivalRate_ = nullptr;
    // 0
    std::shared_ptr<string> ignoreNum_ = nullptr;
    // 0
    std::shared_ptr<string> ignoreRate_ = nullptr;
    // 0
    std::shared_ptr<string> openNum_ = nullptr;
    // 0
    std::shared_ptr<string> openRate_ = nullptr;
    // 0
    std::shared_ptr<string> pushNum_ = nullptr;
    // 0
    std::shared_ptr<string> pushTotalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
