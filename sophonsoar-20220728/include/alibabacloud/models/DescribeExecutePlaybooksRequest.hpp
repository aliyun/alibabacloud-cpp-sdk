// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTEPLAYBOOKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTEPLAYBOOKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeExecutePlaybooksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutePlaybooksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InputMode, inputMode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutePlaybooksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InputMode, inputMode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeExecutePlaybooksRequest() = default ;
    DescribeExecutePlaybooksRequest(const DescribeExecutePlaybooksRequest &) = default ;
    DescribeExecutePlaybooksRequest(DescribeExecutePlaybooksRequest &&) = default ;
    DescribeExecutePlaybooksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutePlaybooksRequest() = default ;
    DescribeExecutePlaybooksRequest& operator=(const DescribeExecutePlaybooksRequest &) = default ;
    DescribeExecutePlaybooksRequest& operator=(DescribeExecutePlaybooksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputMode_ == nullptr
        && return this->lang_ == nullptr && return this->paramType_ == nullptr && return this->playbookName_ == nullptr && return this->uuid_ == nullptr; };
    // inputMode Field Functions 
    bool hasInputMode() const { return this->inputMode_ != nullptr;};
    void deleteInputMode() { this->inputMode_ = nullptr;};
    inline string inputMode() const { DARABONBA_PTR_GET_DEFAULT(inputMode_, "") };
    inline DescribeExecutePlaybooksRequest& setInputMode(string inputMode) { DARABONBA_PTR_SET_VALUE(inputMode_, inputMode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeExecutePlaybooksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribeExecutePlaybooksRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // playbookName Field Functions 
    bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
    void deletePlaybookName() { this->playbookName_ = nullptr;};
    inline string playbookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
    inline DescribeExecutePlaybooksRequest& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeExecutePlaybooksRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The entity type of the script input parameter. When you want to query multiple entity types, separate them with commas.
    // - **ip**: IP entity.
    // - **file**: file entity.
    // - **process**: process entity.
    // - **incident**: incident entity.
    std::shared_ptr<string> inputMode_ = nullptr;
    // The language of the content within the request and the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The input parameter type of the playbook.
    // 
    // *   **template-ip**
    // *   **template-file**
    // *   **template-process**
    // *   **custom**
    std::shared_ptr<string> paramType_ = nullptr;
    // The playbook name. Fuzzy search is supported.
    std::shared_ptr<string> playbookName_ = nullptr;
    // The playbook UUID.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~) operation to query the playbook UUID.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
