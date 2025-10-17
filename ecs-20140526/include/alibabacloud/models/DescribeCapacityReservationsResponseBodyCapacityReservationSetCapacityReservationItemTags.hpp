// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODYCAPACITYRESERVATIONSETCAPACITYRESERVATIONITEMTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONSRESPONSEBODYCAPACITYRESERVATIONSETCAPACITYRESERVATIONITEMTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags() = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags(const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags &) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags(DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags &&) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags() = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags& operator=(const DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags &) = default ;
    DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags& operator=(DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTagsTag>) };
    inline vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTagsTag>) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags& setTag(const vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTags& setTag(vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeCapacityReservationsResponseBodyCapacityReservationSetCapacityReservationItemTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
