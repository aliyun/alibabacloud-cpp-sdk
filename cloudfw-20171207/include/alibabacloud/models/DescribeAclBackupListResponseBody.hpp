// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLBACKUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLBACKUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAclBackupListResponseBodyBackups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclBackupListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclBackupListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Backups, backups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclBackupListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Backups, backups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAclBackupListResponseBody() = default ;
    DescribeAclBackupListResponseBody(const DescribeAclBackupListResponseBody &) = default ;
    DescribeAclBackupListResponseBody(DescribeAclBackupListResponseBody &&) = default ;
    DescribeAclBackupListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclBackupListResponseBody() = default ;
    DescribeAclBackupListResponseBody& operator=(const DescribeAclBackupListResponseBody &) = default ;
    DescribeAclBackupListResponseBody& operator=(DescribeAclBackupListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backups_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // backups Field Functions 
    bool hasBackups() const { return this->backups_ != nullptr;};
    void deleteBackups() { this->backups_ = nullptr;};
    inline const vector<DescribeAclBackupListResponseBodyBackups> & backups() const { DARABONBA_PTR_GET_CONST(backups_, vector<DescribeAclBackupListResponseBodyBackups>) };
    inline vector<DescribeAclBackupListResponseBodyBackups> backups() { DARABONBA_PTR_GET(backups_, vector<DescribeAclBackupListResponseBodyBackups>) };
    inline DescribeAclBackupListResponseBody& setBackups(const vector<DescribeAclBackupListResponseBodyBackups> & backups) { DARABONBA_PTR_SET_VALUE(backups_, backups) };
    inline DescribeAclBackupListResponseBody& setBackups(vector<DescribeAclBackupListResponseBodyBackups> && backups) { DARABONBA_PTR_SET_RVALUE(backups_, backups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclBackupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAclBackupListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeAclBackupListResponseBodyBackups>> backups_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
