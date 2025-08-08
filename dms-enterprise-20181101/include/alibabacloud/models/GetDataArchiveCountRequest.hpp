// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVECOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVECOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderResultType, orderResultType_);
      DARABONBA_PTR_TO_JSON(PluginType, pluginType_);
      DARABONBA_PTR_TO_JSON(SearchDateType, searchDateType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderResultType, orderResultType_);
      DARABONBA_PTR_FROM_JSON(PluginType, pluginType_);
      DARABONBA_PTR_FROM_JSON(SearchDateType, searchDateType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetDataArchiveCountRequest() = default ;
    GetDataArchiveCountRequest(const GetDataArchiveCountRequest &) = default ;
    GetDataArchiveCountRequest(GetDataArchiveCountRequest &&) = default ;
    GetDataArchiveCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveCountRequest() = default ;
    GetDataArchiveCountRequest& operator=(const GetDataArchiveCountRequest &) = default ;
    GetDataArchiveCountRequest& operator=(GetDataArchiveCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderResultType_ != nullptr
        && this->pluginType_ != nullptr && this->searchDateType_ != nullptr && this->tid_ != nullptr; };
    // orderResultType Field Functions 
    bool hasOrderResultType() const { return this->orderResultType_ != nullptr;};
    void deleteOrderResultType() { this->orderResultType_ = nullptr;};
    inline string orderResultType() const { DARABONBA_PTR_GET_DEFAULT(orderResultType_, "") };
    inline GetDataArchiveCountRequest& setOrderResultType(string orderResultType) { DARABONBA_PTR_SET_VALUE(orderResultType_, orderResultType) };


    // pluginType Field Functions 
    bool hasPluginType() const { return this->pluginType_ != nullptr;};
    void deletePluginType() { this->pluginType_ = nullptr;};
    inline string pluginType() const { DARABONBA_PTR_GET_DEFAULT(pluginType_, "") };
    inline GetDataArchiveCountRequest& setPluginType(string pluginType) { DARABONBA_PTR_SET_VALUE(pluginType_, pluginType) };


    // searchDateType Field Functions 
    bool hasSearchDateType() const { return this->searchDateType_ != nullptr;};
    void deleteSearchDateType() { this->searchDateType_ = nullptr;};
    inline string searchDateType() const { DARABONBA_PTR_GET_DEFAULT(searchDateType_, "") };
    inline GetDataArchiveCountRequest& setSearchDateType(string searchDateType) { DARABONBA_PTR_SET_VALUE(searchDateType_, searchDateType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetDataArchiveCountRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The type of the identity. Default value: AS_ADMIN.
    std::shared_ptr<string> orderResultType_ = nullptr;
    // The plugin type. Default value: DATA_ARCHIVE.
    std::shared_ptr<string> pluginType_ = nullptr;
    // The time when the ticket is modified or created. The statistics of data archiving tickets are calculated based on the creation time.
    std::shared_ptr<string> searchDateType_ = nullptr;
    // The tenant ID.
    // 
    // >  To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
