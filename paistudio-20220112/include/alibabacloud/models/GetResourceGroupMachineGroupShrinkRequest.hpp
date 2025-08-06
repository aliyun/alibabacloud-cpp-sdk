// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPMACHINEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPMACHINEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupMachineGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupMachineGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupMachineGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    GetResourceGroupMachineGroupShrinkRequest() = default ;
    GetResourceGroupMachineGroupShrinkRequest(const GetResourceGroupMachineGroupShrinkRequest &) = default ;
    GetResourceGroupMachineGroupShrinkRequest(GetResourceGroupMachineGroupShrinkRequest &&) = default ;
    GetResourceGroupMachineGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupMachineGroupShrinkRequest() = default ;
    GetResourceGroupMachineGroupShrinkRequest& operator=(const GetResourceGroupMachineGroupShrinkRequest &) = default ;
    GetResourceGroupMachineGroupShrinkRequest& operator=(GetResourceGroupMachineGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagShrink_ != nullptr; };
    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline GetResourceGroupMachineGroupShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    std::shared_ptr<string> tagShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
