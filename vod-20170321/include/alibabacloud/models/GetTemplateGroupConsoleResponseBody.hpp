// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateGroup, templateGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateGroup, templateGroup_);
    };
    GetTemplateGroupConsoleResponseBody() = default ;
    GetTemplateGroupConsoleResponseBody(const GetTemplateGroupConsoleResponseBody &) = default ;
    GetTemplateGroupConsoleResponseBody(GetTemplateGroupConsoleResponseBody &&) = default ;
    GetTemplateGroupConsoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBody() = default ;
    GetTemplateGroupConsoleResponseBody& operator=(const GetTemplateGroupConsoleResponseBody &) = default ;
    GetTemplateGroupConsoleResponseBody& operator=(GetTemplateGroupConsoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateGroup_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateGroupConsoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateGroup Field Functions 
    bool hasTemplateGroup() const { return this->templateGroup_ != nullptr;};
    void deleteTemplateGroup() { this->templateGroup_ = nullptr;};
    inline const GetTemplateGroupConsoleResponseBodyTemplateGroup & templateGroup() const { DARABONBA_PTR_GET_CONST(templateGroup_, GetTemplateGroupConsoleResponseBodyTemplateGroup) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroup templateGroup() { DARABONBA_PTR_GET(templateGroup_, GetTemplateGroupConsoleResponseBodyTemplateGroup) };
    inline GetTemplateGroupConsoleResponseBody& setTemplateGroup(const GetTemplateGroupConsoleResponseBodyTemplateGroup & templateGroup) { DARABONBA_PTR_SET_VALUE(templateGroup_, templateGroup) };
    inline GetTemplateGroupConsoleResponseBody& setTemplateGroup(GetTemplateGroupConsoleResponseBodyTemplateGroup && templateGroup) { DARABONBA_PTR_SET_RVALUE(templateGroup_, templateGroup) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetTemplateGroupConsoleResponseBodyTemplateGroup> templateGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
