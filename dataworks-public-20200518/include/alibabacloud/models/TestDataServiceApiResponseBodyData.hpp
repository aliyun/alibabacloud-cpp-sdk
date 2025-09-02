// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASERVICEAPIRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASERVICEAPIRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TestDataServiceApiResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataServiceApiResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TestId, testId_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataServiceApiResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TestId, testId_);
    };
    TestDataServiceApiResponseBodyData() = default ;
    TestDataServiceApiResponseBodyData(const TestDataServiceApiResponseBodyData &) = default ;
    TestDataServiceApiResponseBodyData(TestDataServiceApiResponseBodyData &&) = default ;
    TestDataServiceApiResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataServiceApiResponseBodyData() = default ;
    TestDataServiceApiResponseBodyData& operator=(const TestDataServiceApiResponseBodyData &) = default ;
    TestDataServiceApiResponseBodyData& operator=(TestDataServiceApiResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->testId_ != nullptr; };
    // testId Field Functions 
    bool hasTestId() const { return this->testId_ != nullptr;};
    void deleteTestId() { this->testId_ = nullptr;};
    inline string testId() const { DARABONBA_PTR_GET_DEFAULT(testId_, "") };
    inline TestDataServiceApiResponseBodyData& setTestId(string testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


  protected:
    // The ID of the test.
    std::shared_ptr<string> testId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
