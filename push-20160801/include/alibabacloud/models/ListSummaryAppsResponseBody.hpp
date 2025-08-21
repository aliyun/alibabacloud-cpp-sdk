// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUMMARYAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUMMARYAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSummaryAppsResponseBodySummaryAppInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ListSummaryAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSummaryAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SummaryAppInfos, summaryAppInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListSummaryAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SummaryAppInfos, summaryAppInfos_);
    };
    ListSummaryAppsResponseBody() = default ;
    ListSummaryAppsResponseBody(const ListSummaryAppsResponseBody &) = default ;
    ListSummaryAppsResponseBody(ListSummaryAppsResponseBody &&) = default ;
    ListSummaryAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSummaryAppsResponseBody() = default ;
    ListSummaryAppsResponseBody& operator=(const ListSummaryAppsResponseBody &) = default ;
    ListSummaryAppsResponseBody& operator=(ListSummaryAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->summaryAppInfos_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSummaryAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summaryAppInfos Field Functions 
    bool hasSummaryAppInfos() const { return this->summaryAppInfos_ != nullptr;};
    void deleteSummaryAppInfos() { this->summaryAppInfos_ = nullptr;};
    inline const ListSummaryAppsResponseBodySummaryAppInfos & summaryAppInfos() const { DARABONBA_PTR_GET_CONST(summaryAppInfos_, ListSummaryAppsResponseBodySummaryAppInfos) };
    inline ListSummaryAppsResponseBodySummaryAppInfos summaryAppInfos() { DARABONBA_PTR_GET(summaryAppInfos_, ListSummaryAppsResponseBodySummaryAppInfos) };
    inline ListSummaryAppsResponseBody& setSummaryAppInfos(const ListSummaryAppsResponseBodySummaryAppInfos & summaryAppInfos) { DARABONBA_PTR_SET_VALUE(summaryAppInfos_, summaryAppInfos) };
    inline ListSummaryAppsResponseBody& setSummaryAppInfos(ListSummaryAppsResponseBodySummaryAppInfos && summaryAppInfos) { DARABONBA_PTR_SET_RVALUE(summaryAppInfos_, summaryAppInfos) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListSummaryAppsResponseBodySummaryAppInfos> summaryAppInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
