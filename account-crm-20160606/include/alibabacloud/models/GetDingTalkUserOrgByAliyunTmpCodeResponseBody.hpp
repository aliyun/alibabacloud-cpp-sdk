// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKUSERORGBYALIYUNTMPCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKUSERORGBYALIYUNTMPCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetDingTalkUserOrgByAliyunTmpCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingTalkUserOrgByAliyunTmpCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingTalkUserOrgByAliyunTmpCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDingTalkUserOrgByAliyunTmpCodeResponseBody() = default ;
    GetDingTalkUserOrgByAliyunTmpCodeResponseBody(const GetDingTalkUserOrgByAliyunTmpCodeResponseBody &) = default ;
    GetDingTalkUserOrgByAliyunTmpCodeResponseBody(GetDingTalkUserOrgByAliyunTmpCodeResponseBody &&) = default ;
    GetDingTalkUserOrgByAliyunTmpCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingTalkUserOrgByAliyunTmpCodeResponseBody() = default ;
    GetDingTalkUserOrgByAliyunTmpCodeResponseBody& operator=(const GetDingTalkUserOrgByAliyunTmpCodeResponseBody &) = default ;
    GetDingTalkUserOrgByAliyunTmpCodeResponseBody& operator=(GetDingTalkUserOrgByAliyunTmpCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedUnionId, associatedUnionId_);
        DARABONBA_PTR_TO_JSON(Nick, nick_);
        DARABONBA_PTR_TO_JSON(OrgDtoList, orgDtoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedUnionId, associatedUnionId_);
        DARABONBA_PTR_FROM_JSON(Nick, nick_);
        DARABONBA_PTR_FROM_JSON(OrgDtoList, orgDtoList_);
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
      class OrgDtoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrgDtoList& obj) { 
          DARABONBA_PTR_TO_JSON(CorpId, corpId_);
          DARABONBA_PTR_TO_JSON(OrgId, orgId_);
          DARABONBA_PTR_TO_JSON(OrgName, orgName_);
        };
        friend void from_json(const Darabonba::Json& j, OrgDtoList& obj) { 
          DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
          DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
          DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
        };
        OrgDtoList() = default ;
        OrgDtoList(const OrgDtoList &) = default ;
        OrgDtoList(OrgDtoList &&) = default ;
        OrgDtoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrgDtoList() = default ;
        OrgDtoList& operator=(const OrgDtoList &) = default ;
        OrgDtoList& operator=(OrgDtoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->corpId_ == nullptr
        && this->orgId_ == nullptr && this->orgName_ == nullptr; };
        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline OrgDtoList& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // orgId Field Functions 
        bool hasOrgId() const { return this->orgId_ != nullptr;};
        void deleteOrgId() { this->orgId_ = nullptr;};
        inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
        inline OrgDtoList& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


        // orgName Field Functions 
        bool hasOrgName() const { return this->orgName_ != nullptr;};
        void deleteOrgName() { this->orgName_ = nullptr;};
        inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
        inline OrgDtoList& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


      protected:
        shared_ptr<string> corpId_ {};
        shared_ptr<string> orgId_ {};
        shared_ptr<string> orgName_ {};
      };

      virtual bool empty() const override { return this->associatedUnionId_ == nullptr
        && this->nick_ == nullptr && this->orgDtoList_ == nullptr; };
      // associatedUnionId Field Functions 
      bool hasAssociatedUnionId() const { return this->associatedUnionId_ != nullptr;};
      void deleteAssociatedUnionId() { this->associatedUnionId_ = nullptr;};
      inline string getAssociatedUnionId() const { DARABONBA_PTR_GET_DEFAULT(associatedUnionId_, "") };
      inline Data& setAssociatedUnionId(string associatedUnionId) { DARABONBA_PTR_SET_VALUE(associatedUnionId_, associatedUnionId) };


      // nick Field Functions 
      bool hasNick() const { return this->nick_ != nullptr;};
      void deleteNick() { this->nick_ = nullptr;};
      inline string getNick() const { DARABONBA_PTR_GET_DEFAULT(nick_, "") };
      inline Data& setNick(string nick) { DARABONBA_PTR_SET_VALUE(nick_, nick) };


      // orgDtoList Field Functions 
      bool hasOrgDtoList() const { return this->orgDtoList_ != nullptr;};
      void deleteOrgDtoList() { this->orgDtoList_ = nullptr;};
      inline const vector<Data::OrgDtoList> & getOrgDtoList() const { DARABONBA_PTR_GET_CONST(orgDtoList_, vector<Data::OrgDtoList>) };
      inline vector<Data::OrgDtoList> getOrgDtoList() { DARABONBA_PTR_GET(orgDtoList_, vector<Data::OrgDtoList>) };
      inline Data& setOrgDtoList(const vector<Data::OrgDtoList> & orgDtoList) { DARABONBA_PTR_SET_VALUE(orgDtoList_, orgDtoList) };
      inline Data& setOrgDtoList(vector<Data::OrgDtoList> && orgDtoList) { DARABONBA_PTR_SET_RVALUE(orgDtoList_, orgDtoList) };


    protected:
      shared_ptr<string> associatedUnionId_ {};
      shared_ptr<string> nick_ {};
      shared_ptr<vector<Data::OrgDtoList>> orgDtoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDingTalkUserOrgByAliyunTmpCodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDingTalkUserOrgByAliyunTmpCodeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDingTalkUserOrgByAliyunTmpCodeResponseBody::Data) };
    inline GetDingTalkUserOrgByAliyunTmpCodeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDingTalkUserOrgByAliyunTmpCodeResponseBody::Data) };
    inline GetDingTalkUserOrgByAliyunTmpCodeResponseBody& setData(const GetDingTalkUserOrgByAliyunTmpCodeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDingTalkUserOrgByAliyunTmpCodeResponseBody& setData(GetDingTalkUserOrgByAliyunTmpCodeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline GetDingTalkUserOrgByAliyunTmpCodeResponseBody& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDingTalkUserOrgByAliyunTmpCodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDingTalkUserOrgByAliyunTmpCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDingTalkUserOrgByAliyunTmpCodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetDingTalkUserOrgByAliyunTmpCodeResponseBody::Data> data_ {};
    shared_ptr<string> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
