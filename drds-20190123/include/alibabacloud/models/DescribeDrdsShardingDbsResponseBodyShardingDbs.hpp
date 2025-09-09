// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSSHARDINGDBSRESPONSEBODYSHARDINGDBS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSSHARDINGDBSRESPONSEBODYSHARDINGDBS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsShardingDbsResponseBodyShardingDbs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsShardingDbsResponseBodyShardingDbs& obj) { 
      DARABONBA_PTR_TO_JSON(ShardingDb, shardingDb_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsShardingDbsResponseBodyShardingDbs& obj) { 
      DARABONBA_PTR_FROM_JSON(ShardingDb, shardingDb_);
    };
    DescribeDrdsShardingDbsResponseBodyShardingDbs() = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbs(const DescribeDrdsShardingDbsResponseBodyShardingDbs &) = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbs(DescribeDrdsShardingDbsResponseBodyShardingDbs &&) = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsShardingDbsResponseBodyShardingDbs() = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbs& operator=(const DescribeDrdsShardingDbsResponseBodyShardingDbs &) = default ;
    DescribeDrdsShardingDbsResponseBodyShardingDbs& operator=(DescribeDrdsShardingDbsResponseBodyShardingDbs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->shardingDb_ != nullptr; };
    // shardingDb Field Functions 
    bool hasShardingDb() const { return this->shardingDb_ != nullptr;};
    void deleteShardingDb() { this->shardingDb_ = nullptr;};
    inline const vector<Models::DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb> & shardingDb() const { DARABONBA_PTR_GET_CONST(shardingDb_, vector<Models::DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb>) };
    inline vector<Models::DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb> shardingDb() { DARABONBA_PTR_GET(shardingDb_, vector<Models::DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb>) };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbs& setShardingDb(const vector<Models::DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb> & shardingDb) { DARABONBA_PTR_SET_VALUE(shardingDb_, shardingDb) };
    inline DescribeDrdsShardingDbsResponseBodyShardingDbs& setShardingDb(vector<Models::DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb> && shardingDb) { DARABONBA_PTR_SET_RVALUE(shardingDb_, shardingDb) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsShardingDbsResponseBodyShardingDbsShardingDb>> shardingDb_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
