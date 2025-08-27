// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYLISTQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYLISTQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ApplyListQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyListQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(all_apply, allApply_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(only_shang_lv_apply, onlyShangLvApply_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(union_no, unionNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyListQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(all_apply, allApply_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(only_shang_lv_apply, onlyShangLvApply_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
    };
    ApplyListQueryRequest() = default ;
    ApplyListQueryRequest(const ApplyListQueryRequest &) = default ;
    ApplyListQueryRequest(ApplyListQueryRequest &&) = default ;
    ApplyListQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyListQueryRequest() = default ;
    ApplyListQueryRequest& operator=(const ApplyListQueryRequest &) = default ;
    ApplyListQueryRequest& operator=(ApplyListQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allApply_ != nullptr
        && this->departId_ != nullptr && this->endTime_ != nullptr && this->gmtModified_ != nullptr && this->onlyShangLvApply_ != nullptr && this->page_ != nullptr
        && this->pageSize_ != nullptr && this->startTime_ != nullptr && this->subCorpId_ != nullptr && this->type_ != nullptr && this->unionNo_ != nullptr
        && this->userId_ != nullptr; };
    // allApply Field Functions 
    bool hasAllApply() const { return this->allApply_ != nullptr;};
    void deleteAllApply() { this->allApply_ = nullptr;};
    inline bool allApply() const { DARABONBA_PTR_GET_DEFAULT(allApply_, false) };
    inline ApplyListQueryRequest& setAllApply(bool allApply) { DARABONBA_PTR_SET_VALUE(allApply_, allApply) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string departId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyListQueryRequest& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ApplyListQueryRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ApplyListQueryRequest& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // onlyShangLvApply Field Functions 
    bool hasOnlyShangLvApply() const { return this->onlyShangLvApply_ != nullptr;};
    void deleteOnlyShangLvApply() { this->onlyShangLvApply_ = nullptr;};
    inline bool onlyShangLvApply() const { DARABONBA_PTR_GET_DEFAULT(onlyShangLvApply_, false) };
    inline ApplyListQueryRequest& setOnlyShangLvApply(bool onlyShangLvApply) { DARABONBA_PTR_SET_VALUE(onlyShangLvApply_, onlyShangLvApply) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ApplyListQueryRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ApplyListQueryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ApplyListQueryRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string subCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline ApplyListQueryRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ApplyListQueryRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unionNo Field Functions 
    bool hasUnionNo() const { return this->unionNo_ != nullptr;};
    void deleteUnionNo() { this->unionNo_ = nullptr;};
    inline string unionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
    inline ApplyListQueryRequest& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyListQueryRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<bool> allApply_ = nullptr;
    std::shared_ptr<string> departId_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<bool> onlyShangLvApply_ = nullptr;
    std::shared_ptr<int32_t> page_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> subCorpId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> unionNo_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
