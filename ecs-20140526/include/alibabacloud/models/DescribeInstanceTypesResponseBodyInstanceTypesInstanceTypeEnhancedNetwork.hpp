// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPEENHANCEDNETWORK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPEENHANCEDNETWORK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(RssSupport, rssSupport_);
      DARABONBA_PTR_TO_JSON(SriovSupport, sriovSupport_);
      DARABONBA_PTR_TO_JSON(VfQueueNumberPerEni, vfQueueNumberPerEni_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(RssSupport, rssSupport_);
      DARABONBA_PTR_FROM_JSON(SriovSupport, sriovSupport_);
      DARABONBA_PTR_FROM_JSON(VfQueueNumberPerEni, vfQueueNumberPerEni_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rssSupport_ != nullptr
        && this->sriovSupport_ != nullptr && this->vfQueueNumberPerEni_ != nullptr; };
    // rssSupport Field Functions 
    bool hasRssSupport() const { return this->rssSupport_ != nullptr;};
    void deleteRssSupport() { this->rssSupport_ = nullptr;};
    inline bool rssSupport() const { DARABONBA_PTR_GET_DEFAULT(rssSupport_, false) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork& setRssSupport(bool rssSupport) { DARABONBA_PTR_SET_VALUE(rssSupport_, rssSupport) };


    // sriovSupport Field Functions 
    bool hasSriovSupport() const { return this->sriovSupport_ != nullptr;};
    void deleteSriovSupport() { this->sriovSupport_ = nullptr;};
    inline bool sriovSupport() const { DARABONBA_PTR_GET_DEFAULT(sriovSupport_, false) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork& setSriovSupport(bool sriovSupport) { DARABONBA_PTR_SET_VALUE(sriovSupport_, sriovSupport) };


    // vfQueueNumberPerEni Field Functions 
    bool hasVfQueueNumberPerEni() const { return this->vfQueueNumberPerEni_ != nullptr;};
    void deleteVfQueueNumberPerEni() { this->vfQueueNumberPerEni_ = nullptr;};
    inline int32_t vfQueueNumberPerEni() const { DARABONBA_PTR_GET_DEFAULT(vfQueueNumberPerEni_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork& setVfQueueNumberPerEni(int32_t vfQueueNumberPerEni) { DARABONBA_PTR_SET_VALUE(vfQueueNumberPerEni_, vfQueueNumberPerEni) };


  protected:
    // >  This parameter is not publicly available.
    std::shared_ptr<bool> rssSupport_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<bool> sriovSupport_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<int32_t> vfQueueNumberPerEni_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
