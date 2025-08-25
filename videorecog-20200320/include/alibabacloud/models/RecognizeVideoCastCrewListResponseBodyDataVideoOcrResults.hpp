// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATAVIDEOOCRRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATAVIDEOOCRRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults& obj) { 
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults() = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults(const RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults(RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults &&) = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults() = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults& operator=(const RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults& operator=(RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailInfo_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr; };
    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo> & detailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo>) };
    inline vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo> detailInfo() { DARABONBA_PTR_GET(detailInfo_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo>) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults& setDetailInfo(const vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults& setDetailInfo(vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline float startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataVideoOcrResults& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<Models::RecognizeVideoCastCrewListResponseBodyDataVideoOcrResultsDetailInfo>> detailInfo_ = nullptr;
    std::shared_ptr<float> endTime_ = nullptr;
    std::shared_ptr<float> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
