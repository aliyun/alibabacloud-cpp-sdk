// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTEVENTPATTERNRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TESTEVENTPATTERNRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class TestEventPatternResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestEventPatternResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, TestEventPatternResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    TestEventPatternResponseBodyData() = default ;
    TestEventPatternResponseBodyData(const TestEventPatternResponseBodyData &) = default ;
    TestEventPatternResponseBodyData(TestEventPatternResponseBodyData &&) = default ;
    TestEventPatternResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestEventPatternResponseBodyData() = default ;
    TestEventPatternResponseBodyData& operator=(const TestEventPatternResponseBodyData &) = default ;
    TestEventPatternResponseBodyData& operator=(TestEventPatternResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline TestEventPatternResponseBodyData& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    // The value true indicates that the event pattern matches the provided JSON format. The value false indicates that the event pattern does not match the provided JSON format.
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
