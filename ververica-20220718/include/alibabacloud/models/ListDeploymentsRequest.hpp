// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ListDeploymentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(executionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(labelKey, labelKey_);
      DARABONBA_PTR_TO_JSON(labelValueArray, labelValueArray_);
      DARABONBA_PTR_TO_JSON(modifier, modifier_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(sortName, sortName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(executionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(labelKey, labelKey_);
      DARABONBA_PTR_FROM_JSON(labelValueArray, labelValueArray_);
      DARABONBA_PTR_FROM_JSON(modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(sortName, sortName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListDeploymentsRequest() = default ;
    ListDeploymentsRequest(const ListDeploymentsRequest &) = default ;
    ListDeploymentsRequest(ListDeploymentsRequest &&) = default ;
    ListDeploymentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentsRequest() = default ;
    ListDeploymentsRequest& operator=(const ListDeploymentsRequest &) = default ;
    ListDeploymentsRequest& operator=(ListDeploymentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->executionMode_ == nullptr && return this->labelKey_ == nullptr && return this->labelValueArray_ == nullptr && return this->modifier_ == nullptr && return this->name_ == nullptr
        && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->sortName_ == nullptr && return this->status_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListDeploymentsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline ListDeploymentsRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // labelKey Field Functions 
    bool hasLabelKey() const { return this->labelKey_ != nullptr;};
    void deleteLabelKey() { this->labelKey_ = nullptr;};
    inline string labelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
    inline ListDeploymentsRequest& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


    // labelValueArray Field Functions 
    bool hasLabelValueArray() const { return this->labelValueArray_ != nullptr;};
    void deleteLabelValueArray() { this->labelValueArray_ = nullptr;};
    inline string labelValueArray() const { DARABONBA_PTR_GET_DEFAULT(labelValueArray_, "") };
    inline ListDeploymentsRequest& setLabelValueArray(string labelValueArray) { DARABONBA_PTR_SET_VALUE(labelValueArray_, labelValueArray) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline ListDeploymentsRequest& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDeploymentsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListDeploymentsRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDeploymentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortName Field Functions 
    bool hasSortName() const { return this->sortName_ != nullptr;};
    void deleteSortName() { this->sortName_ = nullptr;};
    inline string sortName() const { DARABONBA_PTR_GET_DEFAULT(sortName_, "") };
    inline ListDeploymentsRequest& setSortName(string sortName) { DARABONBA_PTR_SET_VALUE(sortName_, sortName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDeploymentsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the user who creates the deployment.
    std::shared_ptr<string> creator_ = nullptr;
    // The execution mode of the deployment.
    // 
    // Valid values:
    // 
    // *   BATCH
    // *   STREAMING
    std::shared_ptr<string> executionMode_ = nullptr;
    // The tag key.
    std::shared_ptr<string> labelKey_ = nullptr;
    // The tag value. Separate multiple values with semicolon (;).
    std::shared_ptr<string> labelValueArray_ = nullptr;
    // The ID of the user who modifies the deployment.
    std::shared_ptr<string> modifier_ = nullptr;
    // The name of the deployment.
    std::shared_ptr<string> name_ = nullptr;
    // The page number. Minimum value: 1. Default value: 1.
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> sortName_ = nullptr;
    // The latest status of the deployment.
    // 
    // Valid values:
    // 
    // *   CANCELLED
    // *   FAILED
    // *   RUNNING
    // *   TRANSITIONING
    // *   FINISHED
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
