// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCITYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCITYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchCityPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCityPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCityPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    SearchCityPageResponseBody() = default ;
    SearchCityPageResponseBody(const SearchCityPageResponseBody &) = default ;
    SearchCityPageResponseBody(SearchCityPageResponseBody &&) = default ;
    SearchCityPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCityPageResponseBody() = default ;
    SearchCityPageResponseBody& operator=(const SearchCityPageResponseBody &) = default ;
    SearchCityPageResponseBody& operator=(SearchCityPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Cities, cities_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Cities, cities_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
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
      class Cities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cities& obj) { 
          DARABONBA_PTR_TO_JSON(CnName, cnName_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_TO_JSON(EnName, enName_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(ParentCode, parentCode_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Cities& obj) { 
          DARABONBA_PTR_FROM_JSON(CnName, cnName_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
          DARABONBA_PTR_FROM_JSON(EnName, enName_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(ParentCode, parentCode_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Cities() = default ;
        Cities(const Cities &) = default ;
        Cities(Cities &&) = default ;
        Cities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Cities() = default ;
        Cities& operator=(const Cities &) = default ;
        Cities& operator=(Cities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnName_ == nullptr
        && this->code_ == nullptr && this->country_ == nullptr && this->countryCode_ == nullptr && this->enName_ == nullptr && this->level_ == nullptr
        && this->parentCode_ == nullptr && this->region_ == nullptr && this->type_ == nullptr; };
        // cnName Field Functions 
        bool hasCnName() const { return this->cnName_ != nullptr;};
        void deleteCnName() { this->cnName_ = nullptr;};
        inline string getCnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
        inline Cities& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline Cities& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline int32_t getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, 0) };
        inline Cities& setCountry(int32_t country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline Cities& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // enName Field Functions 
        bool hasEnName() const { return this->enName_ != nullptr;};
        void deleteEnName() { this->enName_ = nullptr;};
        inline string getEnName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
        inline Cities& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
        inline Cities& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // parentCode Field Functions 
        bool hasParentCode() const { return this->parentCode_ != nullptr;};
        void deleteParentCode() { this->parentCode_ = nullptr;};
        inline int32_t getParentCode() const { DARABONBA_PTR_GET_DEFAULT(parentCode_, 0) };
        inline Cities& setParentCode(int32_t parentCode) { DARABONBA_PTR_SET_VALUE(parentCode_, parentCode) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
        inline Cities& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline Cities& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> cnName_ {};
        shared_ptr<int32_t> code_ {};
        shared_ptr<int32_t> country_ {};
        shared_ptr<string> countryCode_ {};
        shared_ptr<string> enName_ {};
        shared_ptr<int32_t> level_ {};
        shared_ptr<int32_t> parentCode_ {};
        shared_ptr<int32_t> region_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->cities_ == nullptr
        && this->hasNext_ == nullptr && this->total_ == nullptr; };
      // cities Field Functions 
      bool hasCities() const { return this->cities_ != nullptr;};
      void deleteCities() { this->cities_ = nullptr;};
      inline const vector<Data::Cities> & getCities() const { DARABONBA_PTR_GET_CONST(cities_, vector<Data::Cities>) };
      inline vector<Data::Cities> getCities() { DARABONBA_PTR_GET(cities_, vector<Data::Cities>) };
      inline Data& setCities(const vector<Data::Cities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
      inline Data& setCities(vector<Data::Cities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Data& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::Cities>> cities_ {};
      shared_ptr<bool> hasNext_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tracerId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SearchCityPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SearchCityPageResponseBody::Data) };
    inline SearchCityPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SearchCityPageResponseBody::Data) };
    inline SearchCityPageResponseBody& setData(const SearchCityPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SearchCityPageResponseBody& setData(SearchCityPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SearchCityPageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline SearchCityPageResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchCityPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchCityPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline SearchCityPageResponseBody& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    shared_ptr<SearchCityPageResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
