// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODYOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODYOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryIProductionJobResponseBodyOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIProductionJobResponseBodyOutput& obj) { 
      DARABONBA_PTR_TO_JSON(Biz, biz_);
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIProductionJobResponseBodyOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(Biz, biz_);
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(OutputUrl, outputUrl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryIProductionJobResponseBodyOutput() = default ;
    QueryIProductionJobResponseBodyOutput(const QueryIProductionJobResponseBodyOutput &) = default ;
    QueryIProductionJobResponseBodyOutput(QueryIProductionJobResponseBodyOutput &&) = default ;
    QueryIProductionJobResponseBodyOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIProductionJobResponseBodyOutput() = default ;
    QueryIProductionJobResponseBodyOutput& operator=(const QueryIProductionJobResponseBodyOutput &) = default ;
    QueryIProductionJobResponseBodyOutput& operator=(QueryIProductionJobResponseBodyOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->biz_ == nullptr
        && return this->media_ == nullptr && return this->outputUrl_ == nullptr && return this->type_ == nullptr; };
    // biz Field Functions 
    bool hasBiz() const { return this->biz_ != nullptr;};
    void deleteBiz() { this->biz_ = nullptr;};
    inline string biz() const { DARABONBA_PTR_GET_DEFAULT(biz_, "") };
    inline QueryIProductionJobResponseBodyOutput& setBiz(string biz) { DARABONBA_PTR_SET_VALUE(biz_, biz) };


    // media Field Functions 
    bool hasMedia() const { return this->media_ != nullptr;};
    void deleteMedia() { this->media_ = nullptr;};
    inline string media() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
    inline QueryIProductionJobResponseBodyOutput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // outputUrl Field Functions 
    bool hasOutputUrl() const { return this->outputUrl_ != nullptr;};
    void deleteOutputUrl() { this->outputUrl_ = nullptr;};
    inline string outputUrl() const { DARABONBA_PTR_GET_DEFAULT(outputUrl_, "") };
    inline QueryIProductionJobResponseBodyOutput& setOutputUrl(string outputUrl) { DARABONBA_PTR_SET_VALUE(outputUrl_, outputUrl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryIProductionJobResponseBodyOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> biz_ = nullptr;
    // The output file. If Type is set to OSS, set this parameter to the path of an OSS object. If Type is set to Media, set this parameter to the ID of a media asset. You can specify the path of an OSS object in one of the following formats:
    // 
    // 1.  oss://bucket/object
    // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object bucket in the path specifies an OSS bucket that resides in the same region as the intelligent production job. object in the path specifies the object path in OSS.
    std::shared_ptr<string> media_ = nullptr;
    std::shared_ptr<string> outputUrl_ = nullptr;
    // The media type. Valid values:
    // 
    // *   OSS: OSS object
    // *   Media: media asset
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
