// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCloudAccountRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudAccountRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountRoleId, cloudAccountRoleId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudAccountRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountRoleId, cloudAccountRoleId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudAccountRoleResponseBody() = default ;
    CreateCloudAccountRoleResponseBody(const CreateCloudAccountRoleResponseBody &) = default ;
    CreateCloudAccountRoleResponseBody(CreateCloudAccountRoleResponseBody &&) = default ;
    CreateCloudAccountRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudAccountRoleResponseBody() = default ;
    CreateCloudAccountRoleResponseBody& operator=(const CreateCloudAccountRoleResponseBody &) = default ;
    CreateCloudAccountRoleResponseBody& operator=(CreateCloudAccountRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccountRoleId_ == nullptr
        && this->requestId_ == nullptr; };
    // cloudAccountRoleId Field Functions 
    bool hasCloudAccountRoleId() const { return this->cloudAccountRoleId_ != nullptr;};
    void deleteCloudAccountRoleId() { this->cloudAccountRoleId_ = nullptr;};
    inline string getCloudAccountRoleId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleId_, "") };
    inline CreateCloudAccountRoleResponseBody& setCloudAccountRoleId(string cloudAccountRoleId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleId_, cloudAccountRoleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudAccountRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> cloudAccountRoleId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
