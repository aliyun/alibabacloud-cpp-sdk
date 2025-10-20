// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITIONSUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_PARTITIONSUMMARIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PartitionSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class PartitionSummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PartitionSummaries& obj) { 
      DARABONBA_PTR_TO_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, PartitionSummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(nextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
    };
    PartitionSummaries() = default ;
    PartitionSummaries(const PartitionSummaries &) = default ;
    PartitionSummaries(PartitionSummaries &&) = default ;
    PartitionSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PartitionSummaries() = default ;
    PartitionSummaries& operator=(const PartitionSummaries &) = default ;
    PartitionSummaries& operator=(PartitionSummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->partitions_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline PartitionSummaries& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<PartitionSummary> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<PartitionSummary>) };
    inline vector<PartitionSummary> partitions() { DARABONBA_PTR_GET(partitions_, vector<PartitionSummary>) };
    inline PartitionSummaries& setPartitions(const vector<PartitionSummary> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline PartitionSummaries& setPartitions(vector<PartitionSummary> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // Current page of partition profiles
    std::shared_ptr<vector<PartitionSummary>> partitions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
