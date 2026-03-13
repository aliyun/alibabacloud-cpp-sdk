// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIRPORTSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_AIRPORTSEARCHRESPONSEBODY_HPP_
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
  class AirportSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AirportSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, AirportSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    AirportSearchResponseBody() = default ;
    AirportSearchResponseBody(const AirportSearchResponseBody &) = default ;
    AirportSearchResponseBody(AirportSearchResponseBody &&) = default ;
    AirportSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AirportSearchResponseBody() = default ;
    AirportSearchResponseBody& operator=(const AirportSearchResponseBody &) = default ;
    AirportSearchResponseBody& operator=(AirportSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(cities, cities_);
        DARABONBA_PTR_TO_JSON(nearby, nearby_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(cities, cities_);
        DARABONBA_PTR_FROM_JSON(nearby, nearby_);
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
      class Cities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Cities& obj) { 
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(distance, distance_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(travel_name, travelName_);
        };
        friend void from_json(const Darabonba::Json& j, Cities& obj) { 
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(distance, distance_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(travel_name, travelName_);
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
        virtual bool empty() const override { return this->code_ == nullptr
        && this->distance_ == nullptr && this->name_ == nullptr && this->travelName_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Cities& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // distance Field Functions 
        bool hasDistance() const { return this->distance_ != nullptr;};
        void deleteDistance() { this->distance_ = nullptr;};
        inline int32_t getDistance() const { DARABONBA_PTR_GET_DEFAULT(distance_, 0) };
        inline Cities& setDistance(int32_t distance) { DARABONBA_PTR_SET_VALUE(distance_, distance) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Cities& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // travelName Field Functions 
        bool hasTravelName() const { return this->travelName_ != nullptr;};
        void deleteTravelName() { this->travelName_ = nullptr;};
        inline string getTravelName() const { DARABONBA_PTR_GET_DEFAULT(travelName_, "") };
        inline Cities& setTravelName(string travelName) { DARABONBA_PTR_SET_VALUE(travelName_, travelName) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<int32_t> distance_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> travelName_ {};
      };

      virtual bool empty() const override { return this->cities_ == nullptr
        && this->nearby_ == nullptr; };
      // cities Field Functions 
      bool hasCities() const { return this->cities_ != nullptr;};
      void deleteCities() { this->cities_ = nullptr;};
      inline const vector<Module::Cities> & getCities() const { DARABONBA_PTR_GET_CONST(cities_, vector<Module::Cities>) };
      inline vector<Module::Cities> getCities() { DARABONBA_PTR_GET(cities_, vector<Module::Cities>) };
      inline Module& setCities(const vector<Module::Cities> & cities) { DARABONBA_PTR_SET_VALUE(cities_, cities) };
      inline Module& setCities(vector<Module::Cities> && cities) { DARABONBA_PTR_SET_RVALUE(cities_, cities) };


      // nearby Field Functions 
      bool hasNearby() const { return this->nearby_ != nullptr;};
      void deleteNearby() { this->nearby_ = nullptr;};
      inline bool getNearby() const { DARABONBA_PTR_GET_DEFAULT(nearby_, false) };
      inline Module& setNearby(bool nearby) { DARABONBA_PTR_SET_VALUE(nearby_, nearby) };


    protected:
      shared_ptr<vector<Module::Cities>> cities_ {};
      shared_ptr<bool> nearby_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AirportSearchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AirportSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const AirportSearchResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, AirportSearchResponseBody::Module) };
    inline AirportSearchResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, AirportSearchResponseBody::Module) };
    inline AirportSearchResponseBody& setModule(const AirportSearchResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline AirportSearchResponseBody& setModule(AirportSearchResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AirportSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AirportSearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline AirportSearchResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module。
    shared_ptr<AirportSearchResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
