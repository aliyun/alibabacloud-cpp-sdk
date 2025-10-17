// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETTESTRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeNetTestResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetTestResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TestId, testId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetTestResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TestId, testId_);
    };
    DescribeNetTestResultRequest() = default ;
    DescribeNetTestResultRequest(const DescribeNetTestResultRequest &) = default ;
    DescribeNetTestResultRequest(DescribeNetTestResultRequest &&) = default ;
    DescribeNetTestResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetTestResultRequest() = default ;
    DescribeNetTestResultRequest& operator=(const DescribeNetTestResultRequest &) = default ;
    DescribeNetTestResultRequest& operator=(DescribeNetTestResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->testId_ == nullptr; };
    // testId Field Functions 
    bool hasTestId() const { return this->testId_ != nullptr;};
    void deleteTestId() { this->testId_ = nullptr;};
    inline string testId() const { DARABONBA_PTR_GET_DEFAULT(testId_, "") };
    inline DescribeNetTestResultRequest& setTestId(string testId) { DARABONBA_PTR_SET_VALUE(testId_, testId) };


  protected:
    // The ID of the test task. The unique identifier of a network test task.
    std::shared_ptr<string> testId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
