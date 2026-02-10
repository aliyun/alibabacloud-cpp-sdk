// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListVirusScanMachineRequest() = default ;
    ListVirusScanMachineRequest(const ListVirusScanMachineRequest &) = default ;
    ListVirusScanMachineRequest(ListVirusScanMachineRequest &&) = default ;
    ListVirusScanMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanMachineRequest() = default ;
    ListVirusScanMachineRequest& operator=(const ListVirusScanMachineRequest &) = default ;
    ListVirusScanMachineRequest& operator=(ListVirusScanMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->remark_ == nullptr && this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListVirusScanMachineRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVirusScanMachineRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListVirusScanMachineRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListVirusScanMachineRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The page number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The information about the server that you want to query. The value can be the name or the IP address of the server.
    shared_ptr<string> remark_ {};
    // The UUID of the server.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
