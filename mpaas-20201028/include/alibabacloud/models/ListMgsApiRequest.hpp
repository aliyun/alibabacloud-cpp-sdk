// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMGSAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMGSAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMgsApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMgsApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_TO_JSON(ApiType, apiType_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(NeedEncrypt, needEncrypt_);
      DARABONBA_PTR_TO_JSON(NeedEtag, needEtag_);
      DARABONBA_PTR_TO_JSON(NeedSign, needSign_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(OptFuzzy, optFuzzy_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SysId, sysId_);
      DARABONBA_PTR_TO_JSON(SysName, sysName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMgsApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiStatus, apiStatus_);
      DARABONBA_PTR_FROM_JSON(ApiType, apiType_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(NeedEncrypt, needEncrypt_);
      DARABONBA_PTR_FROM_JSON(NeedEtag, needEtag_);
      DARABONBA_PTR_FROM_JSON(NeedSign, needSign_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(OptFuzzy, optFuzzy_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SysId, sysId_);
      DARABONBA_PTR_FROM_JSON(SysName, sysName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListMgsApiRequest() = default ;
    ListMgsApiRequest(const ListMgsApiRequest &) = default ;
    ListMgsApiRequest(ListMgsApiRequest &&) = default ;
    ListMgsApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMgsApiRequest() = default ;
    ListMgsApiRequest& operator=(const ListMgsApiRequest &) = default ;
    ListMgsApiRequest& operator=(ListMgsApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiStatus_ != nullptr
        && this->apiType_ != nullptr && this->appId_ != nullptr && this->format_ != nullptr && this->host_ != nullptr && this->needEncrypt_ != nullptr
        && this->needEtag_ != nullptr && this->needSign_ != nullptr && this->operationType_ != nullptr && this->optFuzzy_ != nullptr && this->pageIndex_ != nullptr
        && this->pageSize_ != nullptr && this->sysId_ != nullptr && this->sysName_ != nullptr && this->tenantId_ != nullptr && this->workspaceId_ != nullptr; };
    // apiStatus Field Functions 
    bool hasApiStatus() const { return this->apiStatus_ != nullptr;};
    void deleteApiStatus() { this->apiStatus_ = nullptr;};
    inline string apiStatus() const { DARABONBA_PTR_GET_DEFAULT(apiStatus_, "") };
    inline ListMgsApiRequest& setApiStatus(string apiStatus) { DARABONBA_PTR_SET_VALUE(apiStatus_, apiStatus) };


    // apiType Field Functions 
    bool hasApiType() const { return this->apiType_ != nullptr;};
    void deleteApiType() { this->apiType_ = nullptr;};
    inline string apiType() const { DARABONBA_PTR_GET_DEFAULT(apiType_, "") };
    inline ListMgsApiRequest& setApiType(string apiType) { DARABONBA_PTR_SET_VALUE(apiType_, apiType) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListMgsApiRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline ListMgsApiRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListMgsApiRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // needEncrypt Field Functions 
    bool hasNeedEncrypt() const { return this->needEncrypt_ != nullptr;};
    void deleteNeedEncrypt() { this->needEncrypt_ = nullptr;};
    inline string needEncrypt() const { DARABONBA_PTR_GET_DEFAULT(needEncrypt_, "") };
    inline ListMgsApiRequest& setNeedEncrypt(string needEncrypt) { DARABONBA_PTR_SET_VALUE(needEncrypt_, needEncrypt) };


    // needEtag Field Functions 
    bool hasNeedEtag() const { return this->needEtag_ != nullptr;};
    void deleteNeedEtag() { this->needEtag_ = nullptr;};
    inline string needEtag() const { DARABONBA_PTR_GET_DEFAULT(needEtag_, "") };
    inline ListMgsApiRequest& setNeedEtag(string needEtag) { DARABONBA_PTR_SET_VALUE(needEtag_, needEtag) };


    // needSign Field Functions 
    bool hasNeedSign() const { return this->needSign_ != nullptr;};
    void deleteNeedSign() { this->needSign_ = nullptr;};
    inline string needSign() const { DARABONBA_PTR_GET_DEFAULT(needSign_, "") };
    inline ListMgsApiRequest& setNeedSign(string needSign) { DARABONBA_PTR_SET_VALUE(needSign_, needSign) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline ListMgsApiRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // optFuzzy Field Functions 
    bool hasOptFuzzy() const { return this->optFuzzy_ != nullptr;};
    void deleteOptFuzzy() { this->optFuzzy_ = nullptr;};
    inline string optFuzzy() const { DARABONBA_PTR_GET_DEFAULT(optFuzzy_, "") };
    inline ListMgsApiRequest& setOptFuzzy(string optFuzzy) { DARABONBA_PTR_SET_VALUE(optFuzzy_, optFuzzy) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline ListMgsApiRequest& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListMgsApiRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sysId Field Functions 
    bool hasSysId() const { return this->sysId_ != nullptr;};
    void deleteSysId() { this->sysId_ = nullptr;};
    inline int64_t sysId() const { DARABONBA_PTR_GET_DEFAULT(sysId_, 0L) };
    inline ListMgsApiRequest& setSysId(int64_t sysId) { DARABONBA_PTR_SET_VALUE(sysId_, sysId) };


    // sysName Field Functions 
    bool hasSysName() const { return this->sysName_ != nullptr;};
    void deleteSysName() { this->sysName_ = nullptr;};
    inline string sysName() const { DARABONBA_PTR_GET_DEFAULT(sysName_, "") };
    inline ListMgsApiRequest& setSysName(string sysName) { DARABONBA_PTR_SET_VALUE(sysName_, sysName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListMgsApiRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListMgsApiRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> apiStatus_ = nullptr;
    std::shared_ptr<string> apiType_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> needEncrypt_ = nullptr;
    std::shared_ptr<string> needEtag_ = nullptr;
    std::shared_ptr<string> needSign_ = nullptr;
    std::shared_ptr<string> operationType_ = nullptr;
    std::shared_ptr<string> optFuzzy_ = nullptr;
    std::shared_ptr<int64_t> pageIndex_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> sysId_ = nullptr;
    std::shared_ptr<string> sysName_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
