// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANNELASSEMBLYSCHEDULEDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANNELASSEMBLYSCHEDULEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChannelAssemblyScheduleDataAdBreaks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ChannelAssemblyScheduleData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChannelAssemblyScheduleData& obj) { 
      DARABONBA_PTR_TO_JSON(AdBreaks, adBreaks_);
      DARABONBA_PTR_TO_JSON(ApproximateDurationSeconds, approximateDurationSeconds_);
      DARABONBA_PTR_TO_JSON(ApproximateStartTime, approximateStartTime_);
      DARABONBA_PTR_TO_JSON(EntryType, entryType_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ChannelAssemblyScheduleData& obj) { 
      DARABONBA_PTR_FROM_JSON(AdBreaks, adBreaks_);
      DARABONBA_PTR_FROM_JSON(ApproximateDurationSeconds, approximateDurationSeconds_);
      DARABONBA_PTR_FROM_JSON(ApproximateStartTime, approximateStartTime_);
      DARABONBA_PTR_FROM_JSON(EntryType, entryType_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ChannelAssemblyScheduleData() = default ;
    ChannelAssemblyScheduleData(const ChannelAssemblyScheduleData &) = default ;
    ChannelAssemblyScheduleData(ChannelAssemblyScheduleData &&) = default ;
    ChannelAssemblyScheduleData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChannelAssemblyScheduleData() = default ;
    ChannelAssemblyScheduleData& operator=(const ChannelAssemblyScheduleData &) = default ;
    ChannelAssemblyScheduleData& operator=(ChannelAssemblyScheduleData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adBreaks_ == nullptr
        && return this->approximateDurationSeconds_ == nullptr && return this->approximateStartTime_ == nullptr && return this->entryType_ == nullptr && return this->programName_ == nullptr && return this->sourceLocationName_ == nullptr
        && return this->sourceName_ == nullptr && return this->sourceType_ == nullptr; };
    // adBreaks Field Functions 
    bool hasAdBreaks() const { return this->adBreaks_ != nullptr;};
    void deleteAdBreaks() { this->adBreaks_ = nullptr;};
    inline const vector<ChannelAssemblyScheduleDataAdBreaks> & adBreaks() const { DARABONBA_PTR_GET_CONST(adBreaks_, vector<ChannelAssemblyScheduleDataAdBreaks>) };
    inline vector<ChannelAssemblyScheduleDataAdBreaks> adBreaks() { DARABONBA_PTR_GET(adBreaks_, vector<ChannelAssemblyScheduleDataAdBreaks>) };
    inline ChannelAssemblyScheduleData& setAdBreaks(const vector<ChannelAssemblyScheduleDataAdBreaks> & adBreaks) { DARABONBA_PTR_SET_VALUE(adBreaks_, adBreaks) };
    inline ChannelAssemblyScheduleData& setAdBreaks(vector<ChannelAssemblyScheduleDataAdBreaks> && adBreaks) { DARABONBA_PTR_SET_RVALUE(adBreaks_, adBreaks) };


    // approximateDurationSeconds Field Functions 
    bool hasApproximateDurationSeconds() const { return this->approximateDurationSeconds_ != nullptr;};
    void deleteApproximateDurationSeconds() { this->approximateDurationSeconds_ = nullptr;};
    inline int64_t approximateDurationSeconds() const { DARABONBA_PTR_GET_DEFAULT(approximateDurationSeconds_, 0L) };
    inline ChannelAssemblyScheduleData& setApproximateDurationSeconds(int64_t approximateDurationSeconds) { DARABONBA_PTR_SET_VALUE(approximateDurationSeconds_, approximateDurationSeconds) };


    // approximateStartTime Field Functions 
    bool hasApproximateStartTime() const { return this->approximateStartTime_ != nullptr;};
    void deleteApproximateStartTime() { this->approximateStartTime_ = nullptr;};
    inline string approximateStartTime() const { DARABONBA_PTR_GET_DEFAULT(approximateStartTime_, "") };
    inline ChannelAssemblyScheduleData& setApproximateStartTime(string approximateStartTime) { DARABONBA_PTR_SET_VALUE(approximateStartTime_, approximateStartTime) };


    // entryType Field Functions 
    bool hasEntryType() const { return this->entryType_ != nullptr;};
    void deleteEntryType() { this->entryType_ = nullptr;};
    inline string entryType() const { DARABONBA_PTR_GET_DEFAULT(entryType_, "") };
    inline ChannelAssemblyScheduleData& setEntryType(string entryType) { DARABONBA_PTR_SET_VALUE(entryType_, entryType) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string programName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline ChannelAssemblyScheduleData& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ChannelAssemblyScheduleData& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ChannelAssemblyScheduleData& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ChannelAssemblyScheduleData& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    std::shared_ptr<vector<ChannelAssemblyScheduleDataAdBreaks>> adBreaks_ = nullptr;
    std::shared_ptr<int64_t> approximateDurationSeconds_ = nullptr;
    std::shared_ptr<string> approximateStartTime_ = nullptr;
    std::shared_ptr<string> entryType_ = nullptr;
    std::shared_ptr<string> programName_ = nullptr;
    std::shared_ptr<string> sourceLocationName_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
