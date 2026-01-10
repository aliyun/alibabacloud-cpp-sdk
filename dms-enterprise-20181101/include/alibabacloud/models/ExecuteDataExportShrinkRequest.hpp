// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEDATAEXPORTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEDATAEXPORTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ExecuteDataExportShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteDataExportShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionDetail, actionDetailShrink_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteDataExportShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionDetail, actionDetailShrink_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ExecuteDataExportShrinkRequest() = default ;
    ExecuteDataExportShrinkRequest(const ExecuteDataExportShrinkRequest &) = default ;
    ExecuteDataExportShrinkRequest(ExecuteDataExportShrinkRequest &&) = default ;
    ExecuteDataExportShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteDataExportShrinkRequest() = default ;
    ExecuteDataExportShrinkRequest& operator=(const ExecuteDataExportShrinkRequest &) = default ;
    ExecuteDataExportShrinkRequest& operator=(ExecuteDataExportShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionDetailShrink_ == nullptr
        && this->orderId_ == nullptr && this->realLoginUserUid_ == nullptr && this->tid_ == nullptr; };
    // actionDetailShrink Field Functions 
    bool hasActionDetailShrink() const { return this->actionDetailShrink_ != nullptr;};
    void deleteActionDetailShrink() { this->actionDetailShrink_ = nullptr;};
    inline string getActionDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(actionDetailShrink_, "") };
    inline ExecuteDataExportShrinkRequest& setActionDetailShrink(string actionDetailShrink) { DARABONBA_PTR_SET_VALUE(actionDetailShrink_, actionDetailShrink) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ExecuteDataExportShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ExecuteDataExportShrinkRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ExecuteDataExportShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


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
    shared_ptr<string> actionDetailShrink_ {};
    // The ID of the ticket.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The ID of the Alibaba Cloud account that is used to call the API operation.
    shared_ptr<string> realLoginUserUid_ {};
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, log on to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
