// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTRULEV4REQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTRULEV4REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class TestRuleV4Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestRuleV4Request& obj) { 
      DARABONBA_PTR_TO_JSON(IsSchemeData, isSchemeData_);
      DARABONBA_PTR_TO_JSON(TestJson, testJson_);
    };
    friend void from_json(const Darabonba::Json& j, TestRuleV4Request& obj) { 
      DARABONBA_PTR_FROM_JSON(IsSchemeData, isSchemeData_);
      DARABONBA_PTR_FROM_JSON(TestJson, testJson_);
    };
    TestRuleV4Request() = default ;
    TestRuleV4Request(const TestRuleV4Request &) = default ;
    TestRuleV4Request(TestRuleV4Request &&) = default ;
    TestRuleV4Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestRuleV4Request() = default ;
    TestRuleV4Request& operator=(const TestRuleV4Request &) = default ;
    TestRuleV4Request& operator=(TestRuleV4Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isSchemeData_ != nullptr
        && this->testJson_ != nullptr; };
    // isSchemeData Field Functions 
    bool hasIsSchemeData() const { return this->isSchemeData_ != nullptr;};
    void deleteIsSchemeData() { this->isSchemeData_ = nullptr;};
    inline int32_t isSchemeData() const { DARABONBA_PTR_GET_DEFAULT(isSchemeData_, 0) };
    inline TestRuleV4Request& setIsSchemeData(int32_t isSchemeData) { DARABONBA_PTR_SET_VALUE(isSchemeData_, isSchemeData) };


    // testJson Field Functions 
    bool hasTestJson() const { return this->testJson_ != nullptr;};
    void deleteTestJson() { this->testJson_ = nullptr;};
    inline string testJson() const { DARABONBA_PTR_GET_DEFAULT(testJson_, "") };
    inline TestRuleV4Request& setTestJson(string testJson) { DARABONBA_PTR_SET_VALUE(testJson_, testJson) };


  protected:
    std::shared_ptr<int32_t> isSchemeData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> testJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
