// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEDETAILRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEDETAILRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTableDetailResponseBodyItemsShard.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTableDetailResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableDetailResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Shard, shard_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableDetailResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Shard, shard_);
    };
    DescribeTableDetailResponseBodyItems() = default ;
    DescribeTableDetailResponseBodyItems(const DescribeTableDetailResponseBodyItems &) = default ;
    DescribeTableDetailResponseBodyItems(DescribeTableDetailResponseBodyItems &&) = default ;
    DescribeTableDetailResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableDetailResponseBodyItems() = default ;
    DescribeTableDetailResponseBodyItems& operator=(const DescribeTableDetailResponseBodyItems &) = default ;
    DescribeTableDetailResponseBodyItems& operator=(DescribeTableDetailResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->shard_ == nullptr; };
    // shard Field Functions 
    bool hasShard() const { return this->shard_ != nullptr;};
    void deleteShard() { this->shard_ = nullptr;};
    inline const vector<Models::DescribeTableDetailResponseBodyItemsShard> & shard() const { DARABONBA_PTR_GET_CONST(shard_, vector<Models::DescribeTableDetailResponseBodyItemsShard>) };
    inline vector<Models::DescribeTableDetailResponseBodyItemsShard> shard() { DARABONBA_PTR_GET(shard_, vector<Models::DescribeTableDetailResponseBodyItemsShard>) };
    inline DescribeTableDetailResponseBodyItems& setShard(const vector<Models::DescribeTableDetailResponseBodyItemsShard> & shard) { DARABONBA_PTR_SET_VALUE(shard_, shard) };
    inline DescribeTableDetailResponseBodyItems& setShard(vector<Models::DescribeTableDetailResponseBodyItemsShard> && shard) { DARABONBA_PTR_SET_RVALUE(shard_, shard) };


  protected:
    // The queried shards.
    std::shared_ptr<vector<Models::DescribeTableDetailResponseBodyItemsShard>> shard_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
