// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUnknownThreatDetectEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnknownThreatDetectEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentProcessPath, parentProcessPath_);
      DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnknownThreatDetectEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentProcessPath, parentProcessPath_);
      DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListUnknownThreatDetectEventRequest() = default ;
    ListUnknownThreatDetectEventRequest(const ListUnknownThreatDetectEventRequest &) = default ;
    ListUnknownThreatDetectEventRequest(ListUnknownThreatDetectEventRequest &&) = default ;
    ListUnknownThreatDetectEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnknownThreatDetectEventRequest() = default ;
    ListUnknownThreatDetectEventRequest& operator=(const ListUnknownThreatDetectEventRequest &) = default ;
    ListUnknownThreatDetectEventRequest& operator=(ListUnknownThreatDetectEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hashKey_ == nullptr && this->pageSize_ == nullptr && this->parentProcessPath_ == nullptr && this->processPath_ == nullptr && this->remark_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUnknownThreatDetectEventRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // hashKey Field Functions 
    bool hasHashKey() const { return this->hashKey_ != nullptr;};
    void deleteHashKey() { this->hashKey_ = nullptr;};
    inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
    inline ListUnknownThreatDetectEventRequest& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUnknownThreatDetectEventRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentProcessPath Field Functions 
    bool hasParentProcessPath() const { return this->parentProcessPath_ != nullptr;};
    void deleteParentProcessPath() { this->parentProcessPath_ = nullptr;};
    inline string getParentProcessPath() const { DARABONBA_PTR_GET_DEFAULT(parentProcessPath_, "") };
    inline ListUnknownThreatDetectEventRequest& setParentProcessPath(string parentProcessPath) { DARABONBA_PTR_SET_VALUE(parentProcessPath_, parentProcessPath) };


    // processPath Field Functions 
    bool hasProcessPath() const { return this->processPath_ != nullptr;};
    void deleteProcessPath() { this->processPath_ = nullptr;};
    inline string getProcessPath() const { DARABONBA_PTR_GET_DEFAULT(processPath_, "") };
    inline ListUnknownThreatDetectEventRequest& setProcessPath(string processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListUnknownThreatDetectEventRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListUnknownThreatDetectEventRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListUnknownThreatDetectEventRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<string> hashKey_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> parentProcessPath_ {};
    shared_ptr<string> processPath_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
