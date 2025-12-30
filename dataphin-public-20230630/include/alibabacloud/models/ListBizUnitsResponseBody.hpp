// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZUNITSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZUNITSRESPONSEBODY_HPP_
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
  class ListBizUnitsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizUnitsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizUnitsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBizUnitsResponseBody() = default ;
    ListBizUnitsResponseBody(const ListBizUnitsResponseBody &) = default ;
    ListBizUnitsResponseBody(ListBizUnitsResponseBody &&) = default ;
    ListBizUnitsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizUnitsResponseBody() = default ;
    ListBizUnitsResponseBody& operator=(const ListBizUnitsResponseBody &) = default ;
    ListBizUnitsResponseBody& operator=(ListBizUnitsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitList, bizUnitList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitList, bizUnitList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BizUnitList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizUnitList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountList, accountList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Env, env_);
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
        friend void from_json(const Darabonba::Json& j, BizUnitList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountList, accountList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
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
        BizUnitList() = default ;
        BizUnitList(const BizUnitList &) = default ;
        BizUnitList(BizUnitList &&) = default ;
        BizUnitList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizUnitList() = default ;
        BizUnitList& operator=(const BizUnitList &) = default ;
        BizUnitList& operator=(BizUnitList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->description_ == nullptr && this->displayName_ == nullptr && this->env_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->icon_ == nullptr && this->id_ == nullptr && this->lastModifier_ == nullptr && this->lastModifierName_ == nullptr && this->mode_ == nullptr
        && this->name_ == nullptr && this->ownerName_ == nullptr && this->ownerUserId_ == nullptr; };
        // accountList Field Functions 
        bool hasAccountList() const { return this->accountList_ != nullptr;};
        void deleteAccountList() { this->accountList_ = nullptr;};
        inline const vector<BizUnitList::AccountList> & getAccountList() const { DARABONBA_PTR_GET_CONST(accountList_, vector<BizUnitList::AccountList>) };
        inline vector<BizUnitList::AccountList> getAccountList() { DARABONBA_PTR_GET(accountList_, vector<BizUnitList::AccountList>) };
        inline BizUnitList& setAccountList(const vector<BizUnitList::AccountList> & accountList) { DARABONBA_PTR_SET_VALUE(accountList_, accountList) };
        inline BizUnitList& setAccountList(vector<BizUnitList::AccountList> && accountList) { DARABONBA_PTR_SET_RVALUE(accountList_, accountList) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BizUnitList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline BizUnitList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline BizUnitList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline BizUnitList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline BizUnitList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline BizUnitList& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline BizUnitList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // lastModifier Field Functions 
        bool hasLastModifier() const { return this->lastModifier_ != nullptr;};
        void deleteLastModifier() { this->lastModifier_ = nullptr;};
        inline string getLastModifier() const { DARABONBA_PTR_GET_DEFAULT(lastModifier_, "") };
        inline BizUnitList& setLastModifier(string lastModifier) { DARABONBA_PTR_SET_VALUE(lastModifier_, lastModifier) };


        // lastModifierName Field Functions 
        bool hasLastModifierName() const { return this->lastModifierName_ != nullptr;};
        void deleteLastModifierName() { this->lastModifierName_ = nullptr;};
        inline string getLastModifierName() const { DARABONBA_PTR_GET_DEFAULT(lastModifierName_, "") };
        inline BizUnitList& setLastModifierName(string lastModifierName) { DARABONBA_PTR_SET_VALUE(lastModifierName_, lastModifierName) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline BizUnitList& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BizUnitList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline BizUnitList& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // ownerUserId Field Functions 
        bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
        void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
        inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
        inline BizUnitList& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


      protected:
        shared_ptr<vector<BizUnitList::AccountList>> accountList_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> env_ {};
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

      virtual bool empty() const override { return this->bizUnitList_ == nullptr; };
      // bizUnitList Field Functions 
      bool hasBizUnitList() const { return this->bizUnitList_ != nullptr;};
      void deleteBizUnitList() { this->bizUnitList_ = nullptr;};
      inline const vector<Data::BizUnitList> & getBizUnitList() const { DARABONBA_PTR_GET_CONST(bizUnitList_, vector<Data::BizUnitList>) };
      inline vector<Data::BizUnitList> getBizUnitList() { DARABONBA_PTR_GET(bizUnitList_, vector<Data::BizUnitList>) };
      inline Data& setBizUnitList(const vector<Data::BizUnitList> & bizUnitList) { DARABONBA_PTR_SET_VALUE(bizUnitList_, bizUnitList) };
      inline Data& setBizUnitList(vector<Data::BizUnitList> && bizUnitList) { DARABONBA_PTR_SET_RVALUE(bizUnitList_, bizUnitList) };


    protected:
      shared_ptr<vector<Data::BizUnitList>> bizUnitList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListBizUnitsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListBizUnitsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListBizUnitsResponseBody::Data) };
    inline ListBizUnitsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListBizUnitsResponseBody::Data) };
    inline ListBizUnitsResponseBody& setData(const ListBizUnitsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBizUnitsResponseBody& setData(ListBizUnitsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBizUnitsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListBizUnitsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBizUnitsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBizUnitsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListBizUnitsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
