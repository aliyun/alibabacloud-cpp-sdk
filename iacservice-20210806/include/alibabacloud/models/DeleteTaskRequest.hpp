// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class DeleteTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(resourceRetentionPolicy, resourceRetentionPolicy_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceRetentionPolicy, resourceRetentionPolicy_);
    };
    DeleteTaskRequest() = default ;
    DeleteTaskRequest(const DeleteTaskRequest &) = default ;
    DeleteTaskRequest(DeleteTaskRequest &&) = default ;
    DeleteTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTaskRequest() = default ;
    DeleteTaskRequest& operator=(const DeleteTaskRequest &) = default ;
    DeleteTaskRequest& operator=(DeleteTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceRetentionPolicy_ == nullptr; };
    // resourceRetentionPolicy Field Functions 
    bool hasResourceRetentionPolicy() const { return this->resourceRetentionPolicy_ != nullptr;};
    void deleteResourceRetentionPolicy() { this->resourceRetentionPolicy_ = nullptr;};
    inline string getResourceRetentionPolicy() const { DARABONBA_PTR_GET_DEFAULT(resourceRetentionPolicy_, "") };
    inline DeleteTaskRequest& setResourceRetentionPolicy(string resourceRetentionPolicy) { DARABONBA_PTR_SET_VALUE(resourceRetentionPolicy_, resourceRetentionPolicy) };


  protected:
    // The data retention policy. If this parameter is not specified, the policy is unconfirmed. If the node has resources or the resource status is unknown, the operation returns a confirmation fault. Set this parameter to RETAIN to delete only the node management record and retain the cloud resources.
    shared_ptr<string> resourceRetentionPolicy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
