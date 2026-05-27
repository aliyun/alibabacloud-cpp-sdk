// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMDAILYBILLSBYITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUMDAILYBILLSBYITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class SumDailyBillsByItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumDailyBillsByItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(statsType, statsType_);
      DARABONBA_PTR_TO_JSON(types, types_);
    };
    friend void from_json(const Darabonba::Json& j, SumDailyBillsByItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(statsType, statsType_);
      DARABONBA_PTR_FROM_JSON(types, types_);
    };
    SumDailyBillsByItemRequest() = default ;
    SumDailyBillsByItemRequest(const SumDailyBillsByItemRequest &) = default ;
    SumDailyBillsByItemRequest(SumDailyBillsByItemRequest &&) = default ;
    SumDailyBillsByItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumDailyBillsByItemRequest() = default ;
    SumDailyBillsByItemRequest& operator=(const SumDailyBillsByItemRequest &) = default ;
    SumDailyBillsByItemRequest& operator=(SumDailyBillsByItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectNames_ == nullptr && this->startDate_ == nullptr && this->statsType_ == nullptr
        && this->types_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline SumDailyBillsByItemRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline SumDailyBillsByItemRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline SumDailyBillsByItemRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectNames Field Functions 
    bool hasProjectNames() const { return this->projectNames_ != nullptr;};
    void deleteProjectNames() { this->projectNames_ = nullptr;};
    inline const vector<string> & getProjectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
    inline vector<string> getProjectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
    inline SumDailyBillsByItemRequest& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
    inline SumDailyBillsByItemRequest& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline SumDailyBillsByItemRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statsType Field Functions 
    bool hasStatsType() const { return this->statsType_ != nullptr;};
    void deleteStatsType() { this->statsType_ = nullptr;};
    inline string getStatsType() const { DARABONBA_PTR_GET_DEFAULT(statsType_, "") };
    inline SumDailyBillsByItemRequest& setStatsType(string statsType) { DARABONBA_PTR_SET_VALUE(statsType_, statsType) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> getTypes() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline SumDailyBillsByItemRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline SumDailyBillsByItemRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<vector<string>> projectNames_ {};
    shared_ptr<int64_t> startDate_ {};
    shared_ptr<string> statsType_ {};
    shared_ptr<vector<string>> types_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
