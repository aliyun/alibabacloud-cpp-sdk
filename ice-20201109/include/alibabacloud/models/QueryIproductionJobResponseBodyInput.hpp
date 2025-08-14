// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODYINPUT_HPP_
#define ALIBABACLOUD_MODELS_QUERYIPRODUCTIONJOBRESPONSEBODYINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryIProductionJobResponseBodyInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryIProductionJobResponseBodyInput& obj) { 
      DARABONBA_PTR_TO_JSON(Media, media_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryIProductionJobResponseBodyInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Media, media_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryIProductionJobResponseBodyInput() = default ;
    QueryIProductionJobResponseBodyInput(const QueryIProductionJobResponseBodyInput &) = default ;
    QueryIProductionJobResponseBodyInput(QueryIProductionJobResponseBodyInput &&) = default ;
    QueryIProductionJobResponseBodyInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryIProductionJobResponseBodyInput() = default ;
    QueryIProductionJobResponseBodyInput& operator=(const QueryIProductionJobResponseBodyInput &) = default ;
    QueryIProductionJobResponseBodyInput& operator=(QueryIProductionJobResponseBodyInput &&) = default ;
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
    inline QueryIProductionJobResponseBodyInput& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryIProductionJobResponseBodyInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The input file. If Type is set to OSS, set this parameter to the path of an OSS object. If Type is set to Media, set this parameter to the ID of a media asset. You can specify the path of an OSS object in one of the following formats:
    // 
    // 1.  oss://bucket/object
    // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object bucket in the path specifies an OSS bucket that resides in the same region as the intelligent production job. object in the path specifies the object path in OSS.
    std::shared_ptr<string> media_ = nullptr;
    // The media type. Valid values:
    // 
    // 1.  OSS: Object Storage Service (OSS) object
    // 2.  Media: media asset
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
