// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateInstanceRequestCreateInstanceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateInstanceRequest, createInstanceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateInstanceRequest, createInstanceRequest_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createInstanceRequest_ == nullptr; };
    // createInstanceRequest Field Functions 
    bool hasCreateInstanceRequest() const { return this->createInstanceRequest_ != nullptr;};
    void deleteCreateInstanceRequest() { this->createInstanceRequest_ = nullptr;};
    inline const CreateInstanceRequestCreateInstanceRequest & createInstanceRequest() const { DARABONBA_PTR_GET_CONST(createInstanceRequest_, CreateInstanceRequestCreateInstanceRequest) };
    inline CreateInstanceRequestCreateInstanceRequest createInstanceRequest() { DARABONBA_PTR_GET(createInstanceRequest_, CreateInstanceRequestCreateInstanceRequest) };
    inline CreateInstanceRequest& setCreateInstanceRequest(const CreateInstanceRequestCreateInstanceRequest & createInstanceRequest) { DARABONBA_PTR_SET_VALUE(createInstanceRequest_, createInstanceRequest) };
    inline CreateInstanceRequest& setCreateInstanceRequest(CreateInstanceRequestCreateInstanceRequest && createInstanceRequest) { DARABONBA_PTR_SET_RVALUE(createInstanceRequest_, createInstanceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateInstanceRequestCreateInstanceRequest> createInstanceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
