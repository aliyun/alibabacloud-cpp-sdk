// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRecordTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TemplateIds, templateIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TemplateIds, templateIds_);
    };
    DescribeRecordTemplatesRequest() = default ;
    DescribeRecordTemplatesRequest(const DescribeRecordTemplatesRequest &) = default ;
    DescribeRecordTemplatesRequest(DescribeRecordTemplatesRequest &&) = default ;
    DescribeRecordTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordTemplatesRequest() = default ;
    DescribeRecordTemplatesRequest& operator=(const DescribeRecordTemplatesRequest &) = default ;
    DescribeRecordTemplatesRequest& operator=(DescribeRecordTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->ownerId_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->templateIds_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeRecordTemplatesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRecordTemplatesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline DescribeRecordTemplatesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRecordTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // templateIds Field Functions 
    bool hasTemplateIds() const { return this->templateIds_ != nullptr;};
    void deleteTemplateIds() { this->templateIds_ = nullptr;};
    inline const vector<string> & templateIds() const { DARABONBA_PTR_GET_CONST(templateIds_, vector<string>) };
    inline vector<string> templateIds() { DARABONBA_PTR_GET(templateIds_, vector<string>) };
    inline DescribeRecordTemplatesRequest& setTemplateIds(const vector<string> & templateIds) { DARABONBA_PTR_SET_VALUE(templateIds_, templateIds) };
    inline DescribeRecordTemplatesRequest& setTemplateIds(vector<string> && templateIds) { DARABONBA_PTR_SET_RVALUE(templateIds_, templateIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // 1
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> templateIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
