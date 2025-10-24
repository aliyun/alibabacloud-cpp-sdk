// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEANDROIDINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEANDROIDINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DeleteAndroidInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAndroidInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
    };
    DeleteAndroidInstanceGroupRequest() = default ;
    DeleteAndroidInstanceGroupRequest(const DeleteAndroidInstanceGroupRequest &) = default ;
    DeleteAndroidInstanceGroupRequest(DeleteAndroidInstanceGroupRequest &&) = default ;
    DeleteAndroidInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAndroidInstanceGroupRequest() = default ;
    DeleteAndroidInstanceGroupRequest& operator=(const DeleteAndroidInstanceGroupRequest &) = default ;
    DeleteAndroidInstanceGroupRequest& operator=(DeleteAndroidInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceGroupIds_ == nullptr; };
    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & instanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> instanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline DeleteAndroidInstanceGroupRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline DeleteAndroidInstanceGroupRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


  protected:
    // The IDs of the instance groups.
    std::shared_ptr<vector<string>> instanceGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
