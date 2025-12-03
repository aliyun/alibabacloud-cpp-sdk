// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODYACLENTRYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODYACLENTRYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListAttributeResponseBodyAclEntrys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeResponseBodyAclEntrys& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntry, aclEntry_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeResponseBodyAclEntrys& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntry, aclEntry_);
    };
    DescribeAccessControlListAttributeResponseBodyAclEntrys() = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrys(const DescribeAccessControlListAttributeResponseBodyAclEntrys &) = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrys(DescribeAccessControlListAttributeResponseBodyAclEntrys &&) = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeResponseBodyAclEntrys() = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrys& operator=(const DescribeAccessControlListAttributeResponseBodyAclEntrys &) = default ;
    DescribeAccessControlListAttributeResponseBodyAclEntrys& operator=(DescribeAccessControlListAttributeResponseBodyAclEntrys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntry_ == nullptr; };
    // aclEntry Field Functions 
    bool hasAclEntry() const { return this->aclEntry_ != nullptr;};
    void deleteAclEntry() { this->aclEntry_ = nullptr;};
    inline const vector<Models::DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry> & aclEntry() const { DARABONBA_PTR_GET_CONST(aclEntry_, vector<Models::DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry>) };
    inline vector<Models::DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry> aclEntry() { DARABONBA_PTR_GET(aclEntry_, vector<Models::DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry>) };
    inline DescribeAccessControlListAttributeResponseBodyAclEntrys& setAclEntry(const vector<Models::DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry> & aclEntry) { DARABONBA_PTR_SET_VALUE(aclEntry_, aclEntry) };
    inline DescribeAccessControlListAttributeResponseBodyAclEntrys& setAclEntry(vector<Models::DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry> && aclEntry) { DARABONBA_PTR_SET_RVALUE(aclEntry_, aclEntry) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessControlListAttributeResponseBodyAclEntrysAclEntry>> aclEntry_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
