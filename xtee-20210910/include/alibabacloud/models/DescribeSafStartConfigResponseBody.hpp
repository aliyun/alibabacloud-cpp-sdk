// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFSTARTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFSTARTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafStartConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafStartConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafStartConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeSafStartConfigResponseBody() = default ;
    DescribeSafStartConfigResponseBody(const DescribeSafStartConfigResponseBody &) = default ;
    DescribeSafStartConfigResponseBody(DescribeSafStartConfigResponseBody &&) = default ;
    DescribeSafStartConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafStartConfigResponseBody() = default ;
    DescribeSafStartConfigResponseBody& operator=(const DescribeSafStartConfigResponseBody &) = default ;
    DescribeSafStartConfigResponseBody& operator=(DescribeSafStartConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(deviceTypes, deviceTypes_);
        DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
        DARABONBA_PTR_TO_JSON(languages, languages_);
        DARABONBA_PTR_TO_JSON(serverRegions, serverRegions_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(deviceTypes, deviceTypes_);
        DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
        DARABONBA_PTR_FROM_JSON(languages, languages_);
        DARABONBA_PTR_FROM_JSON(serverRegions, serverRegions_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceTypes_ == nullptr
        && this->eventCodes_ == nullptr && this->languages_ == nullptr && this->serverRegions_ == nullptr; };
      // deviceTypes Field Functions 
      bool hasDeviceTypes() const { return this->deviceTypes_ != nullptr;};
      void deleteDeviceTypes() { this->deviceTypes_ = nullptr;};
      inline const vector<string> & getDeviceTypes() const { DARABONBA_PTR_GET_CONST(deviceTypes_, vector<string>) };
      inline vector<string> getDeviceTypes() { DARABONBA_PTR_GET(deviceTypes_, vector<string>) };
      inline ResultObject& setDeviceTypes(const vector<string> & deviceTypes) { DARABONBA_PTR_SET_VALUE(deviceTypes_, deviceTypes) };
      inline ResultObject& setDeviceTypes(vector<string> && deviceTypes) { DARABONBA_PTR_SET_RVALUE(deviceTypes_, deviceTypes) };


      // eventCodes Field Functions 
      bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
      void deleteEventCodes() { this->eventCodes_ = nullptr;};
      inline const vector<string> & getEventCodes() const { DARABONBA_PTR_GET_CONST(eventCodes_, vector<string>) };
      inline vector<string> getEventCodes() { DARABONBA_PTR_GET(eventCodes_, vector<string>) };
      inline ResultObject& setEventCodes(const vector<string> & eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };
      inline ResultObject& setEventCodes(vector<string> && eventCodes) { DARABONBA_PTR_SET_RVALUE(eventCodes_, eventCodes) };


      // languages Field Functions 
      bool hasLanguages() const { return this->languages_ != nullptr;};
      void deleteLanguages() { this->languages_ = nullptr;};
      inline const vector<string> & getLanguages() const { DARABONBA_PTR_GET_CONST(languages_, vector<string>) };
      inline vector<string> getLanguages() { DARABONBA_PTR_GET(languages_, vector<string>) };
      inline ResultObject& setLanguages(const vector<string> & languages) { DARABONBA_PTR_SET_VALUE(languages_, languages) };
      inline ResultObject& setLanguages(vector<string> && languages) { DARABONBA_PTR_SET_RVALUE(languages_, languages) };


      // serverRegions Field Functions 
      bool hasServerRegions() const { return this->serverRegions_ != nullptr;};
      void deleteServerRegions() { this->serverRegions_ = nullptr;};
      inline const vector<string> & getServerRegions() const { DARABONBA_PTR_GET_CONST(serverRegions_, vector<string>) };
      inline vector<string> getServerRegions() { DARABONBA_PTR_GET(serverRegions_, vector<string>) };
      inline ResultObject& setServerRegions(const vector<string> & serverRegions) { DARABONBA_PTR_SET_VALUE(serverRegions_, serverRegions) };
      inline ResultObject& setServerRegions(vector<string> && serverRegions) { DARABONBA_PTR_SET_RVALUE(serverRegions_, serverRegions) };


    protected:
      // List of device types.
      shared_ptr<vector<string>> deviceTypes_ {};
      // Event codes.
      shared_ptr<vector<string>> eventCodes_ {};
      // Configuration language details.
      shared_ptr<vector<string>> languages_ {};
      // Server region
      shared_ptr<vector<string>> serverRegions_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSafStartConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeSafStartConfigResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeSafStartConfigResponseBody::ResultObject) };
    inline DescribeSafStartConfigResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeSafStartConfigResponseBody::ResultObject) };
    inline DescribeSafStartConfigResponseBody& setResultObject(const DescribeSafStartConfigResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeSafStartConfigResponseBody& setResultObject(DescribeSafStartConfigResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object
    shared_ptr<DescribeSafStartConfigResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
