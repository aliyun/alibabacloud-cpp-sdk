// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATACASTRESULTS_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVIDEOCASTCREWLISTRESPONSEBODYDATACASTRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class RecognizeVideoCastCrewListResponseBodyDataCastResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVideoCastCrewListResponseBodyDataCastResults& obj) { 
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVideoCastCrewListResponseBodyDataCastResults& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    RecognizeVideoCastCrewListResponseBodyDataCastResults() = default ;
    RecognizeVideoCastCrewListResponseBodyDataCastResults(const RecognizeVideoCastCrewListResponseBodyDataCastResults &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataCastResults(RecognizeVideoCastCrewListResponseBodyDataCastResults &&) = default ;
    RecognizeVideoCastCrewListResponseBodyDataCastResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVideoCastCrewListResponseBodyDataCastResults() = default ;
    RecognizeVideoCastCrewListResponseBodyDataCastResults& operator=(const RecognizeVideoCastCrewListResponseBodyDataCastResults &) = default ;
    RecognizeVideoCastCrewListResponseBodyDataCastResults& operator=(RecognizeVideoCastCrewListResponseBodyDataCastResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailInfo_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr; };
    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const map<string, string> & detailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, map<string, string>) };
    inline map<string, string> detailInfo() { DARABONBA_PTR_GET(detailInfo_, map<string, string>) };
    inline RecognizeVideoCastCrewListResponseBodyDataCastResults& setDetailInfo(const map<string, string> & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline RecognizeVideoCastCrewListResponseBodyDataCastResults& setDetailInfo(map<string, string> && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataCastResults& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline float startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline RecognizeVideoCastCrewListResponseBodyDataCastResults& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<map<string, string>> detailInfo_ = nullptr;
    std::shared_ptr<float> endTime_ = nullptr;
    std::shared_ptr<float> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
