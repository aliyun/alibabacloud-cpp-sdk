// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerWebDefenseApplicationDTOS, containerWebDefenseApplicationDTOS_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerWebDefenseApplicationDTOS, containerWebDefenseApplicationDTOS_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    OperateApplicationRequest() = default ;
    OperateApplicationRequest(const OperateApplicationRequest &) = default ;
    OperateApplicationRequest(OperateApplicationRequest &&) = default ;
    OperateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateApplicationRequest() = default ;
    OperateApplicationRequest& operator=(const OperateApplicationRequest &) = default ;
    OperateApplicationRequest& operator=(OperateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ContainerWebDefenseApplicationDTOS : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerWebDefenseApplicationDTOS& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Flag, flag_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, ContainerWebDefenseApplicationDTOS& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Flag, flag_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      ContainerWebDefenseApplicationDTOS() = default ;
      ContainerWebDefenseApplicationDTOS(const ContainerWebDefenseApplicationDTOS &) = default ;
      ContainerWebDefenseApplicationDTOS(ContainerWebDefenseApplicationDTOS &&) = default ;
      ContainerWebDefenseApplicationDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerWebDefenseApplicationDTOS() = default ;
      ContainerWebDefenseApplicationDTOS& operator=(const ContainerWebDefenseApplicationDTOS &) = default ;
      ContainerWebDefenseApplicationDTOS& operator=(ContainerWebDefenseApplicationDTOS &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->flag_ == nullptr && this->id_ == nullptr && this->tag_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ContainerWebDefenseApplicationDTOS& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // flag Field Functions 
      bool hasFlag() const { return this->flag_ != nullptr;};
      void deleteFlag() { this->flag_ = nullptr;};
      inline string getFlag() const { DARABONBA_PTR_GET_DEFAULT(flag_, "") };
      inline ContainerWebDefenseApplicationDTOS& setFlag(string flag) { DARABONBA_PTR_SET_VALUE(flag_, flag) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ContainerWebDefenseApplicationDTOS& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ContainerWebDefenseApplicationDTOS& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // The ID of the cluster to which the container belongs.
      // 
      // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the cluster ID.
      // 
      // This parameter is required.
      shared_ptr<string> clusterId_ {};
      // Specifies whether to apply the configuration to the asset. Valid values:
      // 
      // *   **add**: applied
      // *   **del**: not applied
      // 
      // This parameter is required.
      shared_ptr<string> flag_ {};
      // The application ID. If the application is newly added, you do not need to specify this parameter.
      shared_ptr<int64_t> id_ {};
      // The value of the application tag.
      // 
      // This parameter is required.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->containerWebDefenseApplicationDTOS_ == nullptr
        && this->ruleId_ == nullptr; };
    // containerWebDefenseApplicationDTOS Field Functions 
    bool hasContainerWebDefenseApplicationDTOS() const { return this->containerWebDefenseApplicationDTOS_ != nullptr;};
    void deleteContainerWebDefenseApplicationDTOS() { this->containerWebDefenseApplicationDTOS_ = nullptr;};
    inline const vector<OperateApplicationRequest::ContainerWebDefenseApplicationDTOS> & getContainerWebDefenseApplicationDTOS() const { DARABONBA_PTR_GET_CONST(containerWebDefenseApplicationDTOS_, vector<OperateApplicationRequest::ContainerWebDefenseApplicationDTOS>) };
    inline vector<OperateApplicationRequest::ContainerWebDefenseApplicationDTOS> getContainerWebDefenseApplicationDTOS() { DARABONBA_PTR_GET(containerWebDefenseApplicationDTOS_, vector<OperateApplicationRequest::ContainerWebDefenseApplicationDTOS>) };
    inline OperateApplicationRequest& setContainerWebDefenseApplicationDTOS(const vector<OperateApplicationRequest::ContainerWebDefenseApplicationDTOS> & containerWebDefenseApplicationDTOS) { DARABONBA_PTR_SET_VALUE(containerWebDefenseApplicationDTOS_, containerWebDefenseApplicationDTOS) };
    inline OperateApplicationRequest& setContainerWebDefenseApplicationDTOS(vector<OperateApplicationRequest::ContainerWebDefenseApplicationDTOS> && containerWebDefenseApplicationDTOS) { DARABONBA_PTR_SET_RVALUE(containerWebDefenseApplicationDTOS_, containerWebDefenseApplicationDTOS) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline OperateApplicationRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The container application that is protected from being tampered with.
    // 
    // This parameter is required.
    shared_ptr<vector<OperateApplicationRequest::ContainerWebDefenseApplicationDTOS>> containerWebDefenseApplicationDTOS_ {};
    // The ID of the rule.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
