// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCENCDRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCENCDRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class QueryInstanceNcdResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceNcdResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId1, instanceId1_);
      DARABONBA_PTR_TO_JSON(InstanceId2, instanceId2_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ncd, ncd_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceNcdResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId1, instanceId1_);
      DARABONBA_PTR_FROM_JSON(InstanceId2, instanceId2_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ncd, ncd_);
    };
    QueryInstanceNcdResponseBodyContent() = default ;
    QueryInstanceNcdResponseBodyContent(const QueryInstanceNcdResponseBodyContent &) = default ;
    QueryInstanceNcdResponseBodyContent(QueryInstanceNcdResponseBodyContent &&) = default ;
    QueryInstanceNcdResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceNcdResponseBodyContent() = default ;
    QueryInstanceNcdResponseBodyContent& operator=(const QueryInstanceNcdResponseBodyContent &) = default ;
    QueryInstanceNcdResponseBodyContent& operator=(QueryInstanceNcdResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId1_ == nullptr
        && return this->instanceId2_ == nullptr && return this->instanceType_ == nullptr && return this->ncd_ == nullptr; };
    // instanceId1 Field Functions 
    bool hasInstanceId1() const { return this->instanceId1_ != nullptr;};
    void deleteInstanceId1() { this->instanceId1_ = nullptr;};
    inline string instanceId1() const { DARABONBA_PTR_GET_DEFAULT(instanceId1_, "") };
    inline QueryInstanceNcdResponseBodyContent& setInstanceId1(string instanceId1) { DARABONBA_PTR_SET_VALUE(instanceId1_, instanceId1) };


    // instanceId2 Field Functions 
    bool hasInstanceId2() const { return this->instanceId2_ != nullptr;};
    void deleteInstanceId2() { this->instanceId2_ = nullptr;};
    inline string instanceId2() const { DARABONBA_PTR_GET_DEFAULT(instanceId2_, "") };
    inline QueryInstanceNcdResponseBodyContent& setInstanceId2(string instanceId2) { DARABONBA_PTR_SET_VALUE(instanceId2_, instanceId2) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline QueryInstanceNcdResponseBodyContent& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ncd Field Functions 
    bool hasNcd() const { return this->ncd_ != nullptr;};
    void deleteNcd() { this->ncd_ = nullptr;};
    inline int32_t ncd() const { DARABONBA_PTR_GET_DEFAULT(ncd_, 0) };
    inline QueryInstanceNcdResponseBodyContent& setNcd(int32_t ncd) { DARABONBA_PTR_SET_VALUE(ncd_, ncd) };


  protected:
    // Instance 1ID
    std::shared_ptr<string> instanceId1_ = nullptr;
    // Instance 2ID
    std::shared_ptr<string> instanceId2_ = nullptr;
    // Instance Type
    // 
    // Valid value:
    // 
    // *   node: Lingjun node.
    // *   lni: lingjun network interface controller.
    std::shared_ptr<string> instanceType_ = nullptr;
    // network communication distance between instances
    std::shared_ptr<int32_t> ncd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
