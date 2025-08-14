// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBVIDEOCENSORCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBLISTRESPONSEBODYMEDIACENSORJOBLISTMEDIACENSORJOBVIDEOCENSORCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfigOutputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_TO_JSON(VideoCensor, videoCensor_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_FROM_JSON(VideoCensor, videoCensor_);
    };
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig &&) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig() = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig& operator=(const QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig &) = default ;
    QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig& operator=(QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->outputFile_ != nullptr && this->videoCensor_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfigOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfigOutputFile) };
    inline Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfigOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfigOutputFile) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig& setOutputFile(const Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfigOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig& setOutputFile(Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfigOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // videoCensor Field Functions 
    bool hasVideoCensor() const { return this->videoCensor_ != nullptr;};
    void deleteVideoCensor() { this->videoCensor_ = nullptr;};
    inline string videoCensor() const { DARABONBA_PTR_GET_DEFAULT(videoCensor_, "") };
    inline QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfig& setVideoCensor(string videoCensor) { DARABONBA_PTR_SET_VALUE(videoCensor_, videoCensor) };


  protected:
    // The moderation template. Default value: common. The default value indicates that the default template is used.
    // 
    // >  If the moderation template is not specified, the default value common is returned. If a custom moderation template that is created by submitting a ticket is specified, the UID of the template is returned.
    std::shared_ptr<string> bizType_ = nullptr;
    // The information about output snapshots.
    std::shared_ptr<Models::QueryMediaCensorJobListResponseBodyMediaCensorJobListMediaCensorJobVideoCensorConfigOutputFile> outputFile_ = nullptr;
    // Indicates whether the video content needs to be moderated. Default value: **true**. Valid values:
    // 
    // *   **true**: The video content needs to be moderated.
    // *   **false**: The video content does not need to be moderated.
    std::shared_ptr<string> videoCensor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
