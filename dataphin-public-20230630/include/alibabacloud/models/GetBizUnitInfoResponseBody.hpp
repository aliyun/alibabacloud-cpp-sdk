// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBIZUNITINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizUnitInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizUnitInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizUnitInfo, bizUnitInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizUnitInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizUnitInfo, bizUnitInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBizUnitInfoResponseBody() = default ;
    GetBizUnitInfoResponseBody(const GetBizUnitInfoResponseBody &) = default ;
    GetBizUnitInfoResponseBody(GetBizUnitInfoResponseBody &&) = default ;
    GetBizUnitInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizUnitInfoResponseBody() = default ;
    GetBizUnitInfoResponseBody& operator=(const GetBizUnitInfoResponseBody &) = default ;
    GetBizUnitInfoResponseBody& operator=(GetBizUnitInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BizUnitInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BizUnitInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccountList, accountList_);
        DARABONBA_PTR_TO_JSON(BizObjectCount, bizObjectCount_);
        DARABONBA_PTR_TO_JSON(BizProcessCount, bizProcessCount_);
        DARABONBA_PTR_TO_JSON(BusinessLeaderList, businessLeaderList_);
        DARABONBA_PTR_TO_JSON(DataDomainCount, dataDomainCount_);
        DARABONBA_PTR_TO_JSON(DataLeaderList, dataLeaderList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(EnvList, envList_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Icon, icon_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_TO_JSON(LastModifierName, lastModifierName_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      };
      friend void from_json(const Darabonba::Json& j, BizUnitInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountList, accountList_);
        DARABONBA_PTR_FROM_JSON(BizObjectCount, bizObjectCount_);
        DARABONBA_PTR_FROM_JSON(BizProcessCount, bizProcessCount_);
        DARABONBA_PTR_FROM_JSON(BusinessLeaderList, businessLeaderList_);
        DARABONBA_PTR_FROM_JSON(DataDomainCount, dataDomainCount_);
        DARABONBA_PTR_FROM_JSON(DataLeaderList, dataLeaderList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(EnvList, envList_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Icon, icon_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LastModifier, lastModifier_);
        DARABONBA_PTR_FROM_JSON(LastModifierName, lastModifierName_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
        DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      };
      BizUnitInfo() = default ;
      BizUnitInfo(const BizUnitInfo &) = default ;
      BizUnitInfo(BizUnitInfo &&) = default ;
      BizUnitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BizUnitInfo() = default ;
      BizUnitInfo& operator=(const BizUnitInfo &) = default ;
      BizUnitInfo& operator=(BizUnitInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EnvList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnvList& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(EnvName, envName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EnvList& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(EnvName, envName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        EnvList() = default ;
        EnvList(const EnvList &) = default ;
        EnvList(EnvList &&) = default ;
        EnvList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnvList() = default ;
        EnvList& operator=(const EnvList &) = default ;
        EnvList& operator=(EnvList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->envName_ == nullptr && this->name_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline EnvList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // envName Field Functions 
        bool hasEnvName() const { return this->envName_ != nullptr;};
        void deleteEnvName() { this->envName_ = nullptr;};
        inline string getEnvName() const { DARABONBA_PTR_GET_DEFAULT(envName_, "") };
        inline EnvList& setEnvName(string envName) { DARABONBA_PTR_SET_VALUE(envName_, envName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EnvList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> envName_ {};
        shared_ptr<string> name_ {};
      };

      class DataLeaderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataLeaderList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, DataLeaderList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        DataLeaderList() = default ;
        DataLeaderList(const DataLeaderList &) = default ;
        DataLeaderList(DataLeaderList &&) = default ;
        DataLeaderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataLeaderList() = default ;
        DataLeaderList& operator=(const DataLeaderList &) = default ;
        DataLeaderList& operator=(DataLeaderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DataLeaderList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> id_ {};
      };

      class BusinessLeaderList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BusinessLeaderList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, BusinessLeaderList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        BusinessLeaderList() = default ;
        BusinessLeaderList(const BusinessLeaderList &) = default ;
        BusinessLeaderList(BusinessLeaderList &&) = default ;
        BusinessLeaderList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BusinessLeaderList() = default ;
        BusinessLeaderList& operator=(const BusinessLeaderList &) = default ;
        BusinessLeaderList& operator=(BusinessLeaderList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline BusinessLeaderList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> id_ {};
      };

      class AccountList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccountList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, AccountList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        AccountList() = default ;
        AccountList(const AccountList &) = default ;
        AccountList(AccountList &&) = default ;
        AccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccountList() = default ;
        AccountList& operator=(const AccountList &) = default ;
        AccountList& operator=(AccountList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline AccountList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<string> id_ {};
      };

      virtual bool empty() const override { return this->accountList_ == nullptr
        && this->bizObjectCount_ == nullptr && this->bizProcessCount_ == nullptr && this->businessLeaderList_ == nullptr && this->dataDomainCount_ == nullptr && this->dataLeaderList_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->envList_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->icon_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr && this->lastModifierName_ == nullptr && this->mode_ == nullptr
        && this->name_ == nullptr && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr; };
      // accountList Field Functions 
      bool hasAccountList() const { return this->accountList_ != nullptr;};
      void deleteAccountList() { this->accountList_ = nullptr;};
      inline const vector<BizUnitInfo::AccountList> & getAccountList() const { DARABONBA_PTR_GET_CONST(accountList_, vector<BizUnitInfo::AccountList>) };
      inline vector<BizUnitInfo::AccountList> getAccountList() { DARABONBA_PTR_GET(accountList_, vector<BizUnitInfo::AccountList>) };
      inline BizUnitInfo& setAccountList(const vector<BizUnitInfo::AccountList> & accountList) { DARABONBA_PTR_SET_VALUE(accountList_, accountList) };
      inline BizUnitInfo& setAccountList(vector<BizUnitInfo::AccountList> && accountList) { DARABONBA_PTR_SET_RVALUE(accountList_, accountList) };


      // bizObjectCount Field Functions 
      bool hasBizObjectCount() const { return this->bizObjectCount_ != nullptr;};
      void deleteBizObjectCount() { this->bizObjectCount_ = nullptr;};
      inline int32_t getBizObjectCount() const { DARABONBA_PTR_GET_DEFAULT(bizObjectCount_, 0) };
      inline BizUnitInfo& setBizObjectCount(int32_t bizObjectCount) { DARABONBA_PTR_SET_VALUE(bizObjectCount_, bizObjectCount) };


      // bizProcessCount Field Functions 
      bool hasBizProcessCount() const { return this->bizProcessCount_ != nullptr;};
      void deleteBizProcessCount() { this->bizProcessCount_ = nullptr;};
      inline int32_t getBizProcessCount() const { DARABONBA_PTR_GET_DEFAULT(bizProcessCount_, 0) };
      inline BizUnitInfo& setBizProcessCount(int32_t bizProcessCount) { DARABONBA_PTR_SET_VALUE(bizProcessCount_, bizProcessCount) };


      // businessLeaderList Field Functions 
      bool hasBusinessLeaderList() const { return this->businessLeaderList_ != nullptr;};
      void deleteBusinessLeaderList() { this->businessLeaderList_ = nullptr;};
      inline const vector<BizUnitInfo::BusinessLeaderList> & getBusinessLeaderList() const { DARABONBA_PTR_GET_CONST(businessLeaderList_, vector<BizUnitInfo::BusinessLeaderList>) };
      inline vector<BizUnitInfo::BusinessLeaderList> getBusinessLeaderList() { DARABONBA_PTR_GET(businessLeaderList_, vector<BizUnitInfo::BusinessLeaderList>) };
      inline BizUnitInfo& setBusinessLeaderList(const vector<BizUnitInfo::BusinessLeaderList> & businessLeaderList) { DARABONBA_PTR_SET_VALUE(businessLeaderList_, businessLeaderList) };
      inline BizUnitInfo& setBusinessLeaderList(vector<BizUnitInfo::BusinessLeaderList> && businessLeaderList) { DARABONBA_PTR_SET_RVALUE(businessLeaderList_, businessLeaderList) };


      // dataDomainCount Field Functions 
      bool hasDataDomainCount() const { return this->dataDomainCount_ != nullptr;};
      void deleteDataDomainCount() { this->dataDomainCount_ = nullptr;};
      inline int32_t getDataDomainCount() const { DARABONBA_PTR_GET_DEFAULT(dataDomainCount_, 0) };
      inline BizUnitInfo& setDataDomainCount(int32_t dataDomainCount) { DARABONBA_PTR_SET_VALUE(dataDomainCount_, dataDomainCount) };


      // dataLeaderList Field Functions 
      bool hasDataLeaderList() const { return this->dataLeaderList_ != nullptr;};
      void deleteDataLeaderList() { this->dataLeaderList_ = nullptr;};
      inline const vector<BizUnitInfo::DataLeaderList> & getDataLeaderList() const { DARABONBA_PTR_GET_CONST(dataLeaderList_, vector<BizUnitInfo::DataLeaderList>) };
      inline vector<BizUnitInfo::DataLeaderList> getDataLeaderList() { DARABONBA_PTR_GET(dataLeaderList_, vector<BizUnitInfo::DataLeaderList>) };
      inline BizUnitInfo& setDataLeaderList(const vector<BizUnitInfo::DataLeaderList> & dataLeaderList) { DARABONBA_PTR_SET_VALUE(dataLeaderList_, dataLeaderList) };
      inline BizUnitInfo& setDataLeaderList(vector<BizUnitInfo::DataLeaderList> && dataLeaderList) { DARABONBA_PTR_SET_RVALUE(dataLeaderList_, dataLeaderList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline BizUnitInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline BizUnitInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // envList Field Functions 
      bool hasEnvList() const { return this->envList_ != nullptr;};
      void deleteEnvList() { this->envList_ = nullptr;};
      inline const vector<BizUnitInfo::EnvList> & getEnvList() const { DARABONBA_PTR_GET_CONST(envList_, vector<BizUnitInfo::EnvList>) };
      inline vector<BizUnitInfo::EnvList> getEnvList() { DARABONBA_PTR_GET(envList_, vector<BizUnitInfo::EnvList>) };
      inline BizUnitInfo& setEnvList(const vector<BizUnitInfo::EnvList> & envList) { DARABONBA_PTR_SET_VALUE(envList_, envList) };
      inline BizUnitInfo& setEnvList(vector<BizUnitInfo::EnvList> && envList) { DARABONBA_PTR_SET_RVALUE(envList_, envList) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline BizUnitInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline BizUnitInfo& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // icon Field Functions 
      bool hasIcon() const { return this->icon_ != nullptr;};
      void deleteIcon() { this->icon_ = nullptr;};
      inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
      inline BizUnitInfo& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline BizUnitInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastModifier Field Functions 
      bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
      void deleteLastModifier() { this->lastModifier_ = nullptr;};
      inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
      inline BizUnitInfo& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


      // lastModifierName Field Functions 
      bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
      void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
      inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
      inline BizUnitInfo& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline BizUnitInfo& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BizUnitInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerName Field Functions 
      bool hasOwnerName() const { return this->ownerName_ != nullptr;};
      void deleteOwnerName() { this->ownerName_ = nullptr;};
      inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
      inline BizUnitInfo& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


      // ownerUserId Field Functions 
      bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
      void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
      inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
      inline BizUnitInfo& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    protected:
      shared_ptr<vector<BizUnitInfo::AccountList>> accountList_ {};
      shared_ptr<int32_t> bizObjectCount_ {};
      shared_ptr<int32_t> bizProcessCount_ {};
      shared_ptr<vector<BizUnitInfo::BusinessLeaderList>> businessLeaderList_ {};
      shared_ptr<int32_t> dataDomainCount_ {};
      shared_ptr<vector<BizUnitInfo::DataLeaderList>> dataLeaderList_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<vector<BizUnitInfo::EnvList>> envList_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> icon_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> lastModifier_ {};
      shared_ptr<string> lastModifierName_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> ownerName_ {};
      shared_ptr<string> ownerUserId_ {};
    };

    virtual bool empty() const override { return this->bizUnitInfo_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // bizUnitInfo Field Functions 
    bool hasBizUnitInfo() const { return this->bizUnitInfo_ != nullptr;};
    void deleteBizUnitInfo() { this->bizUnitInfo_ = nullptr;};
    inline const GetBizUnitInfoResponseBody::BizUnitInfo & getBizUnitInfo() const { DARABONBA_PTR_GET_CONST(bizUnitInfo_, GetBizUnitInfoResponseBody::BizUnitInfo) };
    inline GetBizUnitInfoResponseBody::BizUnitInfo getBizUnitInfo() { DARABONBA_PTR_GET(bizUnitInfo_, GetBizUnitInfoResponseBody::BizUnitInfo) };
    inline GetBizUnitInfoResponseBody& setBizUnitInfo(const GetBizUnitInfoResponseBody::BizUnitInfo & bizUnitInfo) { DARABONBA_PTR_SET_VALUE(bizUnitInfo_, bizUnitInfo) };
    inline GetBizUnitInfoResponseBody& setBizUnitInfo(GetBizUnitInfoResponseBody::BizUnitInfo && bizUnitInfo) { DARABONBA_PTR_SET_RVALUE(bizUnitInfo_, bizUnitInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBizUnitInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBizUnitInfoResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBizUnitInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBizUnitInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBizUnitInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetBizUnitInfoResponseBody::BizUnitInfo> bizUnitInfo_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
