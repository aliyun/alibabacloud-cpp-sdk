// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppsResponseBodyDataRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListAppsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Records, records_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Records, records_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListAppsResponseBodyData() = default ;
    ListAppsResponseBodyData(const ListAppsResponseBodyData &) = default ;
    ListAppsResponseBodyData(ListAppsResponseBodyData &&) = default ;
    ListAppsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppsResponseBodyData() = default ;
    ListAppsResponseBodyData& operator=(const ListAppsResponseBodyData &) = default ;
    ListAppsResponseBodyData& operator=(ListAppsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->records_ == nullptr && return this->total_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::ListAppsResponseBodyDataRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::ListAppsResponseBodyDataRecords>) };
    inline vector<Models::ListAppsResponseBodyDataRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::ListAppsResponseBodyDataRecords>) };
    inline ListAppsResponseBodyData& setRecords(const vector<Models::ListAppsResponseBodyDataRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline ListAppsResponseBodyData& setRecords(vector<Models::ListAppsResponseBodyDataRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAppsResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // -
    std::shared_ptr<vector<Models::ListAppsResponseBodyDataRecords>> records_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
