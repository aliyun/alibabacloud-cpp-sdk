// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODYDOMAINTRANSCODELISTDOMAINTRANSCODEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMTRANSCODEINFORESPONSEBODYDOMAINTRANSCODELISTDOMAINTRANSCODEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters.hpp>
#include <alibabacloud/models/DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTranscodeParameters, customTranscodeParameters_);
      DARABONBA_PTR_TO_JSON(EncryptParameters, encryptParameters_);
      DARABONBA_PTR_TO_JSON(IsLazy, isLazy_);
      DARABONBA_PTR_TO_JSON(TranscodeApp, transcodeApp_);
      DARABONBA_PTR_TO_JSON(TranscodeName, transcodeName_);
      DARABONBA_PTR_TO_JSON(TranscodeTemplate, transcodeTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTranscodeParameters, customTranscodeParameters_);
      DARABONBA_PTR_FROM_JSON(EncryptParameters, encryptParameters_);
      DARABONBA_PTR_FROM_JSON(IsLazy, isLazy_);
      DARABONBA_PTR_FROM_JSON(TranscodeApp, transcodeApp_);
      DARABONBA_PTR_FROM_JSON(TranscodeName, transcodeName_);
      DARABONBA_PTR_FROM_JSON(TranscodeTemplate, transcodeTemplate_);
    };
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo() = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo &&) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo() = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& operator=(const DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo &) = default ;
    DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& operator=(DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customTranscodeParameters_ == nullptr
        && return this->encryptParameters_ == nullptr && return this->isLazy_ == nullptr && return this->transcodeApp_ == nullptr && return this->transcodeName_ == nullptr && return this->transcodeTemplate_ == nullptr; };
    // customTranscodeParameters Field Functions 
    bool hasCustomTranscodeParameters() const { return this->customTranscodeParameters_ != nullptr;};
    void deleteCustomTranscodeParameters() { this->customTranscodeParameters_ = nullptr;};
    inline const Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters & customTranscodeParameters() const { DARABONBA_PTR_GET_CONST(customTranscodeParameters_, Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters) };
    inline Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters customTranscodeParameters() { DARABONBA_PTR_GET(customTranscodeParameters_, Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& setCustomTranscodeParameters(const Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters & customTranscodeParameters) { DARABONBA_PTR_SET_VALUE(customTranscodeParameters_, customTranscodeParameters) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& setCustomTranscodeParameters(Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters && customTranscodeParameters) { DARABONBA_PTR_SET_RVALUE(customTranscodeParameters_, customTranscodeParameters) };


    // encryptParameters Field Functions 
    bool hasEncryptParameters() const { return this->encryptParameters_ != nullptr;};
    void deleteEncryptParameters() { this->encryptParameters_ = nullptr;};
    inline const Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters & encryptParameters() const { DARABONBA_PTR_GET_CONST(encryptParameters_, Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters) };
    inline Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters encryptParameters() { DARABONBA_PTR_GET(encryptParameters_, Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& setEncryptParameters(const Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters & encryptParameters) { DARABONBA_PTR_SET_VALUE(encryptParameters_, encryptParameters) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& setEncryptParameters(Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters && encryptParameters) { DARABONBA_PTR_SET_RVALUE(encryptParameters_, encryptParameters) };


    // isLazy Field Functions 
    bool hasIsLazy() const { return this->isLazy_ != nullptr;};
    void deleteIsLazy() { this->isLazy_ = nullptr;};
    inline bool isLazy() const { DARABONBA_PTR_GET_DEFAULT(isLazy_, false) };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& setIsLazy(bool isLazy) { DARABONBA_PTR_SET_VALUE(isLazy_, isLazy) };


    // transcodeApp Field Functions 
    bool hasTranscodeApp() const { return this->transcodeApp_ != nullptr;};
    void deleteTranscodeApp() { this->transcodeApp_ = nullptr;};
    inline string transcodeApp() const { DARABONBA_PTR_GET_DEFAULT(transcodeApp_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& setTranscodeApp(string transcodeApp) { DARABONBA_PTR_SET_VALUE(transcodeApp_, transcodeApp) };


    // transcodeName Field Functions 
    bool hasTranscodeName() const { return this->transcodeName_ != nullptr;};
    void deleteTranscodeName() { this->transcodeName_ = nullptr;};
    inline string transcodeName() const { DARABONBA_PTR_GET_DEFAULT(transcodeName_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& setTranscodeName(string transcodeName) { DARABONBA_PTR_SET_VALUE(transcodeName_, transcodeName) };


    // transcodeTemplate Field Functions 
    bool hasTranscodeTemplate() const { return this->transcodeTemplate_ != nullptr;};
    void deleteTranscodeTemplate() { this->transcodeTemplate_ = nullptr;};
    inline string transcodeTemplate() const { DARABONBA_PTR_GET_DEFAULT(transcodeTemplate_, "") };
    inline DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfo& setTranscodeTemplate(string transcodeTemplate) { DARABONBA_PTR_SET_VALUE(transcodeTemplate_, transcodeTemplate) };


  protected:
    // The custom transcoding configuration.
    std::shared_ptr<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoCustomTranscodeParameters> customTranscodeParameters_ = nullptr;
    // The encryption settings.
    std::shared_ptr<Models::DescribeLiveStreamTranscodeInfoResponseBodyDomainTranscodeListDomainTranscodeInfoEncryptParameters> encryptParameters_ = nullptr;
    // Indicates whether forcible transcoding is used. Valid values:
    // 
    // *   **true**: Delayed transcoding is used.
    // *   **false**: Forcible transcoding is used.
    std::shared_ptr<bool> isLazy_ = nullptr;
    // The application name.
    std::shared_ptr<string> transcodeApp_ = nullptr;
    // The main streaming domain.
    std::shared_ptr<string> transcodeName_ = nullptr;
    // The transcoding template ID. Valid values:
    // 
    // *   **Standard transcoding**:
    // 
    //     *   **lld**: low definition
    //     *   **lsd**: standard definition
    //     *   **lhd**: high definition
    //     *   **lud**: ultra-high definition
    // 
    // *   **Narrowband HD™ transcoding**:
    // 
    //     *   **ld**: low definition
    //     *   **sd**: standard definition
    //     *   **hd**: high definition
    //     *   **ud**: ultra-high definition
    std::shared_ptr<string> transcodeTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
