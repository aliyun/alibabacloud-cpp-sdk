// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPORTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPORTALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HiMarketPortalDomainConfig.hpp>
#include <alibabacloud/models/HiMarketPortalSettingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetPortalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPortalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPortalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPortalResponseBody() = default ;
    GetPortalResponseBody(const GetPortalResponseBody &) = default ;
    GetPortalResponseBody(GetPortalResponseBody &&) = default ;
    GetPortalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPortalResponseBody() = default ;
    GetPortalResponseBody& operator=(const GetPortalResponseBody &) = default ;
    GetPortalResponseBody& operator=(GetPortalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(portalDomainConfig, portalDomainConfig_);
        DARABONBA_PTR_TO_JSON(portalId, portalId_);
        DARABONBA_PTR_TO_JSON(portalSettingConfig, portalSettingConfig_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(portalDomainConfig, portalDomainConfig_);
        DARABONBA_PTR_FROM_JSON(portalId, portalId_);
        DARABONBA_PTR_FROM_JSON(portalSettingConfig, portalSettingConfig_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
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
      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->portalDomainConfig_ == nullptr && this->portalId_ == nullptr && this->portalSettingConfig_ == nullptr
        && this->regionId_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // portalDomainConfig Field Functions 
      bool hasPortalDomainConfig() const { return this->portalDomainConfig_ != nullptr;};
      void deletePortalDomainConfig() { this->portalDomainConfig_ = nullptr;};
      inline const vector<HiMarketPortalDomainConfig> & getPortalDomainConfig() const { DARABONBA_PTR_GET_CONST(portalDomainConfig_, vector<HiMarketPortalDomainConfig>) };
      inline vector<HiMarketPortalDomainConfig> getPortalDomainConfig() { DARABONBA_PTR_GET(portalDomainConfig_, vector<HiMarketPortalDomainConfig>) };
      inline Data& setPortalDomainConfig(const vector<HiMarketPortalDomainConfig> & portalDomainConfig) { DARABONBA_PTR_SET_VALUE(portalDomainConfig_, portalDomainConfig) };
      inline Data& setPortalDomainConfig(vector<HiMarketPortalDomainConfig> && portalDomainConfig) { DARABONBA_PTR_SET_RVALUE(portalDomainConfig_, portalDomainConfig) };


      // portalId Field Functions 
      bool hasPortalId() const { return this->portalId_ != nullptr;};
      void deletePortalId() { this->portalId_ = nullptr;};
      inline string getPortalId() const { DARABONBA_PTR_GET_DEFAULT(portalId_, "") };
      inline Data& setPortalId(string portalId) { DARABONBA_PTR_SET_VALUE(portalId_, portalId) };


      // portalSettingConfig Field Functions 
      bool hasPortalSettingConfig() const { return this->portalSettingConfig_ != nullptr;};
      void deletePortalSettingConfig() { this->portalSettingConfig_ = nullptr;};
      inline const HiMarketPortalSettingConfig & getPortalSettingConfig() const { DARABONBA_PTR_GET_CONST(portalSettingConfig_, HiMarketPortalSettingConfig) };
      inline HiMarketPortalSettingConfig getPortalSettingConfig() { DARABONBA_PTR_GET(portalSettingConfig_, HiMarketPortalSettingConfig) };
      inline Data& setPortalSettingConfig(const HiMarketPortalSettingConfig & portalSettingConfig) { DARABONBA_PTR_SET_VALUE(portalSettingConfig_, portalSettingConfig) };
      inline Data& setPortalSettingConfig(HiMarketPortalSettingConfig && portalSettingConfig) { DARABONBA_PTR_SET_RVALUE(portalSettingConfig_, portalSettingConfig) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The creation time in ISO 8601 (RFC 3339) format in the UTC time zone, such as 2026-05-15T10:00:00Z.
      shared_ptr<string> createdAt_ {};
      // The portal description, which is the Description property of the portal resource.
      shared_ptr<string> description_ {};
      // The portal name, which is the Name property of the portal resource.
      shared_ptr<string> name_ {};
      // The list of portal domain name configurations. The list element is named domainConfig.
      shared_ptr<vector<HiMarketPortalDomainConfig>> portalDomainConfig_ {};
      // The portal ID, which is the primary ID of the portal resource and points to the same portal as the portalId request parameter.
      shared_ptr<string> portalId_ {};
      // The portal settings, including whether to enable username and password authentication, whether to automatically approve developer registrations, and whether to automatically approve subscription requests.
      shared_ptr<HiMarketPortalSettingConfig> portalSettingConfig_ {};
      // The region ID, which is the RegionId property of the portal resource.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPortalResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPortalResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPortalResponseBody::Data) };
    inline GetPortalResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPortalResponseBody::Data) };
    inline GetPortalResponseBody& setData(const GetPortalResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPortalResponseBody& setData(GetPortalResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPortalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPortalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<GetPortalResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
