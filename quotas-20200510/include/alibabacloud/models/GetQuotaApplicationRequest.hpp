// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    GetQuotaApplicationRequest() = default ;
    GetQuotaApplicationRequest(const GetQuotaApplicationRequest &) = default ;
    GetQuotaApplicationRequest(GetQuotaApplicationRequest &&) = default ;
    GetQuotaApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaApplicationRequest() = default ;
    GetQuotaApplicationRequest& operator=(const GetQuotaApplicationRequest &) = default ;
    GetQuotaApplicationRequest& operator=(GetQuotaApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline GetQuotaApplicationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> applicationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
