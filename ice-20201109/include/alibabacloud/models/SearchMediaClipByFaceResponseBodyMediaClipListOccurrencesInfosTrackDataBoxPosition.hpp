// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODYMEDIACLIPLISTOCCURRENCESINFOSTRACKDATABOXPOSITION_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIACLIPBYFACERESPONSEBODYMEDIACLIPLISTOCCURRENCESINFOSTRACKDATABOXPOSITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition& obj) { 
      DARABONBA_PTR_TO_JSON(H, h_);
      DARABONBA_PTR_TO_JSON(W, w_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition& obj) { 
      DARABONBA_PTR_FROM_JSON(H, h_);
      DARABONBA_PTR_FROM_JSON(W, w_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition() = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition(const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition &) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition(SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition &&) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition() = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition& operator=(const SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition &) = default ;
    SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition& operator=(SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->h_ == nullptr
        && return this->w_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // h Field Functions 
    bool hasH() const { return this->h_ != nullptr;};
    void deleteH() { this->h_ = nullptr;};
    inline int32_t h() const { DARABONBA_PTR_GET_DEFAULT(h_, 0) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition& setH(int32_t h) { DARABONBA_PTR_SET_VALUE(h_, h) };


    // w Field Functions 
    bool hasW() const { return this->w_ != nullptr;};
    void deleteW() { this->w_ = nullptr;};
    inline int32_t w() const { DARABONBA_PTR_GET_DEFAULT(w_, 0) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition& setW(int32_t w) { DARABONBA_PTR_SET_VALUE(w_, w) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int32_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int32_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
    inline SearchMediaClipByFaceResponseBodyMediaClipListOccurrencesInfosTrackDataBoxPosition& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    // The height of the rectangle frame. Unit: pixels.
    std::shared_ptr<int32_t> h_ = nullptr;
    // The width of the rectangle frame. Unit: pixels.
    std::shared_ptr<int32_t> w_ = nullptr;
    // The x-axis coordinate of the upper-left corner. Unit: pixels.
    std::shared_ptr<int32_t> x_ = nullptr;
    // The y-axis coordinate of the upper-left corner. Unit: pixels.
    std::shared_ptr<int32_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
