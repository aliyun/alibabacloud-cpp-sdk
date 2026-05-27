// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMBILLSBYDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUMBILLSBYDATEREQUEST_HPP_
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
  class SumBillsByDateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumBillsByDateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(statsType, statsType_);
      DARABONBA_PTR_TO_JSON(topN, topN_);
    };
    friend void from_json(const Darabonba::Json& j, SumBillsByDateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(statsType, statsType_);
      DARABONBA_PTR_FROM_JSON(topN, topN_);
    };
    SumBillsByDateRequest() = default ;
    SumBillsByDateRequest(const SumBillsByDateRequest &) = default ;
    SumBillsByDateRequest(SumBillsByDateRequest &&) = default ;
    SumBillsByDateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumBillsByDateRequest() = default ;
    SumBillsByDateRequest& operator=(const SumBillsByDateRequest &) = default ;
    SumBillsByDateRequest& operator=(SumBillsByDateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->projectNames_ == nullptr && this->startDate_ == nullptr && this->statsType_ == nullptr && this->topN_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline SumBillsByDateRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // projectNames Field Functions 
    bool hasProjectNames() const { return this->projectNames_ != nullptr;};
    void deleteProjectNames() { this->projectNames_ = nullptr;};
    inline const vector<string> & getProjectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
    inline vector<string> getProjectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
    inline SumBillsByDateRequest& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
    inline SumBillsByDateRequest& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline SumBillsByDateRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statsType Field Functions 
    bool hasStatsType() const { return this->statsType_ != nullptr;};
    void deleteStatsType() { this->statsType_ = nullptr;};
    inline string getStatsType() const { DARABONBA_PTR_GET_DEFAULT(statsType_, "") };
    inline SumBillsByDateRequest& setStatsType(string statsType) { DARABONBA_PTR_SET_VALUE(statsType_, statsType) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int32_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0) };
    inline SumBillsByDateRequest& setTopN(int32_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


  protected:
    shared_ptr<int64_t> endDate_ {};
    shared_ptr<vector<string>> projectNames_ {};
    shared_ptr<int64_t> startDate_ {};
    shared_ptr<string> statsType_ {};
    shared_ptr<int32_t> topN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
