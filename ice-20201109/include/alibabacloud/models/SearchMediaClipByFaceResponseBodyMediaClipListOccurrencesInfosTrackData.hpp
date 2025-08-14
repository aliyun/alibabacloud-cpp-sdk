// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODYMEDIACLIPLISTOCCURRENCESINFOSTRACKDATA_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODYMEDIACLIPLISTOCCURRENCESINFOSTRACKDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData& obj) { 
      DARABONBA_PTR_TO_JSON(BoxPosition, boxPosition_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData& obj) { 
      DARABONBA_PTR_FROM_JSON(BoxPosition, boxPosition_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData() = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData(const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData &) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData(SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData &&) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData() = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData& operator=(const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData &) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData& operator=(SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boxPosition_ != nullptr
        && this->timestamp_ != nullptr; };
    // boxPosition Field Functions 
    bool hasBoxPosition() const { return this->boxPosition_ != nullptr;};
    void deleteBoxPosition() { this->boxPosition_ = nullptr;};
    inline const Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition & boxPosition() const { DARABONBA_PTR_GET_CONST(boxPosition_, Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition) };
    inline Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition boxPosition() { DARABONBA_PTR_GET(boxPosition_, Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData& setBoxPosition(const Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition & boxPosition) { DARABONBA_PTR_SET_VALUE(boxPosition_, boxPosition) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData& setBoxPosition(Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition && boxPosition) { DARABONBA_PTR_SET_RVALUE(boxPosition_, boxPosition) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline float timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackData& setTimestamp(float timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The coordinates of the face.
    std::shared_ptr<Models::SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition> boxPosition_ = nullptr;
    // The timestamp when the face appears in the clip. Unit: seconds. The value is of the Float type.
    std::shared_ptr<float> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
