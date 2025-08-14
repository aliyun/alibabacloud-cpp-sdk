// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUESTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDYNAMICIMAGEJOBREQUESTOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitDynamicImageJobRequestOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDynamicImageJobRequestOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDynamicImageJobRequestOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitDynamicImageJobRequestOutput() = default ;
    SubmitDynamicImageJobRequestOutput(const SubmitDynamicImageJobRequestOutput &) = default ;
    SubmitDynamicImageJobRequestOutput(SubmitDynamicImageJobRequestOutput &&) = default ;
    SubmitDynamicImageJobRequestOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDynamicImageJobRequestOutput() = default ;
    SubmitDynamicImageJobRequestOutput& operator=(const SubmitDynamicImageJobRequestOutput &) = default ;
    SubmitDynamicImageJobRequestOutput& operator=(SubmitDynamicImageJobRequestOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->media_ != nullptr
        && this->type_ != nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline SubmitDynamicImageJobRequestOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitDynamicImageJobRequestOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The output file. The file can be an OSS object or a media asset. The URL of an OSS object can be in one of the following formats:
    // 
    // *   oss://bucket/object
    // *   http(s)://bucket.oss-[regionId].aliyuncs.com/object
    // 
    // In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS.
    // 
    // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the IMS console.
    // 
    // This parameter is required.
    std::shared_ptr<string> media_ = nullptr;
    // The type of the output file. Valid values:
    // 
    // 1.  OSS: an OSS object.
    // 2.  Media: a media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
