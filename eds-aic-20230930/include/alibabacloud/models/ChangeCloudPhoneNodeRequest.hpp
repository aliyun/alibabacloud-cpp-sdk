// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ChangeCloudPhoneNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCloudPhoneNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCloudPhoneNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
    };
    ChangeCloudPhoneNodeRequest() = default ;
    ChangeCloudPhoneNodeRequest(const ChangeCloudPhoneNodeRequest &) = default ;
    ChangeCloudPhoneNodeRequest(ChangeCloudPhoneNodeRequest &&) = default ;
    ChangeCloudPhoneNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCloudPhoneNodeRequest() = default ;
    ChangeCloudPhoneNodeRequest& operator=(const ChangeCloudPhoneNodeRequest &) = default ;
    ChangeCloudPhoneNodeRequest& operator=(ChangeCloudPhoneNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->nodeId_ != nullptr && this->phoneCount_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ChangeCloudPhoneNodeRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ChangeCloudPhoneNodeRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // phoneCount Field Functions 
    bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
    void deletePhoneCount() { this->phoneCount_ = nullptr;};
    inline int32_t phoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, 0) };
    inline ChangeCloudPhoneNodeRequest& setPhoneCount(int32_t phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


  protected:
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int32_t> phoneCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
