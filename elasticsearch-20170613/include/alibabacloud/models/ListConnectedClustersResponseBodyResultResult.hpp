// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTEDCLUSTERSRESPONSEBODYRESULTRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTEDCLUSTERSRESPONSEBODYRESULTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListConnectedClustersResponseBodyResultResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectedClustersResponseBodyResultResult& obj) { 
      DARABONBA_PTR_TO_JSON(instances, instances_);
      DARABONBA_PTR_TO_JSON(networkType, networkType_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectedClustersResponseBodyResultResult& obj) { 
      DARABONBA_PTR_FROM_JSON(instances, instances_);
      DARABONBA_PTR_FROM_JSON(networkType, networkType_);
    };
    ListConnectedClustersResponseBodyResultResult() = default ;
    ListConnectedClustersResponseBodyResultResult(const ListConnectedClustersResponseBodyResultResult &) = default ;
    ListConnectedClustersResponseBodyResultResult(ListConnectedClustersResponseBodyResultResult &&) = default ;
    ListConnectedClustersResponseBodyResultResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectedClustersResponseBodyResultResult() = default ;
    ListConnectedClustersResponseBodyResultResult& operator=(const ListConnectedClustersResponseBodyResultResult &) = default ;
    ListConnectedClustersResponseBodyResultResult& operator=(ListConnectedClustersResponseBodyResultResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instances_ != nullptr
        && this->networkType_ != nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline string instances() const { DARABONBA_PTR_GET_DEFAULT(instances_, "") };
    inline ListConnectedClustersResponseBodyResultResult& setInstances(string instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ListConnectedClustersResponseBodyResultResult& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


  protected:
    // The ID of the remote instance that is connected to the network of the current instance.
    std::shared_ptr<string> instances_ = nullptr;
    // The network type of the instance.
    std::shared_ptr<string> networkType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
