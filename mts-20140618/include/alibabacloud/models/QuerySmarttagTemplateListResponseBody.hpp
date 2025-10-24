// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySmarttagTemplateListResponseBodyTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySmarttagTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
    };
    QuerySmarttagTemplateListResponseBody() = default ;
    QuerySmarttagTemplateListResponseBody(const QuerySmarttagTemplateListResponseBody &) = default ;
    QuerySmarttagTemplateListResponseBody(QuerySmarttagTemplateListResponseBody &&) = default ;
    QuerySmarttagTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagTemplateListResponseBody() = default ;
    QuerySmarttagTemplateListResponseBody& operator=(const QuerySmarttagTemplateListResponseBody &) = default ;
    QuerySmarttagTemplateListResponseBody& operator=(QuerySmarttagTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->templates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmarttagTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const QuerySmarttagTemplateListResponseBodyTemplates & templates() const { DARABONBA_PTR_GET_CONST(templates_, QuerySmarttagTemplateListResponseBodyTemplates) };
    inline QuerySmarttagTemplateListResponseBodyTemplates templates() { DARABONBA_PTR_GET(templates_, QuerySmarttagTemplateListResponseBodyTemplates) };
    inline QuerySmarttagTemplateListResponseBody& setTemplates(const QuerySmarttagTemplateListResponseBodyTemplates & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline QuerySmarttagTemplateListResponseBody& setTemplates(QuerySmarttagTemplateListResponseBodyTemplates && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The templates.
    std::shared_ptr<QuerySmarttagTemplateListResponseBodyTemplates> templates_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
