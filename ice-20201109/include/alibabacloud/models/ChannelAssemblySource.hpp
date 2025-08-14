// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELASSEMBLYSOURCE_HPP_
#define ALIBABACLOUD_MODELS_CHANNELASSEMBLYSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ChannelAssemblySource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelAssemblySource& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HttpPackageConfigurations, httpPackageConfigurations_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelAssemblySource& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HttpPackageConfigurations, httpPackageConfigurations_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ChannelAssemblySource() = default ;
    ChannelAssemblySource(const ChannelAssemblySource &) = default ;
    ChannelAssemblySource(ChannelAssemblySource &&) = default ;
    ChannelAssemblySource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelAssemblySource() = default ;
    ChannelAssemblySource& operator=(const ChannelAssemblySource &) = default ;
    ChannelAssemblySource& operator=(ChannelAssemblySource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->httpPackageConfigurations_ != nullptr && this->sourceLocationName_ != nullptr && this->sourceName_ != nullptr
        && this->sourceType_ != nullptr && this->state_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline ChannelAssemblySource& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ChannelAssemblySource& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ChannelAssemblySource& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // httpPackageConfigurations Field Functions 
    bool hasHttpPackageConfigurations() const { return this->httpPackageConfigurations_ != nullptr;};
    void deleteHttpPackageConfigurations() { this->httpPackageConfigurations_ = nullptr;};
    inline string httpPackageConfigurations() const { DARABONBA_PTR_GET_DEFAULT(httpPackageConfigurations_, "") };
    inline ChannelAssemblySource& setHttpPackageConfigurations(string httpPackageConfigurations) { DARABONBA_PTR_SET_VALUE(httpPackageConfigurations_, httpPackageConfigurations) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ChannelAssemblySource& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ChannelAssemblySource& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ChannelAssemblySource& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline ChannelAssemblySource& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> httpPackageConfigurations_ = nullptr;
    std::shared_ptr<string> sourceLocationName_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<int32_t> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
