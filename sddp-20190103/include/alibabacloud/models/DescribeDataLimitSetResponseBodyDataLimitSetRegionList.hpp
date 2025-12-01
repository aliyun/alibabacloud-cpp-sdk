// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODYDATALIMITSETREGIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITSETRESPONSEBODYDATALIMITSETREGIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitSetResponseBodyDataLimitSetRegionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitSetResponseBodyDataLimitSetRegionList& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitSetResponseBodyDataLimitSetRegionList& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDataLimitSetResponseBodyDataLimitSetRegionList() = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetRegionList(const DescribeDataLimitSetResponseBodyDataLimitSetRegionList &) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetRegionList(DescribeDataLimitSetResponseBodyDataLimitSetRegionList &&) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitSetResponseBodyDataLimitSetRegionList() = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetRegionList& operator=(const DescribeDataLimitSetResponseBodyDataLimitSetRegionList &) = default ;
    DescribeDataLimitSetResponseBodyDataLimitSetRegionList& operator=(DescribeDataLimitSetResponseBodyDataLimitSetRegionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->regionId_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetRegionList& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataLimitSetResponseBodyDataLimitSetRegionList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the region.
    std::shared_ptr<string> localName_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
