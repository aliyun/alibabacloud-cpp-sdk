// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLBACKUPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLBACKUPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Backups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Backups& obj) { 
        DARABONBA_PTR_TO_JSON(AclCount, aclCount_);
        DARABONBA_PTR_TO_JSON(BackUpTime, backUpTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
      };
      friend void from_json(const Darabonba::Json& j, Backups& obj) { 
        DARABONBA_PTR_FROM_JSON(AclCount, aclCount_);
        DARABONBA_PTR_FROM_JSON(BackUpTime, backUpTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
      };
      Backups() = default ;
      Backups(const Backups &) = default ;
      Backups(Backups &&) = default ;
      Backups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Backups() = default ;
      Backups& operator=(const Backups &) = default ;
      Backups& operator=(Backups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aclCount_ == nullptr
        && this->backUpTime_ == nullptr && this->description_ == nullptr; };
      // aclCount Field Functions 
      bool hasAclCount() const { return this->aclCount_ != nullptr;};
      void deleteAclCount() { this->aclCount_ = nullptr;};
      inline int32_t getAclCount() const { DARABONBA_PTR_GET_DEFAULT(aclCount_, 0) };
      inline Backups& setAclCount(int32_t aclCount) { DARABONBA_PTR_SET_VALUE(aclCount_, aclCount) };


      // backUpTime Field Functions 
      bool hasBackUpTime() const { return this->backUpTime_ != nullptr;};
      void deleteBackUpTime() { this->backUpTime_ = nullptr;};
      inline int64_t getBackUpTime() const { DARABONBA_PTR_GET_DEFAULT(backUpTime_, 0L) };
      inline Backups& setBackUpTime(int64_t backUpTime) { DARABONBA_PTR_SET_VALUE(backUpTime_, backUpTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Backups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    protected:
      shared_ptr<int32_t> aclCount_ {};
      shared_ptr<int64_t> backUpTime_ {};
      shared_ptr<string> description_ {};
    };

    virtual bool empty() const override { return this->backups_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // backups Field Functions 
    bool hasBackups() const { return this->backups_ != nullptr;};
    void deleteBackups() { this->backups_ = nullptr;};
    inline const vector<DescribeAclBackupListResponseBody::Backups> & getBackups() const { DARABONBA_PTR_GET_CONST(backups_, vector<DescribeAclBackupListResponseBody::Backups>) };
    inline vector<DescribeAclBackupListResponseBody::Backups> getBackups() { DARABONBA_PTR_GET(backups_, vector<DescribeAclBackupListResponseBody::Backups>) };
    inline DescribeAclBackupListResponseBody& setBackups(const vector<DescribeAclBackupListResponseBody::Backups> & backups) { DARABONBA_PTR_SET_VALUE(backups_, backups) };
    inline DescribeAclBackupListResponseBody& setBackups(vector<DescribeAclBackupListResponseBody::Backups> && backups) { DARABONBA_PTR_SET_RVALUE(backups_, backups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAclBackupListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAclBackupListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeAclBackupListResponseBody::Backups>> backups_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
