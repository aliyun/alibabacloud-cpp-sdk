// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTPOLICYCLIPBOARDPOLICY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUESTPOLICYCLIPBOARDPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_TO_JSON(ClipboardReadLimit, clipboardReadLimit_);
      DARABONBA_PTR_TO_JSON(ClipboardScope, clipboardScope_);
      DARABONBA_PTR_TO_JSON(ClipboardWriteLimit, clipboardWriteLimit_);
      DARABONBA_PTR_TO_JSON(FileClipboard, fileClipboard_);
      DARABONBA_PTR_TO_JSON(RichTextClipboard, richTextClipboard_);
      DARABONBA_PTR_TO_JSON(TextClipboard, textClipboard_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Clipboard, clipboard_);
      DARABONBA_PTR_FROM_JSON(ClipboardReadLimit, clipboardReadLimit_);
      DARABONBA_PTR_FROM_JSON(ClipboardScope, clipboardScope_);
      DARABONBA_PTR_FROM_JSON(ClipboardWriteLimit, clipboardWriteLimit_);
      DARABONBA_PTR_FROM_JSON(FileClipboard, fileClipboard_);
      DARABONBA_PTR_FROM_JSON(RichTextClipboard, richTextClipboard_);
      DARABONBA_PTR_FROM_JSON(TextClipboard, textClipboard_);
    };
    ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy() = default ;
    ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy(const ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy &) = default ;
    ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy(ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy &&) = default ;
    ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy() = default ;
    ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& operator=(const ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy &) = default ;
    ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& operator=(ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clipboard_ == nullptr
        && return this->clipboardReadLimit_ == nullptr && return this->clipboardScope_ == nullptr && return this->clipboardWriteLimit_ == nullptr && return this->fileClipboard_ == nullptr && return this->richTextClipboard_ == nullptr
        && return this->textClipboard_ == nullptr; };
    // clipboard Field Functions 
    bool hasClipboard() const { return this->clipboard_ != nullptr;};
    void deleteClipboard() { this->clipboard_ = nullptr;};
    inline string clipboard() const { DARABONBA_PTR_GET_DEFAULT(clipboard_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& setClipboard(string clipboard) { DARABONBA_PTR_SET_VALUE(clipboard_, clipboard) };


    // clipboardReadLimit Field Functions 
    bool hasClipboardReadLimit() const { return this->clipboardReadLimit_ != nullptr;};
    void deleteClipboardReadLimit() { this->clipboardReadLimit_ = nullptr;};
    inline int32_t clipboardReadLimit() const { DARABONBA_PTR_GET_DEFAULT(clipboardReadLimit_, 0) };
    inline ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& setClipboardReadLimit(int32_t clipboardReadLimit) { DARABONBA_PTR_SET_VALUE(clipboardReadLimit_, clipboardReadLimit) };


    // clipboardScope Field Functions 
    bool hasClipboardScope() const { return this->clipboardScope_ != nullptr;};
    void deleteClipboardScope() { this->clipboardScope_ = nullptr;};
    inline string clipboardScope() const { DARABONBA_PTR_GET_DEFAULT(clipboardScope_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& setClipboardScope(string clipboardScope) { DARABONBA_PTR_SET_VALUE(clipboardScope_, clipboardScope) };


    // clipboardWriteLimit Field Functions 
    bool hasClipboardWriteLimit() const { return this->clipboardWriteLimit_ != nullptr;};
    void deleteClipboardWriteLimit() { this->clipboardWriteLimit_ = nullptr;};
    inline int32_t clipboardWriteLimit() const { DARABONBA_PTR_GET_DEFAULT(clipboardWriteLimit_, 0) };
    inline ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& setClipboardWriteLimit(int32_t clipboardWriteLimit) { DARABONBA_PTR_SET_VALUE(clipboardWriteLimit_, clipboardWriteLimit) };


    // fileClipboard Field Functions 
    bool hasFileClipboard() const { return this->fileClipboard_ != nullptr;};
    void deleteFileClipboard() { this->fileClipboard_ = nullptr;};
    inline string fileClipboard() const { DARABONBA_PTR_GET_DEFAULT(fileClipboard_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& setFileClipboard(string fileClipboard) { DARABONBA_PTR_SET_VALUE(fileClipboard_, fileClipboard) };


    // richTextClipboard Field Functions 
    bool hasRichTextClipboard() const { return this->richTextClipboard_ != nullptr;};
    void deleteRichTextClipboard() { this->richTextClipboard_ = nullptr;};
    inline string richTextClipboard() const { DARABONBA_PTR_GET_DEFAULT(richTextClipboard_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& setRichTextClipboard(string richTextClipboard) { DARABONBA_PTR_SET_VALUE(richTextClipboard_, richTextClipboard) };


    // textClipboard Field Functions 
    bool hasTextClipboard() const { return this->textClipboard_ != nullptr;};
    void deleteTextClipboard() { this->textClipboard_ = nullptr;};
    inline string textClipboard() const { DARABONBA_PTR_GET_DEFAULT(textClipboard_, "") };
    inline ModifyBrowserInstanceGroupRequestPolicyClipboardPolicy& setTextClipboard(string textClipboard) { DARABONBA_PTR_SET_VALUE(textClipboard_, textClipboard) };


  protected:
    std::shared_ptr<string> clipboard_ = nullptr;
    std::shared_ptr<int32_t> clipboardReadLimit_ = nullptr;
    std::shared_ptr<string> clipboardScope_ = nullptr;
    std::shared_ptr<int32_t> clipboardWriteLimit_ = nullptr;
    std::shared_ptr<string> fileClipboard_ = nullptr;
    std::shared_ptr<string> richTextClipboard_ = nullptr;
    std::shared_ptr<string> textClipboard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
