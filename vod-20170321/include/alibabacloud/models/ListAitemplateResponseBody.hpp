// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAITEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAITEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAITemplateResponseBodyTemplateInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAITemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAITemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateInfoList, templateInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAITemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateInfoList, templateInfoList_);
    };
    ListAITemplateResponseBody() = default ;
    ListAITemplateResponseBody(const ListAITemplateResponseBody &) = default ;
    ListAITemplateResponseBody(ListAITemplateResponseBody &&) = default ;
    ListAITemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAITemplateResponseBody() = default ;
    ListAITemplateResponseBody& operator=(const ListAITemplateResponseBody &) = default ;
    ListAITemplateResponseBody& operator=(ListAITemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateInfoList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAITemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateInfoList Field Functions 
    bool hasTemplateInfoList() const { return this->templateInfoList_ != nullptr;};
    void deleteTemplateInfoList() { this->templateInfoList_ = nullptr;};
    inline const vector<ListAITemplateResponseBodyTemplateInfoList> & templateInfoList() const { DARABONBA_PTR_GET_CONST(templateInfoList_, vector<ListAITemplateResponseBodyTemplateInfoList>) };
    inline vector<ListAITemplateResponseBodyTemplateInfoList> templateInfoList() { DARABONBA_PTR_GET(templateInfoList_, vector<ListAITemplateResponseBodyTemplateInfoList>) };
    inline ListAITemplateResponseBody& setTemplateInfoList(const vector<ListAITemplateResponseBodyTemplateInfoList> & templateInfoList) { DARABONBA_PTR_SET_VALUE(templateInfoList_, templateInfoList) };
    inline ListAITemplateResponseBody& setTemplateInfoList(vector<ListAITemplateResponseBodyTemplateInfoList> && templateInfoList) { DARABONBA_PTR_SET_RVALUE(templateInfoList_, templateInfoList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the AI templates.
    std::shared_ptr<vector<ListAITemplateResponseBodyTemplateInfoList>> templateInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
