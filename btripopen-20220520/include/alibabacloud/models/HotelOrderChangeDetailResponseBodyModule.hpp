// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderChangeDetailResponseBodyModuleRoomInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderChangeDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderChangeDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_TO_JSON(change_type, changeType_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(remarks, remarks_);
      DARABONBA_PTR_TO_JSON(room_info_list, roomInfoList_);
      DARABONBA_PTR_TO_JSON(sale_order_id, saleOrderId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(work_order_id, workOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderChangeDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(change_type, changeType_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(remarks, remarks_);
      DARABONBA_PTR_FROM_JSON(room_info_list, roomInfoList_);
      DARABONBA_PTR_FROM_JSON(sale_order_id, saleOrderId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(work_order_id, workOrderId_);
    };
    HotelOrderChangeDetailResponseBodyModule() = default ;
    HotelOrderChangeDetailResponseBodyModule(const HotelOrderChangeDetailResponseBodyModule &) = default ;
    HotelOrderChangeDetailResponseBodyModule(HotelOrderChangeDetailResponseBodyModule &&) = default ;
    HotelOrderChangeDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderChangeDetailResponseBodyModule() = default ;
    HotelOrderChangeDetailResponseBodyModule& operator=(const HotelOrderChangeDetailResponseBodyModule &) = default ;
    HotelOrderChangeDetailResponseBodyModule& operator=(HotelOrderChangeDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeOrderId_ != nullptr
        && this->changeType_ != nullptr && this->corpId_ != nullptr && this->disOrderId_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->reason_ != nullptr && this->remarks_ != nullptr && this->roomInfoList_ != nullptr && this->saleOrderId_ != nullptr && this->source_ != nullptr
        && this->status_ != nullptr && this->workOrderId_ != nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline int32_t changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
    inline HotelOrderChangeDetailResponseBodyModule& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // remarks Field Functions 
    bool hasRemarks() const { return this->remarks_ != nullptr;};
    void deleteRemarks() { this->remarks_ = nullptr;};
    inline string remarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


    // roomInfoList Field Functions 
    bool hasRoomInfoList() const { return this->roomInfoList_ != nullptr;};
    void deleteRoomInfoList() { this->roomInfoList_ = nullptr;};
    inline const vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoList> & roomInfoList() const { DARABONBA_PTR_GET_CONST(roomInfoList_, vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoList>) };
    inline vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoList> roomInfoList() { DARABONBA_PTR_GET(roomInfoList_, vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoList>) };
    inline HotelOrderChangeDetailResponseBodyModule& setRoomInfoList(const vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoList> & roomInfoList) { DARABONBA_PTR_SET_VALUE(roomInfoList_, roomInfoList) };
    inline HotelOrderChangeDetailResponseBodyModule& setRoomInfoList(vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoList> && roomInfoList) { DARABONBA_PTR_SET_RVALUE(roomInfoList_, roomInfoList) };


    // saleOrderId Field Functions 
    bool hasSaleOrderId() const { return this->saleOrderId_ != nullptr;};
    void deleteSaleOrderId() { this->saleOrderId_ = nullptr;};
    inline string saleOrderId() const { DARABONBA_PTR_GET_DEFAULT(saleOrderId_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setSaleOrderId(string saleOrderId) { DARABONBA_PTR_SET_VALUE(saleOrderId_, saleOrderId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline HotelOrderChangeDetailResponseBodyModule& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline HotelOrderChangeDetailResponseBodyModule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workOrderId Field Functions 
    bool hasWorkOrderId() const { return this->workOrderId_ != nullptr;};
    void deleteWorkOrderId() { this->workOrderId_ = nullptr;};
    inline string workOrderId() const { DARABONBA_PTR_GET_DEFAULT(workOrderId_, "") };
    inline HotelOrderChangeDetailResponseBodyModule& setWorkOrderId(string workOrderId) { DARABONBA_PTR_SET_VALUE(workOrderId_, workOrderId) };


  protected:
    std::shared_ptr<string> changeOrderId_ = nullptr;
    std::shared_ptr<int32_t> changeType_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> remarks_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderChangeDetailResponseBodyModuleRoomInfoList>> roomInfoList_ = nullptr;
    std::shared_ptr<string> saleOrderId_ = nullptr;
    std::shared_ptr<int32_t> source_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> workOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
