// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAPIGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAPIGROUPSRESPONSEBODY_HPP_
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
  class ListGatewayApiGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(ApiGroups, apiGroups_);
      DARABONBA_PTR_TO_JSON(ErrorField, errorField_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayApiGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(ApiGroups, apiGroups_);
      DARABONBA_PTR_FROM_JSON(ErrorField, errorField_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultMessage, resultMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListGatewayApiGroupsResponseBody() = default ;
    ListGatewayApiGroupsResponseBody(const ListGatewayApiGroupsResponseBody &) = default ;
    ListGatewayApiGroupsResponseBody(ListGatewayApiGroupsResponseBody &&) = default ;
    ListGatewayApiGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayApiGroupsResponseBody() = default ;
    ListGatewayApiGroupsResponseBody& operator=(const ListGatewayApiGroupsResponseBody &) = default ;
    ListGatewayApiGroupsResponseBody& operator=(ListGatewayApiGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiGroups& obj) { 
        DARABONBA_ANY_TO_JSON(Centers, centers_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(EnableMTLS, enableMTLS_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(HttpsModel, httpsModel_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstancePort, instancePort_);
        DARABONBA_PTR_TO_JSON(RegionMode, regionMode_);
        DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        DARABONBA_PTR_TO_JSON(UpstreamType, upstreamType_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcModel, vpcModel_);
      };
      friend void from_json(const Darabonba::Json& j, ApiGroups& obj) { 
        DARABONBA_ANY_FROM_JSON(Centers, centers_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(EnableMTLS, enableMTLS_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(HttpsModel, httpsModel_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstancePort, instancePort_);
        DARABONBA_PTR_FROM_JSON(RegionMode, regionMode_);
        DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        DARABONBA_PTR_FROM_JSON(UpstreamType, upstreamType_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcModel, vpcModel_);
      };
      ApiGroups() = default ;
      ApiGroups(const ApiGroups &) = default ;
      ApiGroups(ApiGroups &&) = default ;
      ApiGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiGroups() = default ;
      ApiGroups& operator=(const ApiGroups &) = default ;
      ApiGroups& operator=(ApiGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->centers_ == nullptr
        && this->description_ == nullptr && this->domainName_ == nullptr && this->enableMTLS_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr
        && this->host_ == nullptr && this->httpsModel_ == nullptr && this->instanceId_ == nullptr && this->instancePort_ == nullptr && this->regionMode_ == nullptr
        && this->timeout_ == nullptr && this->upstreamType_ == nullptr && this->vpcId_ == nullptr && this->vpcModel_ == nullptr; };
      // centers Field Functions 
      bool hasCenters() const { return this->centers_ != nullptr;};
      void deleteCenters() { this->centers_ = nullptr;};
      inline       const Darabonba::Json & getCenters() const { DARABONBA_GET(centers_) };
      Darabonba::Json & getCenters() { DARABONBA_GET(centers_) };
      inline ApiGroups& setCenters(const Darabonba::Json & centers) { DARABONBA_SET_VALUE(centers_, centers) };
      inline ApiGroups& setCenters(Darabonba::Json && centers) { DARABONBA_SET_RVALUE(centers_, centers) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApiGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline ApiGroups& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // enableMTLS Field Functions 
      bool hasEnableMTLS() const { return this->enableMTLS_ != nullptr;};
      void deleteEnableMTLS() { this->enableMTLS_ = nullptr;};
      inline bool getEnableMTLS() const { DARABONBA_PTR_GET_DEFAULT(enableMTLS_, false) };
      inline ApiGroups& setEnableMTLS(bool enableMTLS) { DARABONBA_PTR_SET_VALUE(enableMTLS_, enableMTLS) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline ApiGroups& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline ApiGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline ApiGroups& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // httpsModel Field Functions 
      bool hasHttpsModel() const { return this->httpsModel_ != nullptr;};
      void deleteHttpsModel() { this->httpsModel_ = nullptr;};
      inline bool getHttpsModel() const { DARABONBA_PTR_GET_DEFAULT(httpsModel_, false) };
      inline ApiGroups& setHttpsModel(bool httpsModel) { DARABONBA_PTR_SET_VALUE(httpsModel_, httpsModel) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ApiGroups& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instancePort Field Functions 
      bool hasInstancePort() const { return this->instancePort_ != nullptr;};
      void deleteInstancePort() { this->instancePort_ = nullptr;};
      inline int32_t getInstancePort() const { DARABONBA_PTR_GET_DEFAULT(instancePort_, 0) };
      inline ApiGroups& setInstancePort(int32_t instancePort) { DARABONBA_PTR_SET_VALUE(instancePort_, instancePort) };


      // regionMode Field Functions 
      bool hasRegionMode() const { return this->regionMode_ != nullptr;};
      void deleteRegionMode() { this->regionMode_ = nullptr;};
      inline bool getRegionMode() const { DARABONBA_PTR_GET_DEFAULT(regionMode_, false) };
      inline ApiGroups& setRegionMode(bool regionMode) { DARABONBA_PTR_SET_VALUE(regionMode_, regionMode) };


      // timeout Field Functions 
      bool hasTimeout() const { return this->timeout_ != nullptr;};
      void deleteTimeout() { this->timeout_ = nullptr;};
      inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
      inline ApiGroups& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      // upstreamType Field Functions 
      bool hasUpstreamType() const { return this->upstreamType_ != nullptr;};
      void deleteUpstreamType() { this->upstreamType_ = nullptr;};
      inline string getUpstreamType() const { DARABONBA_PTR_GET_DEFAULT(upstreamType_, "") };
      inline ApiGroups& setUpstreamType(string upstreamType) { DARABONBA_PTR_SET_VALUE(upstreamType_, upstreamType) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline ApiGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcModel Field Functions 
      bool hasVpcModel() const { return this->vpcModel_ != nullptr;};
      void deleteVpcModel() { this->vpcModel_ = nullptr;};
      inline bool getVpcModel() const { DARABONBA_PTR_GET_DEFAULT(vpcModel_, false) };
      inline ApiGroups& setVpcModel(bool vpcModel) { DARABONBA_PTR_SET_VALUE(vpcModel_, vpcModel) };


    protected:
      Darabonba::Json centers_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<bool> enableMTLS_ {};
      shared_ptr<int64_t> groupId_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<string> host_ {};
      shared_ptr<bool> httpsModel_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int32_t> instancePort_ {};
      shared_ptr<bool> regionMode_ {};
      shared_ptr<int32_t> timeout_ {};
      shared_ptr<string> upstreamType_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<bool> vpcModel_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->apiGroups_ == nullptr && this->errorField_ == nullptr && this->httpStatusCode_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr && this->resultMessage_ == nullptr && this->success_ == nullptr && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListGatewayApiGroupsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // apiGroups Field Functions 
    bool hasApiGroups() const { return this->apiGroups_ != nullptr;};
    void deleteApiGroups() { this->apiGroups_ = nullptr;};
    inline const vector<ListGatewayApiGroupsResponseBody::ApiGroups> & getApiGroups() const { DARABONBA_PTR_GET_CONST(apiGroups_, vector<ListGatewayApiGroupsResponseBody::ApiGroups>) };
    inline vector<ListGatewayApiGroupsResponseBody::ApiGroups> getApiGroups() { DARABONBA_PTR_GET(apiGroups_, vector<ListGatewayApiGroupsResponseBody::ApiGroups>) };
    inline ListGatewayApiGroupsResponseBody& setApiGroups(const vector<ListGatewayApiGroupsResponseBody::ApiGroups> & apiGroups) { DARABONBA_PTR_SET_VALUE(apiGroups_, apiGroups) };
    inline ListGatewayApiGroupsResponseBody& setApiGroups(vector<ListGatewayApiGroupsResponseBody::ApiGroups> && apiGroups) { DARABONBA_PTR_SET_RVALUE(apiGroups_, apiGroups) };


    // errorField Field Functions 
    bool hasErrorField() const { return this->errorField_ != nullptr;};
    void deleteErrorField() { this->errorField_ = nullptr;};
    inline string getErrorField() const { DARABONBA_PTR_GET_DEFAULT(errorField_, "") };
    inline ListGatewayApiGroupsResponseBody& setErrorField(string errorField) { DARABONBA_PTR_SET_VALUE(errorField_, errorField) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListGatewayApiGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayApiGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayApiGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayApiGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline string getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, "") };
    inline ListGatewayApiGroupsResponseBody& setResultCode(string resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultMessage Field Functions 
    bool hasResultMessage() const { return this->resultMessage_ != nullptr;};
    void deleteResultMessage() { this->resultMessage_ = nullptr;};
    inline string getResultMessage() const { DARABONBA_PTR_GET_DEFAULT(resultMessage_, "") };
    inline ListGatewayApiGroupsResponseBody& setResultMessage(string resultMessage) { DARABONBA_PTR_SET_VALUE(resultMessage_, resultMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGatewayApiGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListGatewayApiGroupsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<ListGatewayApiGroupsResponseBody::ApiGroups>> apiGroups_ {};
    shared_ptr<string> errorField_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCode_ {};
    shared_ptr<string> resultMessage_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
