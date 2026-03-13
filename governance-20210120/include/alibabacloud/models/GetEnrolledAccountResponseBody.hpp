// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENROLLEDACCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetEnrolledAccountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnrolledAccountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Initialized, initialized_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(MasterAccountUid, masterAccountUid_);
      DARABONBA_PTR_TO_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnrolledAccountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Initialized, initialized_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(MasterAccountUid, masterAccountUid_);
      DARABONBA_PTR_FROM_JSON(PayerAccountUid, payerAccountUid_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetEnrolledAccountResponseBody() = default ;
    GetEnrolledAccountResponseBody(const GetEnrolledAccountResponseBody &) = default ;
    GetEnrolledAccountResponseBody(GetEnrolledAccountResponseBody &&) = default ;
    GetEnrolledAccountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnrolledAccountResponseBody() = default ;
    GetEnrolledAccountResponseBody& operator=(const GetEnrolledAccountResponseBody &) = default ;
    GetEnrolledAccountResponseBody& operator=(GetEnrolledAccountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Progress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Progress& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Progress& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Progress() = default ;
      Progress(const Progress &) = default ;
      Progress(Progress &&) = default ;
      Progress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Progress() = default ;
      Progress& operator=(const Progress &) = default ;
      Progress& operator=(Progress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->status_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Progress& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Progress& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the baseline item.
      shared_ptr<string> name_ {};
      // The status of applying the baseline to the account. Valid values:
      // 
      // *   Pending: The baseline is pending to be applied to the account.
      // *   Running: The baseline is being applied to the account.
      // *   Finished: : The baseline is applied to the account.
      // *   Failed: : The baseline fails to be applied to the account.
      shared_ptr<string> status_ {};
    };

    class Inputs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Inputs& obj) { 
        DARABONBA_PTR_TO_JSON(AccountNamePrefix, accountNamePrefix_);
        DARABONBA_PTR_TO_JSON(AccountUid, accountUid_);
        DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(FolderId, folderId_);
        DARABONBA_PTR_TO_JSON(PayerAccountUid, payerAccountUid_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Inputs& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountNamePrefix, accountNamePrefix_);
        DARABONBA_PTR_FROM_JSON(AccountUid, accountUid_);
        DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
        DARABONBA_PTR_FROM_JSON(PayerAccountUid, payerAccountUid_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      Inputs() = default ;
      Inputs(const Inputs &) = default ;
      Inputs(Inputs &&) = default ;
      Inputs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Inputs() = default ;
      Inputs& operator=(const Inputs &) = default ;
      Inputs& operator=(Inputs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class BaselineItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaselineItems& obj) { 
          DARABONBA_PTR_TO_JSON(Config, config_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Skip, skip_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, BaselineItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Config, config_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Skip, skip_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        BaselineItems() = default ;
        BaselineItems(const BaselineItems &) = default ;
        BaselineItems(BaselineItems &&) = default ;
        BaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaselineItems() = default ;
        BaselineItems& operator=(const BaselineItems &) = default ;
        BaselineItems& operator=(BaselineItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->skip_ == nullptr && this->version_ == nullptr; };
        // config Field Functions 
        bool hasConfig() const { return this->config_ != nullptr;};
        void deleteConfig() { this->config_ = nullptr;};
        inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
        inline BaselineItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // skip Field Functions 
        bool hasSkip() const { return this->skip_ != nullptr;};
        void deleteSkip() { this->skip_ = nullptr;};
        inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
        inline BaselineItems& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline BaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The configurations of the baseline item.
        shared_ptr<string> config_ {};
        // The name of the baseline item.
        shared_ptr<string> name_ {};
        // Indicates whether baseline item is skipped. Valid values:
        // 
        // *   false
        // *   true
        shared_ptr<bool> skip_ {};
        // The version of the baseline item.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->accountNamePrefix_ == nullptr
        && this->accountUid_ == nullptr && this->baselineItems_ == nullptr && this->displayName_ == nullptr && this->folderId_ == nullptr && this->payerAccountUid_ == nullptr
        && this->tag_ == nullptr; };
      // accountNamePrefix Field Functions 
      bool hasAccountNamePrefix() const { return this->accountNamePrefix_ != nullptr;};
      void deleteAccountNamePrefix() { this->accountNamePrefix_ = nullptr;};
      inline string getAccountNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(accountNamePrefix_, "") };
      inline Inputs& setAccountNamePrefix(string accountNamePrefix) { DARABONBA_PTR_SET_VALUE(accountNamePrefix_, accountNamePrefix) };


      // accountUid Field Functions 
      bool hasAccountUid() const { return this->accountUid_ != nullptr;};
      void deleteAccountUid() { this->accountUid_ = nullptr;};
      inline int64_t getAccountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
      inline Inputs& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


      // baselineItems Field Functions 
      bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
      void deleteBaselineItems() { this->baselineItems_ = nullptr;};
      inline const vector<Inputs::BaselineItems> & getBaselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<Inputs::BaselineItems>) };
      inline vector<Inputs::BaselineItems> getBaselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<Inputs::BaselineItems>) };
      inline Inputs& setBaselineItems(const vector<Inputs::BaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
      inline Inputs& setBaselineItems(vector<Inputs::BaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Inputs& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // folderId Field Functions 
      bool hasFolderId() const { return this->folderId_ != nullptr;};
      void deleteFolderId() { this->folderId_ = nullptr;};
      inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
      inline Inputs& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


      // payerAccountUid Field Functions 
      bool hasPayerAccountUid() const { return this->payerAccountUid_ != nullptr;};
      void deletePayerAccountUid() { this->payerAccountUid_ = nullptr;};
      inline int64_t getPayerAccountUid() const { DARABONBA_PTR_GET_DEFAULT(payerAccountUid_, 0L) };
      inline Inputs& setPayerAccountUid(int64_t payerAccountUid) { DARABONBA_PTR_SET_VALUE(payerAccountUid_, payerAccountUid) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Inputs::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Inputs::Tag>) };
      inline vector<Inputs::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Inputs::Tag>) };
      inline Inputs& setTag(const vector<Inputs::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Inputs& setTag(vector<Inputs::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      // The prefix of the account name.
      shared_ptr<string> accountNamePrefix_ {};
      // The account ID.
      shared_ptr<int64_t> accountUid_ {};
      // The baseline items.
      shared_ptr<vector<Inputs::BaselineItems>> baselineItems_ {};
      // The display name of the account.
      shared_ptr<string> displayName_ {};
      // The ID of the parent folder.
      shared_ptr<string> folderId_ {};
      // The ID of the settlement account.
      shared_ptr<int64_t> payerAccountUid_ {};
      // The tag.
      shared_ptr<vector<Inputs::Tag>> tag_ {};
    };

    class ErrorInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ErrorInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Recommend, recommend_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      };
      friend void from_json(const Darabonba::Json& j, ErrorInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Recommend, recommend_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      };
      ErrorInfo() = default ;
      ErrorInfo(const ErrorInfo &) = default ;
      ErrorInfo(ErrorInfo &&) = default ;
      ErrorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ErrorInfo() = default ;
      ErrorInfo& operator=(const ErrorInfo &) = default ;
      ErrorInfo& operator=(ErrorInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->recommend_ == nullptr && this->requestId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ErrorInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline ErrorInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // recommend Field Functions 
      bool hasRecommend() const { return this->recommend_ != nullptr;};
      void deleteRecommend() { this->recommend_ = nullptr;};
      inline string getRecommend() const { DARABONBA_PTR_GET_DEFAULT(recommend_, "") };
      inline ErrorInfo& setRecommend(string recommend) { DARABONBA_PTR_SET_VALUE(recommend_, recommend) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline ErrorInfo& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    protected:
      // The error code.
      shared_ptr<string> code_ {};
      // The error message.
      shared_ptr<string> message_ {};
      // The recommended solution.
      shared_ptr<string> recommend_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
    };

    class BaselineItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineItems& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Skip, skip_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, BaselineItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Skip, skip_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      BaselineItems() = default ;
      BaselineItems(const BaselineItems &) = default ;
      BaselineItems(BaselineItems &&) = default ;
      BaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineItems() = default ;
      BaselineItems& operator=(const BaselineItems &) = default ;
      BaselineItems& operator=(BaselineItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr && this->skip_ == nullptr && this->version_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline BaselineItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // skip Field Functions 
      bool hasSkip() const { return this->skip_ != nullptr;};
      void deleteSkip() { this->skip_ = nullptr;};
      inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
      inline BaselineItems& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline BaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The configuration of the baseline item.
      shared_ptr<string> config_ {};
      // The name of the baseline item.
      shared_ptr<string> name_ {};
      // Indicates whether baseline item is skipped. Valid values:
      // 
      // *   false
      // *   true
      shared_ptr<bool> skip_ {};
      // The version of the baseline item.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->accountUid_ == nullptr
        && this->baselineId_ == nullptr && this->baselineItems_ == nullptr && this->createTime_ == nullptr && this->displayName_ == nullptr && this->errorInfo_ == nullptr
        && this->folderId_ == nullptr && this->initialized_ == nullptr && this->inputs_ == nullptr && this->masterAccountUid_ == nullptr && this->payerAccountUid_ == nullptr
        && this->progress_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
    // accountUid Field Functions 
    bool hasAccountUid() const { return this->accountUid_ != nullptr;};
    void deleteAccountUid() { this->accountUid_ = nullptr;};
    inline int64_t getAccountUid() const { DARABONBA_PTR_GET_DEFAULT(accountUid_, 0L) };
    inline GetEnrolledAccountResponseBody& setAccountUid(int64_t accountUid) { DARABONBA_PTR_SET_VALUE(accountUid_, accountUid) };


    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline string getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, "") };
    inline GetEnrolledAccountResponseBody& setBaselineId(string baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<GetEnrolledAccountResponseBody::BaselineItems> & getBaselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<GetEnrolledAccountResponseBody::BaselineItems>) };
    inline vector<GetEnrolledAccountResponseBody::BaselineItems> getBaselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<GetEnrolledAccountResponseBody::BaselineItems>) };
    inline GetEnrolledAccountResponseBody& setBaselineItems(const vector<GetEnrolledAccountResponseBody::BaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline GetEnrolledAccountResponseBody& setBaselineItems(vector<GetEnrolledAccountResponseBody::BaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetEnrolledAccountResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetEnrolledAccountResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline const GetEnrolledAccountResponseBody::ErrorInfo & getErrorInfo() const { DARABONBA_PTR_GET_CONST(errorInfo_, GetEnrolledAccountResponseBody::ErrorInfo) };
    inline GetEnrolledAccountResponseBody::ErrorInfo getErrorInfo() { DARABONBA_PTR_GET(errorInfo_, GetEnrolledAccountResponseBody::ErrorInfo) };
    inline GetEnrolledAccountResponseBody& setErrorInfo(const GetEnrolledAccountResponseBody::ErrorInfo & errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };
    inline GetEnrolledAccountResponseBody& setErrorInfo(GetEnrolledAccountResponseBody::ErrorInfo && errorInfo) { DARABONBA_PTR_SET_RVALUE(errorInfo_, errorInfo) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetEnrolledAccountResponseBody& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // initialized Field Functions 
    bool hasInitialized() const { return this->initialized_ != nullptr;};
    void deleteInitialized() { this->initialized_ = nullptr;};
    inline bool getInitialized() const { DARABONBA_PTR_GET_DEFAULT(initialized_, false) };
    inline GetEnrolledAccountResponseBody& setInitialized(bool initialized) { DARABONBA_PTR_SET_VALUE(initialized_, initialized) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const GetEnrolledAccountResponseBody::Inputs & getInputs() const { DARABONBA_PTR_GET_CONST(inputs_, GetEnrolledAccountResponseBody::Inputs) };
    inline GetEnrolledAccountResponseBody::Inputs getInputs() { DARABONBA_PTR_GET(inputs_, GetEnrolledAccountResponseBody::Inputs) };
    inline GetEnrolledAccountResponseBody& setInputs(const GetEnrolledAccountResponseBody::Inputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline GetEnrolledAccountResponseBody& setInputs(GetEnrolledAccountResponseBody::Inputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // masterAccountUid Field Functions 
    bool hasMasterAccountUid() const { return this->masterAccountUid_ != nullptr;};
    void deleteMasterAccountUid() { this->masterAccountUid_ = nullptr;};
    inline int64_t getMasterAccountUid() const { DARABONBA_PTR_GET_DEFAULT(masterAccountUid_, 0L) };
    inline GetEnrolledAccountResponseBody& setMasterAccountUid(int64_t masterAccountUid) { DARABONBA_PTR_SET_VALUE(masterAccountUid_, masterAccountUid) };


    // payerAccountUid Field Functions 
    bool hasPayerAccountUid() const { return this->payerAccountUid_ != nullptr;};
    void deletePayerAccountUid() { this->payerAccountUid_ = nullptr;};
    inline int64_t getPayerAccountUid() const { DARABONBA_PTR_GET_DEFAULT(payerAccountUid_, 0L) };
    inline GetEnrolledAccountResponseBody& setPayerAccountUid(int64_t payerAccountUid) { DARABONBA_PTR_SET_VALUE(payerAccountUid_, payerAccountUid) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline const vector<GetEnrolledAccountResponseBody::Progress> & getProgress() const { DARABONBA_PTR_GET_CONST(progress_, vector<GetEnrolledAccountResponseBody::Progress>) };
    inline vector<GetEnrolledAccountResponseBody::Progress> getProgress() { DARABONBA_PTR_GET(progress_, vector<GetEnrolledAccountResponseBody::Progress>) };
    inline GetEnrolledAccountResponseBody& setProgress(const vector<GetEnrolledAccountResponseBody::Progress> & progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };
    inline GetEnrolledAccountResponseBody& setProgress(vector<GetEnrolledAccountResponseBody::Progress> && progress) { DARABONBA_PTR_SET_RVALUE(progress_, progress) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEnrolledAccountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEnrolledAccountResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetEnrolledAccountResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The account ID.
    shared_ptr<int64_t> accountUid_ {};
    // The ID of the baseline that is implemented.
    shared_ptr<string> baselineId_ {};
    // The array that contains baseline items.
    shared_ptr<vector<GetEnrolledAccountResponseBody::BaselineItems>> baselineItems_ {};
    // The time when the account was created.
    shared_ptr<string> createTime_ {};
    // The display name of the account.
    shared_ptr<string> displayName_ {};
    // The error message.
    // 
    // >  This parameter is returned if the value of `Status` is `Failed` or `ScheduleFailed`.
    shared_ptr<GetEnrolledAccountResponseBody::ErrorInfo> errorInfo_ {};
    // The ID of the parent folder.
    shared_ptr<string> folderId_ {};
    // Indicates whether the initialization is complete. Valid values:
    // 
    // *   false
    // *   true
    shared_ptr<bool> initialized_ {};
    // Input parameters used to create an account.
    shared_ptr<GetEnrolledAccountResponseBody::Inputs> inputs_ {};
    // The ID of the management account of the resource directory to which the account belongs.
    shared_ptr<int64_t> masterAccountUid_ {};
    // The ID of the settlement account.
    shared_ptr<int64_t> payerAccountUid_ {};
    // The progress of the applying the baseline to the account.
    shared_ptr<vector<GetEnrolledAccountResponseBody::Progress>> progress_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The status of the account. Valid values:
    // 
    // *   Pending: The account is pending to be created.
    // *   Running: The account is being created.
    // *   Finished: The account is created.
    // *   Failed: The account fails to be created.
    // *   Scheduling: The account is being scheduled.
    // *   ScheduleFailed: The account fails to be scheduled.
    shared_ptr<string> status_ {};
    // The update time.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
