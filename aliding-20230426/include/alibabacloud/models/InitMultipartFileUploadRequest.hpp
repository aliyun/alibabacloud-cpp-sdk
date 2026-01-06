// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITMULTIPARTFILEUPLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InitMultipartFileUploadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitMultipartFileUploadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, InitMultipartFileUploadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    InitMultipartFileUploadRequest() = default ;
    InitMultipartFileUploadRequest(const InitMultipartFileUploadRequest &) = default ;
    InitMultipartFileUploadRequest(InitMultipartFileUploadRequest &&) = default ;
    InitMultipartFileUploadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitMultipartFileUploadRequest() = default ;
    InitMultipartFileUploadRequest& operator=(const InitMultipartFileUploadRequest &) = default ;
    InitMultipartFileUploadRequest& operator=(InitMultipartFileUploadRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(PreCheckParam, preCheckParam_);
        DARABONBA_PTR_TO_JSON(PreferRegion, preferRegion_);
        DARABONBA_PTR_TO_JSON(StorageDriver, storageDriver_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(PreCheckParam, preCheckParam_);
        DARABONBA_PTR_FROM_JSON(PreferRegion, preferRegion_);
        DARABONBA_PTR_FROM_JSON(StorageDriver, storageDriver_);
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
      class PreCheckParam : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreCheckParam& obj) { 
          DARABONBA_PTR_TO_JSON(Md5, md5_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(Size, size_);
        };
        friend void from_json(const Darabonba::Json& j, PreCheckParam& obj) { 
          DARABONBA_PTR_FROM_JSON(Md5, md5_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
        };
        PreCheckParam() = default ;
        PreCheckParam(const PreCheckParam &) = default ;
        PreCheckParam(PreCheckParam &&) = default ;
        PreCheckParam(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreCheckParam() = default ;
        PreCheckParam& operator=(const PreCheckParam &) = default ;
        PreCheckParam& operator=(PreCheckParam &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->md5_ == nullptr
        && this->name_ == nullptr && this->parentId_ == nullptr && this->size_ == nullptr; };
        // md5 Field Functions 
        bool hasMd5() const { return this->md5_ != nullptr;};
        void deleteMd5() { this->md5_ = nullptr;};
        inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
        inline PreCheckParam& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PreCheckParam& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline PreCheckParam& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline PreCheckParam& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      protected:
        shared_ptr<string> md5_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> parentId_ {};
        shared_ptr<int64_t> size_ {};
      };

      virtual bool empty() const override { return this->preCheckParam_ == nullptr
        && this->preferRegion_ == nullptr && this->storageDriver_ == nullptr; };
      // preCheckParam Field Functions 
      bool hasPreCheckParam() const { return this->preCheckParam_ != nullptr;};
      void deletePreCheckParam() { this->preCheckParam_ = nullptr;};
      inline const Option::PreCheckParam & getPreCheckParam() const { DARABONBA_PTR_GET_CONST(preCheckParam_, Option::PreCheckParam) };
      inline Option::PreCheckParam getPreCheckParam() { DARABONBA_PTR_GET(preCheckParam_, Option::PreCheckParam) };
      inline Option& setPreCheckParam(const Option::PreCheckParam & preCheckParam) { DARABONBA_PTR_SET_VALUE(preCheckParam_, preCheckParam) };
      inline Option& setPreCheckParam(Option::PreCheckParam && preCheckParam) { DARABONBA_PTR_SET_RVALUE(preCheckParam_, preCheckParam) };


      // preferRegion Field Functions 
      bool hasPreferRegion() const { return this->preferRegion_ != nullptr;};
      void deletePreferRegion() { this->preferRegion_ = nullptr;};
      inline string getPreferRegion() const { DARABONBA_PTR_GET_DEFAULT(preferRegion_, "") };
      inline Option& setPreferRegion(string preferRegion) { DARABONBA_PTR_SET_VALUE(preferRegion_, preferRegion) };


      // storageDriver Field Functions 
      bool hasStorageDriver() const { return this->storageDriver_ != nullptr;};
      void deleteStorageDriver() { this->storageDriver_ = nullptr;};
      inline string getStorageDriver() const { DARABONBA_PTR_GET_DEFAULT(storageDriver_, "") };
      inline Option& setStorageDriver(string storageDriver) { DARABONBA_PTR_SET_VALUE(storageDriver_, storageDriver) };


    protected:
      shared_ptr<Option::PreCheckParam> preCheckParam_ {};
      shared_ptr<string> preferRegion_ {};
      shared_ptr<string> storageDriver_ {};
    };

    virtual bool empty() const override { return this->option_ == nullptr
        && this->parentDentryUuid_ == nullptr && this->tenantContext_ == nullptr; };
    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const InitMultipartFileUploadRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, InitMultipartFileUploadRequest::Option) };
    inline InitMultipartFileUploadRequest::Option getOption() { DARABONBA_PTR_GET(option_, InitMultipartFileUploadRequest::Option) };
    inline InitMultipartFileUploadRequest& setOption(const InitMultipartFileUploadRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline InitMultipartFileUploadRequest& setOption(InitMultipartFileUploadRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parentDentryUuid Field Functions 
    bool hasParentDentryUuid() const { return this->parentDentryUuid_ != nullptr;};
    void deleteParentDentryUuid() { this->parentDentryUuid_ = nullptr;};
    inline string getParentDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(parentDentryUuid_, "") };
    inline InitMultipartFileUploadRequest& setParentDentryUuid(string parentDentryUuid) { DARABONBA_PTR_SET_VALUE(parentDentryUuid_, parentDentryUuid) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const InitMultipartFileUploadRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, InitMultipartFileUploadRequest::TenantContext) };
    inline InitMultipartFileUploadRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, InitMultipartFileUploadRequest::TenantContext) };
    inline InitMultipartFileUploadRequest& setTenantContext(const InitMultipartFileUploadRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline InitMultipartFileUploadRequest& setTenantContext(InitMultipartFileUploadRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<InitMultipartFileUploadRequest::Option> option_ {};
    shared_ptr<string> parentDentryUuid_ {};
    shared_ptr<InitMultipartFileUploadRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
