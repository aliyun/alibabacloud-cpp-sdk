// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENTITYSTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEENTITYSTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateEntityStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEntityStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEntityStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
    };
    CreateEntityStoreResponseBody() = default ;
    CreateEntityStoreResponseBody(const CreateEntityStoreResponseBody &) = default ;
    CreateEntityStoreResponseBody(CreateEntityStoreResponseBody &&) = default ;
    CreateEntityStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEntityStoreResponseBody() = default ;
    CreateEntityStoreResponseBody& operator=(const CreateEntityStoreResponseBody &) = default ;
    CreateEntityStoreResponseBody& operator=(CreateEntityStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->workspaceName_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEntityStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreateEntityStoreResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
