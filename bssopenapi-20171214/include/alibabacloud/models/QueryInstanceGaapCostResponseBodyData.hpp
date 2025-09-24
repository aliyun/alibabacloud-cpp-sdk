// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryInstanceGaapCostResponseBodyDataModules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInstanceGaapCostResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceGaapCostResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Modules, modules_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceGaapCostResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Modules, modules_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryInstanceGaapCostResponseBodyData() = default ;
    QueryInstanceGaapCostResponseBodyData(const QueryInstanceGaapCostResponseBodyData &) = default ;
    QueryInstanceGaapCostResponseBodyData(QueryInstanceGaapCostResponseBodyData &&) = default ;
    QueryInstanceGaapCostResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceGaapCostResponseBodyData() = default ;
    QueryInstanceGaapCostResponseBodyData& operator=(const QueryInstanceGaapCostResponseBodyData &) = default ;
    QueryInstanceGaapCostResponseBodyData& operator=(QueryInstanceGaapCostResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostId_ != nullptr
        && this->modules_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline QueryInstanceGaapCostResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const Models::QueryInstanceGaapCostResponseBodyDataModules & modules() const { DARABONBA_PTR_GET_CONST(modules_, Models::QueryInstanceGaapCostResponseBodyDataModules) };
    inline Models::QueryInstanceGaapCostResponseBodyDataModules modules() { DARABONBA_PTR_GET(modules_, Models::QueryInstanceGaapCostResponseBodyDataModules) };
    inline QueryInstanceGaapCostResponseBodyData& setModules(const Models::QueryInstanceGaapCostResponseBodyDataModules & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline QueryInstanceGaapCostResponseBodyData& setModules(Models::QueryInstanceGaapCostResponseBodyDataModules && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryInstanceGaapCostResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryInstanceGaapCostResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryInstanceGaapCostResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> hostId_ = nullptr;
    std::shared_ptr<Models::QueryInstanceGaapCostResponseBodyDataModules> modules_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
