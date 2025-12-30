// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPPGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPPGROUPSRESPONSEBODY_HPP_
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
  class GetDataServiceAppGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceAppGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppGroupList, appGroupList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceAppGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppGroupList, appGroupList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceAppGroupsResponseBody() = default ;
    GetDataServiceAppGroupsResponseBody(const GetDataServiceAppGroupsResponseBody &) = default ;
    GetDataServiceAppGroupsResponseBody(GetDataServiceAppGroupsResponseBody &&) = default ;
    GetDataServiceAppGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceAppGroupsResponseBody() = default ;
    GetDataServiceAppGroupsResponseBody& operator=(const GetDataServiceAppGroupsResponseBody &) = default ;
    GetDataServiceAppGroupsResponseBody& operator=(GetDataServiceAppGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, AppGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      AppGroupList() = default ;
      AppGroupList(const AppGroupList &) = default ;
      AppGroupList(AppGroupList &&) = default ;
      AppGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppGroupList() = default ;
      AppGroupList& operator=(const AppGroupList &) = default ;
      AppGroupList& operator=(AppGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline AppGroupList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AppGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<int32_t> id_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->appGroupList_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // appGroupList Field Functions 
    bool hasAppGroupList() const { return this->appGroupList_ != nullptr;};
    void deleteAppGroupList() { this->appGroupList_ = nullptr;};
    inline const vector<GetDataServiceAppGroupsResponseBody::AppGroupList> & getAppGroupList() const { DARABONBA_PTR_GET_CONST(appGroupList_, vector<GetDataServiceAppGroupsResponseBody::AppGroupList>) };
    inline vector<GetDataServiceAppGroupsResponseBody::AppGroupList> getAppGroupList() { DARABONBA_PTR_GET(appGroupList_, vector<GetDataServiceAppGroupsResponseBody::AppGroupList>) };
    inline GetDataServiceAppGroupsResponseBody& setAppGroupList(const vector<GetDataServiceAppGroupsResponseBody::AppGroupList> & appGroupList) { DARABONBA_PTR_SET_VALUE(appGroupList_, appGroupList) };
    inline GetDataServiceAppGroupsResponseBody& setAppGroupList(vector<GetDataServiceAppGroupsResponseBody::AppGroupList> && appGroupList) { DARABONBA_PTR_SET_RVALUE(appGroupList_, appGroupList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceAppGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceAppGroupsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceAppGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceAppGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceAppGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<GetDataServiceAppGroupsResponseBody::AppGroupList>> appGroupList_ {};
    shared_ptr<string> code_ {};
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
