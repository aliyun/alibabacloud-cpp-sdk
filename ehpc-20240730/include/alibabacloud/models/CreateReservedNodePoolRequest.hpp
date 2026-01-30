// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESERVEDNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESERVEDNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateReservedNodePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReservedNodePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HostPostfix, hostPostfix_);
      DARABONBA_PTR_TO_JSON(HostPrefix, hostPrefix_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReservedNodePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HostPostfix, hostPostfix_);
      DARABONBA_PTR_FROM_JSON(HostPrefix, hostPrefix_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateReservedNodePoolRequest() = default ;
    CreateReservedNodePoolRequest(const CreateReservedNodePoolRequest &) = default ;
    CreateReservedNodePoolRequest(CreateReservedNodePoolRequest &&) = default ;
    CreateReservedNodePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReservedNodePoolRequest() = default ;
    CreateReservedNodePoolRequest& operator=(const CreateReservedNodePoolRequest &) = default ;
    CreateReservedNodePoolRequest& operator=(CreateReservedNodePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->count_ == nullptr && this->description_ == nullptr && this->hostPostfix_ == nullptr && this->hostPrefix_ == nullptr && this->name_ == nullptr
        && this->vSwitchId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateReservedNodePoolRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline CreateReservedNodePoolRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateReservedNodePoolRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hostPostfix Field Functions 
    bool hasHostPostfix() const { return this->hostPostfix_ != nullptr;};
    void deleteHostPostfix() { this->hostPostfix_ = nullptr;};
    inline string getHostPostfix() const { DARABONBA_PTR_GET_DEFAULT(hostPostfix_, "") };
    inline CreateReservedNodePoolRequest& setHostPostfix(string hostPostfix) { DARABONBA_PTR_SET_VALUE(hostPostfix_, hostPostfix) };


    // hostPrefix Field Functions 
    bool hasHostPrefix() const { return this->hostPrefix_ != nullptr;};
    void deleteHostPrefix() { this->hostPrefix_ = nullptr;};
    inline string getHostPrefix() const { DARABONBA_PTR_GET_DEFAULT(hostPrefix_, "") };
    inline CreateReservedNodePoolRequest& setHostPrefix(string hostPrefix) { DARABONBA_PTR_SET_VALUE(hostPrefix_, hostPrefix) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateReservedNodePoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateReservedNodePoolRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    shared_ptr<string> clusterId_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> hostPostfix_ {};
    shared_ptr<string> hostPrefix_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
