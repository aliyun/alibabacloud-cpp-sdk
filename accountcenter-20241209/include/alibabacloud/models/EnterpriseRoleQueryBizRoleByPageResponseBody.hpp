// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEROLEQUERYBIZROLEBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEROLEQUERYBIZROLEBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRoleQueryBizRoleByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRoleQueryBizRoleByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizRoles, bizRoles_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRoleQueryBizRoleByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRoles, bizRoles_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    EnterpriseRoleQueryBizRoleByPageResponseBody() = default ;
    EnterpriseRoleQueryBizRoleByPageResponseBody(const EnterpriseRoleQueryBizRoleByPageResponseBody &) = default ;
    EnterpriseRoleQueryBizRoleByPageResponseBody(EnterpriseRoleQueryBizRoleByPageResponseBody &&) = default ;
    EnterpriseRoleQueryBizRoleByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRoleQueryBizRoleByPageResponseBody() = default ;
    EnterpriseRoleQueryBizRoleByPageResponseBody& operator=(const EnterpriseRoleQueryBizRoleByPageResponseBody &) = default ;
    EnterpriseRoleQueryBizRoleByPageResponseBody& operator=(EnterpriseRoleQueryBizRoleByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BizRoles : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BizRoles& obj) { 
        DARABONBA_PTR_TO_JSON(BizPermissionCount, bizPermissionCount_);
        DARABONBA_PTR_TO_JSON(BizPermissionNameList, bizPermissionNameList_);
        DARABONBA_PTR_TO_JSON(BizRoleCode, bizRoleCode_);
        DARABONBA_PTR_TO_JSON(BizRoleDesc, bizRoleDesc_);
        DARABONBA_PTR_TO_JSON(BizRoleName, bizRoleName_);
        DARABONBA_PTR_TO_JSON(GrantedPkCount, grantedPkCount_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SrcType, srcType_);
      };
      friend void from_json(const Darabonba::Json& j, BizRoles& obj) { 
        DARABONBA_PTR_FROM_JSON(BizPermissionCount, bizPermissionCount_);
        DARABONBA_PTR_FROM_JSON(BizPermissionNameList, bizPermissionNameList_);
        DARABONBA_PTR_FROM_JSON(BizRoleCode, bizRoleCode_);
        DARABONBA_PTR_FROM_JSON(BizRoleDesc, bizRoleDesc_);
        DARABONBA_PTR_FROM_JSON(BizRoleName, bizRoleName_);
        DARABONBA_PTR_FROM_JSON(GrantedPkCount, grantedPkCount_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
      };
      BizRoles() = default ;
      BizRoles(const BizRoles &) = default ;
      BizRoles(BizRoles &&) = default ;
      BizRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BizRoles() = default ;
      BizRoles& operator=(const BizRoles &) = default ;
      BizRoles& operator=(BizRoles &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizPermissionCount_ == nullptr
        && this->bizPermissionNameList_ == nullptr && this->bizRoleCode_ == nullptr && this->bizRoleDesc_ == nullptr && this->bizRoleName_ == nullptr && this->grantedPkCount_ == nullptr
        && this->resourceType_ == nullptr && this->srcType_ == nullptr; };
      // bizPermissionCount Field Functions 
      bool hasBizPermissionCount() const { return this->bizPermissionCount_ != nullptr;};
      void deleteBizPermissionCount() { this->bizPermissionCount_ = nullptr;};
      inline int32_t getBizPermissionCount() const { DARABONBA_PTR_GET_DEFAULT(bizPermissionCount_, 0) };
      inline BizRoles& setBizPermissionCount(int32_t bizPermissionCount) { DARABONBA_PTR_SET_VALUE(bizPermissionCount_, bizPermissionCount) };


      // bizPermissionNameList Field Functions 
      bool hasBizPermissionNameList() const { return this->bizPermissionNameList_ != nullptr;};
      void deleteBizPermissionNameList() { this->bizPermissionNameList_ = nullptr;};
      inline const vector<string> & getBizPermissionNameList() const { DARABONBA_PTR_GET_CONST(bizPermissionNameList_, vector<string>) };
      inline vector<string> getBizPermissionNameList() { DARABONBA_PTR_GET(bizPermissionNameList_, vector<string>) };
      inline BizRoles& setBizPermissionNameList(const vector<string> & bizPermissionNameList) { DARABONBA_PTR_SET_VALUE(bizPermissionNameList_, bizPermissionNameList) };
      inline BizRoles& setBizPermissionNameList(vector<string> && bizPermissionNameList) { DARABONBA_PTR_SET_RVALUE(bizPermissionNameList_, bizPermissionNameList) };


      // bizRoleCode Field Functions 
      bool hasBizRoleCode() const { return this->bizRoleCode_ != nullptr;};
      void deleteBizRoleCode() { this->bizRoleCode_ = nullptr;};
      inline string getBizRoleCode() const { DARABONBA_PTR_GET_DEFAULT(bizRoleCode_, "") };
      inline BizRoles& setBizRoleCode(string bizRoleCode) { DARABONBA_PTR_SET_VALUE(bizRoleCode_, bizRoleCode) };


      // bizRoleDesc Field Functions 
      bool hasBizRoleDesc() const { return this->bizRoleDesc_ != nullptr;};
      void deleteBizRoleDesc() { this->bizRoleDesc_ = nullptr;};
      inline string getBizRoleDesc() const { DARABONBA_PTR_GET_DEFAULT(bizRoleDesc_, "") };
      inline BizRoles& setBizRoleDesc(string bizRoleDesc) { DARABONBA_PTR_SET_VALUE(bizRoleDesc_, bizRoleDesc) };


      // bizRoleName Field Functions 
      bool hasBizRoleName() const { return this->bizRoleName_ != nullptr;};
      void deleteBizRoleName() { this->bizRoleName_ = nullptr;};
      inline string getBizRoleName() const { DARABONBA_PTR_GET_DEFAULT(bizRoleName_, "") };
      inline BizRoles& setBizRoleName(string bizRoleName) { DARABONBA_PTR_SET_VALUE(bizRoleName_, bizRoleName) };


      // grantedPkCount Field Functions 
      bool hasGrantedPkCount() const { return this->grantedPkCount_ != nullptr;};
      void deleteGrantedPkCount() { this->grantedPkCount_ = nullptr;};
      inline int32_t getGrantedPkCount() const { DARABONBA_PTR_GET_DEFAULT(grantedPkCount_, 0) };
      inline BizRoles& setGrantedPkCount(int32_t grantedPkCount) { DARABONBA_PTR_SET_VALUE(grantedPkCount_, grantedPkCount) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline BizRoles& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // srcType Field Functions 
      bool hasSrcType() const { return this->srcType_ != nullptr;};
      void deleteSrcType() { this->srcType_ = nullptr;};
      inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
      inline BizRoles& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


    protected:
      shared_ptr<int32_t> bizPermissionCount_ {};
      shared_ptr<vector<string>> bizPermissionNameList_ {};
      shared_ptr<string> bizRoleCode_ {};
      shared_ptr<string> bizRoleDesc_ {};
      shared_ptr<string> bizRoleName_ {};
      shared_ptr<int32_t> grantedPkCount_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> srcType_ {};
    };

    virtual bool empty() const override { return this->bizRoles_ == nullptr
        && this->code_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // bizRoles Field Functions 
    bool hasBizRoles() const { return this->bizRoles_ != nullptr;};
    void deleteBizRoles() { this->bizRoles_ = nullptr;};
    inline const vector<EnterpriseRoleQueryBizRoleByPageResponseBody::BizRoles> & getBizRoles() const { DARABONBA_PTR_GET_CONST(bizRoles_, vector<EnterpriseRoleQueryBizRoleByPageResponseBody::BizRoles>) };
    inline vector<EnterpriseRoleQueryBizRoleByPageResponseBody::BizRoles> getBizRoles() { DARABONBA_PTR_GET(bizRoles_, vector<EnterpriseRoleQueryBizRoleByPageResponseBody::BizRoles>) };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setBizRoles(const vector<EnterpriseRoleQueryBizRoleByPageResponseBody::BizRoles> & bizRoles) { DARABONBA_PTR_SET_VALUE(bizRoles_, bizRoles) };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setBizRoles(vector<EnterpriseRoleQueryBizRoleByPageResponseBody::BizRoles> && bizRoles) { DARABONBA_PTR_SET_RVALUE(bizRoles_, bizRoles) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline EnterpriseRoleQueryBizRoleByPageResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<vector<EnterpriseRoleQueryBizRoleByPageResponseBody::BizRoles>> bizRoles_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
