// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeGroupPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(timeType, timeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(timeType, timeType_);
    };
    DescribeGroupPageRequest() = default ;
    DescribeGroupPageRequest(const DescribeGroupPageRequest &) = default ;
    DescribeGroupPageRequest(DescribeGroupPageRequest &&) = default ;
    DescribeGroupPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupPageRequest() = default ;
    DescribeGroupPageRequest& operator=(const DescribeGroupPageRequest &) = default ;
    DescribeGroupPageRequest& operator=(DescribeGroupPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->currentPage_ == nullptr && this->direction_ == nullptr && this->order_ == nullptr && this->pageSize_ == nullptr && this->regId_ == nullptr
        && this->taskId_ == nullptr && this->timeType_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupPageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeGroupPageRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeGroupPageRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeGroupPageRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeGroupPageRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeGroupPageRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeGroupPageRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // timeType Field Functions 
    bool hasTimeType() const { return this->timeType_ != nullptr;};
    void deleteTimeType() { this->timeType_ = nullptr;};
    inline string getTimeType() const { DARABONBA_PTR_GET_DEFAULT(timeType_, "") };
    inline DescribeGroupPageRequest& setTimeType(string timeType) { DARABONBA_PTR_SET_VALUE(timeType_, timeType) };


  protected:
    // Sets the language type for requests and responses, with a default value of **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Current page number.
    shared_ptr<string> currentPage_ {};
    // Order.
    shared_ptr<string> direction_ {};
    // Sorting condition.
    shared_ptr<string> order_ {};
    // Page size, with a default value of 10.
    shared_ptr<string> pageSize_ {};
    // Region code.
    shared_ptr<string> regId_ {};
    // Task ID.
    shared_ptr<string> taskId_ {};
    // Time type.
    shared_ptr<string> timeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
