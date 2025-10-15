// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORGETPASSWORDCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFORGETPASSWORDCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetForgetPasswordConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetForgetPasswordConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpenForgetPasswordConfiguration, openForgetPasswordConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetForgetPasswordConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenForgetPasswordConfiguration, openForgetPasswordConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetForgetPasswordConfigurationResponseBody() = default ;
    GetForgetPasswordConfigurationResponseBody(const GetForgetPasswordConfigurationResponseBody &) = default ;
    GetForgetPasswordConfigurationResponseBody(GetForgetPasswordConfigurationResponseBody &&) = default ;
    GetForgetPasswordConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetForgetPasswordConfigurationResponseBody() = default ;
    GetForgetPasswordConfigurationResponseBody& operator=(const GetForgetPasswordConfigurationResponseBody &) = default ;
    GetForgetPasswordConfigurationResponseBody& operator=(GetForgetPasswordConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->openForgetPasswordConfiguration_ == nullptr
        && return this->requestId_ == nullptr; };
    // openForgetPasswordConfiguration Field Functions 
    bool hasOpenForgetPasswordConfiguration() const { return this->openForgetPasswordConfiguration_ != nullptr;};
    void deleteOpenForgetPasswordConfiguration() { this->openForgetPasswordConfiguration_ = nullptr;};
    inline const GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration & openForgetPasswordConfiguration() const { DARABONBA_PTR_GET_CONST(openForgetPasswordConfiguration_, GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration) };
    inline GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration openForgetPasswordConfiguration() { DARABONBA_PTR_GET(openForgetPasswordConfiguration_, GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration) };
    inline GetForgetPasswordConfigurationResponseBody& setOpenForgetPasswordConfiguration(const GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration & openForgetPasswordConfiguration) { DARABONBA_PTR_SET_VALUE(openForgetPasswordConfiguration_, openForgetPasswordConfiguration) };
    inline GetForgetPasswordConfigurationResponseBody& setOpenForgetPasswordConfiguration(GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration && openForgetPasswordConfiguration) { DARABONBA_PTR_SET_RVALUE(openForgetPasswordConfiguration_, openForgetPasswordConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetForgetPasswordConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The forgot password configurations.
    std::shared_ptr<GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration> openForgetPasswordConfiguration_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
