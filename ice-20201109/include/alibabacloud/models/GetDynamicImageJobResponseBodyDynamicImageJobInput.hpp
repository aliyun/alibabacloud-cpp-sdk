// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDYNAMICIMAGEJOBRESPONSEBODYDYNAMICIMAGEJOBINPUT_HPP_
#define ALIBABACLOUD_MODELS_GETDYNAMICIMAGEJOBRESPONSEBODYDYNAMICIMAGEJOBINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDynamicImageJobResponseBodyDynamicImageJobInputOssFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetDynamicImageJobResponseBodyDynamicImageJobInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDynamicImageJobResponseBodyDynamicImageJobInput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(OssFile, ossFile_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDynamicImageJobResponseBodyDynamicImageJobInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(OssFile, ossFile_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDynamicImageJobResponseBodyDynamicImageJobInput() = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobInput(const GetDynamicImageJobResponseBodyDynamicImageJobInput &) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobInput(GetDynamicImageJobResponseBodyDynamicImageJobInput &&) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDynamicImageJobResponseBodyDynamicImageJobInput() = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobInput& operator=(const GetDynamicImageJobResponseBodyDynamicImageJobInput &) = default ;
    GetDynamicImageJobResponseBodyDynamicImageJobInput& operator=(GetDynamicImageJobResponseBodyDynamicImageJobInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->media_ != nullptr
        && this->ossFile_ != nullptr && this->type_ != nullptr; };
    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJobInput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // ossFile Field Functions 
    bool hasOssFile() const { return this->ossFile_ != nullptr;};
    void deleteOssFile() { this->ossFile_ = nullptr;};
    inline const Models::GetDynamicImageJobResponseBodyDynamicImageJobInputOssFile & ossFile() const { DARABONBA_PTR_GET_CONST(ossFile_, Models::GetDynamicImageJobResponseBodyDynamicImageJobInputOssFile) };
    inline Models::GetDynamicImageJobResponseBodyDynamicImageJobInputOssFile ossFile() { DARABONBA_PTR_GET(ossFile_, Models::GetDynamicImageJobResponseBodyDynamicImageJobInputOssFile) };
    inline GetDynamicImageJobResponseBodyDynamicImageJobInput& setOssFile(const Models::GetDynamicImageJobResponseBodyDynamicImageJobInputOssFile & ossFile) { DARABONBA_PTR_SET_VALUE(ossFile_, ossFile) };
    inline GetDynamicImageJobResponseBodyDynamicImageJobInput& setOssFile(Models::GetDynamicImageJobResponseBodyDynamicImageJobInputOssFile && ossFile) { DARABONBA_PTR_SET_RVALUE(ossFile_, ossFile) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDynamicImageJobResponseBodyDynamicImageJobInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The input file. If Type is set to OSS, the URL of an OSS object is returned. If Type is set to Media, the ID of a media asset is returned. The URL of an OSS object can be in one of the following formats:
    // 
    // 1.  OSS://bucket/object
    // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object
    // 
    // In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS.
    std::shared_ptr<string> media_ = nullptr;
    // The three key elements of OSS.
    std::shared_ptr<Models::GetDynamicImageJobResponseBodyDynamicImageJobInputOssFile> ossFile_ = nullptr;
    // The type of the input file. Valid values:
    // 
    // 1.  OSS: an Object Storage Service (OSS) object.
    // 2.  Media: a media asset.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
