// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOLLATIONTIMEZONESRESPONSEBODYCOLLATIONTIMEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOLLATIONTIMEZONESRESPONSEBODYCOLLATIONTIMEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCollationTimeZonesResponseBodyCollationTimeZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCollationTimeZonesResponseBodyCollationTimeZones& obj) { 
      DARABONBA_PTR_TO_JSON(CollationTimeZone, collationTimeZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCollationTimeZonesResponseBodyCollationTimeZones& obj) { 
      DARABONBA_PTR_FROM_JSON(CollationTimeZone, collationTimeZone_);
    };
    DescribeCollationTimeZonesResponseBodyCollationTimeZones() = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZones(const DescribeCollationTimeZonesResponseBodyCollationTimeZones &) = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZones(DescribeCollationTimeZonesResponseBodyCollationTimeZones &&) = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCollationTimeZonesResponseBodyCollationTimeZones() = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZones& operator=(const DescribeCollationTimeZonesResponseBodyCollationTimeZones &) = default ;
    DescribeCollationTimeZonesResponseBodyCollationTimeZones& operator=(DescribeCollationTimeZonesResponseBodyCollationTimeZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collationTimeZone_ == nullptr; };
    // collationTimeZone Field Functions 
    bool hasCollationTimeZone() const { return this->collationTimeZone_ != nullptr;};
    void deleteCollationTimeZone() { this->collationTimeZone_ = nullptr;};
    inline const vector<Models::DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone> & collationTimeZone() const { DARABONBA_PTR_GET_CONST(collationTimeZone_, vector<Models::DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone>) };
    inline vector<Models::DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone> collationTimeZone() { DARABONBA_PTR_GET(collationTimeZone_, vector<Models::DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone>) };
    inline DescribeCollationTimeZonesResponseBodyCollationTimeZones& setCollationTimeZone(const vector<Models::DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone> & collationTimeZone) { DARABONBA_PTR_SET_VALUE(collationTimeZone_, collationTimeZone) };
    inline DescribeCollationTimeZonesResponseBodyCollationTimeZones& setCollationTimeZone(vector<Models::DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone> && collationTimeZone) { DARABONBA_PTR_SET_RVALUE(collationTimeZone_, collationTimeZone) };


  protected:
    std::shared_ptr<vector<Models::DescribeCollationTimeZonesResponseBodyCollationTimeZonesCollationTimeZone>> collationTimeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
