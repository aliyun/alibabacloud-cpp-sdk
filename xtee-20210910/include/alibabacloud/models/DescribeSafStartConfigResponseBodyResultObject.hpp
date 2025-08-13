// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFSTARTCONFIGRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFSTARTCONFIGRESPONSEBODYRESULTOBJECT_HPP_
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
  class DescribeSafStartConfigResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafStartConfigResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(deviceTypes, deviceTypes_);
      DARABONBA_PTR_TO_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_TO_JSON(languages, languages_);
      DARABONBA_PTR_TO_JSON(serverRegions, serverRegions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafStartConfigResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(deviceTypes, deviceTypes_);
      DARABONBA_PTR_FROM_JSON(eventCodes, eventCodes_);
      DARABONBA_PTR_FROM_JSON(languages, languages_);
      DARABONBA_PTR_FROM_JSON(serverRegions, serverRegions_);
    };
    DescribeSafStartConfigResponseBodyResultObject() = default ;
    DescribeSafStartConfigResponseBodyResultObject(const DescribeSafStartConfigResponseBodyResultObject &) = default ;
    DescribeSafStartConfigResponseBodyResultObject(DescribeSafStartConfigResponseBodyResultObject &&) = default ;
    DescribeSafStartConfigResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafStartConfigResponseBodyResultObject() = default ;
    DescribeSafStartConfigResponseBodyResultObject& operator=(const DescribeSafStartConfigResponseBodyResultObject &) = default ;
    DescribeSafStartConfigResponseBodyResultObject& operator=(DescribeSafStartConfigResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceTypes_ != nullptr
        && this->eventCodes_ != nullptr && this->languages_ != nullptr && this->serverRegions_ != nullptr; };
    // deviceTypes Field Functions 
    bool hasDeviceTypes() const { return this->deviceTypes_ != nullptr;};
    void deleteDeviceTypes() { this->deviceTypes_ = nullptr;};
    inline const vector<string> & deviceTypes() const { DARABONBA_PTR_GET_CONST(deviceTypes_, vector<string>) };
    inline vector<string> deviceTypes() { DARABONBA_PTR_GET(deviceTypes_, vector<string>) };
    inline DescribeSafStartConfigResponseBodyResultObject& setDeviceTypes(const vector<string> & deviceTypes) { DARABONBA_PTR_SET_VALUE(deviceTypes_, deviceTypes) };
    inline DescribeSafStartConfigResponseBodyResultObject& setDeviceTypes(vector<string> && deviceTypes) { DARABONBA_PTR_SET_RVALUE(deviceTypes_, deviceTypes) };


    // eventCodes Field Functions 
    bool hasEventCodes() const { return this->eventCodes_ != nullptr;};
    void deleteEventCodes() { this->eventCodes_ = nullptr;};
    inline const vector<string> & eventCodes() const { DARABONBA_PTR_GET_CONST(eventCodes_, vector<string>) };
    inline vector<string> eventCodes() { DARABONBA_PTR_GET(eventCodes_, vector<string>) };
    inline DescribeSafStartConfigResponseBodyResultObject& setEventCodes(const vector<string> & eventCodes) { DARABONBA_PTR_SET_VALUE(eventCodes_, eventCodes) };
    inline DescribeSafStartConfigResponseBodyResultObject& setEventCodes(vector<string> && eventCodes) { DARABONBA_PTR_SET_RVALUE(eventCodes_, eventCodes) };


    // languages Field Functions 
    bool hasLanguages() const { return this->languages_ != nullptr;};
    void deleteLanguages() { this->languages_ = nullptr;};
    inline const vector<string> & languages() const { DARABONBA_PTR_GET_CONST(languages_, vector<string>) };
    inline vector<string> languages() { DARABONBA_PTR_GET(languages_, vector<string>) };
    inline DescribeSafStartConfigResponseBodyResultObject& setLanguages(const vector<string> & languages) { DARABONBA_PTR_SET_VALUE(languages_, languages) };
    inline DescribeSafStartConfigResponseBodyResultObject& setLanguages(vector<string> && languages) { DARABONBA_PTR_SET_RVALUE(languages_, languages) };


    // serverRegions Field Functions 
    bool hasServerRegions() const { return this->serverRegions_ != nullptr;};
    void deleteServerRegions() { this->serverRegions_ = nullptr;};
    inline const vector<string> & serverRegions() const { DARABONBA_PTR_GET_CONST(serverRegions_, vector<string>) };
    inline vector<string> serverRegions() { DARABONBA_PTR_GET(serverRegions_, vector<string>) };
    inline DescribeSafStartConfigResponseBodyResultObject& setServerRegions(const vector<string> & serverRegions) { DARABONBA_PTR_SET_VALUE(serverRegions_, serverRegions) };
    inline DescribeSafStartConfigResponseBodyResultObject& setServerRegions(vector<string> && serverRegions) { DARABONBA_PTR_SET_RVALUE(serverRegions_, serverRegions) };


  protected:
    // List of device types.
    std::shared_ptr<vector<string>> deviceTypes_ = nullptr;
    // Event codes.
    std::shared_ptr<vector<string>> eventCodes_ = nullptr;
    // Configuration language details.
    std::shared_ptr<vector<string>> languages_ = nullptr;
    // Server region
    std::shared_ptr<vector<string>> serverRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
