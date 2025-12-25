// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNamespaceRequestCreateNamespaceRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class CreateNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateNamespaceRequest, createNamespaceRequest_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateNamespaceRequest, createNamespaceRequest_);
    };
    CreateNamespaceRequest() = default ;
    CreateNamespaceRequest(const CreateNamespaceRequest &) = default ;
    CreateNamespaceRequest(CreateNamespaceRequest &&) = default ;
    CreateNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNamespaceRequest() = default ;
    CreateNamespaceRequest& operator=(const CreateNamespaceRequest &) = default ;
    CreateNamespaceRequest& operator=(CreateNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createNamespaceRequest_ == nullptr; };
    // createNamespaceRequest Field Functions 
    bool hasCreateNamespaceRequest() const { return this->createNamespaceRequest_ != nullptr;};
    void deleteCreateNamespaceRequest() { this->createNamespaceRequest_ = nullptr;};
    inline const CreateNamespaceRequestCreateNamespaceRequest & createNamespaceRequest() const { DARABONBA_PTR_GET_CONST(createNamespaceRequest_, CreateNamespaceRequestCreateNamespaceRequest) };
    inline CreateNamespaceRequestCreateNamespaceRequest createNamespaceRequest() { DARABONBA_PTR_GET(createNamespaceRequest_, CreateNamespaceRequestCreateNamespaceRequest) };
    inline CreateNamespaceRequest& setCreateNamespaceRequest(const CreateNamespaceRequestCreateNamespaceRequest & createNamespaceRequest) { DARABONBA_PTR_SET_VALUE(createNamespaceRequest_, createNamespaceRequest) };
    inline CreateNamespaceRequest& setCreateNamespaceRequest(CreateNamespaceRequestCreateNamespaceRequest && createNamespaceRequest) { DARABONBA_PTR_SET_RVALUE(createNamespaceRequest_, createNamespaceRequest) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateNamespaceRequestCreateNamespaceRequest> createNamespaceRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
