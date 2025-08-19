// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDGEMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDGEMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteEdgeMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEdgeMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEdgeMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    DeleteEdgeMachineRequest() = default ;
    DeleteEdgeMachineRequest(const DeleteEdgeMachineRequest &) = default ;
    DeleteEdgeMachineRequest(DeleteEdgeMachineRequest &&) = default ;
    DeleteEdgeMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEdgeMachineRequest() = default ;
    DeleteEdgeMachineRequest& operator=(const DeleteEdgeMachineRequest &) = default ;
    DeleteEdgeMachineRequest& operator=(DeleteEdgeMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->force_ != nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline string force() const { DARABONBA_PTR_GET_DEFAULT(force_, "") };
    inline DeleteEdgeMachineRequest& setForce(string force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // Specifies whether to forcefully delete the cloud-native box. Valid values:
    // 
    // *   `true`: forcefully deletes the cloud-native box.
    // *   `false`: does not forcefully delete the cloud-native box.
    // 
    // Default value: `false`.
    std::shared_ptr<string> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
