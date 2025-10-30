// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPRIVATEACCESSAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DeletePrivateAccessApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrivateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
    };
    DeletePrivateAccessApplicationRequest() = default ;
    DeletePrivateAccessApplicationRequest(const DeletePrivateAccessApplicationRequest &) = default ;
    DeletePrivateAccessApplicationRequest(DeletePrivateAccessApplicationRequest &&) = default ;
    DeletePrivateAccessApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrivateAccessApplicationRequest() = default ;
    DeletePrivateAccessApplicationRequest& operator=(const DeletePrivateAccessApplicationRequest &) = default ;
    DeletePrivateAccessApplicationRequest& operator=(DeletePrivateAccessApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DeletePrivateAccessApplicationRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
