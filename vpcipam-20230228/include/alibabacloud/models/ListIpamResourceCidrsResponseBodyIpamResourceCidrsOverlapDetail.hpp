// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSRESPONSEBODYIPAMRESOURCECIDRSOVERLAPDETAIL_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMRESOURCECIDRSRESPONSEBODYIPAMRESOURCECIDRSOVERLAPDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail& obj) { 
      DARABONBA_PTR_TO_JSON(OverlapResourceCidr, overlapResourceCidr_);
      DARABONBA_PTR_TO_JSON(OverlapResourceId, overlapResourceId_);
      DARABONBA_PTR_TO_JSON(OverlapResourceRegion, overlapResourceRegion_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(OverlapResourceCidr, overlapResourceCidr_);
      DARABONBA_PTR_FROM_JSON(OverlapResourceId, overlapResourceId_);
      DARABONBA_PTR_FROM_JSON(OverlapResourceRegion, overlapResourceRegion_);
    };
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail() = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail(const ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail &) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail(ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail &&) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail() = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail& operator=(const ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail &) = default ;
    ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail& operator=(ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->overlapResourceCidr_ == nullptr
        && return this->overlapResourceId_ == nullptr && return this->overlapResourceRegion_ == nullptr; };
    // overlapResourceCidr Field Functions 
    bool hasOverlapResourceCidr() const { return this->overlapResourceCidr_ != nullptr;};
    void deleteOverlapResourceCidr() { this->overlapResourceCidr_ = nullptr;};
    inline string overlapResourceCidr() const { DARABONBA_PTR_GET_DEFAULT(overlapResourceCidr_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail& setOverlapResourceCidr(string overlapResourceCidr) { DARABONBA_PTR_SET_VALUE(overlapResourceCidr_, overlapResourceCidr) };


    // overlapResourceId Field Functions 
    bool hasOverlapResourceId() const { return this->overlapResourceId_ != nullptr;};
    void deleteOverlapResourceId() { this->overlapResourceId_ = nullptr;};
    inline string overlapResourceId() const { DARABONBA_PTR_GET_DEFAULT(overlapResourceId_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail& setOverlapResourceId(string overlapResourceId) { DARABONBA_PTR_SET_VALUE(overlapResourceId_, overlapResourceId) };


    // overlapResourceRegion Field Functions 
    bool hasOverlapResourceRegion() const { return this->overlapResourceRegion_ != nullptr;};
    void deleteOverlapResourceRegion() { this->overlapResourceRegion_ = nullptr;};
    inline string overlapResourceRegion() const { DARABONBA_PTR_GET_DEFAULT(overlapResourceRegion_, "") };
    inline ListIpamResourceCidrsResponseBodyIpamResourceCidrsOverlapDetail& setOverlapResourceRegion(string overlapResourceRegion) { DARABONBA_PTR_SET_VALUE(overlapResourceRegion_, overlapResourceRegion) };


  protected:
    // The CIDR that overlaps with the current resource.
    std::shared_ptr<string> overlapResourceCidr_ = nullptr;
    // Instance ID that overlaps with the current resource.
    std::shared_ptr<string> overlapResourceId_ = nullptr;
    // The region of instance that overlaps with the current resource.
    std::shared_ptr<string> overlapResourceRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
