// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTOPENINGLISTOPENING_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTOPENINGLISTOPENING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputOpeningListOpening : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputOpeningListOpening& obj) { 
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(openUrl, openUrl_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputOpeningListOpening& obj) { 
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(openUrl, openUrl_);
    };
    QueryJobListResponseBodyJobListJobOutputOpeningListOpening() = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningListOpening(const QueryJobListResponseBodyJobListJobOutputOpeningListOpening &) = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningListOpening(QueryJobListResponseBodyJobListJobOutputOpeningListOpening &&) = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningListOpening(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputOpeningListOpening() = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningListOpening& operator=(const QueryJobListResponseBodyJobListJobOutputOpeningListOpening &) = default ;
    QueryJobListResponseBodyJobListJobOutputOpeningListOpening& operator=(QueryJobListResponseBodyJobListJobOutputOpeningListOpening &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->height_ == nullptr
        && return this->start_ == nullptr && return this->width_ == nullptr && return this->openUrl_ == nullptr; };
    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline QueryJobListResponseBodyJobListJobOutputOpeningListOpening& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline string start() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
    inline QueryJobListResponseBodyJobListJobOutputOpeningListOpening& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline QueryJobListResponseBodyJobListJobOutputOpeningListOpening& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // openUrl Field Functions 
    bool hasOpenUrl() const { return this->openUrl_ != nullptr;};
    void deleteOpenUrl() { this->openUrl_ = nullptr;};
    inline string openUrl() const { DARABONBA_PTR_GET_DEFAULT(openUrl_, "") };
    inline QueryJobListResponseBodyJobListJobOutputOpeningListOpening& setOpenUrl(string openUrl) { DARABONBA_PTR_SET_VALUE(openUrl_, openUrl) };


  protected:
    // The height of the opening part.
    // 
    // *   Valid values: values in the range of (0,4096), -1, and full.
    // *   A value of -1 indicates that the original height of the opening part is retained.
    // *   A value of full indicates that the height of the opening part equals the height of the main part.
    // *   Default value: **-1**.
    std::shared_ptr<string> height_ = nullptr;
    // The amount of time after which the opening part is played.
    // 
    // *   The value starts from 0.
    // *   Unit: seconds.
    // *   Default value: **0**.
    std::shared_ptr<string> start_ = nullptr;
    // The width of the opening part.
    // 
    // *   Valid values: values in the range of (0,4096), -1, and full.
    // *   A value of -1 indicates that the original width of the opening part is retained.
    // *   A value of full indicates that the width of the opening part equals the width of the main part.
    // *   Default value: **-1**.
    std::shared_ptr<string> width_ = nullptr;
    // The OSS URL of the opening part.
    std::shared_ptr<string> openUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
