// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTLIFECYCLERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTLIFECYCLERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListArtifactLifecycleRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableDeleteTag, enableDeleteTag_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactLifecycleRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableDeleteTag, enableDeleteTag_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListArtifactLifecycleRuleRequest() = default ;
    ListArtifactLifecycleRuleRequest(const ListArtifactLifecycleRuleRequest &) = default ;
    ListArtifactLifecycleRuleRequest(ListArtifactLifecycleRuleRequest &&) = default ;
    ListArtifactLifecycleRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactLifecycleRuleRequest() = default ;
    ListArtifactLifecycleRuleRequest& operator=(const ListArtifactLifecycleRuleRequest &) = default ;
    ListArtifactLifecycleRuleRequest& operator=(ListArtifactLifecycleRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableDeleteTag_ == nullptr
        && this->instanceId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr; };
    // enableDeleteTag Field Functions 
    bool hasEnableDeleteTag() const { return this->enableDeleteTag_ != nullptr;};
    void deleteEnableDeleteTag() { this->enableDeleteTag_ = nullptr;};
    inline bool getEnableDeleteTag() const { DARABONBA_PTR_GET_DEFAULT(enableDeleteTag_, false) };
    inline ListArtifactLifecycleRuleRequest& setEnableDeleteTag(bool enableDeleteTag) { DARABONBA_PTR_SET_VALUE(enableDeleteTag_, enableDeleteTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListArtifactLifecycleRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListArtifactLifecycleRuleRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListArtifactLifecycleRuleRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // Specifies whether to enable lifecycle management for the artifact.
    shared_ptr<bool> enableDeleteTag_ {};
    // The ID of the Container Registry Enterprise Edition instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Maximum value: 100. If you specify a value greater than 100 for this parameter, the system reports a parameter error or uses 100 as the maximum value.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
