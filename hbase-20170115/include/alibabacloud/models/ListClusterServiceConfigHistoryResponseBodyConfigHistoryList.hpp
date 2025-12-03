// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGHISTORYRESPONSEBODYCONFIGHISTORYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSERVICECONFIGHISTORYRESPONSEBODYCONFIGHISTORYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class ListClusterServiceConfigHistoryResponseBodyConfigHistoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterServiceConfigHistoryResponseBodyConfigHistoryList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigHistory, configHistory_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterServiceConfigHistoryResponseBodyConfigHistoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigHistory, configHistory_);
    };
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryList() = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryList(const ListClusterServiceConfigHistoryResponseBodyConfigHistoryList &) = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryList(ListClusterServiceConfigHistoryResponseBodyConfigHistoryList &&) = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterServiceConfigHistoryResponseBodyConfigHistoryList() = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryList& operator=(const ListClusterServiceConfigHistoryResponseBodyConfigHistoryList &) = default ;
    ListClusterServiceConfigHistoryResponseBodyConfigHistoryList& operator=(ListClusterServiceConfigHistoryResponseBodyConfigHistoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configHistory_ == nullptr; };
    // configHistory Field Functions 
    bool hasConfigHistory() const { return this->configHistory_ != nullptr;};
    void deleteConfigHistory() { this->configHistory_ = nullptr;};
    inline const vector<Models::ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory> & configHistory() const { DARABONBA_PTR_GET_CONST(configHistory_, vector<Models::ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory>) };
    inline vector<Models::ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory> configHistory() { DARABONBA_PTR_GET(configHistory_, vector<Models::ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory>) };
    inline ListClusterServiceConfigHistoryResponseBodyConfigHistoryList& setConfigHistory(const vector<Models::ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory> & configHistory) { DARABONBA_PTR_SET_VALUE(configHistory_, configHistory) };
    inline ListClusterServiceConfigHistoryResponseBodyConfigHistoryList& setConfigHistory(vector<Models::ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory> && configHistory) { DARABONBA_PTR_SET_RVALUE(configHistory_, configHistory) };


  protected:
    std::shared_ptr<vector<Models::ListClusterServiceConfigHistoryResponseBodyConfigHistoryListConfigHistory>> configHistory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
