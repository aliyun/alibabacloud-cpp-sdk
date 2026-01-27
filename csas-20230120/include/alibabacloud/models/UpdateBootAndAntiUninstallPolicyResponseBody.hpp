// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBOOTANDANTIUNINSTALLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateBootAndAntiUninstallPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBootAndAntiUninstallPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBootAndAntiUninstallPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    UpdateBootAndAntiUninstallPolicyResponseBody() = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody(const UpdateBootAndAntiUninstallPolicyResponseBody &) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody(UpdateBootAndAntiUninstallPolicyResponseBody &&) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBootAndAntiUninstallPolicyResponseBody() = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody& operator=(const UpdateBootAndAntiUninstallPolicyResponseBody &) = default ;
    UpdateBootAndAntiUninstallPolicyResponseBody& operator=(UpdateBootAndAntiUninstallPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Strategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
        DARABONBA_PTR_TO_JSON(AllowReport, allowReport_);
        DARABONBA_PTR_TO_JSON(BlockContent, blockContent_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(IsAntiUninstall, isAntiUninstall_);
        DARABONBA_PTR_TO_JSON(IsBoot, isBoot_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(ReportProcessId, reportProcessId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
        DARABONBA_PTR_TO_JSON(WhitelistUsers, whitelistUsers_);
      };
      friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowReport, allowReport_);
        DARABONBA_PTR_FROM_JSON(BlockContent, blockContent_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(IsAntiUninstall, isAntiUninstall_);
        DARABONBA_PTR_FROM_JSON(IsBoot, isBoot_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(ReportProcessId, reportProcessId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
        DARABONBA_PTR_FROM_JSON(WhitelistUsers, whitelistUsers_);
      };
      Strategy() = default ;
      Strategy(const Strategy &) = default ;
      Strategy(Strategy &&) = default ;
      Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Strategy() = default ;
      Strategy& operator=(const Strategy &) = default ;
      Strategy& operator=(Strategy &&) = default ;
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
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(MainButtonText, mainButtonText_);
            DARABONBA_PTR_TO_JSON(MinorButtonText, minorButtonText_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, BlockTextZh& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(MainButtonText, mainButtonText_);
            DARABONBA_PTR_FROM_JSON(MinorButtonText, minorButtonText_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
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
          virtual bool empty() const override { return this->content_ == nullptr
        && this->mainButtonText_ == nullptr && this->minorButtonText_ == nullptr && this->title_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline BlockTextZh& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // mainButtonText Field Functions 
          bool hasMainButtonText() const { return this->mainButtonText_ != nullptr;};
          void deleteMainButtonText() { this->mainButtonText_ = nullptr;};
          inline string getMainButtonText() const { DARABONBA_PTR_GET_DEFAULT(mainButtonText_, "") };
          inline BlockTextZh& setMainButtonText(string mainButtonText) { DARABONBA_PTR_SET_VALUE(mainButtonText_, mainButtonText) };


          // minorButtonText Field Functions 
          bool hasMinorButtonText() const { return this->minorButtonText_ != nullptr;};
          void deleteMinorButtonText() { this->minorButtonText_ = nullptr;};
          inline string getMinorButtonText() const { DARABONBA_PTR_GET_DEFAULT(minorButtonText_, "") };
          inline BlockTextZh& setMinorButtonText(string minorButtonText) { DARABONBA_PTR_SET_VALUE(minorButtonText_, minorButtonText) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline BlockTextZh& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> mainButtonText_ {};
          shared_ptr<string> minorButtonText_ {};
          shared_ptr<string> title_ {};
        };

        class BlockTextEn : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BlockTextEn& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(MainButtonText, mainButtonText_);
            DARABONBA_PTR_TO_JSON(MinorButtonText, minorButtonText_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, BlockTextEn& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(MainButtonText, mainButtonText_);
            DARABONBA_PTR_FROM_JSON(MinorButtonText, minorButtonText_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
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
          virtual bool empty() const override { return this->content_ == nullptr
        && this->mainButtonText_ == nullptr && this->minorButtonText_ == nullptr && this->title_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline BlockTextEn& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // mainButtonText Field Functions 
          bool hasMainButtonText() const { return this->mainButtonText_ != nullptr;};
          void deleteMainButtonText() { this->mainButtonText_ = nullptr;};
          inline string getMainButtonText() const { DARABONBA_PTR_GET_DEFAULT(mainButtonText_, "") };
          inline BlockTextEn& setMainButtonText(string mainButtonText) { DARABONBA_PTR_SET_VALUE(mainButtonText_, mainButtonText) };


          // minorButtonText Field Functions 
          bool hasMinorButtonText() const { return this->minorButtonText_ != nullptr;};
          void deleteMinorButtonText() { this->minorButtonText_ = nullptr;};
          inline string getMinorButtonText() const { DARABONBA_PTR_GET_DEFAULT(minorButtonText_, "") };
          inline BlockTextEn& setMinorButtonText(string minorButtonText) { DARABONBA_PTR_SET_VALUE(minorButtonText_, minorButtonText) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline BlockTextEn& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> mainButtonText_ {};
          shared_ptr<string> minorButtonText_ {};
          shared_ptr<string> title_ {};
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
        shared_ptr<BlockContent::BlockTextEn> blockTextEn_ {};
        shared_ptr<BlockContent::BlockTextZh> blockTextZh_ {};
      };

      virtual bool empty() const override { return this->allowReport_ == nullptr
        && this->blockContent_ == nullptr && this->createTime_ == nullptr && this->isAntiUninstall_ == nullptr && this->isBoot_ == nullptr && this->policyId_ == nullptr
        && this->reportProcessId_ == nullptr && this->updateTime_ == nullptr && this->userGroupIds_ == nullptr && this->whitelistUsers_ == nullptr; };
      // allowReport Field Functions 
      bool hasAllowReport() const { return this->allowReport_ != nullptr;};
      void deleteAllowReport() { this->allowReport_ = nullptr;};
      inline bool getAllowReport() const { DARABONBA_PTR_GET_DEFAULT(allowReport_, false) };
      inline Strategy& setAllowReport(bool allowReport) { DARABONBA_PTR_SET_VALUE(allowReport_, allowReport) };


      // blockContent Field Functions 
      bool hasBlockContent() const { return this->blockContent_ != nullptr;};
      void deleteBlockContent() { this->blockContent_ = nullptr;};
      inline const Strategy::BlockContent & getBlockContent() const { DARABONBA_PTR_GET_CONST(blockContent_, Strategy::BlockContent) };
      inline Strategy::BlockContent getBlockContent() { DARABONBA_PTR_GET(blockContent_, Strategy::BlockContent) };
      inline Strategy& setBlockContent(const Strategy::BlockContent & blockContent) { DARABONBA_PTR_SET_VALUE(blockContent_, blockContent) };
      inline Strategy& setBlockContent(Strategy::BlockContent && blockContent) { DARABONBA_PTR_SET_RVALUE(blockContent_, blockContent) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Strategy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // isAntiUninstall Field Functions 
      bool hasIsAntiUninstall() const { return this->isAntiUninstall_ != nullptr;};
      void deleteIsAntiUninstall() { this->isAntiUninstall_ = nullptr;};
      inline bool getIsAntiUninstall() const { DARABONBA_PTR_GET_DEFAULT(isAntiUninstall_, false) };
      inline Strategy& setIsAntiUninstall(bool isAntiUninstall) { DARABONBA_PTR_SET_VALUE(isAntiUninstall_, isAntiUninstall) };


      // isBoot Field Functions 
      bool hasIsBoot() const { return this->isBoot_ != nullptr;};
      void deleteIsBoot() { this->isBoot_ = nullptr;};
      inline bool getIsBoot() const { DARABONBA_PTR_GET_DEFAULT(isBoot_, false) };
      inline Strategy& setIsBoot(bool isBoot) { DARABONBA_PTR_SET_VALUE(isBoot_, isBoot) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Strategy& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // reportProcessId Field Functions 
      bool hasReportProcessId() const { return this->reportProcessId_ != nullptr;};
      void deleteReportProcessId() { this->reportProcessId_ = nullptr;};
      inline string getReportProcessId() const { DARABONBA_PTR_GET_DEFAULT(reportProcessId_, "") };
      inline Strategy& setReportProcessId(string reportProcessId) { DARABONBA_PTR_SET_VALUE(reportProcessId_, reportProcessId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Strategy& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userGroupIds Field Functions 
      bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
      void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
      inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
      inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
      inline Strategy& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
      inline Strategy& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


      // whitelistUsers Field Functions 
      bool hasWhitelistUsers() const { return this->whitelistUsers_ != nullptr;};
      void deleteWhitelistUsers() { this->whitelistUsers_ = nullptr;};
      inline const vector<string> & getWhitelistUsers() const { DARABONBA_PTR_GET_CONST(whitelistUsers_, vector<string>) };
      inline vector<string> getWhitelistUsers() { DARABONBA_PTR_GET(whitelistUsers_, vector<string>) };
      inline Strategy& setWhitelistUsers(const vector<string> & whitelistUsers) { DARABONBA_PTR_SET_VALUE(whitelistUsers_, whitelistUsers) };
      inline Strategy& setWhitelistUsers(vector<string> && whitelistUsers) { DARABONBA_PTR_SET_RVALUE(whitelistUsers_, whitelistUsers) };


    protected:
      shared_ptr<bool> allowReport_ {};
      shared_ptr<Strategy::BlockContent> blockContent_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<bool> isAntiUninstall_ {};
      shared_ptr<bool> isBoot_ {};
      shared_ptr<string> policyId_ {};
      shared_ptr<string> reportProcessId_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<vector<string>> userGroupIds_ {};
      shared_ptr<vector<string>> whitelistUsers_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->strategy_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateBootAndAntiUninstallPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline const UpdateBootAndAntiUninstallPolicyResponseBody::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, UpdateBootAndAntiUninstallPolicyResponseBody::Strategy) };
    inline UpdateBootAndAntiUninstallPolicyResponseBody::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, UpdateBootAndAntiUninstallPolicyResponseBody::Strategy) };
    inline UpdateBootAndAntiUninstallPolicyResponseBody& setStrategy(const UpdateBootAndAntiUninstallPolicyResponseBody::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
    inline UpdateBootAndAntiUninstallPolicyResponseBody& setStrategy(UpdateBootAndAntiUninstallPolicyResponseBody::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<UpdateBootAndAntiUninstallPolicyResponseBody::Strategy> strategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
