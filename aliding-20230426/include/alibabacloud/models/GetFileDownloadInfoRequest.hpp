// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDOWNLOADINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDOWNLOADINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFileDownloadInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDownloadInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDownloadInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetFileDownloadInfoRequest() = default ;
    GetFileDownloadInfoRequest(const GetFileDownloadInfoRequest &) = default ;
    GetFileDownloadInfoRequest(GetFileDownloadInfoRequest &&) = default ;
    GetFileDownloadInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDownloadInfoRequest() = default ;
    GetFileDownloadInfoRequest& operator=(const GetFileDownloadInfoRequest &) = default ;
    GetFileDownloadInfoRequest& operator=(GetFileDownloadInfoRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(PreferIntranet, preferIntranet_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
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
      virtual bool empty() const override { return this->preferIntranet_ == nullptr
        && this->version_ == nullptr; };
      // preferIntranet Field Functions 
      bool hasPreferIntranet() const { return this->preferIntranet_ != nullptr;};
      void deletePreferIntranet() { this->preferIntranet_ = nullptr;};
      inline bool getPreferIntranet() const { DARABONBA_PTR_GET_DEFAULT(preferIntranet_, false) };
      inline Option& setPreferIntranet(bool preferIntranet) { DARABONBA_PTR_SET_VALUE(preferIntranet_, preferIntranet) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Option& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<bool> preferIntranet_ {};
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->dentryId_ == nullptr
        && this->option_ == nullptr && this->spaceId_ == nullptr && this->tenantContext_ == nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string getDentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline GetFileDownloadInfoRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const GetFileDownloadInfoRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, GetFileDownloadInfoRequest::Option) };
    inline GetFileDownloadInfoRequest::Option getOption() { DARABONBA_PTR_GET(option_, GetFileDownloadInfoRequest::Option) };
    inline GetFileDownloadInfoRequest& setOption(const GetFileDownloadInfoRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline GetFileDownloadInfoRequest& setOption(GetFileDownloadInfoRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline GetFileDownloadInfoRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetFileDownloadInfoRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetFileDownloadInfoRequest::TenantContext) };
    inline GetFileDownloadInfoRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, GetFileDownloadInfoRequest::TenantContext) };
    inline GetFileDownloadInfoRequest& setTenantContext(const GetFileDownloadInfoRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetFileDownloadInfoRequest& setTenantContext(GetFileDownloadInfoRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<string> dentryId_ {};
    shared_ptr<GetFileDownloadInfoRequest::Option> option_ {};
    shared_ptr<string> spaceId_ {};
    shared_ptr<GetFileDownloadInfoRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
