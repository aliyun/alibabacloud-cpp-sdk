// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupPolicyResponseBodyBackupPolicyDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPolicyDetail, backupPolicyDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPolicyDetail, backupPolicyDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { return this->backupPolicyDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // backupPolicyDetail Field Functions 
    bool hasBackupPolicyDetail() const { return this->backupPolicyDetail_ != nullptr;};
    void deleteBackupPolicyDetail() { this->backupPolicyDetail_ = nullptr;};
    inline const DescribeBackupPolicyResponseBodyBackupPolicyDetail & backupPolicyDetail() const { DARABONBA_PTR_GET_CONST(backupPolicyDetail_, DescribeBackupPolicyResponseBodyBackupPolicyDetail) };
    inline DescribeBackupPolicyResponseBodyBackupPolicyDetail backupPolicyDetail() { DARABONBA_PTR_GET(backupPolicyDetail_, DescribeBackupPolicyResponseBodyBackupPolicyDetail) };
    inline DescribeBackupPolicyResponseBody& setBackupPolicyDetail(const DescribeBackupPolicyResponseBodyBackupPolicyDetail & backupPolicyDetail) { DARABONBA_PTR_SET_VALUE(backupPolicyDetail_, backupPolicyDetail) };
    inline DescribeBackupPolicyResponseBody& setBackupPolicyDetail(DescribeBackupPolicyResponseBodyBackupPolicyDetail && backupPolicyDetail) { DARABONBA_PTR_SET_RVALUE(backupPolicyDetail_, backupPolicyDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the anti-ransomware policy.
    std::shared_ptr<DescribeBackupPolicyResponseBodyBackupPolicyDetail> backupPolicyDetail_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
