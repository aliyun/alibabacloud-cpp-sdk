// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARGERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeChargeResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChargeResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalSeCu, totalSeCu_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChargeResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalSeCu, totalSeCu_);
    };
    DescribeChargeResultResponseBody() = default ;
    DescribeChargeResultResponseBody(const DescribeChargeResultResponseBody &) = default ;
    DescribeChargeResultResponseBody(DescribeChargeResultResponseBody &&) = default ;
    DescribeChargeResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChargeResultResponseBody() = default ;
    DescribeChargeResultResponseBody& operator=(const DescribeChargeResultResponseBody &) = default ;
    DescribeChargeResultResponseBody& operator=(DescribeChargeResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModuleDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModuleDetails& obj) { 
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(SeCu, seCu_);
      };
      friend void from_json(const Darabonba::Json& j, ModuleDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(SeCu, seCu_);
      };
      ModuleDetails() = default ;
      ModuleDetails(const ModuleDetails &) = default ;
      ModuleDetails(ModuleDetails &&) = default ;
      ModuleDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModuleDetails() = default ;
      ModuleDetails& operator=(const ModuleDetails &) = default ;
      ModuleDetails& operator=(ModuleDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->seCu_ == nullptr; };
      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline ModuleDetails& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // seCu Field Functions 
      bool hasSeCu() const { return this->seCu_ != nullptr;};
      void deleteSeCu() { this->seCu_ = nullptr;};
      inline double getSeCu() const { DARABONBA_PTR_GET_DEFAULT(seCu_, 0.0) };
      inline ModuleDetails& setSeCu(double seCu) { DARABONBA_PTR_SET_VALUE(seCu_, seCu) };


    protected:
      shared_ptr<string> moduleCode_ {};
      shared_ptr<double> seCu_ {};
    };

    virtual bool empty() const override { return this->moduleDetails_ == nullptr
        && this->requestId_ == nullptr && this->totalSeCu_ == nullptr; };
    // moduleDetails Field Functions 
    bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
    void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
    inline const vector<DescribeChargeResultResponseBody::ModuleDetails> & getModuleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, vector<DescribeChargeResultResponseBody::ModuleDetails>) };
    inline vector<DescribeChargeResultResponseBody::ModuleDetails> getModuleDetails() { DARABONBA_PTR_GET(moduleDetails_, vector<DescribeChargeResultResponseBody::ModuleDetails>) };
    inline DescribeChargeResultResponseBody& setModuleDetails(const vector<DescribeChargeResultResponseBody::ModuleDetails> & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
    inline DescribeChargeResultResponseBody& setModuleDetails(vector<DescribeChargeResultResponseBody::ModuleDetails> && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeChargeResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalSeCu Field Functions 
    bool hasTotalSeCu() const { return this->totalSeCu_ != nullptr;};
    void deleteTotalSeCu() { this->totalSeCu_ = nullptr;};
    inline double getTotalSeCu() const { DARABONBA_PTR_GET_DEFAULT(totalSeCu_, 0.0) };
    inline DescribeChargeResultResponseBody& setTotalSeCu(double totalSeCu) { DARABONBA_PTR_SET_VALUE(totalSeCu_, totalSeCu) };


  protected:
    shared_ptr<vector<DescribeChargeResultResponseBody::ModuleDetails>> moduleDetails_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<double> totalSeCu_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
