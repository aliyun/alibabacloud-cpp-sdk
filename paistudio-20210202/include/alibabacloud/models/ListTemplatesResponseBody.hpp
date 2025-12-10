// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplatesResponseBodyTemplateData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateData, templateData_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateData, templateData_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTemplatesResponseBody() = default ;
    ListTemplatesResponseBody(const ListTemplatesResponseBody &) = default ;
    ListTemplatesResponseBody(ListTemplatesResponseBody &&) = default ;
    ListTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBody() = default ;
    ListTemplatesResponseBody& operator=(const ListTemplatesResponseBody &) = default ;
    ListTemplatesResponseBody& operator=(ListTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->templateData_ == nullptr && return this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateData Field Functions 
    bool hasTemplateData() const { return this->templateData_ != nullptr;};
    void deleteTemplateData() { this->templateData_ = nullptr;};
    inline const vector<ListTemplatesResponseBodyTemplateData> & templateData() const { DARABONBA_PTR_GET_CONST(templateData_, vector<ListTemplatesResponseBodyTemplateData>) };
    inline vector<ListTemplatesResponseBodyTemplateData> templateData() { DARABONBA_PTR_GET(templateData_, vector<ListTemplatesResponseBodyTemplateData>) };
    inline ListTemplatesResponseBody& setTemplateData(const vector<ListTemplatesResponseBodyTemplateData> & templateData) { DARABONBA_PTR_SET_VALUE(templateData_, templateData) };
    inline ListTemplatesResponseBody& setTemplateData(vector<ListTemplatesResponseBodyTemplateData> && templateData) { DARABONBA_PTR_SET_RVALUE(templateData_, templateData) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListTemplatesResponseBodyTemplateData>> templateData_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
