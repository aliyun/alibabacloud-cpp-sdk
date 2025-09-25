// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINTEGRATIONPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINTEGRATIONPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DeleteIntegrationPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIntegrationPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    DeleteIntegrationPolicyRequest() = default ;
    DeleteIntegrationPolicyRequest(const DeleteIntegrationPolicyRequest &) = default ;
    DeleteIntegrationPolicyRequest(DeleteIntegrationPolicyRequest &&) = default ;
    DeleteIntegrationPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIntegrationPolicyRequest() = default ;
    DeleteIntegrationPolicyRequest& operator=(const DeleteIntegrationPolicyRequest &) = default ;
    DeleteIntegrationPolicyRequest& operator=(DeleteIntegrationPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->force_ != nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteIntegrationPolicyRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    std::shared_ptr<bool> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
