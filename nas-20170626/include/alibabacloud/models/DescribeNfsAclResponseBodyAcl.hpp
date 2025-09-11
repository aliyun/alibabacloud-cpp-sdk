// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENFSACLRESPONSEBODYACL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENFSACLRESPONSEBODYACL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeNfsAclResponseBodyAcl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNfsAclResponseBodyAcl& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNfsAclResponseBodyAcl& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    DescribeNfsAclResponseBodyAcl() = default ;
    DescribeNfsAclResponseBodyAcl(const DescribeNfsAclResponseBodyAcl &) = default ;
    DescribeNfsAclResponseBodyAcl(DescribeNfsAclResponseBodyAcl &&) = default ;
    DescribeNfsAclResponseBodyAcl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNfsAclResponseBodyAcl() = default ;
    DescribeNfsAclResponseBodyAcl& operator=(const DescribeNfsAclResponseBodyAcl &) = default ;
    DescribeNfsAclResponseBodyAcl& operator=(DescribeNfsAclResponseBodyAcl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeNfsAclResponseBodyAcl& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // Indicates whether the NFS ACL feature is enabled.
    // 
    // *   true: The NFS ACL feature is enabled.
    // *   false: The NFS ACL feature is disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
