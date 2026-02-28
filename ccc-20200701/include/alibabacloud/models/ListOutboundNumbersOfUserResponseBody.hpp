// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOUTBOUNDNUMBERSOFUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOUTBOUNDNUMBERSOFUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListOutboundNumbersOfUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOutboundNumbersOfUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOutboundNumbersOfUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOutboundNumbersOfUserResponseBody() = default ;
    ListOutboundNumbersOfUserResponseBody(const ListOutboundNumbersOfUserResponseBody &) = default ;
    ListOutboundNumbersOfUserResponseBody(ListOutboundNumbersOfUserResponseBody &&) = default ;
    ListOutboundNumbersOfUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOutboundNumbersOfUserResponseBody() = default ;
    ListOutboundNumbersOfUserResponseBody& operator=(const ListOutboundNumbersOfUserResponseBody &) = default ;
    ListOutboundNumbersOfUserResponseBody& operator=(ListOutboundNumbersOfUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(Provider, provider_);
          DARABONBA_PTR_TO_JSON(ProviderCode, providerCode_);
          DARABONBA_PTR_TO_JSON(ProviderDisplayName, providerDisplayName_);
          DARABONBA_PTR_TO_JSON(ProviderShortName, providerShortName_);
          DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
          DARABONBA_PTR_TO_JSON(Province, province_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(Provider, provider_);
          DARABONBA_PTR_FROM_JSON(ProviderCode, providerCode_);
          DARABONBA_PTR_FROM_JSON(ProviderDisplayName, providerDisplayName_);
          DARABONBA_PTR_FROM_JSON(ProviderShortName, providerShortName_);
          DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
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
        virtual bool empty() const override { return this->city_ == nullptr
        && this->number_ == nullptr && this->provider_ == nullptr && this->providerCode_ == nullptr && this->providerDisplayName_ == nullptr && this->providerShortName_ == nullptr
        && this->providerType_ == nullptr && this->province_ == nullptr; };
        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline List& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline List& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // provider Field Functions 
        bool hasProvider() const { return this->provider_ != nullptr;};
        void deleteProvider() { this->provider_ = nullptr;};
        inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
        inline List& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


        // providerCode Field Functions 
        bool hasProviderCode() const { return this->providerCode_ != nullptr;};
        void deleteProviderCode() { this->providerCode_ = nullptr;};
        inline string getProviderCode() const { DARABONBA_PTR_GET_DEFAULT(providerCode_, "") };
        inline List& setProviderCode(string providerCode) { DARABONBA_PTR_SET_VALUE(providerCode_, providerCode) };


        // providerDisplayName Field Functions 
        bool hasProviderDisplayName() const { return this->providerDisplayName_ != nullptr;};
        void deleteProviderDisplayName() { this->providerDisplayName_ = nullptr;};
        inline string getProviderDisplayName() const { DARABONBA_PTR_GET_DEFAULT(providerDisplayName_, "") };
        inline List& setProviderDisplayName(string providerDisplayName) { DARABONBA_PTR_SET_VALUE(providerDisplayName_, providerDisplayName) };


        // providerShortName Field Functions 
        bool hasProviderShortName() const { return this->providerShortName_ != nullptr;};
        void deleteProviderShortName() { this->providerShortName_ = nullptr;};
        inline string getProviderShortName() const { DARABONBA_PTR_GET_DEFAULT(providerShortName_, "") };
        inline List& setProviderShortName(string providerShortName) { DARABONBA_PTR_SET_VALUE(providerShortName_, providerShortName) };


        // providerType Field Functions 
        bool hasProviderType() const { return this->providerType_ != nullptr;};
        void deleteProviderType() { this->providerType_ = nullptr;};
        inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
        inline List& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline List& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      protected:
        shared_ptr<string> city_ {};
        shared_ptr<string> number_ {};
        shared_ptr<string> provider_ {};
        shared_ptr<string> providerCode_ {};
        shared_ptr<string> providerDisplayName_ {};
        shared_ptr<string> providerShortName_ {};
        shared_ptr<string> providerType_ {};
        shared_ptr<string> province_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOutboundNumbersOfUserResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListOutboundNumbersOfUserResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListOutboundNumbersOfUserResponseBody::Data) };
    inline ListOutboundNumbersOfUserResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListOutboundNumbersOfUserResponseBody::Data) };
    inline ListOutboundNumbersOfUserResponseBody& setData(const ListOutboundNumbersOfUserResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOutboundNumbersOfUserResponseBody& setData(ListOutboundNumbersOfUserResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListOutboundNumbersOfUserResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOutboundNumbersOfUserResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOutboundNumbersOfUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListOutboundNumbersOfUserResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
