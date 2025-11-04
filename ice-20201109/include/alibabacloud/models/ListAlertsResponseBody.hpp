// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertsResponseBodyAlerts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Alerts, alerts_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Alerts, alerts_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlertsResponseBody() = default ;
    ListAlertsResponseBody(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody(ListAlertsResponseBody &&) = default ;
    ListAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBody() = default ;
    ListAlertsResponseBody& operator=(const ListAlertsResponseBody &) = default ;
    ListAlertsResponseBody& operator=(ListAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alerts_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // alerts Field Functions 
    bool hasAlerts() const { return this->alerts_ != nullptr;};
    void deleteAlerts() { this->alerts_ = nullptr;};
    inline const vector<ListAlertsResponseBodyAlerts> & alerts() const { DARABONBA_PTR_GET_CONST(alerts_, vector<ListAlertsResponseBodyAlerts>) };
    inline vector<ListAlertsResponseBodyAlerts> alerts() { DARABONBA_PTR_GET(alerts_, vector<ListAlertsResponseBodyAlerts>) };
    inline ListAlertsResponseBody& setAlerts(const vector<ListAlertsResponseBodyAlerts> & alerts) { DARABONBA_PTR_SET_VALUE(alerts_, alerts) };
    inline ListAlertsResponseBody& setAlerts(vector<ListAlertsResponseBodyAlerts> && alerts) { DARABONBA_PTR_SET_RVALUE(alerts_, alerts) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListAlertsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAlertsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The alerts.
    std::shared_ptr<vector<ListAlertsResponseBodyAlerts>> alerts_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10. Valid values: 1 to 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // **Request ID**
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
