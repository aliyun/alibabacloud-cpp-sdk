// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsAIWorkspaceDataEnabled, isAIWorkspaceDataEnabled_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsAIWorkspaceDataEnabled, isAIWorkspaceDataEnabled_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetResourceGroupRequest() = default ;
    GetResourceGroupRequest(const GetResourceGroupRequest &) = default ;
    GetResourceGroupRequest(GetResourceGroupRequest &&) = default ;
    GetResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupRequest() = default ;
    GetResourceGroupRequest& operator=(const GetResourceGroupRequest &) = default ;
    GetResourceGroupRequest& operator=(GetResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isAIWorkspaceDataEnabled_ != nullptr
        && this->tag_ != nullptr; };
    // isAIWorkspaceDataEnabled Field Functions 
    bool hasIsAIWorkspaceDataEnabled() const { return this->isAIWorkspaceDataEnabled_ != nullptr;};
    void deleteIsAIWorkspaceDataEnabled() { this->isAIWorkspaceDataEnabled_ = nullptr;};
    inline bool isAIWorkspaceDataEnabled() const { DARABONBA_PTR_GET_DEFAULT(isAIWorkspaceDataEnabled_, false) };
    inline GetResourceGroupRequest& setIsAIWorkspaceDataEnabled(bool isAIWorkspaceDataEnabled) { DARABONBA_PTR_SET_VALUE(isAIWorkspaceDataEnabled_, isAIWorkspaceDataEnabled) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetResourceGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetResourceGroupRequestTag>) };
    inline vector<GetResourceGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<GetResourceGroupRequestTag>) };
    inline GetResourceGroupRequest& setTag(const vector<GetResourceGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetResourceGroupRequest& setTag(vector<GetResourceGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<bool> isAIWorkspaceDataEnabled_ = nullptr;
    std::shared_ptr<vector<GetResourceGroupRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
