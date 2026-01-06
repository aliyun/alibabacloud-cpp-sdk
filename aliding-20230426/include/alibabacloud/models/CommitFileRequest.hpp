// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMMITFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMMITFILEREQUEST_HPP_
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
  class CommitFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CommitFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UploadKey, uploadKey_);
    };
    friend void from_json(const Darabonba::Json& j, CommitFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(ParentDentryUuid, parentDentryUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UploadKey, uploadKey_);
    };
    CommitFileRequest() = default ;
    CommitFileRequest(const CommitFileRequest &) = default ;
    CommitFileRequest(CommitFileRequest &&) = default ;
    CommitFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CommitFileRequest() = default ;
    CommitFileRequest& operator=(const CommitFileRequest &) = default ;
    CommitFileRequest& operator=(CommitFileRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(AppProperties, appProperties_);
        DARABONBA_PTR_TO_JSON(ConflictStrategy, conflictStrategy_);
        DARABONBA_PTR_TO_JSON(ConvertToOnlineDoc, convertToOnlineDoc_);
        DARABONBA_PTR_TO_JSON(ConvertToOnlineDocTargetDocumentType, convertToOnlineDocTargetDocumentType_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Option& obj) { 
        DARABONBA_PTR_FROM_JSON(AppProperties, appProperties_);
        DARABONBA_PTR_FROM_JSON(ConflictStrategy, conflictStrategy_);
        DARABONBA_PTR_FROM_JSON(ConvertToOnlineDoc, convertToOnlineDoc_);
        DARABONBA_PTR_FROM_JSON(ConvertToOnlineDocTargetDocumentType, convertToOnlineDocTargetDocumentType_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
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
      class AppProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppProperties& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(Visibility, visibility_);
        };
        friend void from_json(const Darabonba::Json& j, AppProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
        };
        AppProperties() = default ;
        AppProperties(const AppProperties &) = default ;
        AppProperties(AppProperties &&) = default ;
        AppProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppProperties() = default ;
        AppProperties& operator=(const AppProperties &) = default ;
        AppProperties& operator=(AppProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr && this->visibility_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AppProperties& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline AppProperties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // visibility Field Functions 
        bool hasVisibility() const { return this->visibility_ != nullptr;};
        void deleteVisibility() { this->visibility_ = nullptr;};
        inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
        inline AppProperties& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
        shared_ptr<string> visibility_ {};
      };

      virtual bool empty() const override { return this->appProperties_ == nullptr
        && this->conflictStrategy_ == nullptr && this->convertToOnlineDoc_ == nullptr && this->convertToOnlineDocTargetDocumentType_ == nullptr && this->size_ == nullptr; };
      // appProperties Field Functions 
      bool hasAppProperties() const { return this->appProperties_ != nullptr;};
      void deleteAppProperties() { this->appProperties_ = nullptr;};
      inline const vector<Option::AppProperties> & getAppProperties() const { DARABONBA_PTR_GET_CONST(appProperties_, vector<Option::AppProperties>) };
      inline vector<Option::AppProperties> getAppProperties() { DARABONBA_PTR_GET(appProperties_, vector<Option::AppProperties>) };
      inline Option& setAppProperties(const vector<Option::AppProperties> & appProperties) { DARABONBA_PTR_SET_VALUE(appProperties_, appProperties) };
      inline Option& setAppProperties(vector<Option::AppProperties> && appProperties) { DARABONBA_PTR_SET_RVALUE(appProperties_, appProperties) };


      // conflictStrategy Field Functions 
      bool hasConflictStrategy() const { return this->conflictStrategy_ != nullptr;};
      void deleteConflictStrategy() { this->conflictStrategy_ = nullptr;};
      inline string getConflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(conflictStrategy_, "") };
      inline Option& setConflictStrategy(string conflictStrategy) { DARABONBA_PTR_SET_VALUE(conflictStrategy_, conflictStrategy) };


      // convertToOnlineDoc Field Functions 
      bool hasConvertToOnlineDoc() const { return this->convertToOnlineDoc_ != nullptr;};
      void deleteConvertToOnlineDoc() { this->convertToOnlineDoc_ = nullptr;};
      inline bool getConvertToOnlineDoc() const { DARABONBA_PTR_GET_DEFAULT(convertToOnlineDoc_, false) };
      inline Option& setConvertToOnlineDoc(bool convertToOnlineDoc) { DARABONBA_PTR_SET_VALUE(convertToOnlineDoc_, convertToOnlineDoc) };


      // convertToOnlineDocTargetDocumentType Field Functions 
      bool hasConvertToOnlineDocTargetDocumentType() const { return this->convertToOnlineDocTargetDocumentType_ != nullptr;};
      void deleteConvertToOnlineDocTargetDocumentType() { this->convertToOnlineDocTargetDocumentType_ = nullptr;};
      inline string getConvertToOnlineDocTargetDocumentType() const { DARABONBA_PTR_GET_DEFAULT(convertToOnlineDocTargetDocumentType_, "") };
      inline Option& setConvertToOnlineDocTargetDocumentType(string convertToOnlineDocTargetDocumentType) { DARABONBA_PTR_SET_VALUE(convertToOnlineDocTargetDocumentType_, convertToOnlineDocTargetDocumentType) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Option& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      shared_ptr<vector<Option::AppProperties>> appProperties_ {};
      shared_ptr<string> conflictStrategy_ {};
      shared_ptr<bool> convertToOnlineDoc_ {};
      shared_ptr<string> convertToOnlineDocTargetDocumentType_ {};
      shared_ptr<int64_t> size_ {};
    };

    virtual bool empty() const override { return this->name_ == nullptr
        && this->option_ == nullptr && this->parentDentryUuid_ == nullptr && this->tenantContext_ == nullptr && this->uploadKey_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CommitFileRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline const CommitFileRequest::Option & getOption() const { DARABONBA_PTR_GET_CONST(option_, CommitFileRequest::Option) };
    inline CommitFileRequest::Option getOption() { DARABONBA_PTR_GET(option_, CommitFileRequest::Option) };
    inline CommitFileRequest& setOption(const CommitFileRequest::Option & option) { DARABONBA_PTR_SET_VALUE(option_, option) };
    inline CommitFileRequest& setOption(CommitFileRequest::Option && option) { DARABONBA_PTR_SET_RVALUE(option_, option) };


    // parentDentryUuid Field Functions 
    bool hasParentDentryUuid() const { return this->parentDentryUuid_ != nullptr;};
    void deleteParentDentryUuid() { this->parentDentryUuid_ = nullptr;};
    inline string getParentDentryUuid() const { DARABONBA_PTR_GET_DEFAULT(parentDentryUuid_, "") };
    inline CommitFileRequest& setParentDentryUuid(string parentDentryUuid) { DARABONBA_PTR_SET_VALUE(parentDentryUuid_, parentDentryUuid) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CommitFileRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CommitFileRequest::TenantContext) };
    inline CommitFileRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CommitFileRequest::TenantContext) };
    inline CommitFileRequest& setTenantContext(const CommitFileRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CommitFileRequest& setTenantContext(CommitFileRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // uploadKey Field Functions 
    bool hasUploadKey() const { return this->uploadKey_ != nullptr;};
    void deleteUploadKey() { this->uploadKey_ = nullptr;};
    inline string getUploadKey() const { DARABONBA_PTR_GET_DEFAULT(uploadKey_, "") };
    inline CommitFileRequest& setUploadKey(string uploadKey) { DARABONBA_PTR_SET_VALUE(uploadKey_, uploadKey) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<CommitFileRequest::Option> option_ {};
    shared_ptr<string> parentDentryUuid_ {};
    shared_ptr<CommitFileRequest::TenantContext> tenantContext_ {};
    shared_ptr<string> uploadKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
