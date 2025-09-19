// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERBACKUPMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERBACKUPMACHINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserBackupMachinesResponseBodyMachines.hpp>
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
    virtual bool empty() const override { this->machines_ != nullptr
        && this->requestId_ != nullptr; };
    // machines Field Functions 
    bool hasMachines() const { return this->machines_ != nullptr;};
    void deleteMachines() { this->machines_ = nullptr;};
    inline const vector<DescribeUserBackupMachinesResponseBodyMachines> & machines() const { DARABONBA_PTR_GET_CONST(machines_, vector<DescribeUserBackupMachinesResponseBodyMachines>) };
    inline vector<DescribeUserBackupMachinesResponseBodyMachines> machines() { DARABONBA_PTR_GET(machines_, vector<DescribeUserBackupMachinesResponseBodyMachines>) };
    inline DescribeUserBackupMachinesResponseBody& setMachines(const vector<DescribeUserBackupMachinesResponseBodyMachines> & machines) { DARABONBA_PTR_SET_VALUE(machines_, machines) };
    inline DescribeUserBackupMachinesResponseBody& setMachines(vector<DescribeUserBackupMachinesResponseBodyMachines> && machines) { DARABONBA_PTR_SET_RVALUE(machines_, machines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserBackupMachinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array consisting of the servers to which the anti-ransomware policy is applied.
    std::shared_ptr<vector<DescribeUserBackupMachinesResponseBodyMachines>> machines_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
