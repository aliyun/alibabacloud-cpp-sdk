// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTYSCHEDULECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTYSCHEDULECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetPropertyScheduleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertyScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyScheduleConfig, propertyScheduleConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertyScheduleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyScheduleConfig, propertyScheduleConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPropertyScheduleConfigResponseBody() = default ;
    GetPropertyScheduleConfigResponseBody(const GetPropertyScheduleConfigResponseBody &) = default ;
    GetPropertyScheduleConfigResponseBody(GetPropertyScheduleConfigResponseBody &&) = default ;
    GetPropertyScheduleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertyScheduleConfigResponseBody() = default ;
    GetPropertyScheduleConfigResponseBody& operator=(const GetPropertyScheduleConfigResponseBody &) = default ;
    GetPropertyScheduleConfigResponseBody& operator=(GetPropertyScheduleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyScheduleConfig_ != nullptr
        && this->requestId_ != nullptr; };
    // propertyScheduleConfig Field Functions 
    bool hasPropertyScheduleConfig() const { return this->propertyScheduleConfig_ != nullptr;};
    void deletePropertyScheduleConfig() { this->propertyScheduleConfig_ = nullptr;};
    inline const GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig & propertyScheduleConfig() const { DARABONBA_PTR_GET_CONST(propertyScheduleConfig_, GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig) };
    inline GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig propertyScheduleConfig() { DARABONBA_PTR_GET(propertyScheduleConfig_, GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig) };
    inline GetPropertyScheduleConfigResponseBody& setPropertyScheduleConfig(const GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig & propertyScheduleConfig) { DARABONBA_PTR_SET_VALUE(propertyScheduleConfig_, propertyScheduleConfig) };
    inline GetPropertyScheduleConfigResponseBody& setPropertyScheduleConfig(GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig && propertyScheduleConfig) { DARABONBA_PTR_SET_RVALUE(propertyScheduleConfig_, propertyScheduleConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPropertyScheduleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations for the collection frequency of asset fingerprints.
    std::shared_ptr<GetPropertyScheduleConfigResponseBodyPropertyScheduleConfig> propertyScheduleConfig_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
