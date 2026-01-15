// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETESTFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETESTFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class ValidateTestFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTestFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTestFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerModuleId, customerModuleId_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
    };
    ValidateTestFileRequest() = default ;
    ValidateTestFileRequest(const ValidateTestFileRequest &) = default ;
    ValidateTestFileRequest(ValidateTestFileRequest &&) = default ;
    ValidateTestFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTestFileRequest() = default ;
    ValidateTestFileRequest& operator=(const ValidateTestFileRequest &) = default ;
    ValidateTestFileRequest& operator=(ValidateTestFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerModuleId_ == nullptr
        && this->filePath_ == nullptr; };
    // customerModuleId Field Functions 
    bool hasCustomerModuleId() const { return this->customerModuleId_ != nullptr;};
    void deleteCustomerModuleId() { this->customerModuleId_ = nullptr;};
    inline string getCustomerModuleId() const { DARABONBA_PTR_GET_DEFAULT(customerModuleId_, "") };
    inline ValidateTestFileRequest& setCustomerModuleId(string customerModuleId) { DARABONBA_PTR_SET_VALUE(customerModuleId_, customerModuleId) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline ValidateTestFileRequest& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


  protected:
    // Model ID.
    shared_ptr<string> customerModuleId_ {};
    // File path.
    shared_ptr<string> filePath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
