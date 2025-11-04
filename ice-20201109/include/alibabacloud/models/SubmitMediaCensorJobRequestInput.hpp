// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIACENSORJOBREQUESTINPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIACENSORJOBREQUESTINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaCensorJobRequestInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaCensorJobRequestInput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaCensorJobRequestInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitMediaCensorJobRequestInput() = default ;
    SubmitMediaCensorJobRequestInput(const SubmitMediaCensorJobRequestInput &) = default ;
    SubmitMediaCensorJobRequestInput(SubmitMediaCensorJobRequestInput &&) = default ;
    SubmitMediaCensorJobRequestInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaCensorJobRequestInput() = default ;
    SubmitMediaCensorJobRequestInput& operator=(const SubmitMediaCensorJobRequestInput &) = default ;
    SubmitMediaCensorJobRequestInput& operator=(SubmitMediaCensorJobRequestInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->media_ == nullptr
        && return this->type_ == nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline SubmitMediaCensorJobRequestInput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitMediaCensorJobRequestInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The input file. The file can be an OSS object or a media asset. You can specify the path of an OSS object in one of the following formats:
    // 
    // 1\\. oss://bucket/object
    // 
    // 2\\. http(s)://bucket.oss-[regionId].aliyuncs.com/object
    // 
    // In the preceding paths, bucket indicates an OSS bucket that resides in the same region as the current project, and object indicates the path of the object in the bucket.
    std::shared_ptr<string> media_ = nullptr;
    // The type of the input file. Valid values:
    // 
    // OSS: OSS object.
    // 
    // Media: media asset.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
