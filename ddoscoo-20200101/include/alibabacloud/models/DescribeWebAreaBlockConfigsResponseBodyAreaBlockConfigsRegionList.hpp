// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBAREABLOCKCONFIGSRESPONSEBODYAREABLOCKCONFIGSREGIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBAREABLOCKCONFIGSRESPONSEBODYAREABLOCKCONFIGSREGIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList& obj) { 
      DARABONBA_PTR_TO_JSON(Block, block_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList& obj) { 
      DARABONBA_PTR_FROM_JSON(Block, block_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList() = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList(const DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList &) = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList(DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList &&) = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList() = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList& operator=(const DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList &) = default ;
    DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList& operator=(DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->block_ != nullptr
        && this->region_ != nullptr; };
    // block Field Functions 
    bool hasBlock() const { return this->block_ != nullptr;};
    void deleteBlock() { this->block_ = nullptr;};
    inline int32_t block() const { DARABONBA_PTR_GET_DEFAULT(block_, 0) };
    inline DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList& setBlock(int32_t block) { DARABONBA_PTR_SET_VALUE(block_, block) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeWebAreaBlockConfigsResponseBodyAreaBlockConfigsRegionList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // Indicates whether the location is blocked. Valid values:
    // 
    // *   **0**: yes
    // *   **1**: no
    std::shared_ptr<int32_t> block_ = nullptr;
    // The name of the location.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
