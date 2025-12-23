// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDEPLOYMENTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEDEPLOYMENTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DeleteDeploymentJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDeploymentJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDeploymentJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteDeploymentJobResponseBody() = default ;
    DeleteDeploymentJobResponseBody(const DeleteDeploymentJobResponseBody &) = default ;
    DeleteDeploymentJobResponseBody(DeleteDeploymentJobResponseBody &&) = default ;
    DeleteDeploymentJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDeploymentJobResponseBody() = default ;
    DeleteDeploymentJobResponseBody& operator=(const DeleteDeploymentJobResponseBody &) = default ;
    DeleteDeploymentJobResponseBody& operator=(DeleteDeploymentJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteDeploymentJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
