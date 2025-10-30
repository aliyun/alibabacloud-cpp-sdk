// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMREQUESTINSTANCEGET_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMREQUESTINSTANCEGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetInstanceDownStreamRequestInstanceGet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDownStreamRequestInstanceGet& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDownStreamRequestInstanceGet& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    GetInstanceDownStreamRequestInstanceGet() = default ;
    GetInstanceDownStreamRequestInstanceGet(const GetInstanceDownStreamRequestInstanceGet &) = default ;
    GetInstanceDownStreamRequestInstanceGet(GetInstanceDownStreamRequestInstanceGet &&) = default ;
    GetInstanceDownStreamRequestInstanceGet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDownStreamRequestInstanceGet() = default ;
    GetInstanceDownStreamRequestInstanceGet& operator=(const GetInstanceDownStreamRequestInstanceGet &) = default ;
    GetInstanceDownStreamRequestInstanceGet& operator=(GetInstanceDownStreamRequestInstanceGet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->nodeType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceDownStreamRequestInstanceGet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetInstanceDownStreamRequestInstanceGet& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
