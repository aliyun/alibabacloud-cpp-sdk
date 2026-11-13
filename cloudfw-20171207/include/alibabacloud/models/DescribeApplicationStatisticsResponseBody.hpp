// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeApplicationStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskList, riskList_);
      DARABONBA_PTR_TO_JSON(TechnologyList, technologyList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
      DARABONBA_PTR_FROM_JSON(TechnologyList, technologyList_);
    };
    DescribeApplicationStatisticsResponseBody() = default ;
    DescribeApplicationStatisticsResponseBody(const DescribeApplicationStatisticsResponseBody &) = default ;
    DescribeApplicationStatisticsResponseBody(DescribeApplicationStatisticsResponseBody &&) = default ;
    DescribeApplicationStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationStatisticsResponseBody() = default ;
    DescribeApplicationStatisticsResponseBody& operator=(const DescribeApplicationStatisticsResponseBody &) = default ;
    DescribeApplicationStatisticsResponseBody& operator=(DescribeApplicationStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TechnologyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TechnologyList& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationCount, applicationCount_);
        DARABONBA_PTR_TO_JSON(Technology, technology_);
      };
      friend void from_json(const Darabonba::Json& j, TechnologyList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationCount, applicationCount_);
        DARABONBA_PTR_FROM_JSON(Technology, technology_);
      };
      TechnologyList() = default ;
      TechnologyList(const TechnologyList &) = default ;
      TechnologyList(TechnologyList &&) = default ;
      TechnologyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TechnologyList() = default ;
      TechnologyList& operator=(const TechnologyList &) = default ;
      TechnologyList& operator=(TechnologyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationCount_ == nullptr
        && this->technology_ == nullptr; };
      // applicationCount Field Functions 
      bool hasApplicationCount() const { return this->applicationCount_ != nullptr;};
      void deleteApplicationCount() { this->applicationCount_ = nullptr;};
      inline int64_t getApplicationCount() const { DARABONBA_PTR_GET_DEFAULT(applicationCount_, 0L) };
      inline TechnologyList& setApplicationCount(int64_t applicationCount) { DARABONBA_PTR_SET_VALUE(applicationCount_, applicationCount) };


      // technology Field Functions 
      bool hasTechnology() const { return this->technology_ != nullptr;};
      void deleteTechnology() { this->technology_ = nullptr;};
      inline string getTechnology() const { DARABONBA_PTR_GET_DEFAULT(technology_, "") };
      inline TechnologyList& setTechnology(string technology) { DARABONBA_PTR_SET_VALUE(technology_, technology) };


    protected:
      shared_ptr<int64_t> applicationCount_ {};
      shared_ptr<string> technology_ {};
    };

    class RiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskList& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationCount, applicationCount_);
        DARABONBA_PTR_TO_JSON(Risk, risk_);
      };
      friend void from_json(const Darabonba::Json& j, RiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationCount, applicationCount_);
        DARABONBA_PTR_FROM_JSON(Risk, risk_);
      };
      RiskList() = default ;
      RiskList(const RiskList &) = default ;
      RiskList(RiskList &&) = default ;
      RiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskList() = default ;
      RiskList& operator=(const RiskList &) = default ;
      RiskList& operator=(RiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationCount_ == nullptr
        && this->risk_ == nullptr; };
      // applicationCount Field Functions 
      bool hasApplicationCount() const { return this->applicationCount_ != nullptr;};
      void deleteApplicationCount() { this->applicationCount_ = nullptr;};
      inline int64_t getApplicationCount() const { DARABONBA_PTR_GET_DEFAULT(applicationCount_, 0L) };
      inline RiskList& setApplicationCount(int64_t applicationCount) { DARABONBA_PTR_SET_VALUE(applicationCount_, applicationCount) };


      // risk Field Functions 
      bool hasRisk() const { return this->risk_ != nullptr;};
      void deleteRisk() { this->risk_ = nullptr;};
      inline string getRisk() const { DARABONBA_PTR_GET_DEFAULT(risk_, "") };
      inline RiskList& setRisk(string risk) { DARABONBA_PTR_SET_VALUE(risk_, risk) };


    protected:
      shared_ptr<int64_t> applicationCount_ {};
      shared_ptr<string> risk_ {};
    };

    class CategoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CategoryList& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationCount, applicationCount_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      };
      friend void from_json(const Darabonba::Json& j, CategoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationCount, applicationCount_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      };
      CategoryList() = default ;
      CategoryList(const CategoryList &) = default ;
      CategoryList(CategoryList &&) = default ;
      CategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CategoryList() = default ;
      CategoryList& operator=(const CategoryList &) = default ;
      CategoryList& operator=(CategoryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationCount_ == nullptr
        && this->categoryName_ == nullptr; };
      // applicationCount Field Functions 
      bool hasApplicationCount() const { return this->applicationCount_ != nullptr;};
      void deleteApplicationCount() { this->applicationCount_ = nullptr;};
      inline int64_t getApplicationCount() const { DARABONBA_PTR_GET_DEFAULT(applicationCount_, 0L) };
      inline CategoryList& setApplicationCount(int64_t applicationCount) { DARABONBA_PTR_SET_VALUE(applicationCount_, applicationCount) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline CategoryList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    protected:
      shared_ptr<int64_t> applicationCount_ {};
      shared_ptr<string> categoryName_ {};
    };

    virtual bool empty() const override { return this->categoryList_ == nullptr
        && this->requestId_ == nullptr && this->riskList_ == nullptr && this->technologyList_ == nullptr; };
    // categoryList Field Functions 
    bool hasCategoryList() const { return this->categoryList_ != nullptr;};
    void deleteCategoryList() { this->categoryList_ = nullptr;};
    inline const vector<DescribeApplicationStatisticsResponseBody::CategoryList> & getCategoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<DescribeApplicationStatisticsResponseBody::CategoryList>) };
    inline vector<DescribeApplicationStatisticsResponseBody::CategoryList> getCategoryList() { DARABONBA_PTR_GET(categoryList_, vector<DescribeApplicationStatisticsResponseBody::CategoryList>) };
    inline DescribeApplicationStatisticsResponseBody& setCategoryList(const vector<DescribeApplicationStatisticsResponseBody::CategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
    inline DescribeApplicationStatisticsResponseBody& setCategoryList(vector<DescribeApplicationStatisticsResponseBody::CategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskList Field Functions 
    bool hasRiskList() const { return this->riskList_ != nullptr;};
    void deleteRiskList() { this->riskList_ = nullptr;};
    inline const vector<DescribeApplicationStatisticsResponseBody::RiskList> & getRiskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<DescribeApplicationStatisticsResponseBody::RiskList>) };
    inline vector<DescribeApplicationStatisticsResponseBody::RiskList> getRiskList() { DARABONBA_PTR_GET(riskList_, vector<DescribeApplicationStatisticsResponseBody::RiskList>) };
    inline DescribeApplicationStatisticsResponseBody& setRiskList(const vector<DescribeApplicationStatisticsResponseBody::RiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
    inline DescribeApplicationStatisticsResponseBody& setRiskList(vector<DescribeApplicationStatisticsResponseBody::RiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


    // technologyList Field Functions 
    bool hasTechnologyList() const { return this->technologyList_ != nullptr;};
    void deleteTechnologyList() { this->technologyList_ = nullptr;};
    inline const vector<DescribeApplicationStatisticsResponseBody::TechnologyList> & getTechnologyList() const { DARABONBA_PTR_GET_CONST(technologyList_, vector<DescribeApplicationStatisticsResponseBody::TechnologyList>) };
    inline vector<DescribeApplicationStatisticsResponseBody::TechnologyList> getTechnologyList() { DARABONBA_PTR_GET(technologyList_, vector<DescribeApplicationStatisticsResponseBody::TechnologyList>) };
    inline DescribeApplicationStatisticsResponseBody& setTechnologyList(const vector<DescribeApplicationStatisticsResponseBody::TechnologyList> & technologyList) { DARABONBA_PTR_SET_VALUE(technologyList_, technologyList) };
    inline DescribeApplicationStatisticsResponseBody& setTechnologyList(vector<DescribeApplicationStatisticsResponseBody::TechnologyList> && technologyList) { DARABONBA_PTR_SET_RVALUE(technologyList_, technologyList) };


  protected:
    shared_ptr<vector<DescribeApplicationStatisticsResponseBody::CategoryList>> categoryList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeApplicationStatisticsResponseBody::RiskList>> riskList_ {};
    shared_ptr<vector<DescribeApplicationStatisticsResponseBody::TechnologyList>> technologyList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
