// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPSREQUESTUSERCOMMANDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPSREQUESTUSERCOMMANDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopsRequestUserCommands : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopsRequestUserCommands& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopsRequestUserCommands& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
    };
    CreateDesktopsRequestUserCommands() = default ;
    CreateDesktopsRequestUserCommands(const CreateDesktopsRequestUserCommands &) = default ;
    CreateDesktopsRequestUserCommands(CreateDesktopsRequestUserCommands &&) = default ;
    CreateDesktopsRequestUserCommands(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopsRequestUserCommands() = default ;
    CreateDesktopsRequestUserCommands& operator=(const CreateDesktopsRequestUserCommands &) = default ;
    CreateDesktopsRequestUserCommands& operator=(CreateDesktopsRequestUserCommands &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->contentEncoding_ != nullptr && this->contentType_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateDesktopsRequestUserCommands& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string contentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline CreateDesktopsRequestUserCommands& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreateDesktopsRequestUserCommands& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


  protected:
    // The command content.
    std::shared_ptr<string> content_ = nullptr;
    // The encoding mode of the command content.
    // 
    // Valid values:
    // 
    // *   Base64: encodes the command content in Base64.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PlainText: does not encode the command content.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> contentEncoding_ = nullptr;
    // The language type of the command.
    // 
    // Valid values:
    // 
    // *   RunPowerShellScript: PowerShell commands (applicable to Windows cloud computers).
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   RunShellScript: shell commands (applicable to Linux cloud computers).
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   RunBatScript: batch commands (applicable to Windows cloud computers).
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> contentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
