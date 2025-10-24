// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyNonExistTids.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NonExistTids, nonExistTids_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateList, templateList_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NonExistTids, nonExistTids_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateList, templateList_);
    };
    QueryTemplateListResponseBody() = default ;
    QueryTemplateListResponseBody(const QueryTemplateListResponseBody &) = default ;
    QueryTemplateListResponseBody(QueryTemplateListResponseBody &&) = default ;
    QueryTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateListResponseBody() = default ;
    QueryTemplateListResponseBody& operator=(const QueryTemplateListResponseBody &) = default ;
    QueryTemplateListResponseBody& operator=(QueryTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nonExistTids_ == nullptr
        && return this->requestId_ == nullptr && return this->templateList_ == nullptr; };
    // nonExistTids Field Functions 
    bool hasNonExistTids() const { return this->nonExistTids_ != nullptr;};
    void deleteNonExistTids() { this->nonExistTids_ = nullptr;};
    inline const QueryTemplateListResponseBodyNonExistTids & nonExistTids() const { DARABONBA_PTR_GET_CONST(nonExistTids_, QueryTemplateListResponseBodyNonExistTids) };
    inline QueryTemplateListResponseBodyNonExistTids nonExistTids() { DARABONBA_PTR_GET(nonExistTids_, QueryTemplateListResponseBodyNonExistTids) };
    inline QueryTemplateListResponseBody& setNonExistTids(const QueryTemplateListResponseBodyNonExistTids & nonExistTids) { DARABONBA_PTR_SET_VALUE(nonExistTids_, nonExistTids) };
    inline QueryTemplateListResponseBody& setNonExistTids(QueryTemplateListResponseBodyNonExistTids && nonExistTids) { DARABONBA_PTR_SET_RVALUE(nonExistTids_, nonExistTids) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const QueryTemplateListResponseBodyTemplateList & templateList() const { DARABONBA_PTR_GET_CONST(templateList_, QueryTemplateListResponseBodyTemplateList) };
    inline QueryTemplateListResponseBodyTemplateList templateList() { DARABONBA_PTR_GET(templateList_, QueryTemplateListResponseBodyTemplateList) };
    inline QueryTemplateListResponseBody& setTemplateList(const QueryTemplateListResponseBodyTemplateList & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline QueryTemplateListResponseBody& setTemplateList(QueryTemplateListResponseBodyTemplateList && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


  protected:
    // The IDs of the templates that do not exist. This parameter is not returned if all specified transcoding templates are found.
    std::shared_ptr<QueryTemplateListResponseBodyNonExistTids> nonExistTids_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The transcoding templates.
    std::shared_ptr<QueryTemplateListResponseBodyTemplateList> templateList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
