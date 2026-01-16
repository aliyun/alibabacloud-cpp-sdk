// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLUSTERNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLUSTERNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteClusterNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClusterNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    DeleteClusterNodesShrinkRequest() = default ;
    DeleteClusterNodesShrinkRequest(const DeleteClusterNodesShrinkRequest &) = default ;
    DeleteClusterNodesShrinkRequest(DeleteClusterNodesShrinkRequest &&) = default ;
    DeleteClusterNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClusterNodesShrinkRequest() = default ;
    DeleteClusterNodesShrinkRequest& operator=(const DeleteClusterNodesShrinkRequest &) = default ;
    DeleteClusterNodesShrinkRequest& operator=(DeleteClusterNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr
        && this->clusterId_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline DeleteClusterNodesShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteClusterNodesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // This parameter is required.
    shared_ptr<string> bodyShrink_ {};
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
