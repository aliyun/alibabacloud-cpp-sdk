// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEDATAEXPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEDATAEXPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ExecuteDataExportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteDataExportRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ActionDetail, actionDetail_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteDataExportRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ActionDetail, actionDetail_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ExecuteDataExportRequest() = default ;
    ExecuteDataExportRequest(const ExecuteDataExportRequest &) = default ;
    ExecuteDataExportRequest(ExecuteDataExportRequest &&) = default ;
    ExecuteDataExportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteDataExportRequest() = default ;
    ExecuteDataExportRequest& operator=(const ExecuteDataExportRequest &) = default ;
    ExecuteDataExportRequest& operator=(ExecuteDataExportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionDetail_ == nullptr
        && return this->orderId_ == nullptr && return this->realLoginUserUid_ == nullptr && return this->tid_ == nullptr; };
    // actionDetail Field Functions 
    bool hasActionDetail() const { return this->actionDetail_ != nullptr;};
    void deleteActionDetail() { this->actionDetail_ = nullptr;};
    inline     const Darabonba::Json & actionDetail() const { DARABONBA_GET(actionDetail_) };
    Darabonba::Json & actionDetail() { DARABONBA_GET(actionDetail_) };
    inline ExecuteDataExportRequest& setActionDetail(const Darabonba::Json & actionDetail) { DARABONBA_SET_VALUE(actionDetail_, actionDetail) };
    inline ExecuteDataExportRequest& setActionDetail(Darabonba::Json & actionDetail) { DARABONBA_SET_RVALUE(actionDetail_, actionDetail) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ExecuteDataExportRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string realLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ExecuteDataExportRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ExecuteDataExportRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The parameters that are required to perform the operation. Sample code:
    // 
    // ```json
    // {
    //   "mode" : "FAST",   // The mode in which data is exported. Default value: FAST. A value of NORMAL specifies that the export task can be terminated during the export.  "encoding" : "UTF8",  // The encoding format.  "startTime" : "2022-12-22 00:00:00",  // The point in time at which data export starts.  "transaction" : false,    // Specifies whether to enable transactions.  "fileType" : "SQL"    // The format of the exported file.}
    // ```
    // 
    // >  You can also set mode, encoding, and fileType to the following values:
    // 
    // *   mode: NORMAL
    // 
    // *   encoding: UTF8MB4, GB2312, ISO_8859_1, GBK, LATAIN1, or CP1252
    // 
    // *   fileType: XLSX, CSV, JSON, or TXT
    Darabonba::Json actionDetail_ = nullptr;
    // The ID of the ticket.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to call the API operation.
    std::shared_ptr<string> realLoginUserUid_ = nullptr;
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, log on to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
