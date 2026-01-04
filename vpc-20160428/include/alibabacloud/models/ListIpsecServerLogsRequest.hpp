// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPSECSERVERLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPSECSERVERLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListIpsecServerLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpsecServerLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_TO_JSON(MinutePeriod, minutePeriod_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpsecServerLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_FROM_JSON(MinutePeriod, minutePeriod_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    ListIpsecServerLogsRequest() = default ;
    ListIpsecServerLogsRequest(const ListIpsecServerLogsRequest &) = default ;
    ListIpsecServerLogsRequest(ListIpsecServerLogsRequest &&) = default ;
    ListIpsecServerLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpsecServerLogsRequest() = default ;
    ListIpsecServerLogsRequest& operator=(const ListIpsecServerLogsRequest &) = default ;
    ListIpsecServerLogsRequest& operator=(ListIpsecServerLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->ipsecServerId_ == nullptr && this->minutePeriod_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline ListIpsecServerLogsRequest& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // ipsecServerId Field Functions 
    bool hasIpsecServerId() const { return this->ipsecServerId_ != nullptr;};
    void deleteIpsecServerId() { this->ipsecServerId_ = nullptr;};
    inline string getIpsecServerId() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerId_, "") };
    inline ListIpsecServerLogsRequest& setIpsecServerId(string ipsecServerId) { DARABONBA_PTR_SET_VALUE(ipsecServerId_, ipsecServerId) };


    // minutePeriod Field Functions 
    bool hasMinutePeriod() const { return this->minutePeriod_ != nullptr;};
    void deleteMinutePeriod() { this->minutePeriod_ = nullptr;};
    inline int32_t getMinutePeriod() const { DARABONBA_PTR_GET_DEFAULT(minutePeriod_, 0) };
    inline ListIpsecServerLogsRequest& setMinutePeriod(int32_t minutePeriod) { DARABONBA_PTR_SET_VALUE(minutePeriod_, minutePeriod) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListIpsecServerLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListIpsecServerLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpsecServerLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline ListIpsecServerLogsRequest& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The beginning of the time range to query. The value must be a UNIX timestamp. For example, 1671003744 specifies 15:42:24 (UTC+8) on December 14, 2022.
    // 
    // >  If you specify **From**, you must also specify **To** or **MinutePeriod**.
    shared_ptr<int32_t> from_ {};
    // The ID of the IPsec server.
    // 
    // This parameter is required.
    shared_ptr<string> ipsecServerId_ {};
    // The interval at which log data is queried. Valid values: **1** to **10**. Unit: minutes.
    // 
    // >  If both **From** and **To** are not specified, you must specify **MinutePeriod**.
    shared_ptr<int32_t> minutePeriod_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: **1** to **50**. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the region where the IPsec server is created.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The end of the time range to query. The value must be a unix timestamp. For example, 1671004344 specifies 15:52:24 (UTC+8) on December 14, 2022.
    // 
    // >  If you specify **To**, you must also specify **From** or **MinutePeriod**.
    shared_ptr<int32_t> to_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
