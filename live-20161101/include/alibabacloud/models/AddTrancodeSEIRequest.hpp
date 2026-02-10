// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTRANCODESEIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTRANCODESEIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddTrancodeSEIRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTrancodeSEIRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Repeat, repeat_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, AddTrancodeSEIRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Repeat, repeat_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    AddTrancodeSEIRequest() = default ;
    AddTrancodeSEIRequest(const AddTrancodeSEIRequest &) = default ;
    AddTrancodeSEIRequest(AddTrancodeSEIRequest &&) = default ;
    AddTrancodeSEIRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTrancodeSEIRequest() = default ;
    AddTrancodeSEIRequest& operator=(const AddTrancodeSEIRequest &) = default ;
    AddTrancodeSEIRequest& operator=(AddTrancodeSEIRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->delay_ == nullptr && this->domainName_ == nullptr && this->ownerId_ == nullptr && this->pattern_ == nullptr && this->regionId_ == nullptr
        && this->repeat_ == nullptr && this->streamName_ == nullptr && this->text_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddTrancodeSEIRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline int32_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
    inline AddTrancodeSEIRequest& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddTrancodeSEIRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddTrancodeSEIRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline AddTrancodeSEIRequest& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddTrancodeSEIRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeat Field Functions 
    bool hasRepeat() const { return this->repeat_ != nullptr;};
    void deleteRepeat() { this->repeat_ = nullptr;};
    inline int32_t getRepeat() const { DARABONBA_PTR_GET_DEFAULT(repeat_, 0) };
    inline AddTrancodeSEIRequest& setRepeat(int32_t repeat) { DARABONBA_PTR_SET_VALUE(repeat_, repeat) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline AddTrancodeSEIRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline AddTrancodeSEIRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The name of the application to which the live stream belongs. You can view the application name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The time period after which the SEI is inserted after the request is received. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> delay_ {};
    // The streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to append the SEI to each keyframe or frame. Valid values:
    // 
    // *   **keyframe**
    // *   **frame**
    // 
    // This parameter is required.
    shared_ptr<string> pattern_ {};
    shared_ptr<string> regionId_ {};
    // The number of times that the SEI is repeatedly inserted. A value of -1 specifies infinite times.
    // 
    // This parameter is required.
    shared_ptr<int32_t> repeat_ {};
    // The name of the live stream.
    // 
    // >  The value of this parameter must be the name of the source stream. This way, the SEI is inserted to all the transcoded streams.
    // 
    // This parameter is required.
    shared_ptr<string> streamName_ {};
    // The SEI text. It can be up to 4,000 bytes in length.
    // 
    // This parameter is required.
    shared_ptr<string> text_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
