// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONTAINERCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONTAINERCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DeleteContainerClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteContainerClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Force, force_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteContainerClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
    };
    DeleteContainerClusterRequest() = default ;
    DeleteContainerClusterRequest(const DeleteContainerClusterRequest &) = default ;
    DeleteContainerClusterRequest(DeleteContainerClusterRequest &&) = default ;
    DeleteContainerClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteContainerClusterRequest() = default ;
    DeleteContainerClusterRequest& operator=(const DeleteContainerClusterRequest &) = default ;
    DeleteContainerClusterRequest& operator=(DeleteContainerClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->force_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteContainerClusterRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteContainerClusterRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
