// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RecordList, recordListShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordList, recordListShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    BatchCreateRecordsShrinkRequest() = default ;
    BatchCreateRecordsShrinkRequest(const BatchCreateRecordsShrinkRequest &) = default ;
    BatchCreateRecordsShrinkRequest(BatchCreateRecordsShrinkRequest &&) = default ;
    BatchCreateRecordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsShrinkRequest() = default ;
    BatchCreateRecordsShrinkRequest& operator=(const BatchCreateRecordsShrinkRequest &) = default ;
    BatchCreateRecordsShrinkRequest& operator=(BatchCreateRecordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordListShrink_ == nullptr
        && this->siteId_ == nullptr; };
    // recordListShrink Field Functions 
    bool hasRecordListShrink() const { return this->recordListShrink_ != nullptr;};
    void deleteRecordListShrink() { this->recordListShrink_ = nullptr;};
    inline string getRecordListShrink() const { DARABONBA_PTR_GET_DEFAULT(recordListShrink_, "") };
    inline BatchCreateRecordsShrinkRequest& setRecordListShrink(string recordListShrink) { DARABONBA_PTR_SET_VALUE(recordListShrink_, recordListShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline BatchCreateRecordsShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The list of DNS records to be created.
    // 
    // This parameter is required.
    shared_ptr<string> recordListShrink_ {};
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
