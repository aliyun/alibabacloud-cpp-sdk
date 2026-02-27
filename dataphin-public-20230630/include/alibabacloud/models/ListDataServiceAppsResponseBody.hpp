// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPPSRESPONSEBODY_HPP_
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
  class ListDataServiceAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServiceAppsResponseBody() = default ;
    ListDataServiceAppsResponseBody(const ListDataServiceAppsResponseBody &) = default ;
    ListDataServiceAppsResponseBody(ListDataServiceAppsResponseBody &&) = default ;
    ListDataServiceAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceAppsResponseBody() = default ;
    ListDataServiceAppsResponseBody& operator=(const ListDataServiceAppsResponseBody &) = default ;
    ListDataServiceAppsResponseBody& operator=(ListDataServiceAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppList, appList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppList, appList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class AppList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppList& obj) { 
          DARABONBA_PTR_TO_JSON(AppGroup, appGroup_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(IsMember, isMember_);
          DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
        };
        friend void from_json(const Darabonba::Json& j, AppList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppGroup, appGroup_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(IsMember, isMember_);
          DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
        };
        AppList() = default ;
        AppList(const AppList &) = default ;
        AppList(AppList &&) = default ;
        AppList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppList() = default ;
        AppList& operator=(const AppList &) = default ;
        AppList& operator=(AppList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OwnerList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OwnerList& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, OwnerList& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          OwnerList() = default ;
          OwnerList(const OwnerList &) = default ;
          OwnerList(OwnerList &&) = default ;
          OwnerList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OwnerList() = default ;
          OwnerList& operator=(const OwnerList &) = default ;
          OwnerList& operator=(OwnerList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline OwnerList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline OwnerList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->appGroup_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->isMember_ == nullptr && this->ownerList_ == nullptr; };
        // appGroup Field Functions 
        bool hasAppGroup() const { return this->appGroup_ != nullptr;};
        void deleteAppGroup() { this->appGroup_ = nullptr;};
        inline string getAppGroup() const { DARABONBA_PTR_GET_DEFAULT(appGroup_, "") };
        inline AppList& setAppGroup(string appGroup) { DARABONBA_PTR_SET_VALUE(appGroup_, appGroup) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
        inline AppList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline AppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // isMember Field Functions 
        bool hasIsMember() const { return this->isMember_ != nullptr;};
        void deleteIsMember() { this->isMember_ = nullptr;};
        inline bool getIsMember() const { DARABONBA_PTR_GET_DEFAULT(isMember_, false) };
        inline AppList& setIsMember(bool isMember) { DARABONBA_PTR_SET_VALUE(isMember_, isMember) };


        // ownerList Field Functions 
        bool hasOwnerList() const { return this->ownerList_ != nullptr;};
        void deleteOwnerList() { this->ownerList_ = nullptr;};
        inline const vector<AppList::OwnerList> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<AppList::OwnerList>) };
        inline vector<AppList::OwnerList> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<AppList::OwnerList>) };
        inline AppList& setOwnerList(const vector<AppList::OwnerList> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
        inline AppList& setOwnerList(vector<AppList::OwnerList> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


      protected:
        shared_ptr<string> appGroup_ {};
        shared_ptr<int32_t> appId_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<bool> isMember_ {};
        shared_ptr<vector<AppList::OwnerList>> ownerList_ {};
      };

      virtual bool empty() const override { return this->appList_ == nullptr
        && this->totalCount_ == nullptr; };
      // appList Field Functions 
      bool hasAppList() const { return this->appList_ != nullptr;};
      void deleteAppList() { this->appList_ = nullptr;};
      inline const vector<Data::AppList> & getAppList() const { DARABONBA_PTR_GET_CONST(appList_, vector<Data::AppList>) };
      inline vector<Data::AppList> getAppList() { DARABONBA_PTR_GET(appList_, vector<Data::AppList>) };
      inline Data& setAppList(const vector<Data::AppList> & appList) { DARABONBA_PTR_SET_VALUE(appList_, appList) };
      inline Data& setAppList(vector<Data::AppList> && appList) { DARABONBA_PTR_SET_RVALUE(appList_, appList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::AppList>> appList_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataServiceAppsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataServiceAppsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataServiceAppsResponseBody::Data) };
    inline ListDataServiceAppsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataServiceAppsResponseBody::Data) };
    inline ListDataServiceAppsResponseBody& setData(const ListDataServiceAppsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataServiceAppsResponseBody& setData(ListDataServiceAppsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServiceAppsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataServiceAppsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServiceAppsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListDataServiceAppsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
