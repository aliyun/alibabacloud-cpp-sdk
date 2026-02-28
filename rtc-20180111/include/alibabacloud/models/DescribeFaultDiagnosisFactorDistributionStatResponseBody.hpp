// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISFACTORDISTRIBUTIONSTATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFAULTDIAGNOSISFACTORDISTRIBUTIONSTATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeFaultDiagnosisFactorDistributionStatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFaultDiagnosisFactorDistributionStatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatList, statList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFaultDiagnosisFactorDistributionStatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatList, statList_);
    };
    DescribeFaultDiagnosisFactorDistributionStatResponseBody() = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody(const DescribeFaultDiagnosisFactorDistributionStatResponseBody &) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody(DescribeFaultDiagnosisFactorDistributionStatResponseBody &&) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFaultDiagnosisFactorDistributionStatResponseBody() = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody& operator=(const DescribeFaultDiagnosisFactorDistributionStatResponseBody &) = default ;
    DescribeFaultDiagnosisFactorDistributionStatResponseBody& operator=(DescribeFaultDiagnosisFactorDistributionStatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StatList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StatList& obj) { 
        DARABONBA_PTR_TO_JSON(FactorId, factorId_);
        DARABONBA_PTR_TO_JSON(UserCount, userCount_);
        DARABONBA_PTR_TO_JSON(UserRatio, userRatio_);
      };
      friend void from_json(const Darabonba::Json& j, StatList& obj) { 
        DARABONBA_PTR_FROM_JSON(FactorId, factorId_);
        DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
        DARABONBA_PTR_FROM_JSON(UserRatio, userRatio_);
      };
      StatList() = default ;
      StatList(const StatList &) = default ;
      StatList(StatList &&) = default ;
      StatList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StatList() = default ;
      StatList& operator=(const StatList &) = default ;
      StatList& operator=(StatList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->factorId_ == nullptr
        && this->userCount_ == nullptr && this->userRatio_ == nullptr; };
      // factorId Field Functions 
      bool hasFactorId() const { return this->factorId_ != nullptr;};
      void deleteFactorId() { this->factorId_ = nullptr;};
      inline string getFactorId() const { DARABONBA_PTR_GET_DEFAULT(factorId_, "") };
      inline StatList& setFactorId(string factorId) { DARABONBA_PTR_SET_VALUE(factorId_, factorId) };


      // userCount Field Functions 
      bool hasUserCount() const { return this->userCount_ != nullptr;};
      void deleteUserCount() { this->userCount_ = nullptr;};
      inline int32_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
      inline StatList& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


      // userRatio Field Functions 
      bool hasUserRatio() const { return this->userRatio_ != nullptr;};
      void deleteUserRatio() { this->userRatio_ = nullptr;};
      inline float getUserRatio() const { DARABONBA_PTR_GET_DEFAULT(userRatio_, 0.0) };
      inline StatList& setUserRatio(float userRatio) { DARABONBA_PTR_SET_VALUE(userRatio_, userRatio) };


    protected:
      shared_ptr<string> factorId_ {};
      shared_ptr<int32_t> userCount_ {};
      shared_ptr<float> userRatio_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statList Field Functions 
    bool hasStatList() const { return this->statList_ != nullptr;};
    void deleteStatList() { this->statList_ = nullptr;};
    inline const vector<DescribeFaultDiagnosisFactorDistributionStatResponseBody::StatList> & getStatList() const { DARABONBA_PTR_GET_CONST(statList_, vector<DescribeFaultDiagnosisFactorDistributionStatResponseBody::StatList>) };
    inline vector<DescribeFaultDiagnosisFactorDistributionStatResponseBody::StatList> getStatList() { DARABONBA_PTR_GET(statList_, vector<DescribeFaultDiagnosisFactorDistributionStatResponseBody::StatList>) };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBody& setStatList(const vector<DescribeFaultDiagnosisFactorDistributionStatResponseBody::StatList> & statList) { DARABONBA_PTR_SET_VALUE(statList_, statList) };
    inline DescribeFaultDiagnosisFactorDistributionStatResponseBody& setStatList(vector<DescribeFaultDiagnosisFactorDistributionStatResponseBody::StatList> && statList) { DARABONBA_PTR_SET_RVALUE(statList_, statList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeFaultDiagnosisFactorDistributionStatResponseBody::StatList>> statList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
