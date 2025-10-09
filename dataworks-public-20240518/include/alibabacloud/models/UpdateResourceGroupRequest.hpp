// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    UpdateResourceGroupRequest() = default ;
    UpdateResourceGroupRequest(const UpdateResourceGroupRequest &) = default ;
    UpdateResourceGroupRequest(UpdateResourceGroupRequest &&) = default ;
    UpdateResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceGroupRequest() = default ;
    UpdateResourceGroupRequest& operator=(const UpdateResourceGroupRequest &) = default ;
    UpdateResourceGroupRequest& operator=(UpdateResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunResourceGroupId_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->remark_ != nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string aliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline UpdateResourceGroupRequest& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateResourceGroupRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResourceGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateResourceGroupRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The ID of the new Alibaba Cloud resource group.
    std::shared_ptr<string> aliyunResourceGroupId_ = nullptr;
    // The ID of the resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The new name that you want to change for the resource group.
    std::shared_ptr<string> name_ = nullptr;
    // The new remarks that you want to modify for the resource group.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
