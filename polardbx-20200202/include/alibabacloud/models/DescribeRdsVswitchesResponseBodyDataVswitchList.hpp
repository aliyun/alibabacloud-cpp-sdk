// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHESRESPONSEBODYDATAVSWITCHLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSVSWITCHESRESPONSEBODYDATAVSWITCHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRdsVswitchesResponseBodyDataVswitchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsVswitchesResponseBodyDataVswitchList& obj) { 
      DARABONBA_PTR_TO_JSON(AvailabeIpCount, availabeIpCount_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(IzNo, izNo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsVswitchesResponseBodyDataVswitchList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailabeIpCount, availabeIpCount_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
    };
    DescribeRdsVswitchesResponseBodyDataVswitchList() = default ;
    DescribeRdsVswitchesResponseBodyDataVswitchList(const DescribeRdsVswitchesResponseBodyDataVswitchList &) = default ;
    DescribeRdsVswitchesResponseBodyDataVswitchList(DescribeRdsVswitchesResponseBodyDataVswitchList &&) = default ;
    DescribeRdsVswitchesResponseBodyDataVswitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsVswitchesResponseBodyDataVswitchList() = default ;
    DescribeRdsVswitchesResponseBodyDataVswitchList& operator=(const DescribeRdsVswitchesResponseBodyDataVswitchList &) = default ;
    DescribeRdsVswitchesResponseBodyDataVswitchList& operator=(DescribeRdsVswitchesResponseBodyDataVswitchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availabeIpCount_ == nullptr
        && return this->cidrBlock_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->isDefault_ == nullptr
        && return this->izNo_ == nullptr && return this->name_ == nullptr && return this->vpcInstanceId_ == nullptr; };
    // availabeIpCount Field Functions 
    bool hasAvailabeIpCount() const { return this->availabeIpCount_ != nullptr;};
    void deleteAvailabeIpCount() { this->availabeIpCount_ = nullptr;};
    inline string availabeIpCount() const { DARABONBA_PTR_GET_DEFAULT(availabeIpCount_, "") };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setAvailabeIpCount(string availabeIpCount) { DARABONBA_PTR_SET_VALUE(availabeIpCount_, availabeIpCount) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // izNo Field Functions 
    bool hasIzNo() const { return this->izNo_ != nullptr;};
    void deleteIzNo() { this->izNo_ = nullptr;};
    inline string izNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeRdsVswitchesResponseBodyDataVswitchList& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    std::shared_ptr<string> availabeIpCount_ = nullptr;
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> isDefault_ = nullptr;
    std::shared_ptr<string> izNo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // vpc id。
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
