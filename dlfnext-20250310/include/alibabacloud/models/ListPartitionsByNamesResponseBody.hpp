// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSBYNAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSBYNAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Partition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class ListPartitionsByNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsByNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsByNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
    };
    ListPartitionsByNamesResponseBody() = default ;
    ListPartitionsByNamesResponseBody(const ListPartitionsByNamesResponseBody &) = default ;
    ListPartitionsByNamesResponseBody(ListPartitionsByNamesResponseBody &&) = default ;
    ListPartitionsByNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsByNamesResponseBody() = default ;
    ListPartitionsByNamesResponseBody& operator=(const ListPartitionsByNamesResponseBody &) = default ;
    ListPartitionsByNamesResponseBody& operator=(ListPartitionsByNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->partitions_ == nullptr; };
    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<Partition> & getPartitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<Partition>) };
    inline vector<Partition> getPartitions() { DARABONBA_PTR_GET(partitions_, vector<Partition>) };
    inline ListPartitionsByNamesResponseBody& setPartitions(const vector<Partition> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline ListPartitionsByNamesResponseBody& setPartitions(vector<Partition> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    // 分区。
    shared_ptr<vector<Partition>> partitions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
