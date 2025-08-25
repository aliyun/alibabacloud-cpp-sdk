// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ABSTRACTFILMVIDEOADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ABSTRACTFILMVIDEOADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AbstractFilmVideoAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AbstractFilmVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, AbstractFilmVideoAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    AbstractFilmVideoAdvanceRequest() = default ;
    AbstractFilmVideoAdvanceRequest(const AbstractFilmVideoAdvanceRequest &) = default ;
    AbstractFilmVideoAdvanceRequest(AbstractFilmVideoAdvanceRequest &&) = default ;
    AbstractFilmVideoAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AbstractFilmVideoAdvanceRequest() = default ;
    AbstractFilmVideoAdvanceRequest& operator=(const AbstractFilmVideoAdvanceRequest &) = default ;
    AbstractFilmVideoAdvanceRequest& operator=(AbstractFilmVideoAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->length_ != nullptr
        && this->videoUrlObject_ != nullptr; };
    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t length() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline AbstractFilmVideoAdvanceRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline AbstractFilmVideoAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> length_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
