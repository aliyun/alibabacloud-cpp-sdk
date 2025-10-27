// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSRESPONSEBODYBACKUPMACHINESTATUSERRORLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPMACHINESTATUSRESPONSEBODYBACKUPMACHINESTATUSERRORLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorStatus, errorStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorStatus, errorStatus_);
    };
    DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList() = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList(const DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList &) = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList(DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList &&) = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList() = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList& operator=(const DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList &) = default ;
    DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList& operator=(DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorStatus_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorStatus Field Functions 
    bool hasErrorStatus() const { return this->errorStatus_ != nullptr;};
    void deleteErrorStatus() { this->errorStatus_ = nullptr;};
    inline string errorStatus() const { DARABONBA_PTR_GET_DEFAULT(errorStatus_, "") };
    inline DescribeBackupMachineStatusResponseBodyBackupMachineStatusErrorList& setErrorStatus(string errorStatus) { DARABONBA_PTR_SET_VALUE(errorStatus_, errorStatus) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
