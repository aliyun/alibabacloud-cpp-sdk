// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDPERMISSIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDPERMISSIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCloudPermissionTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudPermissionTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplateId, cloudPermissionTemplateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudPermissionTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateId, cloudPermissionTemplateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudPermissionTemplateResponseBody() = default ;
    CreateCloudPermissionTemplateResponseBody(const CreateCloudPermissionTemplateResponseBody &) = default ;
    CreateCloudPermissionTemplateResponseBody(CreateCloudPermissionTemplateResponseBody &&) = default ;
    CreateCloudPermissionTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudPermissionTemplateResponseBody() = default ;
    CreateCloudPermissionTemplateResponseBody& operator=(const CreateCloudPermissionTemplateResponseBody &) = default ;
    CreateCloudPermissionTemplateResponseBody& operator=(CreateCloudPermissionTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudPermissionTemplateId_ == nullptr
        && this->requestId_ == nullptr; };
    // cloudPermissionTemplateId Field Functions 
    bool hasCloudPermissionTemplateId() const { return this->cloudPermissionTemplateId_ != nullptr;};
    void deleteCloudPermissionTemplateId() { this->cloudPermissionTemplateId_ = nullptr;};
    inline string getCloudPermissionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateId_, "") };
    inline CreateCloudPermissionTemplateResponseBody& setCloudPermissionTemplateId(string cloudPermissionTemplateId) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateId_, cloudPermissionTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudPermissionTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the permission template.
    shared_ptr<string> cloudPermissionTemplateId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
