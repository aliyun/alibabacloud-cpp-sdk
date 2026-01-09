// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelTypeName, channelTypeName_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelTypeName, channelTypeName_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQualityResultResponseBody() = default ;
    GetQualityResultResponseBody(const GetQualityResultResponseBody &) = default ;
    GetQualityResultResponseBody(GetQualityResultResponseBody &&) = default ;
    GetQualityResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityResultResponseBody() = default ;
    GetQualityResultResponseBody& operator=(const GetQualityResultResponseBody &) = default ;
    GetQualityResultResponseBody& operator=(GetQualityResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(QualityResultResponseList, qualityResultResponseList_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(QualityResultResponseList, qualityResultResponseList_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QualityResultResponseList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QualityResultResponseList& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
          DARABONBA_PTR_TO_JSON(ChannelTypeName, channelTypeName_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(HitDetail, hitDetail_);
          DARABONBA_PTR_TO_JSON(HitStatus, hitStatus_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(MemberName, memberName_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
          DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_TO_JSON(TouchId, touchId_);
          DARABONBA_PTR_TO_JSON(TouchStartTime, touchStartTime_);
        };
        friend void from_json(const Darabonba::Json& j, QualityResultResponseList& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
          DARABONBA_PTR_FROM_JSON(ChannelTypeName, channelTypeName_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(HitDetail, hitDetail_);
          DARABONBA_PTR_FROM_JSON(HitStatus, hitStatus_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
          DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_FROM_JSON(TouchId, touchId_);
          DARABONBA_PTR_FROM_JSON(TouchStartTime, touchStartTime_);
        };
        QualityResultResponseList() = default ;
        QualityResultResponseList(const QualityResultResponseList &) = default ;
        QualityResultResponseList(QualityResultResponseList &&) = default ;
        QualityResultResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QualityResultResponseList() = default ;
        QualityResultResponseList& operator=(const QualityResultResponseList &) = default ;
        QualityResultResponseList& operator=(QualityResultResponseList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelType_ == nullptr
        && this->channelTypeName_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->hitDetail_ == nullptr && this->hitStatus_ == nullptr
        && this->instanceName_ == nullptr && this->memberName_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->servicerId_ == nullptr && this->servicerName_ == nullptr && this->touchId_ == nullptr && this->touchStartTime_ == nullptr; };
        // channelType Field Functions 
        bool hasChannelType() const { return this->channelType_ != nullptr;};
        void deleteChannelType() { this->channelType_ = nullptr;};
        inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
        inline QualityResultResponseList& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


        // channelTypeName Field Functions 
        bool hasChannelTypeName() const { return this->channelTypeName_ != nullptr;};
        void deleteChannelTypeName() { this->channelTypeName_ = nullptr;};
        inline string getChannelTypeName() const { DARABONBA_PTR_GET_DEFAULT(channelTypeName_, "") };
        inline QualityResultResponseList& setChannelTypeName(string channelTypeName) { DARABONBA_PTR_SET_VALUE(channelTypeName_, channelTypeName) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline QualityResultResponseList& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline QualityResultResponseList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // hitDetail Field Functions 
        bool hasHitDetail() const { return this->hitDetail_ != nullptr;};
        void deleteHitDetail() { this->hitDetail_ = nullptr;};
        inline string getHitDetail() const { DARABONBA_PTR_GET_DEFAULT(hitDetail_, "") };
        inline QualityResultResponseList& setHitDetail(string hitDetail) { DARABONBA_PTR_SET_VALUE(hitDetail_, hitDetail) };


        // hitStatus Field Functions 
        bool hasHitStatus() const { return this->hitStatus_ != nullptr;};
        void deleteHitStatus() { this->hitStatus_ = nullptr;};
        inline bool getHitStatus() const { DARABONBA_PTR_GET_DEFAULT(hitStatus_, false) };
        inline QualityResultResponseList& setHitStatus(bool hitStatus) { DARABONBA_PTR_SET_VALUE(hitStatus_, hitStatus) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline QualityResultResponseList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // memberName Field Functions 
        bool hasMemberName() const { return this->memberName_ != nullptr;};
        void deleteMemberName() { this->memberName_ = nullptr;};
        inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
        inline QualityResultResponseList& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline QualityResultResponseList& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline QualityResultResponseList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // ruleId Field Functions 
        bool hasRuleId() const { return this->ruleId_ != nullptr;};
        void deleteRuleId() { this->ruleId_ = nullptr;};
        inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
        inline QualityResultResponseList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline QualityResultResponseList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // servicerId Field Functions 
        bool hasServicerId() const { return this->servicerId_ != nullptr;};
        void deleteServicerId() { this->servicerId_ = nullptr;};
        inline string getServicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, "") };
        inline QualityResultResponseList& setServicerId(string servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


        // servicerName Field Functions 
        bool hasServicerName() const { return this->servicerName_ != nullptr;};
        void deleteServicerName() { this->servicerName_ = nullptr;};
        inline string getServicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
        inline QualityResultResponseList& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


        // touchId Field Functions 
        bool hasTouchId() const { return this->touchId_ != nullptr;};
        void deleteTouchId() { this->touchId_ = nullptr;};
        inline string getTouchId() const { DARABONBA_PTR_GET_DEFAULT(touchId_, "") };
        inline QualityResultResponseList& setTouchId(string touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };


        // touchStartTime Field Functions 
        bool hasTouchStartTime() const { return this->touchStartTime_ != nullptr;};
        void deleteTouchStartTime() { this->touchStartTime_ = nullptr;};
        inline string getTouchStartTime() const { DARABONBA_PTR_GET_DEFAULT(touchStartTime_, "") };
        inline QualityResultResponseList& setTouchStartTime(string touchStartTime) { DARABONBA_PTR_SET_VALUE(touchStartTime_, touchStartTime) };


      protected:
        shared_ptr<string> channelType_ {};
        shared_ptr<string> channelTypeName_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupName_ {};
        shared_ptr<string> hitDetail_ {};
        shared_ptr<bool> hitStatus_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> memberName_ {};
        shared_ptr<string> projectId_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> ruleId_ {};
        shared_ptr<string> ruleName_ {};
        shared_ptr<string> servicerId_ {};
        shared_ptr<string> servicerName_ {};
        shared_ptr<string> touchId_ {};
        shared_ptr<string> touchStartTime_ {};
      };

      virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->qualityResultResponseList_ == nullptr && this->totalNum_ == nullptr; };
      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // qualityResultResponseList Field Functions 
      bool hasQualityResultResponseList() const { return this->qualityResultResponseList_ != nullptr;};
      void deleteQualityResultResponseList() { this->qualityResultResponseList_ = nullptr;};
      inline const vector<Data::QualityResultResponseList> & getQualityResultResponseList() const { DARABONBA_PTR_GET_CONST(qualityResultResponseList_, vector<Data::QualityResultResponseList>) };
      inline vector<Data::QualityResultResponseList> getQualityResultResponseList() { DARABONBA_PTR_GET(qualityResultResponseList_, vector<Data::QualityResultResponseList>) };
      inline Data& setQualityResultResponseList(const vector<Data::QualityResultResponseList> & qualityResultResponseList) { DARABONBA_PTR_SET_VALUE(qualityResultResponseList_, qualityResultResponseList) };
      inline Data& setQualityResultResponseList(vector<Data::QualityResultResponseList> && qualityResultResponseList) { DARABONBA_PTR_SET_RVALUE(qualityResultResponseList_, qualityResultResponseList) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Data& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    protected:
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::QualityResultResponseList>> qualityResultResponseList_ {};
      shared_ptr<int32_t> totalNum_ {};
    };

    virtual bool empty() const override { return this->channelTypeName_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // channelTypeName Field Functions 
    bool hasChannelTypeName() const { return this->channelTypeName_ != nullptr;};
    void deleteChannelTypeName() { this->channelTypeName_ = nullptr;};
    inline string getChannelTypeName() const { DARABONBA_PTR_GET_DEFAULT(channelTypeName_, "") };
    inline GetQualityResultResponseBody& setChannelTypeName(string channelTypeName) { DARABONBA_PTR_SET_VALUE(channelTypeName_, channelTypeName) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQualityResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQualityResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQualityResultResponseBody::Data) };
    inline GetQualityResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQualityResultResponseBody::Data) };
    inline GetQualityResultResponseBody& setData(const GetQualityResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQualityResultResponseBody& setData(GetQualityResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQualityResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQualityResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQualityResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> channelTypeName_ {};
    shared_ptr<string> code_ {};
    shared_ptr<GetQualityResultResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
