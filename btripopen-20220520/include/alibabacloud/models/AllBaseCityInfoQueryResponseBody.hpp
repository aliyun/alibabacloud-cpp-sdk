// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLBASECITYINFOQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ALLBASECITYINFOQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AllBaseCityInfoQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllBaseCityInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, AllBaseCityInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    AllBaseCityInfoQueryResponseBody() = default ;
    AllBaseCityInfoQueryResponseBody(const AllBaseCityInfoQueryResponseBody &) = default ;
    AllBaseCityInfoQueryResponseBody(AllBaseCityInfoQueryResponseBody &&) = default ;
    AllBaseCityInfoQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllBaseCityInfoQueryResponseBody() = default ;
    AllBaseCityInfoQueryResponseBody& operator=(const AllBaseCityInfoQueryResponseBody &) = default ;
    AllBaseCityInfoQueryResponseBody& operator=(AllBaseCityInfoQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(all_city_base_info_list, allCityBaseInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(all_city_base_info_list, allCityBaseInfoList_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AllCityBaseInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllCityBaseInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(adcode, adcode_);
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_level, cityLevel_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(cn_name_tree, cnNameTree_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(other_name_list, otherNameList_);
        };
        friend void from_json(const Darabonba::Json& j, AllCityBaseInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(adcode, adcode_);
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_level, cityLevel_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(cn_name_tree, cnNameTree_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(other_name_list, otherNameList_);
        };
        AllCityBaseInfoList() = default ;
        AllCityBaseInfoList(const AllCityBaseInfoList &) = default ;
        AllCityBaseInfoList(AllCityBaseInfoList &&) = default ;
        AllCityBaseInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllCityBaseInfoList() = default ;
        AllCityBaseInfoList& operator=(const AllCityBaseInfoList &) = default ;
        AllCityBaseInfoList& operator=(AllCityBaseInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adcode_ == nullptr
        && this->cityCode_ == nullptr && this->cityLevel_ == nullptr && this->cityName_ == nullptr && this->cnNameTree_ == nullptr && this->id_ == nullptr
        && this->otherNameList_ == nullptr; };
        // adcode Field Functions 
        bool hasAdcode() const { return this->adcode_ != nullptr;};
        void deleteAdcode() { this->adcode_ = nullptr;};
        inline string getAdcode() const { DARABONBA_PTR_GET_DEFAULT(adcode_, "") };
        inline AllCityBaseInfoList& setAdcode(string adcode) { DARABONBA_PTR_SET_VALUE(adcode_, adcode) };


        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline AllCityBaseInfoList& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityLevel Field Functions 
        bool hasCityLevel() const { return this->cityLevel_ != nullptr;};
        void deleteCityLevel() { this->cityLevel_ = nullptr;};
        inline string getCityLevel() const { DARABONBA_PTR_GET_DEFAULT(cityLevel_, "") };
        inline AllCityBaseInfoList& setCityLevel(string cityLevel) { DARABONBA_PTR_SET_VALUE(cityLevel_, cityLevel) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline AllCityBaseInfoList& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // cnNameTree Field Functions 
        bool hasCnNameTree() const { return this->cnNameTree_ != nullptr;};
        void deleteCnNameTree() { this->cnNameTree_ = nullptr;};
        inline string getCnNameTree() const { DARABONBA_PTR_GET_DEFAULT(cnNameTree_, "") };
        inline AllCityBaseInfoList& setCnNameTree(string cnNameTree) { DARABONBA_PTR_SET_VALUE(cnNameTree_, cnNameTree) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline AllCityBaseInfoList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // otherNameList Field Functions 
        bool hasOtherNameList() const { return this->otherNameList_ != nullptr;};
        void deleteOtherNameList() { this->otherNameList_ = nullptr;};
        inline const vector<string> & getOtherNameList() const { DARABONBA_PTR_GET_CONST(otherNameList_, vector<string>) };
        inline vector<string> getOtherNameList() { DARABONBA_PTR_GET(otherNameList_, vector<string>) };
        inline AllCityBaseInfoList& setOtherNameList(const vector<string> & otherNameList) { DARABONBA_PTR_SET_VALUE(otherNameList_, otherNameList) };
        inline AllCityBaseInfoList& setOtherNameList(vector<string> && otherNameList) { DARABONBA_PTR_SET_RVALUE(otherNameList_, otherNameList) };


      protected:
        shared_ptr<string> adcode_ {};
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityLevel_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<string> cnNameTree_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<vector<string>> otherNameList_ {};
      };

      virtual bool empty() const override { return this->allCityBaseInfoList_ == nullptr; };
      // allCityBaseInfoList Field Functions 
      bool hasAllCityBaseInfoList() const { return this->allCityBaseInfoList_ != nullptr;};
      void deleteAllCityBaseInfoList() { this->allCityBaseInfoList_ = nullptr;};
      inline const vector<Module::AllCityBaseInfoList> & getAllCityBaseInfoList() const { DARABONBA_PTR_GET_CONST(allCityBaseInfoList_, vector<Module::AllCityBaseInfoList>) };
      inline vector<Module::AllCityBaseInfoList> getAllCityBaseInfoList() { DARABONBA_PTR_GET(allCityBaseInfoList_, vector<Module::AllCityBaseInfoList>) };
      inline Module& setAllCityBaseInfoList(const vector<Module::AllCityBaseInfoList> & allCityBaseInfoList) { DARABONBA_PTR_SET_VALUE(allCityBaseInfoList_, allCityBaseInfoList) };
      inline Module& setAllCityBaseInfoList(vector<Module::AllCityBaseInfoList> && allCityBaseInfoList) { DARABONBA_PTR_SET_RVALUE(allCityBaseInfoList_, allCityBaseInfoList) };


    protected:
      shared_ptr<vector<Module::AllCityBaseInfoList>> allCityBaseInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AllBaseCityInfoQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AllBaseCityInfoQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const AllBaseCityInfoQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, AllBaseCityInfoQueryResponseBody::Module) };
    inline AllBaseCityInfoQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, AllBaseCityInfoQueryResponseBody::Module) };
    inline AllBaseCityInfoQueryResponseBody& setModule(const AllBaseCityInfoQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline AllBaseCityInfoQueryResponseBody& setModule(AllBaseCityInfoQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AllBaseCityInfoQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AllBaseCityInfoQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline AllBaseCityInfoQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<AllBaseCityInfoQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
