// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYPROTOCOLCONFIGRDP_HPP_
#define ALIBABACLOUD_MODELS_GETPOLICYRESPONSEBODYPOLICYPROTOCOLCONFIGRDP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetPolicyResponseBodyPolicyProtocolConfigRDP : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPolicyResponseBodyPolicyProtocolConfigRDP& obj) { 
      DARABONBA_PTR_TO_JSON(ClipboardDownload, clipboardDownload_);
      DARABONBA_PTR_TO_JSON(ClipboardUpload, clipboardUpload_);
      DARABONBA_PTR_TO_JSON(DiskRedirection, diskRedirection_);
      DARABONBA_PTR_TO_JSON(RecordKeyboard, recordKeyboard_);
    };
    friend void from_json(const Darabonba::Json& j, GetPolicyResponseBodyPolicyProtocolConfigRDP& obj) { 
      DARABONBA_PTR_FROM_JSON(ClipboardDownload, clipboardDownload_);
      DARABONBA_PTR_FROM_JSON(ClipboardUpload, clipboardUpload_);
      DARABONBA_PTR_FROM_JSON(DiskRedirection, diskRedirection_);
      DARABONBA_PTR_FROM_JSON(RecordKeyboard, recordKeyboard_);
    };
    GetPolicyResponseBodyPolicyProtocolConfigRDP() = default ;
    GetPolicyResponseBodyPolicyProtocolConfigRDP(const GetPolicyResponseBodyPolicyProtocolConfigRDP &) = default ;
    GetPolicyResponseBodyPolicyProtocolConfigRDP(GetPolicyResponseBodyPolicyProtocolConfigRDP &&) = default ;
    GetPolicyResponseBodyPolicyProtocolConfigRDP(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPolicyResponseBodyPolicyProtocolConfigRDP() = default ;
    GetPolicyResponseBodyPolicyProtocolConfigRDP& operator=(const GetPolicyResponseBodyPolicyProtocolConfigRDP &) = default ;
    GetPolicyResponseBodyPolicyProtocolConfigRDP& operator=(GetPolicyResponseBodyPolicyProtocolConfigRDP &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipboardDownload_ == nullptr
        && return this->clipboardUpload_ == nullptr && return this->diskRedirection_ == nullptr && return this->recordKeyboard_ == nullptr; };
    // clipboardDownload Field Functions 
    bool hasClipboardDownload() const { return this->clipboardDownload_ != nullptr;};
    void deleteClipboardDownload() { this->clipboardDownload_ = nullptr;};
    inline string clipboardDownload() const { DARABONBA_PTR_GET_DEFAULT(clipboardDownload_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigRDP& setClipboardDownload(string clipboardDownload) { DARABONBA_PTR_SET_VALUE(clipboardDownload_, clipboardDownload) };


    // clipboardUpload Field Functions 
    bool hasClipboardUpload() const { return this->clipboardUpload_ != nullptr;};
    void deleteClipboardUpload() { this->clipboardUpload_ = nullptr;};
    inline string clipboardUpload() const { DARABONBA_PTR_GET_DEFAULT(clipboardUpload_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigRDP& setClipboardUpload(string clipboardUpload) { DARABONBA_PTR_SET_VALUE(clipboardUpload_, clipboardUpload) };


    // diskRedirection Field Functions 
    bool hasDiskRedirection() const { return this->diskRedirection_ != nullptr;};
    void deleteDiskRedirection() { this->diskRedirection_ = nullptr;};
    inline string diskRedirection() const { DARABONBA_PTR_GET_DEFAULT(diskRedirection_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigRDP& setDiskRedirection(string diskRedirection) { DARABONBA_PTR_SET_VALUE(diskRedirection_, diskRedirection) };


    // recordKeyboard Field Functions 
    bool hasRecordKeyboard() const { return this->recordKeyboard_ != nullptr;};
    void deleteRecordKeyboard() { this->recordKeyboard_ = nullptr;};
    inline string recordKeyboard() const { DARABONBA_PTR_GET_DEFAULT(recordKeyboard_, "") };
    inline GetPolicyResponseBodyPolicyProtocolConfigRDP& setRecordKeyboard(string recordKeyboard) { DARABONBA_PTR_SET_VALUE(recordKeyboard_, recordKeyboard) };


  protected:
    // Indicates whether downloading from the clipboard is enabled. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> clipboardDownload_ = nullptr;
    // Indicates whether file uploading from the clipboard is enabled. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> clipboardUpload_ = nullptr;
    // Indicates whether driver mapping is enabled. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> diskRedirection_ = nullptr;
    // Indicates whether keyboard recording is enabled. Valid values:
    // 
    // *   Enable
    // *   Disable
    std::shared_ptr<string> recordKeyboard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
