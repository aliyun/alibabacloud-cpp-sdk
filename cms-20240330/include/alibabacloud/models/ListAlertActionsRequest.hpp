// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_TO_JSON(alertActionName, alertActionName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
      DARABONBA_PTR_FROM_JSON(alertActionName, alertActionName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAlertActionsRequest() = default ;
    ListAlertActionsRequest(const ListAlertActionsRequest &) = default ;
    ListAlertActionsRequest(ListAlertActionsRequest &&) = default ;
    ListAlertActionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsRequest() = default ;
    ListAlertActionsRequest& operator=(const ListAlertActionsRequest &) = default ;
    ListAlertActionsRequest& operator=(ListAlertActionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertActionIds_ == nullptr
        && this->alertActionName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->type_ == nullptr; };
    // alertActionIds Field Functions 
    bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
    void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
    inline const vector<string> & getAlertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
    inline vector<string> getAlertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
    inline ListAlertActionsRequest& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
    inline ListAlertActionsRequest& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


    // alertActionName Field Functions 
    bool hasAlertActionName() const { return this->alertActionName_ != nullptr;};
    void deleteAlertActionName() { this->alertActionName_ = nullptr;};
    inline string getAlertActionName() const { DARABONBA_PTR_GET_DEFAULT(alertActionName_, "") };
    inline ListAlertActionsRequest& setAlertActionName(string alertActionName) { DARABONBA_PTR_SET_VALUE(alertActionName_, alertActionName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertActionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertActionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertActionsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Unique identifier for the action integration.
    shared_ptr<vector<string>> alertActionIds_ {};
    // Name of the action integration.
    shared_ptr<string> alertActionName_ {};
    // Page number. Default is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size. Default is 100.
    shared_ptr<int32_t> pageSize_ {};
    // Type of the action integration.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
