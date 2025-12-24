// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHMESSAGECENTERRESPONSEBODYPAGE_HPP_
#define ALIBABACLOUD_MODELS_RUNNOTIFYCOMPONENTWITHMESSAGECENTERRESPONSEBODYPAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RunNotifyComponentWithMessageCenterResponseBodyPage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNotifyComponentWithMessageCenterResponseBodyPage& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, RunNotifyComponentWithMessageCenterResponseBodyPage& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    RunNotifyComponentWithMessageCenterResponseBodyPage() = default ;
    RunNotifyComponentWithMessageCenterResponseBodyPage(const RunNotifyComponentWithMessageCenterResponseBodyPage &) = default ;
    RunNotifyComponentWithMessageCenterResponseBodyPage(RunNotifyComponentWithMessageCenterResponseBodyPage &&) = default ;
    RunNotifyComponentWithMessageCenterResponseBodyPage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNotifyComponentWithMessageCenterResponseBodyPage() = default ;
    RunNotifyComponentWithMessageCenterResponseBodyPage& operator=(const RunNotifyComponentWithMessageCenterResponseBodyPage &) = default ;
    RunNotifyComponentWithMessageCenterResponseBodyPage& operator=(RunNotifyComponentWithMessageCenterResponseBodyPage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline RunNotifyComponentWithMessageCenterResponseBodyPage& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline RunNotifyComponentWithMessageCenterResponseBodyPage& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline RunNotifyComponentWithMessageCenterResponseBodyPage& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Page number in pagination queries.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of items to display per page when performing a paginated query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Number of list entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
