// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAAPPLICATIONUNAUTHORIZEDACCESSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PAAPPLICATIONUNAUTHORIZEDACCESSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAApplicationUnauthorizedAccessConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAApplicationUnauthorizedAccessConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AllowReport, allowReport_);
      DARABONBA_PTR_TO_JSON(BlockContent, blockContent_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ReportProcessId, reportProcessId_);
    };
    friend void from_json(const Darabonba::Json& j, PAApplicationUnauthorizedAccessConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowReport, allowReport_);
      DARABONBA_PTR_FROM_JSON(BlockContent, blockContent_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ReportProcessId, reportProcessId_);
    };
    PAApplicationUnauthorizedAccessConfig() = default ;
    PAApplicationUnauthorizedAccessConfig(const PAApplicationUnauthorizedAccessConfig &) = default ;
    PAApplicationUnauthorizedAccessConfig(PAApplicationUnauthorizedAccessConfig &&) = default ;
    PAApplicationUnauthorizedAccessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAApplicationUnauthorizedAccessConfig() = default ;
    PAApplicationUnauthorizedAccessConfig& operator=(const PAApplicationUnauthorizedAccessConfig &) = default ;
    PAApplicationUnauthorizedAccessConfig& operator=(PAApplicationUnauthorizedAccessConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BlockContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BlockContent& obj) { 
        DARABONBA_PTR_TO_JSON(BlockTextEn, blockTextEn_);
        DARABONBA_PTR_TO_JSON(BlockTextZh, blockTextZh_);
      };
      friend void from_json(const Darabonba::Json& j, BlockContent& obj) { 
        DARABONBA_PTR_FROM_JSON(BlockTextEn, blockTextEn_);
        DARABONBA_PTR_FROM_JSON(BlockTextZh, blockTextZh_);
      };
      BlockContent() = default ;
      BlockContent(const BlockContent &) = default ;
      BlockContent(BlockContent &&) = default ;
      BlockContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BlockContent() = default ;
      BlockContent& operator=(const BlockContent &) = default ;
      BlockContent& operator=(BlockContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BlockTextZh : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BlockTextZh& obj) { 
          DARABONBA_PTR_TO_JSON(BrowserAlertContent, browserAlertContent_);
          DARABONBA_PTR_TO_JSON(BrowserAlertStyle, browserAlertStyle_);
          DARABONBA_PTR_TO_JSON(BrowserAlertTitle, browserAlertTitle_);
          DARABONBA_PTR_TO_JSON(ReportButtonText, reportButtonText_);
        };
        friend void from_json(const Darabonba::Json& j, BlockTextZh& obj) { 
          DARABONBA_PTR_FROM_JSON(BrowserAlertContent, browserAlertContent_);
          DARABONBA_PTR_FROM_JSON(BrowserAlertStyle, browserAlertStyle_);
          DARABONBA_PTR_FROM_JSON(BrowserAlertTitle, browserAlertTitle_);
          DARABONBA_PTR_FROM_JSON(ReportButtonText, reportButtonText_);
        };
        BlockTextZh() = default ;
        BlockTextZh(const BlockTextZh &) = default ;
        BlockTextZh(BlockTextZh &&) = default ;
        BlockTextZh(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BlockTextZh() = default ;
        BlockTextZh& operator=(const BlockTextZh &) = default ;
        BlockTextZh& operator=(BlockTextZh &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->browserAlertContent_ == nullptr
        && this->browserAlertStyle_ == nullptr && this->browserAlertTitle_ == nullptr && this->reportButtonText_ == nullptr; };
        // browserAlertContent Field Functions 
        bool hasBrowserAlertContent() const { return this->browserAlertContent_ != nullptr;};
        void deleteBrowserAlertContent() { this->browserAlertContent_ = nullptr;};
        inline string getBrowserAlertContent() const { DARABONBA_PTR_GET_DEFAULT(browserAlertContent_, "") };
        inline BlockTextZh& setBrowserAlertContent(string browserAlertContent) { DARABONBA_PTR_SET_VALUE(browserAlertContent_, browserAlertContent) };


        // browserAlertStyle Field Functions 
        bool hasBrowserAlertStyle() const { return this->browserAlertStyle_ != nullptr;};
        void deleteBrowserAlertStyle() { this->browserAlertStyle_ = nullptr;};
        inline string getBrowserAlertStyle() const { DARABONBA_PTR_GET_DEFAULT(browserAlertStyle_, "") };
        inline BlockTextZh& setBrowserAlertStyle(string browserAlertStyle) { DARABONBA_PTR_SET_VALUE(browserAlertStyle_, browserAlertStyle) };


        // browserAlertTitle Field Functions 
        bool hasBrowserAlertTitle() const { return this->browserAlertTitle_ != nullptr;};
        void deleteBrowserAlertTitle() { this->browserAlertTitle_ = nullptr;};
        inline string getBrowserAlertTitle() const { DARABONBA_PTR_GET_DEFAULT(browserAlertTitle_, "") };
        inline BlockTextZh& setBrowserAlertTitle(string browserAlertTitle) { DARABONBA_PTR_SET_VALUE(browserAlertTitle_, browserAlertTitle) };


        // reportButtonText Field Functions 
        bool hasReportButtonText() const { return this->reportButtonText_ != nullptr;};
        void deleteReportButtonText() { this->reportButtonText_ = nullptr;};
        inline string getReportButtonText() const { DARABONBA_PTR_GET_DEFAULT(reportButtonText_, "") };
        inline BlockTextZh& setReportButtonText(string reportButtonText) { DARABONBA_PTR_SET_VALUE(reportButtonText_, reportButtonText) };


      protected:
        // The prompt content of the block page.
        shared_ptr<string> browserAlertContent_ {};
        // The background pattern of the block page.
        shared_ptr<string> browserAlertStyle_ {};
        // The title of the block page.
        shared_ptr<string> browserAlertTitle_ {};
        // The text of the report approval button.
        shared_ptr<string> reportButtonText_ {};
      };

      class BlockTextEn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BlockTextEn& obj) { 
          DARABONBA_PTR_TO_JSON(BrowserAlertContent, browserAlertContent_);
          DARABONBA_PTR_TO_JSON(BrowserAlertStyle, browserAlertStyle_);
          DARABONBA_PTR_TO_JSON(BrowserAlertTitle, browserAlertTitle_);
          DARABONBA_PTR_TO_JSON(ReportButtonText, reportButtonText_);
        };
        friend void from_json(const Darabonba::Json& j, BlockTextEn& obj) { 
          DARABONBA_PTR_FROM_JSON(BrowserAlertContent, browserAlertContent_);
          DARABONBA_PTR_FROM_JSON(BrowserAlertStyle, browserAlertStyle_);
          DARABONBA_PTR_FROM_JSON(BrowserAlertTitle, browserAlertTitle_);
          DARABONBA_PTR_FROM_JSON(ReportButtonText, reportButtonText_);
        };
        BlockTextEn() = default ;
        BlockTextEn(const BlockTextEn &) = default ;
        BlockTextEn(BlockTextEn &&) = default ;
        BlockTextEn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BlockTextEn() = default ;
        BlockTextEn& operator=(const BlockTextEn &) = default ;
        BlockTextEn& operator=(BlockTextEn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->browserAlertContent_ == nullptr
        && this->browserAlertStyle_ == nullptr && this->browserAlertTitle_ == nullptr && this->reportButtonText_ == nullptr; };
        // browserAlertContent Field Functions 
        bool hasBrowserAlertContent() const { return this->browserAlertContent_ != nullptr;};
        void deleteBrowserAlertContent() { this->browserAlertContent_ = nullptr;};
        inline string getBrowserAlertContent() const { DARABONBA_PTR_GET_DEFAULT(browserAlertContent_, "") };
        inline BlockTextEn& setBrowserAlertContent(string browserAlertContent) { DARABONBA_PTR_SET_VALUE(browserAlertContent_, browserAlertContent) };


        // browserAlertStyle Field Functions 
        bool hasBrowserAlertStyle() const { return this->browserAlertStyle_ != nullptr;};
        void deleteBrowserAlertStyle() { this->browserAlertStyle_ = nullptr;};
        inline string getBrowserAlertStyle() const { DARABONBA_PTR_GET_DEFAULT(browserAlertStyle_, "") };
        inline BlockTextEn& setBrowserAlertStyle(string browserAlertStyle) { DARABONBA_PTR_SET_VALUE(browserAlertStyle_, browserAlertStyle) };


        // browserAlertTitle Field Functions 
        bool hasBrowserAlertTitle() const { return this->browserAlertTitle_ != nullptr;};
        void deleteBrowserAlertTitle() { this->browserAlertTitle_ = nullptr;};
        inline string getBrowserAlertTitle() const { DARABONBA_PTR_GET_DEFAULT(browserAlertTitle_, "") };
        inline BlockTextEn& setBrowserAlertTitle(string browserAlertTitle) { DARABONBA_PTR_SET_VALUE(browserAlertTitle_, browserAlertTitle) };


        // reportButtonText Field Functions 
        bool hasReportButtonText() const { return this->reportButtonText_ != nullptr;};
        void deleteReportButtonText() { this->reportButtonText_ = nullptr;};
        inline string getReportButtonText() const { DARABONBA_PTR_GET_DEFAULT(reportButtonText_, "") };
        inline BlockTextEn& setReportButtonText(string reportButtonText) { DARABONBA_PTR_SET_VALUE(reportButtonText_, reportButtonText) };


      protected:
        // The prompt content of the English block page.
        shared_ptr<string> browserAlertContent_ {};
        // The background pattern of the English block page.
        shared_ptr<string> browserAlertStyle_ {};
        // The title of the English block page.
        shared_ptr<string> browserAlertTitle_ {};
        // The text of the English report approval button.
        shared_ptr<string> reportButtonText_ {};
      };

      virtual bool empty() const override { return this->blockTextEn_ == nullptr
        && this->blockTextZh_ == nullptr; };
      // blockTextEn Field Functions 
      bool hasBlockTextEn() const { return this->blockTextEn_ != nullptr;};
      void deleteBlockTextEn() { this->blockTextEn_ = nullptr;};
      inline const BlockContent::BlockTextEn & getBlockTextEn() const { DARABONBA_PTR_GET_CONST(blockTextEn_, BlockContent::BlockTextEn) };
      inline BlockContent::BlockTextEn getBlockTextEn() { DARABONBA_PTR_GET(blockTextEn_, BlockContent::BlockTextEn) };
      inline BlockContent& setBlockTextEn(const BlockContent::BlockTextEn & blockTextEn) { DARABONBA_PTR_SET_VALUE(blockTextEn_, blockTextEn) };
      inline BlockContent& setBlockTextEn(BlockContent::BlockTextEn && blockTextEn) { DARABONBA_PTR_SET_RVALUE(blockTextEn_, blockTextEn) };


      // blockTextZh Field Functions 
      bool hasBlockTextZh() const { return this->blockTextZh_ != nullptr;};
      void deleteBlockTextZh() { this->blockTextZh_ = nullptr;};
      inline const BlockContent::BlockTextZh & getBlockTextZh() const { DARABONBA_PTR_GET_CONST(blockTextZh_, BlockContent::BlockTextZh) };
      inline BlockContent::BlockTextZh getBlockTextZh() { DARABONBA_PTR_GET(blockTextZh_, BlockContent::BlockTextZh) };
      inline BlockContent& setBlockTextZh(const BlockContent::BlockTextZh & blockTextZh) { DARABONBA_PTR_SET_VALUE(blockTextZh_, blockTextZh) };
      inline BlockContent& setBlockTextZh(BlockContent::BlockTextZh && blockTextZh) { DARABONBA_PTR_SET_RVALUE(blockTextZh_, blockTextZh) };


    protected:
      // The English content.
      shared_ptr<BlockContent::BlockTextEn> blockTextEn_ {};
      // The Chinese content.
      shared_ptr<BlockContent::BlockTextZh> blockTextZh_ {};
    };

    virtual bool empty() const override { return this->allowReport_ == nullptr
        && this->blockContent_ == nullptr && this->enabled_ == nullptr && this->reportProcessId_ == nullptr; };
    // allowReport Field Functions 
    bool hasAllowReport() const { return this->allowReport_ != nullptr;};
    void deleteAllowReport() { this->allowReport_ = nullptr;};
    inline bool getAllowReport() const { DARABONBA_PTR_GET_DEFAULT(allowReport_, false) };
    inline PAApplicationUnauthorizedAccessConfig& setAllowReport(bool allowReport) { DARABONBA_PTR_SET_VALUE(allowReport_, allowReport) };


    // blockContent Field Functions 
    bool hasBlockContent() const { return this->blockContent_ != nullptr;};
    void deleteBlockContent() { this->blockContent_ = nullptr;};
    inline const PAApplicationUnauthorizedAccessConfig::BlockContent & getBlockContent() const { DARABONBA_PTR_GET_CONST(blockContent_, PAApplicationUnauthorizedAccessConfig::BlockContent) };
    inline PAApplicationUnauthorizedAccessConfig::BlockContent getBlockContent() { DARABONBA_PTR_GET(blockContent_, PAApplicationUnauthorizedAccessConfig::BlockContent) };
    inline PAApplicationUnauthorizedAccessConfig& setBlockContent(const PAApplicationUnauthorizedAccessConfig::BlockContent & blockContent) { DARABONBA_PTR_SET_VALUE(blockContent_, blockContent) };
    inline PAApplicationUnauthorizedAccessConfig& setBlockContent(PAApplicationUnauthorizedAccessConfig::BlockContent && blockContent) { DARABONBA_PTR_SET_RVALUE(blockContent_, blockContent) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline PAApplicationUnauthorizedAccessConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // reportProcessId Field Functions 
    bool hasReportProcessId() const { return this->reportProcessId_ != nullptr;};
    void deleteReportProcessId() { this->reportProcessId_ = nullptr;};
    inline string getReportProcessId() const { DARABONBA_PTR_GET_DEFAULT(reportProcessId_, "") };
    inline PAApplicationUnauthorizedAccessConfig& setReportProcessId(string reportProcessId) { DARABONBA_PTR_SET_VALUE(reportProcessId_, reportProcessId) };


  protected:
    // Specifies whether end users are allowed to submit approval requests.
    shared_ptr<bool> allowReport_ {};
    // The content displayed in the client interception pop-up window.
    shared_ptr<PAApplicationUnauthorizedAccessConfig::BlockContent> blockContent_ {};
    // Specifies whether the feature is enabled. Valid values:
    // - **true**: Enabled. Users are redirected to an interception page when they access an unauthorized application.
    // - **false**: Disabled. An error message is returned by default when users access an unauthorized application.
    shared_ptr<bool> enabled_ {};
    // The ID of the approval flow associated with the policy.
    shared_ptr<string> reportProcessId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
