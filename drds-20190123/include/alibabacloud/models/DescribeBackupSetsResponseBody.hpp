// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupSetsResponseBodyBackupSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupSets, backupSets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupSets, backupSets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBackupSetsResponseBody() = default ;
    DescribeBackupSetsResponseBody(const DescribeBackupSetsResponseBody &) = default ;
    DescribeBackupSetsResponseBody(DescribeBackupSetsResponseBody &&) = default ;
    DescribeBackupSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetsResponseBody() = default ;
    DescribeBackupSetsResponseBody& operator=(const DescribeBackupSetsResponseBody &) = default ;
    DescribeBackupSetsResponseBody& operator=(DescribeBackupSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupSets_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // backupSets Field Functions 
    bool hasBackupSets() const { return this->backupSets_ != nullptr;};
    void deleteBackupSets() { this->backupSets_ = nullptr;};
    inline const DescribeBackupSetsResponseBodyBackupSets & backupSets() const { DARABONBA_PTR_GET_CONST(backupSets_, DescribeBackupSetsResponseBodyBackupSets) };
    inline DescribeBackupSetsResponseBodyBackupSets backupSets() { DARABONBA_PTR_GET(backupSets_, DescribeBackupSetsResponseBodyBackupSets) };
    inline DescribeBackupSetsResponseBody& setBackupSets(const DescribeBackupSetsResponseBodyBackupSets & backupSets) { DARABONBA_PTR_SET_VALUE(backupSets_, backupSets) };
    inline DescribeBackupSetsResponseBody& setBackupSets(DescribeBackupSetsResponseBodyBackupSets && backupSets) { DARABONBA_PTR_SET_RVALUE(backupSets_, backupSets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupSetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of backup sets.
    std::shared_ptr<DescribeBackupSetsResponseBodyBackupSets> backupSets_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
