// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Instances, instancesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Instances, instancesShrink_);
    };
    UpdateNodesShrinkRequest() = default ;
    UpdateNodesShrinkRequest(const UpdateNodesShrinkRequest &) = default ;
    UpdateNodesShrinkRequest(UpdateNodesShrinkRequest &&) = default ;
    UpdateNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodesShrinkRequest() = default ;
    UpdateNodesShrinkRequest& operator=(const UpdateNodesShrinkRequest &) = default ;
    UpdateNodesShrinkRequest& operator=(UpdateNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->instancesShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateNodesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // instancesShrink Field Functions 
    bool hasInstancesShrink() const { return this->instancesShrink_ != nullptr;};
    void deleteInstancesShrink() { this->instancesShrink_ = nullptr;};
    inline string getInstancesShrink() const { DARABONBA_PTR_GET_DEFAULT(instancesShrink_, "") };
    inline UpdateNodesShrinkRequest& setInstancesShrink(string instancesShrink) { DARABONBA_PTR_SET_VALUE(instancesShrink_, instancesShrink) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The information about the compute nodes that you want to update.
    shared_ptr<string> instancesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
