// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETTRANSFERDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETTRANSFERDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretTransferDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretTransferDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretTransferDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
    };
    QuerySecretTransferDetailsRequest() = default ;
    QuerySecretTransferDetailsRequest(const QuerySecretTransferDetailsRequest &) = default ;
    QuerySecretTransferDetailsRequest(QuerySecretTransferDetailsRequest &&) = default ;
    QuerySecretTransferDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretTransferDetailsRequest() = default ;
    QuerySecretTransferDetailsRequest& operator=(const QuerySecretTransferDetailsRequest &) = default ;
    QuerySecretTransferDetailsRequest& operator=(QuerySecretTransferDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->recordId_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline QuerySecretTransferDetailsRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QuerySecretTransferDetailsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline QuerySecretTransferDetailsRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


  protected:
    shared_ptr<int64_t> pageNo_ {};
    shared_ptr<int64_t> pageSize_ {};
    // 迁移记录的id
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
