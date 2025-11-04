// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMTEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSystemTemplatesResponseBodySystemTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSystemTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemTemplateList, systemTemplateList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemTemplateList, systemTemplateList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListSystemTemplatesResponseBody() = default ;
    ListSystemTemplatesResponseBody(const ListSystemTemplatesResponseBody &) = default ;
    ListSystemTemplatesResponseBody(ListSystemTemplatesResponseBody &&) = default ;
    ListSystemTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemTemplatesResponseBody() = default ;
    ListSystemTemplatesResponseBody& operator=(const ListSystemTemplatesResponseBody &) = default ;
    ListSystemTemplatesResponseBody& operator=(ListSystemTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->systemTemplateList_ == nullptr && return this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemTemplateList Field Functions 
    bool hasSystemTemplateList() const { return this->systemTemplateList_ != nullptr;};
    void deleteSystemTemplateList() { this->systemTemplateList_ = nullptr;};
    inline const vector<ListSystemTemplatesResponseBodySystemTemplateList> & systemTemplateList() const { DARABONBA_PTR_GET_CONST(systemTemplateList_, vector<ListSystemTemplatesResponseBodySystemTemplateList>) };
    inline vector<ListSystemTemplatesResponseBodySystemTemplateList> systemTemplateList() { DARABONBA_PTR_GET(systemTemplateList_, vector<ListSystemTemplatesResponseBodySystemTemplateList>) };
    inline ListSystemTemplatesResponseBody& setSystemTemplateList(const vector<ListSystemTemplatesResponseBodySystemTemplateList> & systemTemplateList) { DARABONBA_PTR_SET_VALUE(systemTemplateList_, systemTemplateList) };
    inline ListSystemTemplatesResponseBody& setSystemTemplateList(vector<ListSystemTemplatesResponseBodySystemTemplateList> && systemTemplateList) { DARABONBA_PTR_SET_RVALUE(systemTemplateList_, systemTemplateList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListSystemTemplatesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried templates.
    std::shared_ptr<vector<ListSystemTemplatesResponseBodySystemTemplateList>> systemTemplateList_ = nullptr;
    // The total number of templates.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
