// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPMACHINEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPMACHINEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceGroupMachineGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupMachineGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupMachineGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupMachineGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetResourceGroupMachineGroupRequest() = default ;
    GetResourceGroupMachineGroupRequest(const GetResourceGroupMachineGroupRequest &) = default ;
    GetResourceGroupMachineGroupRequest(GetResourceGroupMachineGroupRequest &&) = default ;
    GetResourceGroupMachineGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupMachineGroupRequest() = default ;
    GetResourceGroupMachineGroupRequest& operator=(const GetResourceGroupMachineGroupRequest &) = default ;
    GetResourceGroupMachineGroupRequest& operator=(GetResourceGroupMachineGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetResourceGroupMachineGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetResourceGroupMachineGroupRequestTag>) };
    inline vector<GetResourceGroupMachineGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<GetResourceGroupMachineGroupRequestTag>) };
    inline GetResourceGroupMachineGroupRequest& setTag(const vector<GetResourceGroupMachineGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetResourceGroupMachineGroupRequest& setTag(vector<GetResourceGroupMachineGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<GetResourceGroupMachineGroupRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
