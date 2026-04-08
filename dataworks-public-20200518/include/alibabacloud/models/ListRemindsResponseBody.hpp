// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListRemindsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListRemindsResponseBody() = default ;
    ListRemindsResponseBody(const ListRemindsResponseBody &) = default ;
    ListRemindsResponseBody(ListRemindsResponseBody &&) = default ;
    ListRemindsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindsResponseBody() = default ;
    ListRemindsResponseBody& operator=(const ListRemindsResponseBody &) = default ;
    ListRemindsResponseBody& operator=(ListRemindsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Reminds, reminds_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Reminds, reminds_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Reminds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Reminds& obj) { 
          DARABONBA_PTR_TO_JSON(AlertMethods, alertMethods_);
          DARABONBA_PTR_TO_JSON(AlertTargets, alertTargets_);
          DARABONBA_PTR_TO_JSON(AlertUnit, alertUnit_);
          DARABONBA_PTR_TO_JSON(BaselineIds, baselineIds_);
          DARABONBA_PTR_TO_JSON(BizProcessIds, bizProcessIds_);
          DARABONBA_PTR_TO_JSON(DndEnd, dndEnd_);
          DARABONBA_PTR_TO_JSON(DndStart, dndStart_);
          DARABONBA_PTR_TO_JSON(Founder, founder_);
          DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
          DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
          DARABONBA_PTR_TO_JSON(RemindId, remindId_);
          DARABONBA_PTR_TO_JSON(RemindName, remindName_);
          DARABONBA_PTR_TO_JSON(RemindType, remindType_);
          DARABONBA_PTR_TO_JSON(RemindUnit, remindUnit_);
          DARABONBA_PTR_TO_JSON(Useflag, useflag_);
        };
        friend void from_json(const Darabonba::Json& j, Reminds& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertMethods, alertMethods_);
          DARABONBA_PTR_FROM_JSON(AlertTargets, alertTargets_);
          DARABONBA_PTR_FROM_JSON(AlertUnit, alertUnit_);
          DARABONBA_PTR_FROM_JSON(BaselineIds, baselineIds_);
          DARABONBA_PTR_FROM_JSON(BizProcessIds, bizProcessIds_);
          DARABONBA_PTR_FROM_JSON(DndEnd, dndEnd_);
          DARABONBA_PTR_FROM_JSON(DndStart, dndStart_);
          DARABONBA_PTR_FROM_JSON(Founder, founder_);
          DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
          DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
          DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
          DARABONBA_PTR_FROM_JSON(RemindName, remindName_);
          DARABONBA_PTR_FROM_JSON(RemindType, remindType_);
          DARABONBA_PTR_FROM_JSON(RemindUnit, remindUnit_);
          DARABONBA_PTR_FROM_JSON(Useflag, useflag_);
        };
        Reminds() = default ;
        Reminds(const Reminds &) = default ;
        Reminds(Reminds &&) = default ;
        Reminds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Reminds() = default ;
        Reminds& operator=(const Reminds &) = default ;
        Reminds& operator=(Reminds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertMethods_ == nullptr
        && this->alertTargets_ == nullptr && this->alertUnit_ == nullptr && this->baselineIds_ == nullptr && this->bizProcessIds_ == nullptr && this->dndEnd_ == nullptr
        && this->dndStart_ == nullptr && this->founder_ == nullptr && this->nodeIds_ == nullptr && this->projectIds_ == nullptr && this->remindId_ == nullptr
        && this->remindName_ == nullptr && this->remindType_ == nullptr && this->remindUnit_ == nullptr && this->useflag_ == nullptr; };
        // alertMethods Field Functions 
        bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
        void deleteAlertMethods() { this->alertMethods_ = nullptr;};
        inline const vector<string> & getAlertMethods() const { DARABONBA_PTR_GET_CONST(alertMethods_, vector<string>) };
        inline vector<string> getAlertMethods() { DARABONBA_PTR_GET(alertMethods_, vector<string>) };
        inline Reminds& setAlertMethods(const vector<string> & alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };
        inline Reminds& setAlertMethods(vector<string> && alertMethods) { DARABONBA_PTR_SET_RVALUE(alertMethods_, alertMethods) };


        // alertTargets Field Functions 
        bool hasAlertTargets() const { return this->alertTargets_ != nullptr;};
        void deleteAlertTargets() { this->alertTargets_ = nullptr;};
        inline const vector<string> & getAlertTargets() const { DARABONBA_PTR_GET_CONST(alertTargets_, vector<string>) };
        inline vector<string> getAlertTargets() { DARABONBA_PTR_GET(alertTargets_, vector<string>) };
        inline Reminds& setAlertTargets(const vector<string> & alertTargets) { DARABONBA_PTR_SET_VALUE(alertTargets_, alertTargets) };
        inline Reminds& setAlertTargets(vector<string> && alertTargets) { DARABONBA_PTR_SET_RVALUE(alertTargets_, alertTargets) };


        // alertUnit Field Functions 
        bool hasAlertUnit() const { return this->alertUnit_ != nullptr;};
        void deleteAlertUnit() { this->alertUnit_ = nullptr;};
        inline string getAlertUnit() const { DARABONBA_PTR_GET_DEFAULT(alertUnit_, "") };
        inline Reminds& setAlertUnit(string alertUnit) { DARABONBA_PTR_SET_VALUE(alertUnit_, alertUnit) };


        // baselineIds Field Functions 
        bool hasBaselineIds() const { return this->baselineIds_ != nullptr;};
        void deleteBaselineIds() { this->baselineIds_ = nullptr;};
        inline const vector<int64_t> & getBaselineIds() const { DARABONBA_PTR_GET_CONST(baselineIds_, vector<int64_t>) };
        inline vector<int64_t> getBaselineIds() { DARABONBA_PTR_GET(baselineIds_, vector<int64_t>) };
        inline Reminds& setBaselineIds(const vector<int64_t> & baselineIds) { DARABONBA_PTR_SET_VALUE(baselineIds_, baselineIds) };
        inline Reminds& setBaselineIds(vector<int64_t> && baselineIds) { DARABONBA_PTR_SET_RVALUE(baselineIds_, baselineIds) };


        // bizProcessIds Field Functions 
        bool hasBizProcessIds() const { return this->bizProcessIds_ != nullptr;};
        void deleteBizProcessIds() { this->bizProcessIds_ = nullptr;};
        inline const vector<int64_t> & getBizProcessIds() const { DARABONBA_PTR_GET_CONST(bizProcessIds_, vector<int64_t>) };
        inline vector<int64_t> getBizProcessIds() { DARABONBA_PTR_GET(bizProcessIds_, vector<int64_t>) };
        inline Reminds& setBizProcessIds(const vector<int64_t> & bizProcessIds) { DARABONBA_PTR_SET_VALUE(bizProcessIds_, bizProcessIds) };
        inline Reminds& setBizProcessIds(vector<int64_t> && bizProcessIds) { DARABONBA_PTR_SET_RVALUE(bizProcessIds_, bizProcessIds) };


        // dndEnd Field Functions 
        bool hasDndEnd() const { return this->dndEnd_ != nullptr;};
        void deleteDndEnd() { this->dndEnd_ = nullptr;};
        inline string getDndEnd() const { DARABONBA_PTR_GET_DEFAULT(dndEnd_, "") };
        inline Reminds& setDndEnd(string dndEnd) { DARABONBA_PTR_SET_VALUE(dndEnd_, dndEnd) };


        // dndStart Field Functions 
        bool hasDndStart() const { return this->dndStart_ != nullptr;};
        void deleteDndStart() { this->dndStart_ = nullptr;};
        inline string getDndStart() const { DARABONBA_PTR_GET_DEFAULT(dndStart_, "") };
        inline Reminds& setDndStart(string dndStart) { DARABONBA_PTR_SET_VALUE(dndStart_, dndStart) };


        // founder Field Functions 
        bool hasFounder() const { return this->founder_ != nullptr;};
        void deleteFounder() { this->founder_ = nullptr;};
        inline string getFounder() const { DARABONBA_PTR_GET_DEFAULT(founder_, "") };
        inline Reminds& setFounder(string founder) { DARABONBA_PTR_SET_VALUE(founder_, founder) };


        // nodeIds Field Functions 
        bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
        void deleteNodeIds() { this->nodeIds_ = nullptr;};
        inline const vector<int64_t> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<int64_t>) };
        inline vector<int64_t> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<int64_t>) };
        inline Reminds& setNodeIds(const vector<int64_t> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
        inline Reminds& setNodeIds(vector<int64_t> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


        // projectIds Field Functions 
        bool hasProjectIds() const { return this->projectIds_ != nullptr;};
        void deleteProjectIds() { this->projectIds_ = nullptr;};
        inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
        inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
        inline Reminds& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
        inline Reminds& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


        // remindId Field Functions 
        bool hasRemindId() const { return this->remindId_ != nullptr;};
        void deleteRemindId() { this->remindId_ = nullptr;};
        inline int64_t getRemindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
        inline Reminds& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


        // remindName Field Functions 
        bool hasRemindName() const { return this->remindName_ != nullptr;};
        void deleteRemindName() { this->remindName_ = nullptr;};
        inline string getRemindName() const { DARABONBA_PTR_GET_DEFAULT(remindName_, "") };
        inline Reminds& setRemindName(string remindName) { DARABONBA_PTR_SET_VALUE(remindName_, remindName) };


        // remindType Field Functions 
        bool hasRemindType() const { return this->remindType_ != nullptr;};
        void deleteRemindType() { this->remindType_ = nullptr;};
        inline string getRemindType() const { DARABONBA_PTR_GET_DEFAULT(remindType_, "") };
        inline Reminds& setRemindType(string remindType) { DARABONBA_PTR_SET_VALUE(remindType_, remindType) };


        // remindUnit Field Functions 
        bool hasRemindUnit() const { return this->remindUnit_ != nullptr;};
        void deleteRemindUnit() { this->remindUnit_ = nullptr;};
        inline string getRemindUnit() const { DARABONBA_PTR_GET_DEFAULT(remindUnit_, "") };
        inline Reminds& setRemindUnit(string remindUnit) { DARABONBA_PTR_SET_VALUE(remindUnit_, remindUnit) };


        // useflag Field Functions 
        bool hasUseflag() const { return this->useflag_ != nullptr;};
        void deleteUseflag() { this->useflag_ = nullptr;};
        inline bool getUseflag() const { DARABONBA_PTR_GET_DEFAULT(useflag_, false) };
        inline Reminds& setUseflag(bool useflag) { DARABONBA_PTR_SET_VALUE(useflag_, useflag) };


      protected:
        // The notification method. Valid values: MAIL, SMS, and PHONE. The value MAIL indicates that the notification is sent by email. Only DataWorks Professional Edition and more advanced editions support the PHONE notification method.
        shared_ptr<vector<string>> alertMethods_ {};
        // The IDs of the Alibaba Cloud accounts used by alert recipients.
        shared_ptr<vector<string>> alertTargets_ {};
        // The alert recipient. Valid values: OWNER and OTHER. The value OWNER indicates the node owner. The value OTHER indicates a specified user.
        shared_ptr<string> alertUnit_ {};
        // The IDs of the baselines to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is BASELINE.
        shared_ptr<vector<int64_t>> baselineIds_ {};
        // The IDs of the workflows to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is BIZPROCESS.
        shared_ptr<vector<int64_t>> bizProcessIds_ {};
        // The end time of the quiet hours. The time is in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
        shared_ptr<string> dndEnd_ {};
        // The start time of the quiet hours. The time is in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
        shared_ptr<string> dndStart_ {};
        // The ID of the Alibaba Cloud account used by the rule creator.
        shared_ptr<string> founder_ {};
        // The IDs of the nodes to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is NODE.
        shared_ptr<vector<int64_t>> nodeIds_ {};
        // The IDs of the workspaces to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is PROJECT.
        shared_ptr<vector<int64_t>> projectIds_ {};
        // The custom alert rule ID.
        shared_ptr<int64_t> remindId_ {};
        // The name of the custom alert rule.
        shared_ptr<string> remindName_ {};
        // The condition that triggers an alert. Valid values: FINISHED, UNFINISHED, ERROR, CYCLE_UNFINISHED, and TIMEOUT.
        shared_ptr<string> remindType_ {};
        // The type of the object to which the custom alert rule is applied. Valid values: NODE, BASELINE, PROJECT, and BIZPROCESS. The value NODE indicates a node. The value BASELINE indicates a baseline. The value PROJECT indicates a workspace. The value BIZPROCESS indicates a workflow.
        shared_ptr<string> remindUnit_ {};
        // Indicates whether the custom alert rule is enabled. Valid values: true and false.
        shared_ptr<bool> useflag_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->reminds_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // reminds Field Functions 
      bool hasReminds() const { return this->reminds_ != nullptr;};
      void deleteReminds() { this->reminds_ = nullptr;};
      inline const vector<Data::Reminds> & getReminds() const { DARABONBA_PTR_GET_CONST(reminds_, vector<Data::Reminds>) };
      inline vector<Data::Reminds> getReminds() { DARABONBA_PTR_GET(reminds_, vector<Data::Reminds>) };
      inline Data& setReminds(const vector<Data::Reminds> & reminds) { DARABONBA_PTR_SET_VALUE(reminds_, reminds) };
      inline Data& setReminds(vector<Data::Reminds> && reminds) { DARABONBA_PTR_SET_RVALUE(reminds_, reminds) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The list of custom alert rules.
      shared_ptr<vector<Data::Reminds>> reminds_ {};
      // The total number of custom alert rules returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRemindsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRemindsResponseBody::Data) };
    inline ListRemindsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRemindsResponseBody::Data) };
    inline ListRemindsResponseBody& setData(const ListRemindsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRemindsResponseBody& setData(ListRemindsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListRemindsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListRemindsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListRemindsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRemindsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListRemindsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned.
    shared_ptr<ListRemindsResponseBody::Data> data_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
