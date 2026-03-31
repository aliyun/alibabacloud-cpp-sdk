// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPEPROPERTIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPEPROPERTIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceTypePropertiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypePropertiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypePropertiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourceTypePropertiesResponseBody() = default ;
    GetResourceTypePropertiesResponseBody(const GetResourceTypePropertiesResponseBody &) = default ;
    GetResourceTypePropertiesResponseBody(GetResourceTypePropertiesResponseBody &&) = default ;
    GetResourceTypePropertiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypePropertiesResponseBody() = default ;
    GetResourceTypePropertiesResponseBody& operator=(const GetResourceTypePropertiesResponseBody &) = default ;
    GetResourceTypePropertiesResponseBody& operator=(GetResourceTypePropertiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->requestId_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline GetResourceTypePropertiesResponseBody& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceTypePropertiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is required.
    shared_ptr<string> configuration_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
