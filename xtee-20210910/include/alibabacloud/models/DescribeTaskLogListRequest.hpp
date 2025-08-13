// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKLOGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKLOGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTaskLogListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskLogListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IsPage, isPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskLogId, taskLogId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskLogListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IsPage, isPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskLogId, taskLogId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeTaskLogListRequest() = default ;
    DescribeTaskLogListRequest(const DescribeTaskLogListRequest &) = default ;
    DescribeTaskLogListRequest(DescribeTaskLogListRequest &&) = default ;
    DescribeTaskLogListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskLogListRequest() = default ;
    DescribeTaskLogListRequest& operator=(const DescribeTaskLogListRequest &) = default ;
    DescribeTaskLogListRequest& operator=(DescribeTaskLogListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->isPage_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr && this->taskId_ != nullptr && this->taskLogId_ != nullptr
        && this->regId_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeTaskLogListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // isPage Field Functions 
    bool hasIsPage() const { return this->isPage_ != nullptr;};
    void deleteIsPage() { this->isPage_ = nullptr;};
    inline bool isPage() const { DARABONBA_PTR_GET_DEFAULT(isPage_, false) };
    inline DescribeTaskLogListRequest& setIsPage(bool isPage) { DARABONBA_PTR_SET_VALUE(isPage_, isPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTaskLogListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeTaskLogListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTaskLogListRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskLogId Field Functions 
    bool hasTaskLogId() const { return this->taskLogId_ != nullptr;};
    void deleteTaskLogId() { this->taskLogId_ = nullptr;};
    inline string taskLogId() const { DARABONBA_PTR_GET_DEFAULT(taskLogId_, "") };
    inline DescribeTaskLogListRequest& setTaskLogId(string taskLogId) { DARABONBA_PTR_SET_VALUE(taskLogId_, taskLogId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeTaskLogListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Current page.
    std::shared_ptr<string> currentPage_ = nullptr;
    // Whether to paginate.
    std::shared_ptr<bool> isPage_ = nullptr;
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Page size.
    std::shared_ptr<string> pageSize_ = nullptr;
    // Task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // Task log ID
    std::shared_ptr<string> taskLogId_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
