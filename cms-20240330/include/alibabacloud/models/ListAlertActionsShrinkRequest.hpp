// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIdsShrink_);
      DARABONBA_PTR_TO_JSON(alertActionName, alertActionName_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(alertActionName, alertActionName_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListAlertActionsShrinkRequest() = default ;
    ListAlertActionsShrinkRequest(const ListAlertActionsShrinkRequest &) = default ;
    ListAlertActionsShrinkRequest(ListAlertActionsShrinkRequest &&) = default ;
    ListAlertActionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsShrinkRequest() = default ;
    ListAlertActionsShrinkRequest& operator=(const ListAlertActionsShrinkRequest &) = default ;
    ListAlertActionsShrinkRequest& operator=(ListAlertActionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertActionIdsShrink_ == nullptr
        && this->alertActionName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->type_ == nullptr; };
    // alertActionIdsShrink Field Functions 
    bool hasAlertActionIdsShrink() const { return this->alertActionIdsShrink_ != nullptr;};
    void deleteAlertActionIdsShrink() { this->alertActionIdsShrink_ = nullptr;};
    inline string getAlertActionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(alertActionIdsShrink_, "") };
    inline ListAlertActionsShrinkRequest& setAlertActionIdsShrink(string alertActionIdsShrink) { DARABONBA_PTR_SET_VALUE(alertActionIdsShrink_, alertActionIdsShrink) };


    // alertActionName Field Functions 
    bool hasAlertActionName() const { return this->alertActionName_ != nullptr;};
    void deleteAlertActionName() { this->alertActionName_ = nullptr;};
    inline string getAlertActionName() const { DARABONBA_PTR_GET_DEFAULT(alertActionName_, "") };
    inline ListAlertActionsShrinkRequest& setAlertActionName(string alertActionName) { DARABONBA_PTR_SET_VALUE(alertActionName_, alertActionName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAlertActionsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAlertActionsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAlertActionsShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Unique identifier for the action integration.
    shared_ptr<string> alertActionIdsShrink_ {};
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
