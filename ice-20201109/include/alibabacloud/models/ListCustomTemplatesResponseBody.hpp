// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCustomTemplatesResponseBodyCustomTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTemplateList, customTemplateList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTemplateList, customTemplateList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListCustomTemplatesResponseBody() = default ;
    ListCustomTemplatesResponseBody(const ListCustomTemplatesResponseBody &) = default ;
    ListCustomTemplatesResponseBody(ListCustomTemplatesResponseBody &&) = default ;
    ListCustomTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomTemplatesResponseBody() = default ;
    ListCustomTemplatesResponseBody& operator=(const ListCustomTemplatesResponseBody &) = default ;
    ListCustomTemplatesResponseBody& operator=(ListCustomTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customTemplateList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // customTemplateList Field Functions 
    bool hasCustomTemplateList() const { return this->customTemplateList_ != nullptr;};
    void deleteCustomTemplateList() { this->customTemplateList_ = nullptr;};
    inline const vector<ListCustomTemplatesResponseBodyCustomTemplateList> & customTemplateList() const { DARABONBA_PTR_GET_CONST(customTemplateList_, vector<ListCustomTemplatesResponseBodyCustomTemplateList>) };
    inline vector<ListCustomTemplatesResponseBodyCustomTemplateList> customTemplateList() { DARABONBA_PTR_GET(customTemplateList_, vector<ListCustomTemplatesResponseBodyCustomTemplateList>) };
    inline ListCustomTemplatesResponseBody& setCustomTemplateList(const vector<ListCustomTemplatesResponseBodyCustomTemplateList> & customTemplateList) { DARABONBA_PTR_SET_VALUE(customTemplateList_, customTemplateList) };
    inline ListCustomTemplatesResponseBody& setCustomTemplateList(vector<ListCustomTemplatesResponseBodyCustomTemplateList> && customTemplateList) { DARABONBA_PTR_SET_RVALUE(customTemplateList_, customTemplateList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListCustomTemplatesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The queried templates.
    std::shared_ptr<vector<ListCustomTemplatesResponseBodyCustomTemplateList>> customTemplateList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of templates.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
