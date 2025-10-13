// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsAIWorkspaceDataEnabled, isAIWorkspaceDataEnabled_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsAIWorkspaceDataEnabled, isAIWorkspaceDataEnabled_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    GetResourceGroupShrinkRequest() = default ;
    GetResourceGroupShrinkRequest(const GetResourceGroupShrinkRequest &) = default ;
    GetResourceGroupShrinkRequest(GetResourceGroupShrinkRequest &&) = default ;
    GetResourceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupShrinkRequest() = default ;
    GetResourceGroupShrinkRequest& operator=(const GetResourceGroupShrinkRequest &) = default ;
    GetResourceGroupShrinkRequest& operator=(GetResourceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isAIWorkspaceDataEnabled_ == nullptr
        && return this->tagShrink_ == nullptr; };
    // isAIWorkspaceDataEnabled Field Functions 
    bool hasIsAIWorkspaceDataEnabled() const { return this->isAIWorkspaceDataEnabled_ != nullptr;};
    void deleteIsAIWorkspaceDataEnabled() { this->isAIWorkspaceDataEnabled_ = nullptr;};
    inline bool isAIWorkspaceDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(isAIWorkspaceDataEnabled_, false) };
    inline GetResourceGroupShrinkRequest& setIsAIWorkspaceDataEnabled(bool isAIWorkspaceDataEnabled) { DARABONBA_PTR_SET_VALUE(isAIWorkspaceDataEnabled_, isAIWorkspaceDataEnabled) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline GetResourceGroupShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    std::shared_ptr<bool> isAIWorkspaceDataEnabled_ = nullptr;
    std::shared_ptr<string> tagShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
