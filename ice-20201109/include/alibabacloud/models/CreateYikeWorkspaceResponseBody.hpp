// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYIKEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEYIKEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateYikeWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYikeWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProductionId, productionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYikeWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductionId, productionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateYikeWorkspaceResponseBody() = default ;
    CreateYikeWorkspaceResponseBody(const CreateYikeWorkspaceResponseBody &) = default ;
    CreateYikeWorkspaceResponseBody(CreateYikeWorkspaceResponseBody &&) = default ;
    CreateYikeWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYikeWorkspaceResponseBody() = default ;
    CreateYikeWorkspaceResponseBody& operator=(const CreateYikeWorkspaceResponseBody &) = default ;
    CreateYikeWorkspaceResponseBody& operator=(CreateYikeWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productionId_ == nullptr
        && this->requestId_ == nullptr && this->workspaceId_ == nullptr; };
    // productionId Field Functions 
    bool hasProductionId() const { return this->productionId_ != nullptr;};
    void deleteProductionId() { this->productionId_ = nullptr;};
    inline string getProductionId() const { DARABONBA_PTR_GET_DEFAULT(productionId_, "") };
    inline CreateYikeWorkspaceResponseBody& setProductionId(string productionId) { DARABONBA_PTR_SET_VALUE(productionId_, productionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateYikeWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateYikeWorkspaceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> productionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
