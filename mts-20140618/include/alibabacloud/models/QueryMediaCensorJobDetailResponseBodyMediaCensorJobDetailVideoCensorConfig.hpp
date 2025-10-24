// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILVIDEOCENSORCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIACENSORJOBDETAILRESPONSEBODYMEDIACENSORJOBDETAILVIDEOCENSORCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfigOutputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_TO_JSON(VideoCensor, videoCensor_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_FROM_JSON(VideoCensor, videoCensor_);
    };
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig &&) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig() = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig& operator=(const QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig &) = default ;
    QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig& operator=(QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && return this->outputFile_ == nullptr && return this->videoCensor_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfigOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfigOutputFile) };
    inline Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfigOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfigOutputFile) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig& setOutputFile(const Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfigOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig& setOutputFile(Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfigOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // videoCensor Field Functions 
    bool hasVideoCensor() const { return this->videoCensor_ != nullptr;};
    void deleteVideoCensor() { this->videoCensor_ = nullptr;};
    inline string videoCensor() const { DARABONBA_PTR_GET_DEFAULT(videoCensor_, "") };
    inline QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfig& setVideoCensor(string videoCensor) { DARABONBA_PTR_SET_VALUE(videoCensor_, videoCensor) };


  protected:
    // The custom business type. Default value: common.
    std::shared_ptr<string> bizType_ = nullptr;
    // The information about output snapshots.
    std::shared_ptr<Models::QueryMediaCensorJobDetailResponseBodyMediaCensorJobDetailVideoCensorConfigOutputFile> outputFile_ = nullptr;
    // Indicates whether the video content needs to be moderated. Default value: **true** Valid values:
    // 
    // *   **true**: The video content needs to be moderated.
    // *   **false**: The video content does not need to be moderated.
    std::shared_ptr<string> videoCensor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
