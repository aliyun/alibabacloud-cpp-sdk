// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDOMAINLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDOMAINLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDomainListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDomainListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDomainListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeVpcFirewallDomainListResponseBody() = default ;
    DescribeVpcFirewallDomainListResponseBody(const DescribeVpcFirewallDomainListResponseBody &) = default ;
    DescribeVpcFirewallDomainListResponseBody(DescribeVpcFirewallDomainListResponseBody &&) = default ;
    DescribeVpcFirewallDomainListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDomainListResponseBody() = default ;
    DescribeVpcFirewallDomainListResponseBody& operator=(const DescribeVpcFirewallDomainListResponseBody &) = default ;
    DescribeVpcFirewallDomainListResponseBody& operator=(DescribeVpcFirewallDomainListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationNameList, applicationNameList_);
        DARABONBA_PTR_TO_JSON(Business, business_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(RequestBytes, requestBytes_);
        DARABONBA_PTR_TO_JSON(ResponseBytes, responseBytes_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(SrcIpCount, srcIpCount_);
        DARABONBA_PTR_TO_JSON(SrcVpcCount, srcVpcCount_);
        DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationNameList, applicationNameList_);
        DARABONBA_PTR_FROM_JSON(Business, business_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(RequestBytes, requestBytes_);
        DARABONBA_PTR_FROM_JSON(ResponseBytes, responseBytes_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(SrcIpCount, srcIpCount_);
        DARABONBA_PTR_FROM_JSON(SrcVpcCount, srcVpcCount_);
        DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationNameList_ == nullptr
        && this->business_ == nullptr && this->domain_ == nullptr && this->groupName_ == nullptr && this->requestBytes_ == nullptr && this->responseBytes_ == nullptr
        && this->sessionCount_ == nullptr && this->srcIpCount_ == nullptr && this->srcVpcCount_ == nullptr && this->totalBytes_ == nullptr; };
      // applicationNameList Field Functions 
      bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
      void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
      inline const vector<string> & getApplicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
      inline vector<string> getApplicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
      inline DataList& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
      inline DataList& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


      // business Field Functions 
      bool hasBusiness() const { return this->business_ != nullptr;};
      void deleteBusiness() { this->business_ = nullptr;};
      inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
      inline DataList& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DataList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DataList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // requestBytes Field Functions 
      bool hasRequestBytes() const { return this->requestBytes_ != nullptr;};
      void deleteRequestBytes() { this->requestBytes_ = nullptr;};
      inline int64_t getRequestBytes() const { DARABONBA_PTR_GET_DEFAULT(requestBytes_, 0L) };
      inline DataList& setRequestBytes(int64_t requestBytes) { DARABONBA_PTR_SET_VALUE(requestBytes_, requestBytes) };


      // responseBytes Field Functions 
      bool hasResponseBytes() const { return this->responseBytes_ != nullptr;};
      void deleteResponseBytes() { this->responseBytes_ = nullptr;};
      inline int64_t getResponseBytes() const { DARABONBA_PTR_GET_DEFAULT(responseBytes_, 0L) };
      inline DataList& setResponseBytes(int64_t responseBytes) { DARABONBA_PTR_SET_VALUE(responseBytes_, responseBytes) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // srcIpCount Field Functions 
      bool hasSrcIpCount() const { return this->srcIpCount_ != nullptr;};
      void deleteSrcIpCount() { this->srcIpCount_ = nullptr;};
      inline int64_t getSrcIpCount() const { DARABONBA_PTR_GET_DEFAULT(srcIpCount_, 0L) };
      inline DataList& setSrcIpCount(int64_t srcIpCount) { DARABONBA_PTR_SET_VALUE(srcIpCount_, srcIpCount) };


      // srcVpcCount Field Functions 
      bool hasSrcVpcCount() const { return this->srcVpcCount_ != nullptr;};
      void deleteSrcVpcCount() { this->srcVpcCount_ = nullptr;};
      inline int64_t getSrcVpcCount() const { DARABONBA_PTR_GET_DEFAULT(srcVpcCount_, 0L) };
      inline DataList& setSrcVpcCount(int64_t srcVpcCount) { DARABONBA_PTR_SET_VALUE(srcVpcCount_, srcVpcCount) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
      inline DataList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    protected:
      shared_ptr<vector<string>> applicationNameList_ {};
      shared_ptr<string> business_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<int64_t> requestBytes_ {};
      shared_ptr<int64_t> responseBytes_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<int64_t> srcIpCount_ {};
      shared_ptr<int64_t> srcVpcCount_ {};
      shared_ptr<int64_t> totalBytes_ {};
    };

    virtual bool empty() const override { return this->dataList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVpcFirewallDomainListResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVpcFirewallDomainListResponseBody::DataList>) };
    inline vector<DescribeVpcFirewallDomainListResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVpcFirewallDomainListResponseBody::DataList>) };
    inline DescribeVpcFirewallDomainListResponseBody& setDataList(const vector<DescribeVpcFirewallDomainListResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVpcFirewallDomainListResponseBody& setDataList(vector<DescribeVpcFirewallDomainListResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallDomainListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcFirewallDomainListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeVpcFirewallDomainListResponseBody::DataList>> dataList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
