// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupPolicyResponseBodyBackupPolicyDO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPolicyDO, backupPolicyDO_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPolicyDO, backupPolicyDO_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody(DescribeBackupPolicyResponseBody &&) = default ;
    DescribeBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody& operator=(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody& operator=(DescribeBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupPolicyDO_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // backupPolicyDO Field Functions 
    bool hasBackupPolicyDO() const { return this->backupPolicyDO_ != nullptr;};
    void deleteBackupPolicyDO() { this->backupPolicyDO_ = nullptr;};
    inline const DescribeBackupPolicyResponseBodyBackupPolicyDO & backupPolicyDO() const { DARABONBA_PTR_GET_CONST(backupPolicyDO_, DescribeBackupPolicyResponseBodyBackupPolicyDO) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDO backupPolicyDO() { DARABONBA_PTR_GET(backupPolicyDO_, DescribeBackupPolicyResponseBodyBackupPolicyDO) };
    inline DescribeBackupPolicyResponseBody& setBackupPolicyDO(const DescribeBackupPolicyResponseBodyBackupPolicyDO & backupPolicyDO) { DARABONBA_PTR_SET_VALUE(backupPolicyDO_, backupPolicyDO) };
    inline DescribeBackupPolicyResponseBody& setBackupPolicyDO(DescribeBackupPolicyResponseBodyBackupPolicyDO && backupPolicyDO) { DARABONBA_PTR_SET_RVALUE(backupPolicyDO_, backupPolicyDO) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupPolicyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the backup policy.
    std::shared_ptr<DescribeBackupPolicyResponseBodyBackupPolicyDO> backupPolicyDO_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result of the request.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
