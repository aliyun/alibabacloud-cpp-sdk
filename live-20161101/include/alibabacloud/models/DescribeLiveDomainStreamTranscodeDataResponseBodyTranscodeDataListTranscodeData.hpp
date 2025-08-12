// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATARESPONSEBODYTRANSCODEDATALISTTRANSCODEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATARESPONSEBODYTRANSCODEDATALISTTRANSCODEDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(TanscodeType, tanscodeType_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(TanscodeType, tanscodeType_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData() = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData(const DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData &) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData(DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData &&) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData() = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& operator=(const DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData &) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& operator=(DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->duration_ != nullptr && this->fps_ != nullptr && this->region_ != nullptr && this->resolution_ != nullptr && this->tanscodeType_ != nullptr
        && this->timeStamp_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // tanscodeType Field Functions 
    bool hasTanscodeType() const { return this->tanscodeType_ != nullptr;};
    void deleteTanscodeType() { this->tanscodeType_ = nullptr;};
    inline string tanscodeType() const { DARABONBA_PTR_GET_DEFAULT(tanscodeType_, "") };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& setTanscodeType(string tanscodeType) { DARABONBA_PTR_SET_VALUE(tanscodeType_, tanscodeType) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainStreamTranscodeDataResponseBodyTranscodeDataListTranscodeData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The main streaming domain. This parameter is returned only when you add the domain key to the value of the Split parameter.
    std::shared_ptr<string> domain_ = nullptr;
    // The transcoding length. Unit: minutes.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The frame rate of the transcoded stream. This parameter is returned only when you add the fps key to the value of the Split parameter.
    std::shared_ptr<string> fps_ = nullptr;
    // The region in which the domain name resides. Valid values:
    // 
    // >  This parameter takes effect only when you set Split to region.
    // 
    // *   **cn-beijing**: China (Beijing)
    // *   **cn-shanghai**: China (Shanghai)
    // *   **cn-qingdao**: China (Qingdao)
    // *   **cn-shenzhen**: China (Shenzhen)
    // *   **ap-northeast-1**: Japan (Tokyo)
    // *   **ap-southeast-1**: Singapore
    // *   **ap-southeast-5**: Indonesia (Jakarta)
    // *   **eu-central-1**: Germany (Frankfurt)
    std::shared_ptr<string> region_ = nullptr;
    // The resolution of the transcoded stream. This parameter is returned only when you add the resolution key to the value of the Split parameter. Valid values:
    // 
    // *   **2K**
    // *   **4K**
    // *   **LD**: low definition
    // *   **SD**: standard definition
    // *   **HD**: high definition
    // *   **def**: audio
    std::shared_ptr<string> resolution_ = nullptr;
    // The transcoding type. Valid values:
    // 
    // >  This parameter takes effect only if the request parameter Split is set to transcode_type.
    // 
    // *   **H264NBHD**: Narrowband HD™ transcoding based on H.264
    // *   **H265NBHD**: Narrowband HD™ transcoding based on H.265
    // *   **AUDIO**: audio transcoding
    std::shared_ptr<string> tanscodeType_ = nullptr;
    // The timestamp of the data entry.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
