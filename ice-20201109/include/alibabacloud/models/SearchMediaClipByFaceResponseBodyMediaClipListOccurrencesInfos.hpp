// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODYMEDIACLIPLISTOCCURRENCESINFOS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODYMEDIACLIPLISTOCCURRENCESINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrackData, trackData_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrackData, trackData_);
    };
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos() = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos(const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos &) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos(SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos &&) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos() = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& operator=(const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos &) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& operator=(SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->expression_ == nullptr && return this->startTime_ == nullptr && return this->trackData_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline float startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trackData Field Functions 
    bool hasTrackData() const { return this->trackData_ != nullptr;};
    void deleteTrackData() { this->trackData_ = nullptr;};
    inline const vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData> & trackData() const { DARABONBA_PTR_GET_CONST(trackData_, vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData>) };
    inline vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData> trackData() { DARABONBA_PTR_GET(trackData_, vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData>) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& setTrackData(const vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData> & trackData) { DARABONBA_PTR_SET_VALUE(trackData_, trackData) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfos& setTrackData(vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData> && trackData) { DARABONBA_PTR_SET_RVALUE(trackData_, trackData) };


  protected:
    // The end time of the clip. Unit: seconds. The value is of the Float type.
    std::shared_ptr<float> endTime_ = nullptr;
    std::shared_ptr<string> expression_ = nullptr;
    // The start time of the clip. Unit: seconds. The value is of the Float type.
    std::shared_ptr<float> startTime_ = nullptr;
    // The information about the face in the clip.
    std::shared_ptr<vector<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData>> trackData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
