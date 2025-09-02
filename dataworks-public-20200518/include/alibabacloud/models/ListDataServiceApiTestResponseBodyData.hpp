// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPITESTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPITESTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServiceApiTestResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiTestResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(CostTime, costTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ParamMap, paramMap_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(RetResult, retResult_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TestId, testId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiTestResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(CostTime, costTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ParamMap, paramMap_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(RetResult, retResult_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TestId, testId_);
    };
    ListDataServiceApiTestResponseBodyData() = default ;
    ListDataServiceApiTestResponseBodyData(const ListDataServiceApiTestResponseBodyData &) = default ;
    ListDataServiceApiTestResponseBodyData(ListDataServiceApiTestResponseBodyData &&) = default ;
    ListDataServiceApiTestResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiTestResponseBodyData() = default ;
    ListDataServiceApiTestResponseBodyData& operator=(const ListDataServiceApiTestResponseBodyData &) = default ;
    ListDataServiceApiTestResponseBodyData& operator=(ListDataServiceApiTestResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiId_ != nullptr
        && this->costTime_ != nullptr && this->createTime_ != nullptr && this->paramMap_ != nullptr && this->retCode_ != nullptr && this->retResult_ != nullptr
        && this->status_ != nullptr && this->testId_ != nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServiceApiTestResponseBodyData& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // costTime Field Functions 
    bool hasCostTime() const { return this->costTime_ != nullptr;};
    void deleteCostTime() { this->costTime_ = nullptr;};
    inline int32_t costTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, 0) };
    inline ListDataServiceApiTestResponseBodyData& setCostTime(int32_t costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataServiceApiTestResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // paramMap Field Functions 
    bool hasParamMap() const { return this->paramMap_ != nullptr;};
    void deleteParamMap() { this->paramMap_ = nullptr;};
    inline string paramMap() const { DARABONBA_PTR_GET_DEFAULT(paramMap_, "") };
    inline ListDataServiceApiTestResponseBodyData& setParamMap(string paramMap) { DARABONBA_PTR_SET_VALUE(paramMap_, paramMap) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int64_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0L) };
    inline ListDataServiceApiTestResponseBodyData& setRetCode(int64_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // retResult Field Functions 
    bool hasRetResult() const { return this->retResult_ != nullptr;};
    void deleteRetResult() { this->retResult_ = nullptr;};
    inline string retResult() const { DARABONBA_PTR_GET_DEFAULT(retResult_, "") };
    inline ListDataServiceApiTestResponseBodyData& setRetResult(string retResult) { DARABONBA_PTR_SET_VALUE(retResult_, retResult) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDataServiceApiTestResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // testId Field Functions 
    bool hasTestId() const { return this->testId_ != nullptr;};
    void deleteTestId() { this->testId_ = nullptr;};
    inline int64_t testId() const { DARABONBA_PTR_GET_DEFAULT(testId_, 0L) };
    inline ListDataServiceApiTestResponseBodyData& setTestId(int64_t testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


  protected:
    // The ID of the DataService Studio API on which the test is performed.
    std::shared_ptr<int64_t> apiId_ = nullptr;
    // The time that is consumed to complete the test.
    std::shared_ptr<int32_t> costTime_ = nullptr;
    // The time when the test was initiated.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The request parameters configured for the test.
    std::shared_ptr<string> paramMap_ = nullptr;
    // The status code returned for the test. If the test is not complete, this parameter is not returned.
    std::shared_ptr<int64_t> retCode_ = nullptr;
    // The result returned for the test.
    std::shared_ptr<string> retResult_ = nullptr;
    // The status of the test. Valid values: RUNNING and FINISHED.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the test.
    std::shared_ptr<int64_t> testId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
