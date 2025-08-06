// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMultipartFileUploadInfosRequestOption.hpp>
#include <vector>
#include <alibabacloud/models/GetMultipartFileUploadInfosRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMultipartFileUploadInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipartFileUploadInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(PartNumbers, partNumbers_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UploadKey, uploadKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipartFileUploadInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(PartNumbers, partNumbers_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UploadKey, uploadKey_);
    };
    GetMultipartFileUploadInfosRequest() = default ;
    GetMultipartFileUploadInfosRequest(const GetMultipartFileUploadInfosRequest &) = default ;
    GetMultipartFileUploadInfosRequest(GetMultipartFileUploadInfosRequest &&) = default ;
    GetMultipartFileUploadInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipartFileUploadInfosRequest() = default ;
    GetMultipartFileUploadInfosRequest& operator=(const GetMultipartFileUploadInfosRequest &) = default ;
    GetMultipartFileUploadInfosRequest& operator=(GetMultipartFileUploadInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->option_ != nullptr
        && this->partNumbers_ != nullptr && this->tenantContext_ != nullptr && this->uploadKey_ != nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetMultipartFileUploadInfosRequestOption & option() const { DARABONBA_PTR_GET_CONST(option_, GetMultipartFileUploadInfosRequestOption) };
    inline GetMultipartFileUploadInfosRequestOption option() { DARABONBA_PTR_GET(option_, GetMultipartFileUploadInfosRequestOption) };
    inline GetMultipartFileUploadInfosRequest& setOption(const GetMultipartFileUploadInfosRequestOption & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetMultipartFileUploadInfosRequest& setOption(GetMultipartFileUploadInfosRequestOption && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // partNumbers Field Functions 
    bool hasPartNumbers() const { return this->partNumbers_ != nullptr;};
    void deletePartNumbers() { this->partNumbers_ = nullptr;};
    inline const vector<int32_t> & partNumbers() const { DARABONBA_PTR_GET_CONST(partNumbers_, vector<int32_t>) };
    inline vector<int32_t> partNumbers() { DARABONBA_PTR_GET(partNumbers_, vector<int32_t>) };
    inline GetMultipartFileUploadInfosRequest& setPartNumbers(const vector<int32_t> & partNumbers) { DARABONBA_PTR_SET_VALUE(partNumbers_, partNumbers) };
    inline GetMultipartFileUploadInfosRequest& setPartNumbers(vector<int32_t> && partNumbers) { DARABONBA_PTR_SET_RVALUE(partNumbers_, partNumbers) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetMultipartFileUploadInfosRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetMultipartFileUploadInfosRequestTenantContext) };
    inline GetMultipartFileUploadInfosRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetMultipartFileUploadInfosRequestTenantContext) };
    inline GetMultipartFileUploadInfosRequest& setTenantContext(const GetMultipartFileUploadInfosRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetMultipartFileUploadInfosRequest& setTenantContext(GetMultipartFileUploadInfosRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // uploadKey Field Functions 
    bool hasUploadKey() const { return this->uploadKey_ != nullptr;};
    void deleteUploadKey() { this->uploadKey_ = nullptr;};
    inline string uploadKey() const { DARABONBA_PTR_GET_DEFAULT(uploadKey_, "") };
    inline GetMultipartFileUploadInfosRequest& setUploadKey(string uploadKey) { DARABONBA_PTR_SET_VALUE(uploadKey_, uploadKey) };


  protected:
    std::shared_ptr<GetMultipartFileUploadInfosRequestOption> option_ = nullptr;
    std::shared_ptr<vector<int32_t>> partNumbers_ = nullptr;
    std::shared_ptr<GetMultipartFileUploadInfosRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<string> uploadKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
