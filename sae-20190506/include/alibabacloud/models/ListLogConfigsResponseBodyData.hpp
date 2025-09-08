// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGCONFIGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGCONFIGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLogConfigsResponseBodyDataLogConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListLogConfigsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(LogConfigs, logConfigs_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(LogConfigs, logConfigs_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    ListLogConfigsResponseBodyData() = default ;
    ListLogConfigsResponseBodyData(const ListLogConfigsResponseBodyData &) = default ;
    ListLogConfigsResponseBodyData(ListLogConfigsResponseBodyData &&) = default ;
    ListLogConfigsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogConfigsResponseBodyData() = default ;
    ListLogConfigsResponseBodyData& operator=(const ListLogConfigsResponseBodyData &) = default ;
    ListLogConfigsResponseBodyData& operator=(ListLogConfigsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->logConfigs_ != nullptr && this->pageSize_ != nullptr && this->totalSize_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListLogConfigsResponseBodyData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // logConfigs Field Functions 
    bool hasLogConfigs() const { return this->logConfigs_ != nullptr;};
    void deleteLogConfigs() { this->logConfigs_ = nullptr;};
    inline const vector<Models::ListLogConfigsResponseBodyDataLogConfigs> & logConfigs() const { DARABONBA_PTR_GET_CONST(logConfigs_, vector<Models::ListLogConfigsResponseBodyDataLogConfigs>) };
    inline vector<Models::ListLogConfigsResponseBodyDataLogConfigs> logConfigs() { DARABONBA_PTR_GET(logConfigs_, vector<Models::ListLogConfigsResponseBodyDataLogConfigs>) };
    inline ListLogConfigsResponseBodyData& setLogConfigs(const vector<Models::ListLogConfigsResponseBodyDataLogConfigs> & logConfigs) { DARABONBA_PTR_SET_VALUE(logConfigs_, logConfigs) };
    inline ListLogConfigsResponseBodyData& setLogConfigs(vector<Models::ListLogConfigsResponseBodyDataLogConfigs> && logConfigs) { DARABONBA_PTR_SET_RVALUE(logConfigs_, logConfigs) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLogConfigsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline ListLogConfigsResponseBodyData& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The total number of returned entries.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The details of the logging configuration.
    std::shared_ptr<vector<Models::ListLogConfigsResponseBodyDataLogConfigs>> logConfigs_ = nullptr;
    // The error code.
    // 
    // *   The **ErrorCode** parameter is not returned when the request succeeds.
    // *   The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
