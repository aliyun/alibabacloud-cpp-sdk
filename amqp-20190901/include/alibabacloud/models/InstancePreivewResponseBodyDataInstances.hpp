// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODYDATAINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEPREIVEWRESPONSEBODYDATAINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InstancePreivewResponseBodyDataInstancesInstancesVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class InstancePreivewResponseBodyDataInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstancePreivewResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstancesVO, instancesVO_);
    };
    friend void from_json(const Darabonba::Json& j, InstancePreivewResponseBodyDataInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancesVO, instancesVO_);
    };
    InstancePreivewResponseBodyDataInstances() = default ;
    InstancePreivewResponseBodyDataInstances(const InstancePreivewResponseBodyDataInstances &) = default ;
    InstancePreivewResponseBodyDataInstances(InstancePreivewResponseBodyDataInstances &&) = default ;
    InstancePreivewResponseBodyDataInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstancePreivewResponseBodyDataInstances() = default ;
    InstancePreivewResponseBodyDataInstances& operator=(const InstancePreivewResponseBodyDataInstances &) = default ;
    InstancePreivewResponseBodyDataInstances& operator=(InstancePreivewResponseBodyDataInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instancesVO_ == nullptr; };
    // instancesVO Field Functions 
    bool hasInstancesVO() const { return this->instancesVO_ != nullptr;};
    void deleteInstancesVO() { this->instancesVO_ = nullptr;};
    inline const vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVO> & instancesVO() const { DARABONBA_PTR_GET_CONST(instancesVO_, vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVO>) };
    inline vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVO> instancesVO() { DARABONBA_PTR_GET(instancesVO_, vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVO>) };
    inline InstancePreivewResponseBodyDataInstances& setInstancesVO(const vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVO> & instancesVO) { DARABONBA_PTR_SET_VALUE(instancesVO_, instancesVO) };
    inline InstancePreivewResponseBodyDataInstances& setInstancesVO(vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVO> && instancesVO) { DARABONBA_PTR_SET_RVALUE(instancesVO_, instancesVO) };


  protected:
    std::shared_ptr<vector<Models::InstancePreivewResponseBodyDataInstancesInstancesVO>> instancesVO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
