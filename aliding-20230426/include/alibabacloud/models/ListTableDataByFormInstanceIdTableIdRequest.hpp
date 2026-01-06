// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLEDATABYFORMINSTANCEIDTABLEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLEDATABYFORMINSTANCEIDTABLEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListTableDataByFormInstanceIdTableIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableDataByFormInstanceIdTableIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(TableFieldId, tableFieldId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableDataByFormInstanceIdTableIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(TableFieldId, tableFieldId_);
    };
    ListTableDataByFormInstanceIdTableIdRequest() = default ;
    ListTableDataByFormInstanceIdTableIdRequest(const ListTableDataByFormInstanceIdTableIdRequest &) = default ;
    ListTableDataByFormInstanceIdTableIdRequest(ListTableDataByFormInstanceIdTableIdRequest &&) = default ;
    ListTableDataByFormInstanceIdTableIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableDataByFormInstanceIdTableIdRequest() = default ;
    ListTableDataByFormInstanceIdTableIdRequest& operator=(const ListTableDataByFormInstanceIdTableIdRequest &) = default ;
    ListTableDataByFormInstanceIdTableIdRequest& operator=(ListTableDataByFormInstanceIdTableIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appType_ == nullptr
        && this->formInstanceId_ == nullptr && this->formUuid_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->systemToken_ == nullptr
        && this->tableFieldId_ == nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline ListTableDataByFormInstanceIdTableIdRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // formInstanceId Field Functions 
    bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
    void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
    inline string getFormInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
    inline ListTableDataByFormInstanceIdTableIdRequest& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline ListTableDataByFormInstanceIdTableIdRequest& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTableDataByFormInstanceIdTableIdRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTableDataByFormInstanceIdTableIdRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string getSystemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline ListTableDataByFormInstanceIdTableIdRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // tableFieldId Field Functions 
    bool hasTableFieldId() const { return this->tableFieldId_ != nullptr;};
    void deleteTableFieldId() { this->tableFieldId_ = nullptr;};
    inline string getTableFieldId() const { DARABONBA_PTR_GET_DEFAULT(tableFieldId_, "") };
    inline ListTableDataByFormInstanceIdTableIdRequest& setTableFieldId(string tableFieldId) { DARABONBA_PTR_SET_VALUE(tableFieldId_, tableFieldId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appType_ {};
    // This parameter is required.
    shared_ptr<string> formInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> formUuid_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> systemToken_ {};
    // This parameter is required.
    shared_ptr<string> tableFieldId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
