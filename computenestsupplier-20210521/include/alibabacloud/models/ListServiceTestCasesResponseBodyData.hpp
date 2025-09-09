// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICETESTCASESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICETESTCASESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceTestCasesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceTestCasesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TestCaseId, testCaseId_);
      DARABONBA_PTR_TO_JSON(TestCaseName, testCaseName_);
      DARABONBA_PTR_TO_JSON(TestConfig, testConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceTestCasesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TestCaseId, testCaseId_);
      DARABONBA_PTR_FROM_JSON(TestCaseName, testCaseName_);
      DARABONBA_PTR_FROM_JSON(TestConfig, testConfig_);
    };
    ListServiceTestCasesResponseBodyData() = default ;
    ListServiceTestCasesResponseBodyData(const ListServiceTestCasesResponseBodyData &) = default ;
    ListServiceTestCasesResponseBodyData(ListServiceTestCasesResponseBodyData &&) = default ;
    ListServiceTestCasesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceTestCasesResponseBodyData() = default ;
    ListServiceTestCasesResponseBodyData& operator=(const ListServiceTestCasesResponseBodyData &) = default ;
    ListServiceTestCasesResponseBodyData& operator=(ListServiceTestCasesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->templateName_ != nullptr
        && this->testCaseId_ != nullptr && this->testCaseName_ != nullptr && this->testConfig_ != nullptr; };
    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListServiceTestCasesResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // testCaseId Field Functions 
    bool hasTestCaseId() const { return this->testCaseId_ != nullptr;};
    void deleteTestCaseId() { this->testCaseId_ = nullptr;};
    inline string testCaseId() const { DARABONBA_PTR_GET_DEFAULT(testCaseId_, "") };
    inline ListServiceTestCasesResponseBodyData& setTestCaseId(string testCaseId) { DARABONBA_PTR_SET_VALUE(testCaseId_, testCaseId) };


    // testCaseName Field Functions 
    bool hasTestCaseName() const { return this->testCaseName_ != nullptr;};
    void deleteTestCaseName() { this->testCaseName_ = nullptr;};
    inline string testCaseName() const { DARABONBA_PTR_GET_DEFAULT(testCaseName_, "") };
    inline ListServiceTestCasesResponseBodyData& setTestCaseName(string testCaseName) { DARABONBA_PTR_SET_VALUE(testCaseName_, testCaseName) };


    // testConfig Field Functions 
    bool hasTestConfig() const { return this->testConfig_ != nullptr;};
    void deleteTestConfig() { this->testConfig_ = nullptr;};
    inline string testConfig() const { DARABONBA_PTR_GET_DEFAULT(testConfig_, "") };
    inline ListServiceTestCasesResponseBodyData& setTestConfig(string testConfig) { DARABONBA_PTR_SET_VALUE(testConfig_, testConfig) };


  protected:
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The service test case id.
    std::shared_ptr<string> testCaseId_ = nullptr;
    // The service test case name.
    std::shared_ptr<string> testCaseName_ = nullptr;
    // The service test config.
    std::shared_ptr<string> testConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
