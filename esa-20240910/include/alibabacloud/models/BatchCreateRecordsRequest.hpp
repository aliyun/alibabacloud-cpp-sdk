// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateRecordsRequestRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordList, recordList_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordList, recordList_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    BatchCreateRecordsRequest() = default ;
    BatchCreateRecordsRequest(const BatchCreateRecordsRequest &) = default ;
    BatchCreateRecordsRequest(BatchCreateRecordsRequest &&) = default ;
    BatchCreateRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsRequest() = default ;
    BatchCreateRecordsRequest& operator=(const BatchCreateRecordsRequest &) = default ;
    BatchCreateRecordsRequest& operator=(BatchCreateRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordList_ != nullptr
        && this->siteId_ != nullptr; };
    // recordList Field Functions 
    bool hasRecordList() const { return this->recordList_ != nullptr;};
    void deleteRecordList() { this->recordList_ = nullptr;};
    inline const vector<BatchCreateRecordsRequestRecordList> & recordList() const { DARABONBA_PTR_GET_CONST(recordList_, vector<BatchCreateRecordsRequestRecordList>) };
    inline vector<BatchCreateRecordsRequestRecordList> recordList() { DARABONBA_PTR_GET(recordList_, vector<BatchCreateRecordsRequestRecordList>) };
    inline BatchCreateRecordsRequest& setRecordList(const vector<BatchCreateRecordsRequestRecordList> & recordList) { DARABONBA_PTR_SET_VALUE(recordList_, recordList) };
    inline BatchCreateRecordsRequest& setRecordList(vector<BatchCreateRecordsRequestRecordList> && recordList) { DARABONBA_PTR_SET_RVALUE(recordList_, recordList) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchCreateRecordsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The list of DNS records to be created.
    // 
    // This parameter is required.
    std::shared_ptr<vector<BatchCreateRecordsRequestRecordList>> recordList_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
