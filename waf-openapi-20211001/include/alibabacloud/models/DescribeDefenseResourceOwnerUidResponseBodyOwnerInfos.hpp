// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEOWNERUIDRESPONSEBODYOWNERINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEOWNERUIDRESPONSEBODYOWNERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
    };
    DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos() = default ;
    DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos(const DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos &) = default ;
    DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos(DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos &&) = default ;
    DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos() = default ;
    DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos& operator=(const DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos &) = default ;
    DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos& operator=(DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerUserId_ != nullptr
        && this->resourceName_ != nullptr; };
    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string ownerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeDefenseResourceOwnerUidResponseBodyOwnerInfos& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


  protected:
    std::shared_ptr<string> ownerUserId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
