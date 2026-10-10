// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONMETASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONMETASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFunctionMetasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionMetasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HasHttpTrigger, hasHttpTrigger_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionMetasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HasHttpTrigger, hasHttpTrigger_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListFunctionMetasRequest() = default ;
    ListFunctionMetasRequest(const ListFunctionMetasRequest &) = default ;
    ListFunctionMetasRequest(ListFunctionMetasRequest &&) = default ;
    ListFunctionMetasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionMetasRequest() = default ;
    ListFunctionMetasRequest& operator=(const ListFunctionMetasRequest &) = default ;
    ListFunctionMetasRequest& operator=(ListFunctionMetasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasHttpTrigger_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // hasHttpTrigger Field Functions 
    bool hasHasHttpTrigger() const { return this->hasHttpTrigger_ != nullptr;};
    void deleteHasHttpTrigger() { this->hasHttpTrigger_ = nullptr;};
    inline bool getHasHttpTrigger() const { DARABONBA_PTR_GET_DEFAULT(hasHttpTrigger_, false) };
    inline ListFunctionMetasRequest& setHasHttpTrigger(bool hasHttpTrigger) { DARABONBA_PTR_SET_VALUE(hasHttpTrigger_, hasHttpTrigger) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFunctionMetasRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFunctionMetasRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFunctionMetasRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<bool> hasHttpTrigger_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
