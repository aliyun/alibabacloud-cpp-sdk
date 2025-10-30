// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPACCOUNTPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPACCOUNTPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeGroupAccountPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupAccountPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(communityNo, communityNo_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(fieldVal, fieldVal_);
      DARABONBA_PTR_TO_JSON(isPage, isPage_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupAccountPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(communityNo, communityNo_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(fieldVal, fieldVal_);
      DARABONBA_PTR_FROM_JSON(isPage, isPage_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    DescribeGroupAccountPageRequest() = default ;
    DescribeGroupAccountPageRequest(const DescribeGroupAccountPageRequest &) = default ;
    DescribeGroupAccountPageRequest(DescribeGroupAccountPageRequest &&) = default ;
    DescribeGroupAccountPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupAccountPageRequest() = default ;
    DescribeGroupAccountPageRequest& operator=(const DescribeGroupAccountPageRequest &) = default ;
    DescribeGroupAccountPageRequest& operator=(DescribeGroupAccountPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->communityNo_ == nullptr && return this->currentPage_ == nullptr && return this->direction_ == nullptr && return this->fieldKey_ == nullptr && return this->fieldVal_ == nullptr
        && return this->isPage_ == nullptr && return this->order_ == nullptr && return this->pageSize_ == nullptr && return this->regId_ == nullptr && return this->taskId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGroupAccountPageRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // communityNo Field Functions 
    bool hasCommunityNo() const { return this->communityNo_ != nullptr;};
    void deleteCommunityNo() { this->communityNo_ = nullptr;};
    inline string communityNo() const { DARABONBA_PTR_GET_DEFAULT(communityNo_, "") };
    inline DescribeGroupAccountPageRequest& setCommunityNo(string communityNo) { DARABONBA_PTR_SET_VALUE(communityNo_, communityNo) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeGroupAccountPageRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeGroupAccountPageRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string fieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline DescribeGroupAccountPageRequest& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // fieldVal Field Functions 
    bool hasFieldVal() const { return this->fieldVal_ != nullptr;};
    void deleteFieldVal() { this->fieldVal_ = nullptr;};
    inline string fieldVal() const { DARABONBA_PTR_GET_DEFAULT(fieldVal_, "") };
    inline DescribeGroupAccountPageRequest& setFieldVal(string fieldVal) { DARABONBA_PTR_SET_VALUE(fieldVal_, fieldVal) };


    // isPage Field Functions 
    bool hasIsPage() const { return this->isPage_ != nullptr;};
    void deleteIsPage() { this->isPage_ = nullptr;};
    inline bool isPage() const { DARABONBA_PTR_GET_DEFAULT(isPage_, false) };
    inline DescribeGroupAccountPageRequest& setIsPage(bool isPage) { DARABONBA_PTR_SET_VALUE(isPage_, isPage) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeGroupAccountPageRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeGroupAccountPageRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeGroupAccountPageRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeGroupAccountPageRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Community number.
    std::shared_ptr<string> communityNo_ = nullptr;
    // Current page number.
    std::shared_ptr<string> currentPage_ = nullptr;
    // Order direction.
    std::shared_ptr<string> direction_ = nullptr;
    // fieldKey.
    std::shared_ptr<string> fieldKey_ = nullptr;
    // fieldVal.
    std::shared_ptr<string> fieldVal_ = nullptr;
    // Whether to paginate.
    std::shared_ptr<bool> isPage_ = nullptr;
    // Sorting condition.
    std::shared_ptr<string> order_ = nullptr;
    // Page size, default value is 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
