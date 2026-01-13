// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMERMODULEOUTPUTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMERMODULEOUTPUTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class CreateCustomerModuleOutputInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomerModuleOutputInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_TO_JSON(FinalScoreFormat, finalScoreFormat_);
      DARABONBA_PTR_TO_JSON(ProcessExpression, processExpression_);
      DARABONBA_PTR_TO_JSON(TestFileUrl, testFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomerModuleOutputInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_FROM_JSON(FinalScoreFormat, finalScoreFormat_);
      DARABONBA_PTR_FROM_JSON(ProcessExpression, processExpression_);
      DARABONBA_PTR_FROM_JSON(TestFileUrl, testFileUrl_);
    };
    CreateCustomerModuleOutputInfoRequest() = default ;
    CreateCustomerModuleOutputInfoRequest(const CreateCustomerModuleOutputInfoRequest &) = default ;
    CreateCustomerModuleOutputInfoRequest(CreateCustomerModuleOutputInfoRequest &&) = default ;
    CreateCustomerModuleOutputInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomerModuleOutputInfoRequest() = default ;
    CreateCustomerModuleOutputInfoRequest& operator=(const CreateCustomerModuleOutputInfoRequest &) = default ;
    CreateCustomerModuleOutputInfoRequest& operator=(CreateCustomerModuleOutputInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr
        && this->finalScoreFormat_ == nullptr && this->processExpression_ == nullptr && this->testFileUrl_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline int32_t getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, 0) };
    inline CreateCustomerModuleOutputInfoRequest& setCustomerModuleId(int32_t customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


    // finalScoreFormat Field Functions 
    bool hasFinalScoreFormat() const { return this->finalScoreFormat_ != nullptr;};
    void deleteFinalScoreFormat() { this->finalScoreFormat_ = nullptr;};
    inline string getFinalScoreFormat() const { DARABONBA_PTR_GET_DEFAULT(finalScoreFormat_, "") };
    inline CreateCustomerModuleOutputInfoRequest& setFinalScoreFormat(string finalScoreFormat) { DARABONBA_PTR_SET_VALUE(finalScoreFormat_, finalScoreFormat) };


    // processExpression Field Functions 
    bool hasProcessExpression() const { return this->processExpression_ != nullptr;};
    void deleteProcessExpression() { this->processExpression_ = nullptr;};
    inline string getProcessExpression() const { DARABONBA_PTR_GET_DEFAULT(processExpression_, "") };
    inline CreateCustomerModuleOutputInfoRequest& setProcessExpression(string processExpression) { DARABONBA_PTR_SET_VALUE(processExpression_, processExpression) };


    // testFileUrl Field Functions 
    bool hasTestFileUrl() const { return this->testFileUrl_ != nullptr;};
    void deleteTestFileUrl() { this->testFileUrl_ = nullptr;};
    inline string getTestFileUrl() const { DARABONBA_PTR_GET_DEFAULT(testFileUrl_, "") };
    inline CreateCustomerModuleOutputInfoRequest& setTestFileUrl(string testFileUrl) { DARABONBA_PTR_SET_VALUE(testFileUrl_, testFileUrl) };


  protected:
    // Customer model ID
    shared_ptr<int32_t> customerModuleId_ {};
    // Number of decimal places to retain.
    shared_ptr<string> finalScoreFormat_ {};
    // Score processing logic.
    shared_ptr<string> processExpression_ {};
    // Test file URL.
    shared_ptr<string> testFileUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
