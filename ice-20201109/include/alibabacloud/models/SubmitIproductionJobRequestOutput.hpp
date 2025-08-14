// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIPRODUCTIONJOBREQUESTOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIPRODUCTIONJOBREQUESTOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitIProductionJobRequestOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitIProductionJobRequestOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitIProductionJobRequestOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitIProductionJobRequestOutput() = default ;
    SubmitIProductionJobRequestOutput(const SubmitIProductionJobRequestOutput &) = default ;
    SubmitIProductionJobRequestOutput(SubmitIProductionJobRequestOutput &&) = default ;
    SubmitIProductionJobRequestOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitIProductionJobRequestOutput() = default ;
    SubmitIProductionJobRequestOutput& operator=(const SubmitIProductionJobRequestOutput &) = default ;
    SubmitIProductionJobRequestOutput& operator=(SubmitIProductionJobRequestOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->biz_ != nullptr
        && this->media_ != nullptr && this->outputUrl_ != nullptr && this->type_ != nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string biz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline SubmitIProductionJobRequestOutput& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline SubmitIProductionJobRequestOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline SubmitIProductionJobRequestOutput& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitIProductionJobRequestOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> biz_ = nullptr;
    // The output file. If Type is set to OSS, set this parameter to the path of an OSS object. If Type is set to Media, set this parameter to the ID of a media asset. You can specify the path of an OSS object in one of the following formats:
    // 
    // 1.  oss://bucket/object
    // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object bucket in the path specifies an OSS bucket that resides in the same region as the intelligent production job. object in the path specifies the object path in OSS.
    // 
    // This parameter is required.
    std::shared_ptr<string> media_ = nullptr;
    std::shared_ptr<string> outputUrl_ = nullptr;
    // The media type. Valid values:
    // 
    // *   OSS: OSS object
    // *   Media: media asset
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
