// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALERTRULESINPUT_HPP_
#define ALIBABACLOUD_MODELS_QUERYALERTRULESINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAlertRulesFilter.hpp>
#include <alibabacloud/models/Pagination.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class QueryAlertRulesInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAlertRulesInput& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(pagination, pagination_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAlertRulesInput& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(pagination, pagination_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    QueryAlertRulesInput() = default ;
    QueryAlertRulesInput(const QueryAlertRulesInput &) = default ;
    QueryAlertRulesInput(QueryAlertRulesInput &&) = default ;
    QueryAlertRulesInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAlertRulesInput() = default ;
    QueryAlertRulesInput& operator=(const QueryAlertRulesInput &) = default ;
    QueryAlertRulesInput& operator=(QueryAlertRulesInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->pagination_ == nullptr && this->workspace_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const QueryAlertRulesFilter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, QueryAlertRulesFilter) };
    inline QueryAlertRulesFilter getFilter() { DARABONBA_PTR_GET(filter_, QueryAlertRulesFilter) };
    inline QueryAlertRulesInput& setFilter(const QueryAlertRulesFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline QueryAlertRulesInput& setFilter(QueryAlertRulesFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // pagination Field Functions 
    bool hasPagination() const { return this->pagination_ != nullptr;};
    void deletePagination() { this->pagination_ = nullptr;};
    inline const Pagination & getPagination() const { DARABONBA_PTR_GET_CONST(pagination_, Pagination) };
    inline Pagination getPagination() { DARABONBA_PTR_GET(pagination_, Pagination) };
    inline QueryAlertRulesInput& setPagination(const Pagination & pagination) { DARABONBA_PTR_SET_VALUE(pagination_, pagination) };
    inline QueryAlertRulesInput& setPagination(Pagination && pagination) { DARABONBA_PTR_SET_RVALUE(pagination_, pagination) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline QueryAlertRulesInput& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<QueryAlertRulesFilter> filter_ {};
    shared_ptr<Pagination> pagination_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
