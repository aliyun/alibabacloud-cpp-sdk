// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINTEGRATIONVERSIONFORCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINTEGRATIONVERSIONFORCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetIntegrationVersionForCSResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIntegrationVersionForCSResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(integrationVersion, integrationVersion_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIntegrationVersionForCSResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(integrationVersion, integrationVersion_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetIntegrationVersionForCSResponseBody() = default ;
    GetIntegrationVersionForCSResponseBody(const GetIntegrationVersionForCSResponseBody &) = default ;
    GetIntegrationVersionForCSResponseBody(GetIntegrationVersionForCSResponseBody &&) = default ;
    GetIntegrationVersionForCSResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIntegrationVersionForCSResponseBody() = default ;
    GetIntegrationVersionForCSResponseBody& operator=(const GetIntegrationVersionForCSResponseBody &) = default ;
    GetIntegrationVersionForCSResponseBody& operator=(GetIntegrationVersionForCSResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->integrationVersion_ == nullptr
        && this->requestId_ == nullptr; };
    // integrationVersion Field Functions 
    bool hasIntegrationVersion() const { return this->integrationVersion_ != nullptr;};
    void deleteIntegrationVersion() { this->integrationVersion_ = nullptr;};
    inline string getIntegrationVersion() const { DARABONBA_PTR_GET_DEFAULT(integrationVersion_, "") };
    inline GetIntegrationVersionForCSResponseBody& setIntegrationVersion(string integrationVersion) { DARABONBA_PTR_SET_VALUE(integrationVersion_, integrationVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIntegrationVersionForCSResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> integrationVersion_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
