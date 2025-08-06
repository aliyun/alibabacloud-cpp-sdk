// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMTEMPLATEANDGROUPCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMTEMPLATEANDGROUPCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddCustomTemplateAndGroupConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomTemplateAndGroupConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(TemplateGroup, templateGroup_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomTemplateAndGroupConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(TemplateGroup, templateGroup_);
    };
    AddCustomTemplateAndGroupConsoleResponseBody() = default ;
    AddCustomTemplateAndGroupConsoleResponseBody(const AddCustomTemplateAndGroupConsoleResponseBody &) = default ;
    AddCustomTemplateAndGroupConsoleResponseBody(AddCustomTemplateAndGroupConsoleResponseBody &&) = default ;
    AddCustomTemplateAndGroupConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomTemplateAndGroupConsoleResponseBody() = default ;
    AddCustomTemplateAndGroupConsoleResponseBody& operator=(const AddCustomTemplateAndGroupConsoleResponseBody &) = default ;
    AddCustomTemplateAndGroupConsoleResponseBody& operator=(AddCustomTemplateAndGroupConsoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr && this->templateGroup_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCustomTemplateAndGroupConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline AddCustomTemplateAndGroupConsoleResponseBody& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // templateGroup Field Functions 
    bool hasTemplateGroup() const { return this->templateGroup_ != nullptr;};
    void deleteTemplateGroup() { this->templateGroup_ = nullptr;};
    inline const AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup & templateGroup() const { DARABONBA_PTR_GET_CONST(templateGroup_, AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup) };
    inline AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup templateGroup() { DARABONBA_PTR_GET(templateGroup_, AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup) };
    inline AddCustomTemplateAndGroupConsoleResponseBody& setTemplateGroup(const AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup & templateGroup) { DARABONBA_PTR_SET_VALUE(templateGroup_, templateGroup) };
    inline AddCustomTemplateAndGroupConsoleResponseBody& setTemplateGroup(AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup && templateGroup) { DARABONBA_PTR_SET_RVALUE(templateGroup_, templateGroup) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
    std::shared_ptr<AddCustomTemplateAndGroupConsoleResponseBodyTemplateGroup> templateGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
