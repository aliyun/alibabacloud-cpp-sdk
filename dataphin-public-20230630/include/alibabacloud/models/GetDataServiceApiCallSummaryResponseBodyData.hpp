// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiCallSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiCallSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallCount, callCount_);
      DARABONBA_PTR_TO_JSON(ErrorApiCount, errorApiCount_);
      DARABONBA_PTR_TO_JSON(ErrorAppCount, errorAppCount_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
      DARABONBA_PTR_TO_JSON(OfflineRate, offlineRate_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiCallSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
      DARABONBA_PTR_FROM_JSON(ErrorApiCount, errorApiCount_);
      DARABONBA_PTR_FROM_JSON(ErrorAppCount, errorAppCount_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
      DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
      DARABONBA_PTR_FROM_JSON(OfflineRate, offlineRate_);
    };
    GetDataServiceApiCallSummaryResponseBodyData() = default ;
    GetDataServiceApiCallSummaryResponseBodyData(const GetDataServiceApiCallSummaryResponseBodyData &) = default ;
    GetDataServiceApiCallSummaryResponseBodyData(GetDataServiceApiCallSummaryResponseBodyData &&) = default ;
    GetDataServiceApiCallSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiCallSummaryResponseBodyData() = default ;
    GetDataServiceApiCallSummaryResponseBodyData& operator=(const GetDataServiceApiCallSummaryResponseBodyData &) = default ;
    GetDataServiceApiCallSummaryResponseBodyData& operator=(GetDataServiceApiCallSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callCount_ != nullptr
        && this->errorApiCount_ != nullptr && this->errorAppCount_ != nullptr && this->errorCount_ != nullptr && this->errorRate_ != nullptr && this->offlineRate_ != nullptr; };
    // callCount Field Functions 
    bool hasCallCount() const { return this->callCount_ != nullptr;};
    void deleteCallCount() { this->callCount_ = nullptr;};
    inline int64_t callCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0L) };
    inline GetDataServiceApiCallSummaryResponseBodyData& setCallCount(int64_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


    // errorApiCount Field Functions 
    bool hasErrorApiCount() const { return this->errorApiCount_ != nullptr;};
    void deleteErrorApiCount() { this->errorApiCount_ = nullptr;};
    inline int64_t errorApiCount() const { DARABONBA_PTR_GET_DEFAULT(errorApiCount_, 0L) };
    inline GetDataServiceApiCallSummaryResponseBodyData& setErrorApiCount(int64_t errorApiCount) { DARABONBA_PTR_SET_VALUE(errorApiCount_, errorApiCount) };


    // errorAppCount Field Functions 
    bool hasErrorAppCount() const { return this->errorAppCount_ != nullptr;};
    void deleteErrorAppCount() { this->errorAppCount_ = nullptr;};
    inline int64_t errorAppCount() const { DARABONBA_PTR_GET_DEFAULT(errorAppCount_, 0L) };
    inline GetDataServiceApiCallSummaryResponseBodyData& setErrorAppCount(int64_t errorAppCount) { DARABONBA_PTR_SET_VALUE(errorAppCount_, errorAppCount) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int64_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
    inline GetDataServiceApiCallSummaryResponseBodyData& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


    // errorRate Field Functions 
    bool hasErrorRate() const { return this->errorRate_ != nullptr;};
    void deleteErrorRate() { this->errorRate_ = nullptr;};
    inline double errorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, 0.0) };
    inline GetDataServiceApiCallSummaryResponseBodyData& setErrorRate(double errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


    // offlineRate Field Functions 
    bool hasOfflineRate() const { return this->offlineRate_ != nullptr;};
    void deleteOfflineRate() { this->offlineRate_ = nullptr;};
    inline double offlineRate() const { DARABONBA_PTR_GET_DEFAULT(offlineRate_, 0.0) };
    inline GetDataServiceApiCallSummaryResponseBodyData& setOfflineRate(double offlineRate) { DARABONBA_PTR_SET_VALUE(offlineRate_, offlineRate) };


  protected:
    std::shared_ptr<int64_t> callCount_ = nullptr;
    std::shared_ptr<int64_t> errorApiCount_ = nullptr;
    std::shared_ptr<int64_t> errorAppCount_ = nullptr;
    std::shared_ptr<int64_t> errorCount_ = nullptr;
    std::shared_ptr<double> errorRate_ = nullptr;
    std::shared_ptr<double> offlineRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
