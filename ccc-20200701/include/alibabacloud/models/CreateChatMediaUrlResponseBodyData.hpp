// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATMEDIAURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATMEDIAURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateChatMediaUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatMediaUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatMediaUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateChatMediaUrlResponseBodyData() = default ;
    CreateChatMediaUrlResponseBodyData(const CreateChatMediaUrlResponseBodyData &) = default ;
    CreateChatMediaUrlResponseBodyData(CreateChatMediaUrlResponseBodyData &&) = default ;
    CreateChatMediaUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatMediaUrlResponseBodyData() = default ;
    CreateChatMediaUrlResponseBodyData& operator=(const CreateChatMediaUrlResponseBodyData &) = default ;
    CreateChatMediaUrlResponseBodyData& operator=(CreateChatMediaUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->url_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline CreateChatMediaUrlResponseBodyData& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateChatMediaUrlResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
