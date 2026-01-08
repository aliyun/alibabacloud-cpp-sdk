// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIBERSERVICEMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIBERSERVICEMESSAGERESPONSEBODY_HPP_
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
  class ListViberServiceMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListViberServiceMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListViberServiceMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListViberServiceMessageResponseBody() = default ;
    ListViberServiceMessageResponseBody(const ListViberServiceMessageResponseBody &) = default ;
    ListViberServiceMessageResponseBody(ListViberServiceMessageResponseBody &&) = default ;
    ListViberServiceMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListViberServiceMessageResponseBody() = default ;
    ListViberServiceMessageResponseBody& operator=(const ListViberServiceMessageResponseBody &) = default ;
    ListViberServiceMessageResponseBody& operator=(ListViberServiceMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessAccountName, businessAccountName_);
        DARABONBA_PTR_TO_JSON(DestinationCountryId, destinationCountryId_);
        DARABONBA_PTR_TO_JSON(DestinationInternationalCountryId, destinationInternationalCountryId_);
        DARABONBA_PTR_TO_JSON(IndustryInvolved, industryInvolved_);
        DARABONBA_PTR_TO_JSON(MessageDestinationCountry, messageDestinationCountry_);
        DARABONBA_PTR_TO_JSON(MessageDestinationInternationalCountry, messageDestinationInternationalCountry_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessAccountName, businessAccountName_);
        DARABONBA_PTR_FROM_JSON(DestinationCountryId, destinationCountryId_);
        DARABONBA_PTR_FROM_JSON(DestinationInternationalCountryId, destinationInternationalCountryId_);
        DARABONBA_PTR_FROM_JSON(IndustryInvolved, industryInvolved_);
        DARABONBA_PTR_FROM_JSON(MessageDestinationCountry, messageDestinationCountry_);
        DARABONBA_PTR_FROM_JSON(MessageDestinationInternationalCountry, messageDestinationInternationalCountry_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
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
      virtual bool empty() const override { return this->businessAccountName_ == nullptr
        && this->destinationCountryId_ == nullptr && this->destinationInternationalCountryId_ == nullptr && this->industryInvolved_ == nullptr && this->messageDestinationCountry_ == nullptr && this->messageDestinationInternationalCountry_ == nullptr
        && this->serviceId_ == nullptr && this->state_ == nullptr; };
      // businessAccountName Field Functions 
      bool hasBusinessAccountName() const { return this->businessAccountName_ != nullptr;};
      void deleteBusinessAccountName() { this->businessAccountName_ = nullptr;};
      inline string getBusinessAccountName() const { DARABONBA_PTR_GET_DEFAULT(businessAccountName_, "") };
      inline Data& setBusinessAccountName(string businessAccountName) { DARABONBA_PTR_SET_VALUE(businessAccountName_, businessAccountName) };


      // destinationCountryId Field Functions 
      bool hasDestinationCountryId() const { return this->destinationCountryId_ != nullptr;};
      void deleteDestinationCountryId() { this->destinationCountryId_ = nullptr;};
      inline const vector<string> & getDestinationCountryId() const { DARABONBA_PTR_GET_CONST(destinationCountryId_, vector<string>) };
      inline vector<string> getDestinationCountryId() { DARABONBA_PTR_GET(destinationCountryId_, vector<string>) };
      inline Data& setDestinationCountryId(const vector<string> & destinationCountryId) { DARABONBA_PTR_SET_VALUE(destinationCountryId_, destinationCountryId) };
      inline Data& setDestinationCountryId(vector<string> && destinationCountryId) { DARABONBA_PTR_SET_RVALUE(destinationCountryId_, destinationCountryId) };


      // destinationInternationalCountryId Field Functions 
      bool hasDestinationInternationalCountryId() const { return this->destinationInternationalCountryId_ != nullptr;};
      void deleteDestinationInternationalCountryId() { this->destinationInternationalCountryId_ = nullptr;};
      inline const vector<string> & getDestinationInternationalCountryId() const { DARABONBA_PTR_GET_CONST(destinationInternationalCountryId_, vector<string>) };
      inline vector<string> getDestinationInternationalCountryId() { DARABONBA_PTR_GET(destinationInternationalCountryId_, vector<string>) };
      inline Data& setDestinationInternationalCountryId(const vector<string> & destinationInternationalCountryId) { DARABONBA_PTR_SET_VALUE(destinationInternationalCountryId_, destinationInternationalCountryId) };
      inline Data& setDestinationInternationalCountryId(vector<string> && destinationInternationalCountryId) { DARABONBA_PTR_SET_RVALUE(destinationInternationalCountryId_, destinationInternationalCountryId) };


      // industryInvolved Field Functions 
      bool hasIndustryInvolved() const { return this->industryInvolved_ != nullptr;};
      void deleteIndustryInvolved() { this->industryInvolved_ = nullptr;};
      inline string getIndustryInvolved() const { DARABONBA_PTR_GET_DEFAULT(industryInvolved_, "") };
      inline Data& setIndustryInvolved(string industryInvolved) { DARABONBA_PTR_SET_VALUE(industryInvolved_, industryInvolved) };


      // messageDestinationCountry Field Functions 
      bool hasMessageDestinationCountry() const { return this->messageDestinationCountry_ != nullptr;};
      void deleteMessageDestinationCountry() { this->messageDestinationCountry_ = nullptr;};
      inline const vector<string> & getMessageDestinationCountry() const { DARABONBA_PTR_GET_CONST(messageDestinationCountry_, vector<string>) };
      inline vector<string> getMessageDestinationCountry() { DARABONBA_PTR_GET(messageDestinationCountry_, vector<string>) };
      inline Data& setMessageDestinationCountry(const vector<string> & messageDestinationCountry) { DARABONBA_PTR_SET_VALUE(messageDestinationCountry_, messageDestinationCountry) };
      inline Data& setMessageDestinationCountry(vector<string> && messageDestinationCountry) { DARABONBA_PTR_SET_RVALUE(messageDestinationCountry_, messageDestinationCountry) };


      // messageDestinationInternationalCountry Field Functions 
      bool hasMessageDestinationInternationalCountry() const { return this->messageDestinationInternationalCountry_ != nullptr;};
      void deleteMessageDestinationInternationalCountry() { this->messageDestinationInternationalCountry_ = nullptr;};
      inline const vector<string> & getMessageDestinationInternationalCountry() const { DARABONBA_PTR_GET_CONST(messageDestinationInternationalCountry_, vector<string>) };
      inline vector<string> getMessageDestinationInternationalCountry() { DARABONBA_PTR_GET(messageDestinationInternationalCountry_, vector<string>) };
      inline Data& setMessageDestinationInternationalCountry(const vector<string> & messageDestinationInternationalCountry) { DARABONBA_PTR_SET_VALUE(messageDestinationInternationalCountry_, messageDestinationInternationalCountry) };
      inline Data& setMessageDestinationInternationalCountry(vector<string> && messageDestinationInternationalCountry) { DARABONBA_PTR_SET_RVALUE(messageDestinationInternationalCountry_, messageDestinationInternationalCountry) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Data& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<string> businessAccountName_ {};
      shared_ptr<vector<string>> destinationCountryId_ {};
      shared_ptr<vector<string>> destinationInternationalCountryId_ {};
      shared_ptr<string> industryInvolved_ {};
      shared_ptr<vector<string>> messageDestinationCountry_ {};
      shared_ptr<vector<string>> messageDestinationInternationalCountry_ {};
      shared_ptr<string> serviceId_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListViberServiceMessageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListViberServiceMessageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListViberServiceMessageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListViberServiceMessageResponseBody::Data>) };
    inline vector<ListViberServiceMessageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListViberServiceMessageResponseBody::Data>) };
    inline ListViberServiceMessageResponseBody& setData(const vector<ListViberServiceMessageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListViberServiceMessageResponseBody& setData(vector<ListViberServiceMessageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListViberServiceMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListViberServiceMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListViberServiceMessageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListViberServiceMessageResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
