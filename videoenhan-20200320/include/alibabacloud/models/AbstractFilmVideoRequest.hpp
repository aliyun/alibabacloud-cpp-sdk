// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABSTRACTFILMVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABSTRACTFILMVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AbstractFilmVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbstractFilmVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AbstractFilmVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    AbstractFilmVideoRequest() = default ;
    AbstractFilmVideoRequest(const AbstractFilmVideoRequest &) = default ;
    AbstractFilmVideoRequest(AbstractFilmVideoRequest &&) = default ;
    AbstractFilmVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbstractFilmVideoRequest() = default ;
    AbstractFilmVideoRequest& operator=(const AbstractFilmVideoRequest &) = default ;
    AbstractFilmVideoRequest& operator=(AbstractFilmVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->length_ != nullptr
        && this->videoUrl_ != nullptr; };
    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline AbstractFilmVideoRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline AbstractFilmVideoRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> length_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
