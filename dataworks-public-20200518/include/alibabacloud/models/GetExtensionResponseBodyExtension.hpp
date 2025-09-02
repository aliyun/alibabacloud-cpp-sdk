// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTENSIONRESPONSEBODYEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_GETEXTENSIONRESPONSEBODYEXTENSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetExtensionResponseBodyExtensionBindEventList.hpp>
#include <alibabacloud/models/GetExtensionResponseBodyExtensionEventCategoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetExtensionResponseBodyExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExtensionResponseBodyExtension& obj) { 
      DARABONBA_PTR_TO_JSON(BindEventList, bindEventList_);
      DARABONBA_PTR_TO_JSON(DetailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(EventCategoryList, eventCategoryList_);
      DARABONBA_PTR_TO_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_TO_JSON(ExtensionDesc, extensionDesc_);
      DARABONBA_PTR_TO_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_TO_JSON(HelpDocUrl, helpDocUrl_);
      DARABONBA_PTR_TO_JSON(OptionSetting, optionSetting_);
      DARABONBA_PTR_TO_JSON(ParameterSetting, parameterSetting_);
      DARABONBA_PTR_TO_JSON(ProjectTesting, projectTesting_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetExtensionResponseBodyExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(BindEventList, bindEventList_);
      DARABONBA_PTR_FROM_JSON(DetailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(EventCategoryList, eventCategoryList_);
      DARABONBA_PTR_FROM_JSON(ExtensionCode, extensionCode_);
      DARABONBA_PTR_FROM_JSON(ExtensionDesc, extensionDesc_);
      DARABONBA_PTR_FROM_JSON(ExtensionName, extensionName_);
      DARABONBA_PTR_FROM_JSON(HelpDocUrl, helpDocUrl_);
      DARABONBA_PTR_FROM_JSON(OptionSetting, optionSetting_);
      DARABONBA_PTR_FROM_JSON(ParameterSetting, parameterSetting_);
      DARABONBA_PTR_FROM_JSON(ProjectTesting, projectTesting_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetExtensionResponseBodyExtension() = default ;
    GetExtensionResponseBodyExtension(const GetExtensionResponseBodyExtension &) = default ;
    GetExtensionResponseBodyExtension(GetExtensionResponseBodyExtension &&) = default ;
    GetExtensionResponseBodyExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExtensionResponseBodyExtension() = default ;
    GetExtensionResponseBodyExtension& operator=(const GetExtensionResponseBodyExtension &) = default ;
    GetExtensionResponseBodyExtension& operator=(GetExtensionResponseBodyExtension &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindEventList_ != nullptr
        && this->detailUrl_ != nullptr && this->eventCategoryList_ != nullptr && this->extensionCode_ != nullptr && this->extensionDesc_ != nullptr && this->extensionName_ != nullptr
        && this->helpDocUrl_ != nullptr && this->optionSetting_ != nullptr && this->parameterSetting_ != nullptr && this->projectTesting_ != nullptr && this->status_ != nullptr; };
    // bindEventList Field Functions 
    bool hasBindEventList() const { return this->bindEventList_ != nullptr;};
    void deleteBindEventList() { this->bindEventList_ = nullptr;};
    inline const vector<Models::GetExtensionResponseBodyExtensionBindEventList> & bindEventList() const { DARABONBA_PTR_GET_CONST(bindEventList_, vector<Models::GetExtensionResponseBodyExtensionBindEventList>) };
    inline vector<Models::GetExtensionResponseBodyExtensionBindEventList> bindEventList() { DARABONBA_PTR_GET(bindEventList_, vector<Models::GetExtensionResponseBodyExtensionBindEventList>) };
    inline GetExtensionResponseBodyExtension& setBindEventList(const vector<Models::GetExtensionResponseBodyExtensionBindEventList> & bindEventList) { DARABONBA_PTR_SET_VALUE(bindEventList_, bindEventList) };
    inline GetExtensionResponseBodyExtension& setBindEventList(vector<Models::GetExtensionResponseBodyExtensionBindEventList> && bindEventList) { DARABONBA_PTR_SET_RVALUE(bindEventList_, bindEventList) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline string detailUrl() const { DARABONBA_PTR_GET_DEFAULT(detailUrl_, "") };
    inline GetExtensionResponseBodyExtension& setDetailUrl(string detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };


    // eventCategoryList Field Functions 
    bool hasEventCategoryList() const { return this->eventCategoryList_ != nullptr;};
    void deleteEventCategoryList() { this->eventCategoryList_ = nullptr;};
    inline const vector<Models::GetExtensionResponseBodyExtensionEventCategoryList> & eventCategoryList() const { DARABONBA_PTR_GET_CONST(eventCategoryList_, vector<Models::GetExtensionResponseBodyExtensionEventCategoryList>) };
    inline vector<Models::GetExtensionResponseBodyExtensionEventCategoryList> eventCategoryList() { DARABONBA_PTR_GET(eventCategoryList_, vector<Models::GetExtensionResponseBodyExtensionEventCategoryList>) };
    inline GetExtensionResponseBodyExtension& setEventCategoryList(const vector<Models::GetExtensionResponseBodyExtensionEventCategoryList> & eventCategoryList) { DARABONBA_PTR_SET_VALUE(eventCategoryList_, eventCategoryList) };
    inline GetExtensionResponseBodyExtension& setEventCategoryList(vector<Models::GetExtensionResponseBodyExtensionEventCategoryList> && eventCategoryList) { DARABONBA_PTR_SET_RVALUE(eventCategoryList_, eventCategoryList) };


    // extensionCode Field Functions 
    bool hasExtensionCode() const { return this->extensionCode_ != nullptr;};
    void deleteExtensionCode() { this->extensionCode_ = nullptr;};
    inline string extensionCode() const { DARABONBA_PTR_GET_DEFAULT(extensionCode_, "") };
    inline GetExtensionResponseBodyExtension& setExtensionCode(string extensionCode) { DARABONBA_PTR_SET_VALUE(extensionCode_, extensionCode) };


    // extensionDesc Field Functions 
    bool hasExtensionDesc() const { return this->extensionDesc_ != nullptr;};
    void deleteExtensionDesc() { this->extensionDesc_ = nullptr;};
    inline string extensionDesc() const { DARABONBA_PTR_GET_DEFAULT(extensionDesc_, "") };
    inline GetExtensionResponseBodyExtension& setExtensionDesc(string extensionDesc) { DARABONBA_PTR_SET_VALUE(extensionDesc_, extensionDesc) };


    // extensionName Field Functions 
    bool hasExtensionName() const { return this->extensionName_ != nullptr;};
    void deleteExtensionName() { this->extensionName_ = nullptr;};
    inline string extensionName() const { DARABONBA_PTR_GET_DEFAULT(extensionName_, "") };
    inline GetExtensionResponseBodyExtension& setExtensionName(string extensionName) { DARABONBA_PTR_SET_VALUE(extensionName_, extensionName) };


    // helpDocUrl Field Functions 
    bool hasHelpDocUrl() const { return this->helpDocUrl_ != nullptr;};
    void deleteHelpDocUrl() { this->helpDocUrl_ = nullptr;};
    inline string helpDocUrl() const { DARABONBA_PTR_GET_DEFAULT(helpDocUrl_, "") };
    inline GetExtensionResponseBodyExtension& setHelpDocUrl(string helpDocUrl) { DARABONBA_PTR_SET_VALUE(helpDocUrl_, helpDocUrl) };


    // optionSetting Field Functions 
    bool hasOptionSetting() const { return this->optionSetting_ != nullptr;};
    void deleteOptionSetting() { this->optionSetting_ = nullptr;};
    inline string optionSetting() const { DARABONBA_PTR_GET_DEFAULT(optionSetting_, "") };
    inline GetExtensionResponseBodyExtension& setOptionSetting(string optionSetting) { DARABONBA_PTR_SET_VALUE(optionSetting_, optionSetting) };


    // parameterSetting Field Functions 
    bool hasParameterSetting() const { return this->parameterSetting_ != nullptr;};
    void deleteParameterSetting() { this->parameterSetting_ = nullptr;};
    inline string parameterSetting() const { DARABONBA_PTR_GET_DEFAULT(parameterSetting_, "") };
    inline GetExtensionResponseBodyExtension& setParameterSetting(string parameterSetting) { DARABONBA_PTR_SET_VALUE(parameterSetting_, parameterSetting) };


    // projectTesting Field Functions 
    bool hasProjectTesting() const { return this->projectTesting_ != nullptr;};
    void deleteProjectTesting() { this->projectTesting_ = nullptr;};
    inline int64_t projectTesting() const { DARABONBA_PTR_GET_DEFAULT(projectTesting_, 0L) };
    inline GetExtensionResponseBodyExtension& setProjectTesting(int64_t projectTesting) { DARABONBA_PTR_SET_VALUE(projectTesting_, projectTesting) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetExtensionResponseBodyExtension& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The list of extension points.
    std::shared_ptr<vector<Models::GetExtensionResponseBodyExtensionBindEventList>> bindEventList_ = nullptr;
    // The URL of the extension details page, on which users can view the details of the process blocked by the extension.
    std::shared_ptr<string> detailUrl_ = nullptr;
    // The list of event types.
    std::shared_ptr<vector<Models::GetExtensionResponseBodyExtensionEventCategoryList>> eventCategoryList_ = nullptr;
    // The unique code of the extension.
    std::shared_ptr<string> extensionCode_ = nullptr;
    // The description of the extension.
    std::shared_ptr<string> extensionDesc_ = nullptr;
    // The name of the extension.
    std::shared_ptr<string> extensionName_ = nullptr;
    // The URL of the help documentation of the extension.
    std::shared_ptr<string> helpDocUrl_ = nullptr;
    // The options defined for the extension.
    std::shared_ptr<string> optionSetting_ = nullptr;
    // The parameter settings of the extension. For more information, see [Configure extension parameters](https://help.aliyun.com/document_detail/405354.html).
    std::shared_ptr<string> parameterSetting_ = nullptr;
    // The workspace for testing. If the extension is being tested, the extension can be used only in the workspace for testing.
    std::shared_ptr<int64_t> projectTesting_ = nullptr;
    // The state of the extension. 0: Testing, 1: Publishing, 3: Disabled, 4: Processing, 5: Approved, 6: Approve Failed
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
