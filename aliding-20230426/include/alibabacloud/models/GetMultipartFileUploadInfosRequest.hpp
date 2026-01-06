// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPARTFILEUPLOADINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class Option : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Option& obj) { 
        DARABONBA_PTR_TO_JSON(PreferIntranet, preferIntranet_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(PreferIntranet, preferIntranet_);
      };
      Option() = default ;
      Option(const Option &) = default ;
      Option(Option &&) = default ;
      Option(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Option() = default ;
      Option& operator=(const Option &) = default ;
      Option& operator=(Option &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->preferIntranet_ == nullptr; };
      // preferIntranet Field Functions 
      bool hasPreferIntranet() const { return this->preferIntranet_ != nullptr;};
      void deletePreferIntranet() { this->preferIntranet_ = nullptr;};
      inline bool getPreferIntranet() const { DARABONBA_PTR_GET_DEFAULT(preferIntranet_, false) };
      inline Option& setPreferIntranet(bool preferIntranet) { DARABONBA_PTR_SET_VALUE(preferIntranet_, preferIntranet) };


    protected:
      shared_ptr<bool> preferIntranet_ {};
    };

    virtual bool empty() const override { return this->option_ == nullptr
        && this->partNumbers_ == nullptr && this->tenantContext_ == nullptr && this->uploadKey_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetMultipartFileUploadInfosRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, GetMultipartFileUploadInfosRequest::Option) };
    inline GetMultipartFileUploadInfosRequest::Option getOption() { DARABONBA_PTR_GET(option_, GetMultipartFileUploadInfosRequest::Option) };
    inline GetMultipartFileUploadInfosRequest& setOption(const GetMultipartFileUploadInfosRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetMultipartFileUploadInfosRequest& setOption(GetMultipartFileUploadInfosRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // partNumbers Field Functions 
    bool hasPartNumbers() const { return this->partNumbers_ != nullptr;};
    void deletePartNumbers() { this->partNumbers_ = nullptr;};
    inline const vector<int32_t> & getPartNumbers() const { DARABONBA_PTR_GET_CONST(partNumbers_, vector<int32_t>) };
    inline vector<int32_t> getPartNumbers() { DARABONBA_PTR_GET(partNumbers_, vector<int32_t>) };
    inline GetMultipartFileUploadInfosRequest& setPartNumbers(const vector<int32_t> & partNumbers) { DARABONBA_PTR_SET_VALUE(partNumbers_, partNumbers) };
    inline GetMultipartFileUploadInfosRequest& setPartNumbers(vector<int32_t> && partNumbers) { DARABONBA_PTR_SET_RVALUE(partNumbers_, partNumbers) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetMultipartFileUploadInfosRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetMultipartFileUploadInfosRequest::TenantContext) };
    inline GetMultipartFileUploadInfosRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetMultipartFileUploadInfosRequest::TenantContext) };
    inline GetMultipartFileUploadInfosRequest& setTenantContext(const GetMultipartFileUploadInfosRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetMultipartFileUploadInfosRequest& setTenantContext(GetMultipartFileUploadInfosRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // uploadKey Field Functions 
    bool hasUploadKey() const { return this->uploadKey_ != nullptr;};
    void deleteUploadKey() { this->uploadKey_ = nullptr;};
    inline string getUploadKey() const { DARABONBA_PTR_GET_DEFAULT(uploadKey_, "") };
    inline GetMultipartFileUploadInfosRequest& setUploadKey(string uploadKey) { DARABONBA_PTR_SET_VALUE(uploadKey_, uploadKey) };


  protected:
    shared_ptr<GetMultipartFileUploadInfosRequest::Option> option_ {};
    shared_ptr<vector<int32_t>> partNumbers_ {};
    shared_ptr<GetMultipartFileUploadInfosRequest::TenantContext> tenantContext_ {};
    shared_ptr<string> uploadKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
