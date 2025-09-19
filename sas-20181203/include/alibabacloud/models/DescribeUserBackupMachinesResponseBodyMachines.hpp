// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBACKUPMACHINESRESPONSEBODYMACHINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBACKUPMACHINESRESPONSEBODYMACHINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUserBackupMachinesResponseBodyMachines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBackupMachinesResponseBodyMachines& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBackupMachinesResponseBodyMachines& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeUserBackupMachinesResponseBodyMachines() = default ;
    DescribeUserBackupMachinesResponseBodyMachines(const DescribeUserBackupMachinesResponseBodyMachines &) = default ;
    DescribeUserBackupMachinesResponseBodyMachines(DescribeUserBackupMachinesResponseBodyMachines &&) = default ;
    DescribeUserBackupMachinesResponseBodyMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBackupMachinesResponseBodyMachines() = default ;
    DescribeUserBackupMachinesResponseBodyMachines& operator=(const DescribeUserBackupMachinesResponseBodyMachines &) = default ;
    DescribeUserBackupMachinesResponseBodyMachines& operator=(DescribeUserBackupMachinesResponseBodyMachines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->policyName_ != nullptr && this->uuid_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeUserBackupMachinesResponseBodyMachines& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeUserBackupMachinesResponseBodyMachines& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeUserBackupMachinesResponseBodyMachines& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the anti-ransomware policy that is applied to the server.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the anti-ransomware policy that is applied to the server.
    std::shared_ptr<string> policyName_ = nullptr;
    // The UUID of the server to which the anti-ransomware policy is applied.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
