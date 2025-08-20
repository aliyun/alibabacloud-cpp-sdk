// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPrivateAccessApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    GetPrivateAccessApplicationRequest() = default ;
    GetPrivateAccessApplicationRequest(const GetPrivateAccessApplicationRequest &) = default ;
    GetPrivateAccessApplicationRequest(GetPrivateAccessApplicationRequest &&) = default ;
    GetPrivateAccessApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrivateAccessApplicationRequest() = default ;
    GetPrivateAccessApplicationRequest& operator=(const GetPrivateAccessApplicationRequest &) = default ;
    GetPrivateAccessApplicationRequest& operator=(GetPrivateAccessApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetPrivateAccessApplicationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    // The ID of the office application. You can obtain the value by calling the following operations:
    // 
    // *   [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): queries office applications.
    // *   [CreatePrivateAccessApplication](~~CreatePrivateAccessApplication~~): creates an office application.
    // 
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
