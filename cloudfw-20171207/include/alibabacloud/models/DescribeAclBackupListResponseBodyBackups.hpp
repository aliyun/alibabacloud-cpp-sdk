// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLBACKUPLISTRESPONSEBODYBACKUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLBACKUPLISTRESPONSEBODYBACKUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclBackupListResponseBodyBackups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclBackupListResponseBodyBackups& obj) { 
      DARABONBA_PTR_TO_JSON(AclCount, aclCount_);
      DARABONBA_PTR_TO_JSON(BackUpTime, backUpTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclBackupListResponseBodyBackups& obj) { 
      DARABONBA_PTR_FROM_JSON(AclCount, aclCount_);
      DARABONBA_PTR_FROM_JSON(BackUpTime, backUpTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    DescribeAclBackupListResponseBodyBackups() = default ;
    DescribeAclBackupListResponseBodyBackups(const DescribeAclBackupListResponseBodyBackups &) = default ;
    DescribeAclBackupListResponseBodyBackups(DescribeAclBackupListResponseBodyBackups &&) = default ;
    DescribeAclBackupListResponseBodyBackups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclBackupListResponseBodyBackups() = default ;
    DescribeAclBackupListResponseBodyBackups& operator=(const DescribeAclBackupListResponseBodyBackups &) = default ;
    DescribeAclBackupListResponseBodyBackups& operator=(DescribeAclBackupListResponseBodyBackups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclCount_ == nullptr
        && return this->backUpTime_ == nullptr && return this->description_ == nullptr; };
    // aclCount Field Functions 
    bool hasAclCount() const { return this->aclCount_ != nullptr;};
    void deleteAclCount() { this->aclCount_ = nullptr;};
    inline int32_t aclCount() const { DARABONBA_PTR_GET_DEFAULT(aclCount_, 0) };
    inline DescribeAclBackupListResponseBodyBackups& setAclCount(int32_t aclCount) { DARABONBA_PTR_SET_VALUE(aclCount_, aclCount) };


    // backUpTime Field Functions 
    bool hasBackUpTime() const { return this->backUpTime_ != nullptr;};
    void deleteBackUpTime() { this->backUpTime_ = nullptr;};
    inline int64_t backUpTime() const { DARABONBA_PTR_GET_DEFAULT(backUpTime_, 0L) };
    inline DescribeAclBackupListResponseBodyBackups& setBackUpTime(int64_t backUpTime) { DARABONBA_PTR_SET_VALUE(backUpTime_, backUpTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAclBackupListResponseBodyBackups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<int32_t> aclCount_ = nullptr;
    std::shared_ptr<int64_t> backUpTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
