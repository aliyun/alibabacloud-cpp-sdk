// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBACKUPMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBACKUPMACHINESRESPONSEBODY_HPP_
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
  class DescribeUserBackupMachinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserBackupMachinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Machines, machines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserBackupMachinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Machines, machines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserBackupMachinesResponseBody() = default ;
    DescribeUserBackupMachinesResponseBody(const DescribeUserBackupMachinesResponseBody &) = default ;
    DescribeUserBackupMachinesResponseBody(DescribeUserBackupMachinesResponseBody &&) = default ;
    DescribeUserBackupMachinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserBackupMachinesResponseBody() = default ;
    DescribeUserBackupMachinesResponseBody& operator=(const DescribeUserBackupMachinesResponseBody &) = default ;
    DescribeUserBackupMachinesResponseBody& operator=(DescribeUserBackupMachinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Machines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Machines& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Machines& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Machines() = default ;
      Machines(const Machines &) = default ;
      Machines(Machines &&) = default ;
      Machines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Machines() = default ;
      Machines& operator=(const Machines &) = default ;
      Machines& operator=(Machines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->policyName_ == nullptr && this->uuid_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Machines& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline Machines& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Machines& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the anti-ransomware policy that is applied to the server.
      shared_ptr<int64_t> id_ {};
      // The name of the anti-ransomware policy that is applied to the server.
      shared_ptr<string> policyName_ {};
      // The UUID of the server to which the anti-ransomware policy is applied.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->machines_ == nullptr
        && this->requestId_ == nullptr; };
    // machines Field Functions 
    bool hasMachines() const { return this->machines_ != nullptr;};
    void deleteMachines() { this->machines_ = nullptr;};
    inline const vector<DescribeUserBackupMachinesResponseBody::Machines> & getMachines() const { DARABONBA_PTR_GET_CONST(machines_, vector<DescribeUserBackupMachinesResponseBody::Machines>) };
    inline vector<DescribeUserBackupMachinesResponseBody::Machines> getMachines() { DARABONBA_PTR_GET(machines_, vector<DescribeUserBackupMachinesResponseBody::Machines>) };
    inline DescribeUserBackupMachinesResponseBody& setMachines(const vector<DescribeUserBackupMachinesResponseBody::Machines> & machines) { DARABONBA_PTR_SET_VALUE(machines_, machines) };
    inline DescribeUserBackupMachinesResponseBody& setMachines(vector<DescribeUserBackupMachinesResponseBody::Machines> && machines) { DARABONBA_PTR_SET_RVALUE(machines_, machines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserBackupMachinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the servers to which the anti-ransomware policy is applied.
    shared_ptr<vector<DescribeUserBackupMachinesResponseBody::Machines>> machines_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
