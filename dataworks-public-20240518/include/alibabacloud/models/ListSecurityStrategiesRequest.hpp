// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECURITYSTRATEGIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSECURITYSTRATEGIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListSecurityStrategiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecurityStrategiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlModule, controlModule_);
      DARABONBA_PTR_TO_JSON(ControlSubModule, controlSubModule_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecurityStrategiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlModule, controlModule_);
      DARABONBA_PTR_FROM_JSON(ControlSubModule, controlSubModule_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListSecurityStrategiesRequest() = default ;
    ListSecurityStrategiesRequest(const ListSecurityStrategiesRequest &) = default ;
    ListSecurityStrategiesRequest(ListSecurityStrategiesRequest &&) = default ;
    ListSecurityStrategiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecurityStrategiesRequest() = default ;
    ListSecurityStrategiesRequest& operator=(const ListSecurityStrategiesRequest &) = default ;
    ListSecurityStrategiesRequest& operator=(ListSecurityStrategiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlModule_ == nullptr
        && this->controlSubModule_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // controlModule Field Functions 
    bool hasControlModule() const { return this->controlModule_ != nullptr;};
    void deleteControlModule() { this->controlModule_ = nullptr;};
    inline string getControlModule() const { DARABONBA_PTR_GET_DEFAULT(controlModule_, "") };
    inline ListSecurityStrategiesRequest& setControlModule(string controlModule) { DARABONBA_PTR_SET_VALUE(controlModule_, controlModule) };


    // controlSubModule Field Functions 
    bool hasControlSubModule() const { return this->controlSubModule_ != nullptr;};
    void deleteControlSubModule() { this->controlSubModule_ = nullptr;};
    inline string getControlSubModule() const { DARABONBA_PTR_GET_DEFAULT(controlSubModule_, "") };
    inline ListSecurityStrategiesRequest& setControlSubModule(string controlSubModule) { DARABONBA_PTR_SET_VALUE(controlSubModule_, controlSubModule) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecurityStrategiesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecurityStrategiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // **The control module.**
    shared_ptr<string> controlModule_ {};
    // **The control submodule.**
    shared_ptr<string> controlSubModule_ {};
    // The page number. Starts from 1. Default: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default: 20.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
