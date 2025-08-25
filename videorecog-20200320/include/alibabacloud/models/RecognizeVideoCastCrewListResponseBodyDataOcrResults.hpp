// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATAOCRRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATAOCRRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListResponseBodyDataOcrResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListResponseBodyDataOcrResults& obj) { 
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListResponseBodyDataOcrResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    RecognizeVideoCastCrewListResponseBodyDataOcrResults() = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResults(const RecognizeVideoCastCrewListResponseBodyDataOcrResults &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResults(RecognizeVideoCastCrewListResponseBodyDataOcrResults &&) = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListResponseBodyDataOcrResults() = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResults& operator=(const RecognizeVideoCastCrewListResponseBodyDataOcrResults &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataOcrResults& operator=(RecognizeVideoCastCrewListResponseBodyDataOcrResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailInfo_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr; };
    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo> & detailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo>) };
    inline vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo> detailInfo() { DARABONBA_PTR_GET(detailInfo_, vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo>) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResults& setDetailInfo(const vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResults& setDetailInfo(vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResults& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline float startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataOcrResults& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<Models::RecognizeVideoCastCrewListResponseBodyDataOcrResultsDetailInfo>> detailInfo_ = nullptr;
    std::shared_ptr<float> endTime_ = nullptr;
    std::shared_ptr<float> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
