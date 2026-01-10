// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIFYINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIFYINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDifyInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDifyInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Root, root_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDifyInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Root, root_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDifyInstancesResponseBody() = default ;
    ListDifyInstancesResponseBody(const ListDifyInstancesResponseBody &) = default ;
    ListDifyInstancesResponseBody(ListDifyInstancesResponseBody &&) = default ;
    ListDifyInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDifyInstancesResponseBody() = default ;
    ListDifyInstancesResponseBody& operator=(const ListDifyInstancesResponseBody &) = default ;
    ListDifyInstancesResponseBody& operator=(ListDifyInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Root : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Root& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Root& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
      };
      Root() = default ;
      Root(const Root &) = default ;
      Root(Root &&) = default ;
      Root(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Root() = default ;
      Root& operator=(const Root &) = default ;
      Root& operator=(Root &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(AppUuid, appUuid_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Edition, edition_);
          DARABONBA_PTR_TO_JSON(EnterpriseInternetUrl, enterpriseInternetUrl_);
          DARABONBA_PTR_TO_JSON(EnterpriseIntranetUrl, enterpriseIntranetUrl_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(InternetUrl, internetUrl_);
          DARABONBA_PTR_TO_JSON(IntranetUrl, intranetUrl_);
          DARABONBA_PTR_TO_JSON(MajorVersion, majorVersion_);
          DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(AppUuid, appUuid_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Edition, edition_);
          DARABONBA_PTR_FROM_JSON(EnterpriseInternetUrl, enterpriseInternetUrl_);
          DARABONBA_PTR_FROM_JSON(EnterpriseIntranetUrl, enterpriseIntranetUrl_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(InternetUrl, internetUrl_);
          DARABONBA_PTR_FROM_JSON(IntranetUrl, intranetUrl_);
          DARABONBA_PTR_FROM_JSON(MajorVersion, majorVersion_);
          DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        virtual bool empty() const override { return this->appUuid_ == nullptr
        && this->createdTime_ == nullptr && this->description_ == nullptr && this->edition_ == nullptr && this->enterpriseInternetUrl_ == nullptr && this->enterpriseIntranetUrl_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetUrl_ == nullptr && this->intranetUrl_ == nullptr && this->majorVersion_ == nullptr
        && this->regionCode_ == nullptr && this->securityGroupId_ == nullptr && this->status_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->workspaceId_ == nullptr && this->zoneId_ == nullptr; };
        // appUuid Field Functions 
        bool hasAppUuid() const { return this->appUuid_ != nullptr;};
        void deleteAppUuid() { this->appUuid_ = nullptr;};
        inline string getAppUuid() const { DARABONBA_PTR_GET_DEFAULT(appUuid_, "") };
        inline Data& setAppUuid(string appUuid) { DARABONBA_PTR_SET_VALUE(appUuid_, appUuid) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
        inline Data& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // edition Field Functions 
        bool hasEdition() const { return this->edition_ != nullptr;};
        void deleteEdition() { this->edition_ = nullptr;};
        inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
        inline Data& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


        // enterpriseInternetUrl Field Functions 
        bool hasEnterpriseInternetUrl() const { return this->enterpriseInternetUrl_ != nullptr;};
        void deleteEnterpriseInternetUrl() { this->enterpriseInternetUrl_ = nullptr;};
        inline string getEnterpriseInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(enterpriseInternetUrl_, "") };
        inline Data& setEnterpriseInternetUrl(string enterpriseInternetUrl) { DARABONBA_PTR_SET_VALUE(enterpriseInternetUrl_, enterpriseInternetUrl) };


        // enterpriseIntranetUrl Field Functions 
        bool hasEnterpriseIntranetUrl() const { return this->enterpriseIntranetUrl_ != nullptr;};
        void deleteEnterpriseIntranetUrl() { this->enterpriseIntranetUrl_ = nullptr;};
        inline string getEnterpriseIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(enterpriseIntranetUrl_, "") };
        inline Data& setEnterpriseIntranetUrl(string enterpriseIntranetUrl) { DARABONBA_PTR_SET_VALUE(enterpriseIntranetUrl_, enterpriseIntranetUrl) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // internetUrl Field Functions 
        bool hasInternetUrl() const { return this->internetUrl_ != nullptr;};
        void deleteInternetUrl() { this->internetUrl_ = nullptr;};
        inline string getInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(internetUrl_, "") };
        inline Data& setInternetUrl(string internetUrl) { DARABONBA_PTR_SET_VALUE(internetUrl_, internetUrl) };


        // intranetUrl Field Functions 
        bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
        void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
        inline string getIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
        inline Data& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


        // majorVersion Field Functions 
        bool hasMajorVersion() const { return this->majorVersion_ != nullptr;};
        void deleteMajorVersion() { this->majorVersion_ = nullptr;};
        inline string getMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(majorVersion_, "") };
        inline Data& setMajorVersion(string majorVersion) { DARABONBA_PTR_SET_VALUE(majorVersion_, majorVersion) };


        // regionCode Field Functions 
        bool hasRegionCode() const { return this->regionCode_ != nullptr;};
        void deleteRegionCode() { this->regionCode_ = nullptr;};
        inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
        inline Data& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline Data& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> appUuid_ {};
        shared_ptr<string> createdTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> edition_ {};
        shared_ptr<string> enterpriseInternetUrl_ {};
        shared_ptr<string> enterpriseIntranetUrl_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<string> internetUrl_ {};
        shared_ptr<string> intranetUrl_ {};
        shared_ptr<string> majorVersion_ {};
        shared_ptr<string> regionCode_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> workspaceId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Root::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Root::Data>) };
      inline vector<Root::Data> getData() { DARABONBA_PTR_GET(data_, vector<Root::Data>) };
      inline Root& setData(const vector<Root::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Root& setData(vector<Root::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<vector<Root::Data>> data_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->root_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDifyInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDifyInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDifyInstancesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDifyInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDifyInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDifyInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDifyInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // root Field Functions 
    bool hasRoot() const { return this->root_ != nullptr;};
    void deleteRoot() { this->root_ = nullptr;};
    inline const ListDifyInstancesResponseBody::Root & getRoot() const { DARABONBA_PTR_GET_CONST(root_, ListDifyInstancesResponseBody::Root) };
    inline ListDifyInstancesResponseBody::Root getRoot() { DARABONBA_PTR_GET(root_, ListDifyInstancesResponseBody::Root) };
    inline ListDifyInstancesResponseBody& setRoot(const ListDifyInstancesResponseBody::Root & root) { DARABONBA_PTR_SET_VALUE(root_, root) };
    inline ListDifyInstancesResponseBody& setRoot(ListDifyInstancesResponseBody::Root && root) { DARABONBA_PTR_SET_RVALUE(root_, root) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDifyInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<ListDifyInstancesResponseBody::Root> root_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
