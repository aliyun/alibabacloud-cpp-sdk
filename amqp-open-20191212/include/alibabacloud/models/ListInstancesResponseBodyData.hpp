// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyDataInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListInstancesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListInstancesResponseBodyData() = default ;
    ListInstancesResponseBodyData(const ListInstancesResponseBodyData &) = default ;
    ListInstancesResponseBodyData(ListInstancesResponseBodyData &&) = default ;
    ListInstancesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyData() = default ;
    ListInstancesResponseBodyData& operator=(const ListInstancesResponseBodyData &) = default ;
    ListInstancesResponseBodyData& operator=(ListInstancesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instances_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyDataInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Models::ListInstancesResponseBodyDataInstances>) };
    inline vector<Models::ListInstancesResponseBodyDataInstances> instances() { DARABONBA_PTR_GET(instances_, vector<Models::ListInstancesResponseBodyDataInstances>) };
    inline ListInstancesResponseBodyData& setInstances(const vector<Models::ListInstancesResponseBodyDataInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ListInstancesResponseBodyData& setInstances(vector<Models::ListInstancesResponseBodyDataInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstancesResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstancesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The instances.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyDataInstances>> instances_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the end of the current returned page. If this parameter is empty, all data is retrieved.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
