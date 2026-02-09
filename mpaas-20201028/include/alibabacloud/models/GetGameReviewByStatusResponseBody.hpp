// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGAMEREVIEWBYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGAMEREVIEWBYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetGameReviewByStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGameReviewByStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
    };
    friend void from_json(const Darabonba::Json& j, GetGameReviewByStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
    };
    GetGameReviewByStatusResponseBody() = default ;
    GetGameReviewByStatusResponseBody(const GetGameReviewByStatusResponseBody &) = default ;
    GetGameReviewByStatusResponseBody(GetGameReviewByStatusResponseBody &&) = default ;
    GetGameReviewByStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGameReviewByStatusResponseBody() = default ;
    GetGameReviewByStatusResponseBody& operator=(const GetGameReviewByStatusResponseBody &) = default ;
    GetGameReviewByStatusResponseBody& operator=(GetGameReviewByStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultContent& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ResultContent& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ResultContent() = default ;
      ResultContent(const ResultContent &) = default ;
      ResultContent(ResultContent &&) = default ;
      ResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultContent() = default ;
      ResultContent& operator=(const ResultContent &) = default ;
      ResultContent& operator=(ResultContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(Appendix, appendix_);
          DARABONBA_PTR_TO_JSON(AutoOnline, autoOnline_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(Extension, extension_);
          DARABONBA_PTR_TO_JSON(FlowId, flowId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Icons, icons_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ReviewChannel, reviewChannel_);
          DARABONBA_PTR_TO_JSON(ReviewIntegerStatus, reviewIntegerStatus_);
          DARABONBA_PTR_TO_JSON(ReviewProgress, reviewProgress_);
          DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
          DARABONBA_PTR_TO_JSON(ReviewTarget, reviewTarget_);
          DARABONBA_PTR_TO_JSON(TargetDetail, targetDetail_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(Appendix, appendix_);
          DARABONBA_PTR_FROM_JSON(AutoOnline, autoOnline_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(Extension, extension_);
          DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Icons, icons_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ReviewChannel, reviewChannel_);
          DARABONBA_PTR_FROM_JSON(ReviewIntegerStatus, reviewIntegerStatus_);
          DARABONBA_PTR_FROM_JSON(ReviewProgress, reviewProgress_);
          DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
          DARABONBA_PTR_FROM_JSON(ReviewTarget, reviewTarget_);
          DARABONBA_PTR_FROM_JSON(TargetDetail, targetDetail_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TargetDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TargetDetail& obj) { 
            DARABONBA_PTR_TO_JSON(AutoOnline, autoOnline_);
            DARABONBA_PTR_TO_JSON(Category, category_);
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(GameMaker, gameMaker_);
            DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
            DARABONBA_PTR_TO_JSON(Introduction, introduction_);
            DARABONBA_PTR_TO_JSON(MiniProgramCode, miniProgramCode_);
            DARABONBA_PTR_TO_JSON(MiniProgramInfoId, miniProgramInfoId_);
            DARABONBA_PTR_TO_JSON(MiniProgramName, miniProgramName_);
            DARABONBA_PTR_TO_JSON(MiniResourceId, miniResourceId_);
            DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
            DARABONBA_PTR_TO_JSON(QrCodeUrl, qrCodeUrl_);
            DARABONBA_PTR_TO_JSON(ReviewTargetType, reviewTargetType_);
            DARABONBA_PTR_TO_JSON(SubType, subType_);
            DARABONBA_PTR_TO_JSON(TargetId, targetId_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, TargetDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoOnline, autoOnline_);
            DARABONBA_PTR_FROM_JSON(Category, category_);
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(GameMaker, gameMaker_);
            DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
            DARABONBA_PTR_FROM_JSON(Introduction, introduction_);
            DARABONBA_PTR_FROM_JSON(MiniProgramCode, miniProgramCode_);
            DARABONBA_PTR_FROM_JSON(MiniProgramInfoId, miniProgramInfoId_);
            DARABONBA_PTR_FROM_JSON(MiniProgramName, miniProgramName_);
            DARABONBA_PTR_FROM_JSON(MiniResourceId, miniResourceId_);
            DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
            DARABONBA_PTR_FROM_JSON(QrCodeUrl, qrCodeUrl_);
            DARABONBA_PTR_FROM_JSON(ReviewTargetType, reviewTargetType_);
            DARABONBA_PTR_FROM_JSON(SubType, subType_);
            DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          TargetDetail() = default ;
          TargetDetail(const TargetDetail &) = default ;
          TargetDetail(TargetDetail &&) = default ;
          TargetDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TargetDetail() = default ;
          TargetDetail& operator=(const TargetDetail &) = default ;
          TargetDetail& operator=(TargetDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->autoOnline_ == nullptr
        && this->category_ == nullptr && this->detail_ == nullptr && this->gameMaker_ == nullptr && this->iconUrl_ == nullptr && this->introduction_ == nullptr
        && this->miniProgramCode_ == nullptr && this->miniProgramInfoId_ == nullptr && this->miniProgramName_ == nullptr && this->miniResourceId_ == nullptr && this->publishStatus_ == nullptr
        && this->qrCodeUrl_ == nullptr && this->reviewTargetType_ == nullptr && this->subType_ == nullptr && this->targetId_ == nullptr && this->version_ == nullptr; };
          // autoOnline Field Functions 
          bool hasAutoOnline() const { return this->autoOnline_ != nullptr;};
          void deleteAutoOnline() { this->autoOnline_ = nullptr;};
          inline bool getAutoOnline() const { DARABONBA_PTR_GET_DEFAULT(autoOnline_, false) };
          inline TargetDetail& setAutoOnline(bool autoOnline) { DARABONBA_PTR_SET_VALUE(autoOnline_, autoOnline) };


          // category Field Functions 
          bool hasCategory() const { return this->category_ != nullptr;};
          void deleteCategory() { this->category_ = nullptr;};
          inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
          inline TargetDetail& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
          inline TargetDetail& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


          // gameMaker Field Functions 
          bool hasGameMaker() const { return this->gameMaker_ != nullptr;};
          void deleteGameMaker() { this->gameMaker_ = nullptr;};
          inline string getGameMaker() const { DARABONBA_PTR_GET_DEFAULT(gameMaker_, "") };
          inline TargetDetail& setGameMaker(string gameMaker) { DARABONBA_PTR_SET_VALUE(gameMaker_, gameMaker) };


          // iconUrl Field Functions 
          bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
          void deleteIconUrl() { this->iconUrl_ = nullptr;};
          inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
          inline TargetDetail& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


          // introduction Field Functions 
          bool hasIntroduction() const { return this->introduction_ != nullptr;};
          void deleteIntroduction() { this->introduction_ = nullptr;};
          inline string getIntroduction() const { DARABONBA_PTR_GET_DEFAULT(introduction_, "") };
          inline TargetDetail& setIntroduction(string introduction) { DARABONBA_PTR_SET_VALUE(introduction_, introduction) };


          // miniProgramCode Field Functions 
          bool hasMiniProgramCode() const { return this->miniProgramCode_ != nullptr;};
          void deleteMiniProgramCode() { this->miniProgramCode_ = nullptr;};
          inline string getMiniProgramCode() const { DARABONBA_PTR_GET_DEFAULT(miniProgramCode_, "") };
          inline TargetDetail& setMiniProgramCode(string miniProgramCode) { DARABONBA_PTR_SET_VALUE(miniProgramCode_, miniProgramCode) };


          // miniProgramInfoId Field Functions 
          bool hasMiniProgramInfoId() const { return this->miniProgramInfoId_ != nullptr;};
          void deleteMiniProgramInfoId() { this->miniProgramInfoId_ = nullptr;};
          inline int64_t getMiniProgramInfoId() const { DARABONBA_PTR_GET_DEFAULT(miniProgramInfoId_, 0L) };
          inline TargetDetail& setMiniProgramInfoId(int64_t miniProgramInfoId) { DARABONBA_PTR_SET_VALUE(miniProgramInfoId_, miniProgramInfoId) };


          // miniProgramName Field Functions 
          bool hasMiniProgramName() const { return this->miniProgramName_ != nullptr;};
          void deleteMiniProgramName() { this->miniProgramName_ = nullptr;};
          inline string getMiniProgramName() const { DARABONBA_PTR_GET_DEFAULT(miniProgramName_, "") };
          inline TargetDetail& setMiniProgramName(string miniProgramName) { DARABONBA_PTR_SET_VALUE(miniProgramName_, miniProgramName) };


          // miniResourceId Field Functions 
          bool hasMiniResourceId() const { return this->miniResourceId_ != nullptr;};
          void deleteMiniResourceId() { this->miniResourceId_ = nullptr;};
          inline int64_t getMiniResourceId() const { DARABONBA_PTR_GET_DEFAULT(miniResourceId_, 0L) };
          inline TargetDetail& setMiniResourceId(int64_t miniResourceId) { DARABONBA_PTR_SET_VALUE(miniResourceId_, miniResourceId) };


          // publishStatus Field Functions 
          bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
          void deletePublishStatus() { this->publishStatus_ = nullptr;};
          inline int32_t getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, 0) };
          inline TargetDetail& setPublishStatus(int32_t publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


          // qrCodeUrl Field Functions 
          bool hasQrCodeUrl() const { return this->qrCodeUrl_ != nullptr;};
          void deleteQrCodeUrl() { this->qrCodeUrl_ = nullptr;};
          inline string getQrCodeUrl() const { DARABONBA_PTR_GET_DEFAULT(qrCodeUrl_, "") };
          inline TargetDetail& setQrCodeUrl(string qrCodeUrl) { DARABONBA_PTR_SET_VALUE(qrCodeUrl_, qrCodeUrl) };


          // reviewTargetType Field Functions 
          bool hasReviewTargetType() const { return this->reviewTargetType_ != nullptr;};
          void deleteReviewTargetType() { this->reviewTargetType_ = nullptr;};
          inline string getReviewTargetType() const { DARABONBA_PTR_GET_DEFAULT(reviewTargetType_, "") };
          inline TargetDetail& setReviewTargetType(string reviewTargetType) { DARABONBA_PTR_SET_VALUE(reviewTargetType_, reviewTargetType) };


          // subType Field Functions 
          bool hasSubType() const { return this->subType_ != nullptr;};
          void deleteSubType() { this->subType_ = nullptr;};
          inline int32_t getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, 0) };
          inline TargetDetail& setSubType(int32_t subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


          // targetId Field Functions 
          bool hasTargetId() const { return this->targetId_ != nullptr;};
          void deleteTargetId() { this->targetId_ = nullptr;};
          inline int64_t getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
          inline TargetDetail& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline TargetDetail& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<bool> autoOnline_ {};
          shared_ptr<string> category_ {};
          shared_ptr<string> detail_ {};
          shared_ptr<string> gameMaker_ {};
          shared_ptr<string> iconUrl_ {};
          shared_ptr<string> introduction_ {};
          shared_ptr<string> miniProgramCode_ {};
          shared_ptr<int64_t> miniProgramInfoId_ {};
          shared_ptr<string> miniProgramName_ {};
          shared_ptr<int64_t> miniResourceId_ {};
          shared_ptr<int32_t> publishStatus_ {};
          shared_ptr<string> qrCodeUrl_ {};
          shared_ptr<string> reviewTargetType_ {};
          shared_ptr<int32_t> subType_ {};
          shared_ptr<int64_t> targetId_ {};
          shared_ptr<string> version_ {};
        };

        class ReviewProgress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReviewProgress& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(FlowNodeId, flowNodeId_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(NodeIndex, nodeIndex_);
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
            DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
            DARABONBA_PTR_TO_JSON(NodeStatusId, nodeStatusId_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Remark, remark_);
            DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          };
          friend void from_json(const Darabonba::Json& j, ReviewProgress& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(FlowNodeId, flowNodeId_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(NodeIndex, nodeIndex_);
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
            DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
            DARABONBA_PTR_FROM_JSON(NodeStatusId, nodeStatusId_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Remark, remark_);
            DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          };
          ReviewProgress() = default ;
          ReviewProgress(const ReviewProgress &) = default ;
          ReviewProgress(ReviewProgress &&) = default ;
          ReviewProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReviewProgress() = default ;
          ReviewProgress& operator=(const ReviewProgress &) = default ;
          ReviewProgress& operator=(ReviewProgress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->flowNodeId_ == nullptr && this->gmtModified_ == nullptr && this->nodeIndex_ == nullptr && this->nodeName_ == nullptr && this->nodeStatus_ == nullptr
        && this->nodeStatusId_ == nullptr && this->operator_ == nullptr && this->remark_ == nullptr && this->roleId_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ReviewProgress& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // flowNodeId Field Functions 
          bool hasFlowNodeId() const { return this->flowNodeId_ != nullptr;};
          void deleteFlowNodeId() { this->flowNodeId_ = nullptr;};
          inline int64_t getFlowNodeId() const { DARABONBA_PTR_GET_DEFAULT(flowNodeId_, 0L) };
          inline ReviewProgress& setFlowNodeId(int64_t flowNodeId) { DARABONBA_PTR_SET_VALUE(flowNodeId_, flowNodeId) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline ReviewProgress& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // nodeIndex Field Functions 
          bool hasNodeIndex() const { return this->nodeIndex_ != nullptr;};
          void deleteNodeIndex() { this->nodeIndex_ = nullptr;};
          inline int32_t getNodeIndex() const { DARABONBA_PTR_GET_DEFAULT(nodeIndex_, 0) };
          inline ReviewProgress& setNodeIndex(int32_t nodeIndex) { DARABONBA_PTR_SET_VALUE(nodeIndex_, nodeIndex) };


          // nodeName Field Functions 
          bool hasNodeName() const { return this->nodeName_ != nullptr;};
          void deleteNodeName() { this->nodeName_ = nullptr;};
          inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
          inline ReviewProgress& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


          // nodeStatus Field Functions 
          bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
          void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
          inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
          inline ReviewProgress& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


          // nodeStatusId Field Functions 
          bool hasNodeStatusId() const { return this->nodeStatusId_ != nullptr;};
          void deleteNodeStatusId() { this->nodeStatusId_ = nullptr;};
          inline int32_t getNodeStatusId() const { DARABONBA_PTR_GET_DEFAULT(nodeStatusId_, 0) };
          inline ReviewProgress& setNodeStatusId(int32_t nodeStatusId) { DARABONBA_PTR_SET_VALUE(nodeStatusId_, nodeStatusId) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline ReviewProgress& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // remark Field Functions 
          bool hasRemark() const { return this->remark_ != nullptr;};
          void deleteRemark() { this->remark_ = nullptr;};
          inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
          inline ReviewProgress& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


          // roleId Field Functions 
          bool hasRoleId() const { return this->roleId_ != nullptr;};
          void deleteRoleId() { this->roleId_ = nullptr;};
          inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
          inline ReviewProgress& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        protected:
          shared_ptr<string> description_ {};
          shared_ptr<int64_t> flowNodeId_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<int32_t> nodeIndex_ {};
          shared_ptr<string> nodeName_ {};
          shared_ptr<string> nodeStatus_ {};
          shared_ptr<int32_t> nodeStatusId_ {};
          shared_ptr<string> operator_ {};
          shared_ptr<string> remark_ {};
          shared_ptr<int64_t> roleId_ {};
        };

        virtual bool empty() const override { return this->appendix_ == nullptr
        && this->autoOnline_ == nullptr && this->creator_ == nullptr && this->extension_ == nullptr && this->flowId_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->icons_ == nullptr && this->id_ == nullptr && this->reviewChannel_ == nullptr && this->reviewIntegerStatus_ == nullptr
        && this->reviewProgress_ == nullptr && this->reviewStatus_ == nullptr && this->reviewTarget_ == nullptr && this->targetDetail_ == nullptr && this->targetType_ == nullptr; };
        // appendix Field Functions 
        bool hasAppendix() const { return this->appendix_ != nullptr;};
        void deleteAppendix() { this->appendix_ = nullptr;};
        inline string getAppendix() const { DARABONBA_PTR_GET_DEFAULT(appendix_, "") };
        inline Content& setAppendix(string appendix) { DARABONBA_PTR_SET_VALUE(appendix_, appendix) };


        // autoOnline Field Functions 
        bool hasAutoOnline() const { return this->autoOnline_ != nullptr;};
        void deleteAutoOnline() { this->autoOnline_ = nullptr;};
        inline bool getAutoOnline() const { DARABONBA_PTR_GET_DEFAULT(autoOnline_, false) };
        inline Content& setAutoOnline(bool autoOnline) { DARABONBA_PTR_SET_VALUE(autoOnline_, autoOnline) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Content& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // extension Field Functions 
        bool hasExtension() const { return this->extension_ != nullptr;};
        void deleteExtension() { this->extension_ = nullptr;};
        inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
        inline Content& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline int64_t getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, 0L) };
        inline Content& setFlowId(int64_t flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Content& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // icons Field Functions 
        bool hasIcons() const { return this->icons_ != nullptr;};
        void deleteIcons() { this->icons_ = nullptr;};
        inline const vector<string> & getIcons() const { DARABONBA_PTR_GET_CONST(icons_, vector<string>) };
        inline vector<string> getIcons() { DARABONBA_PTR_GET(icons_, vector<string>) };
        inline Content& setIcons(const vector<string> & icons) { DARABONBA_PTR_SET_VALUE(icons_, icons) };
        inline Content& setIcons(vector<string> && icons) { DARABONBA_PTR_SET_RVALUE(icons_, icons) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Content& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // reviewChannel Field Functions 
        bool hasReviewChannel() const { return this->reviewChannel_ != nullptr;};
        void deleteReviewChannel() { this->reviewChannel_ = nullptr;};
        inline string getReviewChannel() const { DARABONBA_PTR_GET_DEFAULT(reviewChannel_, "") };
        inline Content& setReviewChannel(string reviewChannel) { DARABONBA_PTR_SET_VALUE(reviewChannel_, reviewChannel) };


        // reviewIntegerStatus Field Functions 
        bool hasReviewIntegerStatus() const { return this->reviewIntegerStatus_ != nullptr;};
        void deleteReviewIntegerStatus() { this->reviewIntegerStatus_ = nullptr;};
        inline int32_t getReviewIntegerStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewIntegerStatus_, 0) };
        inline Content& setReviewIntegerStatus(int32_t reviewIntegerStatus) { DARABONBA_PTR_SET_VALUE(reviewIntegerStatus_, reviewIntegerStatus) };


        // reviewProgress Field Functions 
        bool hasReviewProgress() const { return this->reviewProgress_ != nullptr;};
        void deleteReviewProgress() { this->reviewProgress_ = nullptr;};
        inline const vector<Content::ReviewProgress> & getReviewProgress() const { DARABONBA_PTR_GET_CONST(reviewProgress_, vector<Content::ReviewProgress>) };
        inline vector<Content::ReviewProgress> getReviewProgress() { DARABONBA_PTR_GET(reviewProgress_, vector<Content::ReviewProgress>) };
        inline Content& setReviewProgress(const vector<Content::ReviewProgress> & reviewProgress) { DARABONBA_PTR_SET_VALUE(reviewProgress_, reviewProgress) };
        inline Content& setReviewProgress(vector<Content::ReviewProgress> && reviewProgress) { DARABONBA_PTR_SET_RVALUE(reviewProgress_, reviewProgress) };


        // reviewStatus Field Functions 
        bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
        void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
        inline string getReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, "") };
        inline Content& setReviewStatus(string reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


        // reviewTarget Field Functions 
        bool hasReviewTarget() const { return this->reviewTarget_ != nullptr;};
        void deleteReviewTarget() { this->reviewTarget_ = nullptr;};
        inline int64_t getReviewTarget() const { DARABONBA_PTR_GET_DEFAULT(reviewTarget_, 0L) };
        inline Content& setReviewTarget(int64_t reviewTarget) { DARABONBA_PTR_SET_VALUE(reviewTarget_, reviewTarget) };


        // targetDetail Field Functions 
        bool hasTargetDetail() const { return this->targetDetail_ != nullptr;};
        void deleteTargetDetail() { this->targetDetail_ = nullptr;};
        inline const Content::TargetDetail & getTargetDetail() const { DARABONBA_PTR_GET_CONST(targetDetail_, Content::TargetDetail) };
        inline Content::TargetDetail getTargetDetail() { DARABONBA_PTR_GET(targetDetail_, Content::TargetDetail) };
        inline Content& setTargetDetail(const Content::TargetDetail & targetDetail) { DARABONBA_PTR_SET_VALUE(targetDetail_, targetDetail) };
        inline Content& setTargetDetail(Content::TargetDetail && targetDetail) { DARABONBA_PTR_SET_RVALUE(targetDetail_, targetDetail) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline Content& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      protected:
        shared_ptr<string> appendix_ {};
        shared_ptr<bool> autoOnline_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> extension_ {};
        shared_ptr<int64_t> flowId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<vector<string>> icons_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> reviewChannel_ {};
        shared_ptr<int32_t> reviewIntegerStatus_ {};
        shared_ptr<vector<Content::ReviewProgress>> reviewProgress_ {};
        shared_ptr<string> reviewStatus_ {};
        shared_ptr<int64_t> reviewTarget_ {};
        shared_ptr<Content::TargetDetail> targetDetail_ {};
        shared_ptr<string> targetType_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->errorCode_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<ResultContent::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<ResultContent::Content>) };
      inline vector<ResultContent::Content> getContent() { DARABONBA_PTR_GET(content_, vector<ResultContent::Content>) };
      inline ResultContent& setContent(const vector<ResultContent::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline ResultContent& setContent(vector<ResultContent::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline ResultContent& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline ResultContent& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ResultContent& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ResultContent& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // resultMsg Field Functions 
      bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
      void deleteResultMsg() { this->resultMsg_ = nullptr;};
      inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
      inline ResultContent& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline ResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ResultContent& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<ResultContent::Content>> content_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> requestId_ {};
      shared_ptr<string> resultMsg_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultCode_ == nullptr && this->resultContent_ == nullptr && this->resultMessage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGameReviewByStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline GetGameReviewByStatusResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline const GetGameReviewByStatusResponseBody::ResultContent & getResultContent() const { DARABONBA_PTR_GET_CONST(resultContent_, GetGameReviewByStatusResponseBody::ResultContent) };
    inline GetGameReviewByStatusResponseBody::ResultContent getResultContent() { DARABONBA_PTR_GET(resultContent_, GetGameReviewByStatusResponseBody::ResultContent) };
    inline GetGameReviewByStatusResponseBody& setResultContent(const GetGameReviewByStatusResponseBody::ResultContent & resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };
    inline GetGameReviewByStatusResponseBody& setResultContent(GetGameReviewByStatusResponseBody::ResultContent && resultContent) { DARABONBA_PTR_SET_RVALUE(resultContent_, resultContent) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline GetGameReviewByStatusResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<GetGameReviewByStatusResponseBody::ResultContent> resultContent_ {};
    shared_ptr<string> resultMessage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
