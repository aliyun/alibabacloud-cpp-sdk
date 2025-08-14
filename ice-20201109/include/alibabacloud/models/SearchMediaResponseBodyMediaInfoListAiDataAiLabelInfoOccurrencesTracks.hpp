// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIDATAAILABELINFOOCCURRENCESTRACKS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIAINFOLISTAIDATAAILABELINFOOCCURRENCESTRACKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks& obj) { 
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks& obj) { 
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks() = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks(const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks &) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks(SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks &&) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks() = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks& operator=(const SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks &) = default ;
    SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks& operator=(SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->position_ != nullptr
        && this->size_ != nullptr && this->timestamp_ != nullptr; };
    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline double size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0.0) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks& setSize(double size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline double timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0.0) };
    inline SearchMediaResponseBodyMediaInfoListAiDataAiLabelInfoOccurrencesTracks& setTimestamp(double timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The coordinates of the bounding box.
    std::shared_ptr<string> position_ = nullptr;
    // The size of the bounding box.
    std::shared_ptr<double> size_ = nullptr;
    // The timestamp of the track.
    std::shared_ptr<double> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
