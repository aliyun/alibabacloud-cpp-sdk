// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertActionsResponseBodyAlertActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(alertActions, alertActions_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActions, alertActions_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAlertActionsResponseBody() = default ;
    ListAlertActionsResponseBody(const ListAlertActionsResponseBody &) = default ;
    ListAlertActionsResponseBody(ListAlertActionsResponseBody &&) = default ;
    ListAlertActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBody() = default ;
    ListAlertActionsResponseBody& operator=(const ListAlertActionsResponseBody &) = default ;
    ListAlertActionsResponseBody& operator=(ListAlertActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertActions_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->total_ != nullptr; };
    // alertActions Field Functions 
    bool hasAlertActions() const { return this->alertActions_ != nullptr;};
    void deleteAlertActions() { this->alertActions_ = nullptr;};
    inline const vector<ListAlertActionsResponseBodyAlertActions> & alertActions() const { DARABONBA_PTR_GET_CONST(alertActions_, vector<ListAlertActionsResponseBodyAlertActions>) };
    inline vector<ListAlertActionsResponseBodyAlertActions> alertActions() { DARABONBA_PTR_GET(alertActions_, vector<ListAlertActionsResponseBodyAlertActions>) };
    inline ListAlertActionsResponseBody& setAlertActions(const vector<ListAlertActionsResponseBodyAlertActions> & alertActions) { DARABONBA_PTR_SET_VALUE(alertActions_, alertActions) };
    inline ListAlertActionsResponseBody& setAlertActions(vector<ListAlertActionsResponseBodyAlertActions> && alertActions) { DARABONBA_PTR_SET_RVALUE(alertActions_, alertActions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAlertActionsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAlertActionsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlertActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAlertActionsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListAlertActionsResponseBodyAlertActions>> alertActions_ = nullptr;
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
