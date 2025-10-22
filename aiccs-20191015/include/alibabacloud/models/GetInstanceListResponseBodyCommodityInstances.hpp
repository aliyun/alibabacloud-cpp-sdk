// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYCOMMODITYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYCOMMODITYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetInstanceListResponseBodyCommodityInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyCommodityInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyCommodityInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetInstanceListResponseBodyCommodityInstances() = default ;
    GetInstanceListResponseBodyCommodityInstances(const GetInstanceListResponseBodyCommodityInstances &) = default ;
    GetInstanceListResponseBodyCommodityInstances(GetInstanceListResponseBodyCommodityInstances &&) = default ;
    GetInstanceListResponseBodyCommodityInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyCommodityInstances() = default ;
    GetInstanceListResponseBodyCommodityInstances& operator=(const GetInstanceListResponseBodyCommodityInstances &) = default ;
    GetInstanceListResponseBodyCommodityInstances& operator=(GetInstanceListResponseBodyCommodityInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->name_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceListResponseBodyCommodityInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetInstanceListResponseBodyCommodityInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
