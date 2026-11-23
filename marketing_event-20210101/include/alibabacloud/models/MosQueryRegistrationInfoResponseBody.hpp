// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOSQUERYREGISTRATIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOSQUERYREGISTRATIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class MosQueryRegistrationInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MosQueryRegistrationInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MosQueryRegistrationInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MosQueryRegistrationInfoResponseBody() = default ;
    MosQueryRegistrationInfoResponseBody(const MosQueryRegistrationInfoResponseBody &) = default ;
    MosQueryRegistrationInfoResponseBody(MosQueryRegistrationInfoResponseBody &&) = default ;
    MosQueryRegistrationInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MosQueryRegistrationInfoResponseBody() = default ;
    MosQueryRegistrationInfoResponseBody& operator=(const MosQueryRegistrationInfoResponseBody &) = default ;
    MosQueryRegistrationInfoResponseBody& operator=(MosQueryRegistrationInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
          DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
          DARABONBA_PTR_TO_JSON(CheckinStatus, checkinStatus_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(QrCode, qrCode_);
          DARABONBA_PTR_TO_JSON(TagInfos, tagInfos_);
          DARABONBA_PTR_TO_JSON(UserCompany, userCompany_);
          DARABONBA_PTR_TO_JSON(UserEmail, userEmail_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(UserPhone, userPhone_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
          DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
          DARABONBA_PTR_FROM_JSON(CheckinStatus, checkinStatus_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(QrCode, qrCode_);
          DARABONBA_PTR_FROM_JSON(TagInfos, tagInfos_);
          DARABONBA_PTR_FROM_JSON(UserCompany, userCompany_);
          DARABONBA_PTR_FROM_JSON(UserEmail, userEmail_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(UserPhone, userPhone_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagInfos& obj) { 
            DARABONBA_PTR_TO_JSON(TagCode, tagCode_);
            DARABONBA_PTR_TO_JSON(TagName, tagName_);
          };
          friend void from_json(const Darabonba::Json& j, TagInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(TagCode, tagCode_);
            DARABONBA_PTR_FROM_JSON(TagName, tagName_);
          };
          TagInfos() = default ;
          TagInfos(const TagInfos &) = default ;
          TagInfos(TagInfos &&) = default ;
          TagInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagInfos() = default ;
          TagInfos& operator=(const TagInfos &) = default ;
          TagInfos& operator=(TagInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagCode_ == nullptr
        && this->tagName_ == nullptr; };
          // tagCode Field Functions 
          bool hasTagCode() const { return this->tagCode_ != nullptr;};
          void deleteTagCode() { this->tagCode_ = nullptr;};
          inline string getTagCode() const { DARABONBA_PTR_GET_DEFAULT(tagCode_, "") };
          inline TagInfos& setTagCode(string tagCode) { DARABONBA_PTR_SET_VALUE(tagCode_, tagCode) };


          // tagName Field Functions 
          bool hasTagName() const { return this->tagName_ != nullptr;};
          void deleteTagName() { this->tagName_ = nullptr;};
          inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
          inline TagInfos& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


        protected:
          shared_ptr<string> tagCode_ {};
          shared_ptr<string> tagName_ {};
        };

        virtual bool empty() const override { return this->activityId_ == nullptr
        && this->channelName_ == nullptr && this->checkinStatus_ == nullptr && this->id_ == nullptr && this->qrCode_ == nullptr && this->tagInfos_ == nullptr
        && this->userCompany_ == nullptr && this->userEmail_ == nullptr && this->userName_ == nullptr && this->userPhone_ == nullptr; };
        // activityId Field Functions 
        bool hasActivityId() const { return this->activityId_ != nullptr;};
        void deleteActivityId() { this->activityId_ = nullptr;};
        inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
        inline List& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


        // channelName Field Functions 
        bool hasChannelName() const { return this->channelName_ != nullptr;};
        void deleteChannelName() { this->channelName_ = nullptr;};
        inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
        inline List& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


        // checkinStatus Field Functions 
        bool hasCheckinStatus() const { return this->checkinStatus_ != nullptr;};
        void deleteCheckinStatus() { this->checkinStatus_ = nullptr;};
        inline string getCheckinStatus() const { DARABONBA_PTR_GET_DEFAULT(checkinStatus_, "") };
        inline List& setCheckinStatus(string checkinStatus) { DARABONBA_PTR_SET_VALUE(checkinStatus_, checkinStatus) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // qrCode Field Functions 
        bool hasQrCode() const { return this->qrCode_ != nullptr;};
        void deleteQrCode() { this->qrCode_ = nullptr;};
        inline string getQrCode() const { DARABONBA_PTR_GET_DEFAULT(qrCode_, "") };
        inline List& setQrCode(string qrCode) { DARABONBA_PTR_SET_VALUE(qrCode_, qrCode) };


        // tagInfos Field Functions 
        bool hasTagInfos() const { return this->tagInfos_ != nullptr;};
        void deleteTagInfos() { this->tagInfos_ = nullptr;};
        inline const vector<List::TagInfos> & getTagInfos() const { DARABONBA_PTR_GET_CONST(tagInfos_, vector<List::TagInfos>) };
        inline vector<List::TagInfos> getTagInfos() { DARABONBA_PTR_GET(tagInfos_, vector<List::TagInfos>) };
        inline List& setTagInfos(const vector<List::TagInfos> & tagInfos) { DARABONBA_PTR_SET_VALUE(tagInfos_, tagInfos) };
        inline List& setTagInfos(vector<List::TagInfos> && tagInfos) { DARABONBA_PTR_SET_RVALUE(tagInfos_, tagInfos) };


        // userCompany Field Functions 
        bool hasUserCompany() const { return this->userCompany_ != nullptr;};
        void deleteUserCompany() { this->userCompany_ = nullptr;};
        inline string getUserCompany() const { DARABONBA_PTR_GET_DEFAULT(userCompany_, "") };
        inline List& setUserCompany(string userCompany) { DARABONBA_PTR_SET_VALUE(userCompany_, userCompany) };


        // userEmail Field Functions 
        bool hasUserEmail() const { return this->userEmail_ != nullptr;};
        void deleteUserEmail() { this->userEmail_ = nullptr;};
        inline string getUserEmail() const { DARABONBA_PTR_GET_DEFAULT(userEmail_, "") };
        inline List& setUserEmail(string userEmail) { DARABONBA_PTR_SET_VALUE(userEmail_, userEmail) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline List& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // userPhone Field Functions 
        bool hasUserPhone() const { return this->userPhone_ != nullptr;};
        void deleteUserPhone() { this->userPhone_ = nullptr;};
        inline string getUserPhone() const { DARABONBA_PTR_GET_DEFAULT(userPhone_, "") };
        inline List& setUserPhone(string userPhone) { DARABONBA_PTR_SET_VALUE(userPhone_, userPhone) };


      protected:
        shared_ptr<string> activityId_ {};
        shared_ptr<string> channelName_ {};
        shared_ptr<string> checkinStatus_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> qrCode_ {};
        shared_ptr<vector<List::TagInfos>> tagInfos_ {};
        shared_ptr<string> userCompany_ {};
        shared_ptr<string> userEmail_ {};
        shared_ptr<string> userName_ {};
        shared_ptr<string> userPhone_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline MosQueryRegistrationInfoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MosQueryRegistrationInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MosQueryRegistrationInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, MosQueryRegistrationInfoResponseBody::Data) };
    inline MosQueryRegistrationInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, MosQueryRegistrationInfoResponseBody::Data) };
    inline MosQueryRegistrationInfoResponseBody& setData(const MosQueryRegistrationInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MosQueryRegistrationInfoResponseBody& setData(MosQueryRegistrationInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MosQueryRegistrationInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MosQueryRegistrationInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MosQueryRegistrationInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<MosQueryRegistrationInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
