// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERESOURCEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERESOURCEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteResourceInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteResourceInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllFailed, allFailed_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteResourceInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllFailed, allFailed_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
    };
    DeleteResourceInstancesRequest() = default ;
    DeleteResourceInstancesRequest(const DeleteResourceInstancesRequest &) = default ;
    DeleteResourceInstancesRequest(DeleteResourceInstancesRequest &&) = default ;
    DeleteResourceInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteResourceInstancesRequest() = default ;
    DeleteResourceInstancesRequest& operator=(const DeleteResourceInstancesRequest &) = default ;
    DeleteResourceInstancesRequest& operator=(DeleteResourceInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allFailed_ == nullptr
        && return this->instanceList_ == nullptr; };
    // allFailed Field Functions 
    bool hasAllFailed() const { return this->allFailed_ != nullptr;};
    void deleteAllFailed() { this->allFailed_ = nullptr;};
    inline bool allFailed() const { DARABONBA_PTR_GET_DEFAULT(allFailed_, false) };
    inline DeleteResourceInstancesRequest& setAllFailed(bool allFailed) { DARABONBA_PTR_SET_VALUE(allFailed_, allFailed) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline string instanceList() const { DARABONBA_PTR_GET_DEFAULT(instanceList_, "") };
    inline DeleteResourceInstancesRequest& setInstanceList(string instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };


  protected:
    // Specifies whether to delete all the instances that fail to be created. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> allFailed_ = nullptr;
    // The instances. Separate multiple instances with commas (,), such as `instanceId1,instanceId2`. For more information about how to query the instances, see [ListResourceInstances](https://help.aliyun.com/document_detail/412129.html).
    std::shared_ptr<string> instanceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
