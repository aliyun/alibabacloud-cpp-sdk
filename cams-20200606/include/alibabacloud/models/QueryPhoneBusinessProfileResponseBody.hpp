// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPHONEBUSINESSPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPHONEBUSINESSPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class QueryPhoneBusinessProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPhoneBusinessProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPhoneBusinessProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryPhoneBusinessProfileResponseBody() = default ;
    QueryPhoneBusinessProfileResponseBody(const QueryPhoneBusinessProfileResponseBody &) = default ;
    QueryPhoneBusinessProfileResponseBody(QueryPhoneBusinessProfileResponseBody &&) = default ;
    QueryPhoneBusinessProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPhoneBusinessProfileResponseBody() = default ;
    QueryPhoneBusinessProfileResponseBody& operator=(const QueryPhoneBusinessProfileResponseBody &) = default ;
    QueryPhoneBusinessProfileResponseBody& operator=(QueryPhoneBusinessProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(About, about_);
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(ProfilePictureUrl, profilePictureUrl_);
        DARABONBA_PTR_TO_JSON(Vertical, vertical_);
        DARABONBA_PTR_TO_JSON(Websites, websites_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(About, about_);
        DARABONBA_PTR_FROM_JSON(Address, address_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(ProfilePictureUrl, profilePictureUrl_);
        DARABONBA_PTR_FROM_JSON(Vertical, vertical_);
        DARABONBA_PTR_FROM_JSON(Websites, websites_);
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
      virtual bool empty() const override { return this->about_ == nullptr
        && this->address_ == nullptr && this->description_ == nullptr && this->email_ == nullptr && this->profilePictureUrl_ == nullptr && this->vertical_ == nullptr
        && this->websites_ == nullptr; };
      // about Field Functions 
      bool hasAbout() const { return this->about_ != nullptr;};
      void deleteAbout() { this->about_ = nullptr;};
      inline string getAbout() const { DARABONBA_PTR_GET_DEFAULT(about_, "") };
      inline Data& setAbout(string about) { DARABONBA_PTR_SET_VALUE(about_, about) };


      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
      inline Data& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // profilePictureUrl Field Functions 
      bool hasProfilePictureUrl() const { return this->profilePictureUrl_ != nullptr;};
      void deleteProfilePictureUrl() { this->profilePictureUrl_ = nullptr;};
      inline string getProfilePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(profilePictureUrl_, "") };
      inline Data& setProfilePictureUrl(string profilePictureUrl) { DARABONBA_PTR_SET_VALUE(profilePictureUrl_, profilePictureUrl) };


      // vertical Field Functions 
      bool hasVertical() const { return this->vertical_ != nullptr;};
      void deleteVertical() { this->vertical_ = nullptr;};
      inline string getVertical() const { DARABONBA_PTR_GET_DEFAULT(vertical_, "") };
      inline Data& setVertical(string vertical) { DARABONBA_PTR_SET_VALUE(vertical_, vertical) };


      // websites Field Functions 
      bool hasWebsites() const { return this->websites_ != nullptr;};
      void deleteWebsites() { this->websites_ = nullptr;};
      inline const vector<string> & getWebsites() const { DARABONBA_PTR_GET_CONST(websites_, vector<string>) };
      inline vector<string> getWebsites() { DARABONBA_PTR_GET(websites_, vector<string>) };
      inline Data& setWebsites(const vector<string> & websites) { DARABONBA_PTR_SET_VALUE(websites_, websites) };
      inline Data& setWebsites(vector<string> && websites) { DARABONBA_PTR_SET_RVALUE(websites_, websites) };


    protected:
      // Regarding.
      shared_ptr<string> about_ {};
      // The address.
      shared_ptr<string> address_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The email address.
      shared_ptr<string> email_ {};
      // The profile picture.
      shared_ptr<string> profilePictureUrl_ {};
      // The industry.
      shared_ptr<string> vertical_ {};
      // The website.
      shared_ptr<vector<string>> websites_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryPhoneBusinessProfileResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPhoneBusinessProfileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryPhoneBusinessProfileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryPhoneBusinessProfileResponseBody::Data) };
    inline QueryPhoneBusinessProfileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryPhoneBusinessProfileResponseBody::Data) };
    inline QueryPhoneBusinessProfileResponseBody& setData(const QueryPhoneBusinessProfileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryPhoneBusinessProfileResponseBody& setData(QueryPhoneBusinessProfileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPhoneBusinessProfileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPhoneBusinessProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryPhoneBusinessProfileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The HTTP status code returned.
    // 
    // *   A value of OK indicates that the call is successful.
    // *   Other values indicate that the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<QueryPhoneBusinessProfileResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
