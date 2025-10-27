// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARYAPPSRESPONSEBODYSUMMARYAPPINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARYAPPSRESPONSEBODYSUMMARYAPPINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ListSummaryAppsResponseBodySummaryAppInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummaryAppsResponseBodySummaryAppInfos& obj) { 
      DARABONBA_PTR_TO_JSON(SummaryAppInfo, summaryAppInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummaryAppsResponseBodySummaryAppInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(SummaryAppInfo, summaryAppInfo_);
    };
    ListSummaryAppsResponseBodySummaryAppInfos() = default ;
    ListSummaryAppsResponseBodySummaryAppInfos(const ListSummaryAppsResponseBodySummaryAppInfos &) = default ;
    ListSummaryAppsResponseBodySummaryAppInfos(ListSummaryAppsResponseBodySummaryAppInfos &&) = default ;
    ListSummaryAppsResponseBodySummaryAppInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummaryAppsResponseBodySummaryAppInfos() = default ;
    ListSummaryAppsResponseBodySummaryAppInfos& operator=(const ListSummaryAppsResponseBodySummaryAppInfos &) = default ;
    ListSummaryAppsResponseBodySummaryAppInfos& operator=(ListSummaryAppsResponseBodySummaryAppInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->summaryAppInfo_ == nullptr; };
    // summaryAppInfo Field Functions 
    bool hasSummaryAppInfo() const { return this->summaryAppInfo_ != nullptr;};
    void deleteSummaryAppInfo() { this->summaryAppInfo_ = nullptr;};
    inline const vector<Models::ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo> & summaryAppInfo() const { DARABONBA_PTR_GET_CONST(summaryAppInfo_, vector<Models::ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo>) };
    inline vector<Models::ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo> summaryAppInfo() { DARABONBA_PTR_GET(summaryAppInfo_, vector<Models::ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo>) };
    inline ListSummaryAppsResponseBodySummaryAppInfos& setSummaryAppInfo(const vector<Models::ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo> & summaryAppInfo) { DARABONBA_PTR_SET_VALUE(summaryAppInfo_, summaryAppInfo) };
    inline ListSummaryAppsResponseBodySummaryAppInfos& setSummaryAppInfo(vector<Models::ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo> && summaryAppInfo) { DARABONBA_PTR_SET_RVALUE(summaryAppInfo_, summaryAppInfo) };


  protected:
    std::shared_ptr<vector<Models::ListSummaryAppsResponseBodySummaryAppInfosSummaryAppInfo>> summaryAppInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
