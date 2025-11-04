// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSINPUTGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSINPUTGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsInputGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsInputGroup& obj) { 
      DARABONBA_PTR_TO_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsInputGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(InputUrl, inputUrl_);
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTranscodeJobsResponseBodyJobsInputGroup() = default ;
    ListTranscodeJobsResponseBodyJobsInputGroup(const ListTranscodeJobsResponseBodyJobsInputGroup &) = default ;
    ListTranscodeJobsResponseBodyJobsInputGroup(ListTranscodeJobsResponseBodyJobsInputGroup &&) = default ;
    ListTranscodeJobsResponseBodyJobsInputGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsInputGroup() = default ;
    ListTranscodeJobsResponseBodyJobsInputGroup& operator=(const ListTranscodeJobsResponseBodyJobsInputGroup &) = default ;
    ListTranscodeJobsResponseBodyJobsInputGroup& operator=(ListTranscodeJobsResponseBodyJobsInputGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputUrl_ == nullptr
        && return this->media_ == nullptr && return this->type_ == nullptr; };
    // inputUrl Field Functions 
    bool hasInputUrl() const { return this->inputUrl_ != nullptr;};
    void deleteInputUrl() { this->inputUrl_ = nullptr;};
    inline string inputUrl() const { DARABONBA_PTR_GET_DEFAULT(inputUrl_, "") };
    inline ListTranscodeJobsResponseBodyJobsInputGroup& setInputUrl(string inputUrl) { DARABONBA_PTR_SET_VALUE(inputUrl_, inputUrl) };


    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline ListTranscodeJobsResponseBodyJobsInputGroup& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTranscodeJobsResponseBodyJobsInputGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The URL of the media asset. This parameter is specified only when the media asset is transcoded.
    std::shared_ptr<string> inputUrl_ = nullptr;
    // The media object.
    // 
    // *   If Type is set to OSS, the URL of an OSS object is returned. Both the OSS and HTTP protocols are supported.
    // *   If Type is set to Media, the ID of a media asset is returned.
    std::shared_ptr<string> media_ = nullptr;
    // The type of the media object. Valid values:
    // 
    // *   OSS: an Object Storage Service (OSS) object.
    // *   Media: a media asset.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
