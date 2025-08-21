// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EMPTYAUTOCCWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EMPTYAUTOCCWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class EmptyAutoCcWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EmptyAutoCcWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, EmptyAutoCcWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    EmptyAutoCcWhitelistRequest() = default ;
    EmptyAutoCcWhitelistRequest(const EmptyAutoCcWhitelistRequest &) = default ;
    EmptyAutoCcWhitelistRequest(EmptyAutoCcWhitelistRequest &&) = default ;
    EmptyAutoCcWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EmptyAutoCcWhitelistRequest() = default ;
    EmptyAutoCcWhitelistRequest& operator=(const EmptyAutoCcWhitelistRequest &) = default ;
    EmptyAutoCcWhitelistRequest& operator=(EmptyAutoCcWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EmptyAutoCcWhitelistRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the instance.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
