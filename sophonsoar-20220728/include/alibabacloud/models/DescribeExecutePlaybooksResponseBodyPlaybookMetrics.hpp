// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTEPLAYBOOKSRESPONSEBODYPLAYBOOKMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTEPLAYBOOKSRESPONSEBODYPLAYBOOKMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeExecutePlaybooksResponseBodyPlaybookMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutePlaybooksResponseBodyPlaybookMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ParamConfig, paramConfig_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutePlaybooksResponseBodyPlaybookMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ParamConfig, paramConfig_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeExecutePlaybooksResponseBodyPlaybookMetrics() = default ;
    DescribeExecutePlaybooksResponseBodyPlaybookMetrics(const DescribeExecutePlaybooksResponseBodyPlaybookMetrics &) = default ;
    DescribeExecutePlaybooksResponseBodyPlaybookMetrics(DescribeExecutePlaybooksResponseBodyPlaybookMetrics &&) = default ;
    DescribeExecutePlaybooksResponseBodyPlaybookMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutePlaybooksResponseBodyPlaybookMetrics() = default ;
    DescribeExecutePlaybooksResponseBodyPlaybookMetrics& operator=(const DescribeExecutePlaybooksResponseBodyPlaybookMetrics &) = default ;
    DescribeExecutePlaybooksResponseBodyPlaybookMetrics& operator=(DescribeExecutePlaybooksResponseBodyPlaybookMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->paramConfig_ == nullptr && return this->paramType_ == nullptr && return this->uuid_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeExecutePlaybooksResponseBodyPlaybookMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeExecutePlaybooksResponseBodyPlaybookMetrics& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // paramConfig Field Functions 
    bool hasParamConfig() const { return this->paramConfig_ != nullptr;};
    void deleteParamConfig() { this->paramConfig_ = nullptr;};
    inline string paramConfig() const { DARABONBA_PTR_GET_DEFAULT(paramConfig_, "") };
    inline DescribeExecutePlaybooksResponseBodyPlaybookMetrics& setParamConfig(string paramConfig) { DARABONBA_PTR_SET_VALUE(paramConfig_, paramConfig) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribeExecutePlaybooksResponseBodyPlaybookMetrics& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeExecutePlaybooksResponseBodyPlaybookMetrics& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The playbook description.
    std::shared_ptr<string> description_ = nullptr;
    // The playbook name.
    std::shared_ptr<string> displayName_ = nullptr;
    // The configuration of the input parameter. The value is a JSON array.
    // 
    // >  For more information, see [DescribePlaybookInputOutput](~~DescribePlaybookInputOutput~~).
    std::shared_ptr<string> paramConfig_ = nullptr;
    // The input parameter type of the playbook.
    // 
    // *   **template-ip**
    // *   **template-file**
    // *   **template-process**
    // *   **custom**
    std::shared_ptr<string> paramType_ = nullptr;
    // The playbook UUID.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
