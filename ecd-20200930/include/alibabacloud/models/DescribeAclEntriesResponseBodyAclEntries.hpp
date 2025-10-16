// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLENTRIESRESPONSEBODYACLENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLENTRIESRESPONSEBODYACLENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeAclEntriesResponseBodyAclEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclEntriesResponseBodyAclEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclEntriesResponseBodyAclEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribeAclEntriesResponseBodyAclEntries() = default ;
    DescribeAclEntriesResponseBodyAclEntries(const DescribeAclEntriesResponseBodyAclEntries &) = default ;
    DescribeAclEntriesResponseBodyAclEntries(DescribeAclEntriesResponseBodyAclEntries &&) = default ;
    DescribeAclEntriesResponseBodyAclEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclEntriesResponseBodyAclEntries() = default ;
    DescribeAclEntriesResponseBodyAclEntries& operator=(const DescribeAclEntriesResponseBodyAclEntries &) = default ;
    DescribeAclEntriesResponseBodyAclEntries& operator=(DescribeAclEntriesResponseBodyAclEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policy_ == nullptr
        && return this->sourceId_ == nullptr && return this->sourceType_ == nullptr; };
    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline DescribeAclEntriesResponseBodyAclEntries& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline DescribeAclEntriesResponseBodyAclEntries& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeAclEntriesResponseBodyAclEntries& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The ACL type.
    // 
    // Valid values:
    // 
    // *   allow: whitelist
    // *   disable: blacklist
    std::shared_ptr<string> policy_ = nullptr;
    // The ID of the instance to which the ACL applies. You can specify an office network ID or a cloud computer ID.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The granularity of the ACL.
    // 
    // Valid values:
    // 
    // *   desktop: cloud computer
    // *   vpc: office network
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
