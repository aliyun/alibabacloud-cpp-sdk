// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteInstanceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DeleteInstanceRequest() = default ;
    DeleteInstanceRequest(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest(DeleteInstanceRequest &&) = default ;
    DeleteInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceRequest() = default ;
    DeleteInstanceRequest& operator=(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest& operator=(DeleteInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->tag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DeleteInstanceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DeleteInstanceRequestTag>) };
    inline vector<DeleteInstanceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DeleteInstanceRequestTag>) };
    inline DeleteInstanceRequest& setTag(const vector<DeleteInstanceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DeleteInstanceRequest& setTag(vector<DeleteInstanceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The tag of objects that match the lifecycle rule. You can specify multiple tags.
    std::shared_ptr<vector<DeleteInstanceRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
