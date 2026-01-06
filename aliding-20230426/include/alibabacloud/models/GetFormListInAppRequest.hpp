// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMLISTINAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFORMLISTINAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormListInAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormListInAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormTypes, formTypes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormListInAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormTypes, formTypes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    GetFormListInAppRequest() = default ;
    GetFormListInAppRequest(const GetFormListInAppRequest &) = default ;
    GetFormListInAppRequest(GetFormListInAppRequest &&) = default ;
    GetFormListInAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormListInAppRequest() = default ;
    GetFormListInAppRequest& operator=(const GetFormListInAppRequest &) = default ;
    GetFormListInAppRequest& operator=(GetFormListInAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->formTypes_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->systemToken_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetFormListInAppRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formTypes Field Functions 
    bool hasFormTypes() const { return this->formTypes_ != nullptr;};
    void deleteFormTypes() { this->formTypes_ = nullptr;};
    inline string getFormTypes() const { DARABONBA_PTR_GET_DEFAULT(formTypes_, "") };
    inline GetFormListInAppRequest& setFormTypes(string formTypes) { DARABONBA_PTR_SET_VALUE(formTypes_, formTypes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetFormListInAppRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetFormListInAppRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline GetFormListInAppRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> appType_ {};
    shared_ptr<string> formTypes_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> systemToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
