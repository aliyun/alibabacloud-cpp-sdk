// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICESEATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICESEATSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class DescribeDeviceSeatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceSeatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_TO_JSON(SerialNoList, serialNoList_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceSeatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SerialNo, serialNo_);
      DARABONBA_PTR_FROM_JSON(SerialNoList, serialNoList_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DescribeDeviceSeatsRequest() = default ;
    DescribeDeviceSeatsRequest(const DescribeDeviceSeatsRequest &) = default ;
    DescribeDeviceSeatsRequest(DescribeDeviceSeatsRequest &&) = default ;
    DescribeDeviceSeatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceSeatsRequest() = default ;
    DescribeDeviceSeatsRequest& operator=(const DescribeDeviceSeatsRequest &) = default ;
    DescribeDeviceSeatsRequest& operator=(DescribeDeviceSeatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->serialNo_ == nullptr && this->serialNoList_ == nullptr && this->siteId_ == nullptr && this->tenantId_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDeviceSeatsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeviceSeatsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // serialNo Field Functions 
    bool hasSerialNo() const { return this->serialNo_ != nullptr;};
    void deleteSerialNo() { this->serialNo_ = nullptr;};
    inline string getSerialNo() const { DARABONBA_PTR_GET_DEFAULT(serialNo_, "") };
    inline DescribeDeviceSeatsRequest& setSerialNo(string serialNo) { DARABONBA_PTR_SET_VALUE(serialNo_, serialNo) };


    // serialNoList Field Functions 
    bool hasSerialNoList() const { return this->serialNoList_ != nullptr;};
    void deleteSerialNoList() { this->serialNoList_ = nullptr;};
    inline const vector<string> & getSerialNoList() const { DARABONBA_PTR_GET_CONST(serialNoList_, vector<string>) };
    inline vector<string> getSerialNoList() { DARABONBA_PTR_GET(serialNoList_, vector<string>) };
    inline DescribeDeviceSeatsRequest& setSerialNoList(const vector<string> & serialNoList) { DARABONBA_PTR_SET_VALUE(serialNoList_, serialNoList) };
    inline DescribeDeviceSeatsRequest& setSerialNoList(vector<string> && serialNoList) { DARABONBA_PTR_SET_RVALUE(serialNoList_, serialNoList) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline DescribeDeviceSeatsRequest& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeDeviceSeatsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> serialNo_ {};
    shared_ptr<vector<string>> serialNoList_ {};
    shared_ptr<string> siteId_ {};
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
