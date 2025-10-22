// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXCURRENTVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXCURRENTVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetIndexCurrentValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexCurrentValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DepIds, depIds_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexCurrentValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DepIds, depIds_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetIndexCurrentValueRequest() = default ;
    GetIndexCurrentValueRequest(const GetIndexCurrentValueRequest &) = default ;
    GetIndexCurrentValueRequest(GetIndexCurrentValueRequest &&) = default ;
    GetIndexCurrentValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexCurrentValueRequest() = default ;
    GetIndexCurrentValueRequest& operator=(const GetIndexCurrentValueRequest &) = default ;
    GetIndexCurrentValueRequest& operator=(GetIndexCurrentValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->depIds_ == nullptr
        && return this->groupIds_ == nullptr && return this->instanceId_ == nullptr; };
    // depIds Field Functions 
    bool hasDepIds() const { return this->depIds_ != nullptr;};
    void deleteDepIds() { this->depIds_ = nullptr;};
    inline string depIds() const { DARABONBA_PTR_GET_DEFAULT(depIds_, "") };
    inline GetIndexCurrentValueRequest& setDepIds(string depIds) { DARABONBA_PTR_SET_VALUE(depIds_, depIds) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline string groupIds() const { DARABONBA_PTR_GET_DEFAULT(groupIds_, "") };
    inline GetIndexCurrentValueRequest& setGroupIds(string groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetIndexCurrentValueRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> depIds_ = nullptr;
    std::shared_ptr<string> groupIds_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
