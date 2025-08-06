// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATELISTBYUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATELISTBYUSERIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateListByUserIdResponseBodyTemplateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTemplateListByUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateListByUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateList, templateList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateListByUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextCursor, nextCursor_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateList, templateList_);
    };
    GetTemplateListByUserIdResponseBody() = default ;
    GetTemplateListByUserIdResponseBody(const GetTemplateListByUserIdResponseBody &) = default ;
    GetTemplateListByUserIdResponseBody(GetTemplateListByUserIdResponseBody &&) = default ;
    GetTemplateListByUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateListByUserIdResponseBody() = default ;
    GetTemplateListByUserIdResponseBody& operator=(const GetTemplateListByUserIdResponseBody &) = default ;
    GetTemplateListByUserIdResponseBody& operator=(GetTemplateListByUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextCursor_ != nullptr
        && this->requestId_ != nullptr && this->templateList_ != nullptr; };
    // nextCursor Field Functions 
    bool hasNextCursor() const { return this->nextCursor_ != nullptr;};
    void deleteNextCursor() { this->nextCursor_ = nullptr;};
    inline int64_t nextCursor() const { DARABONBA_PTR_GET_DEFAULT(nextCursor_, 0L) };
    inline GetTemplateListByUserIdResponseBody& setNextCursor(int64_t nextCursor) { DARABONBA_PTR_SET_VALUE(nextCursor_, nextCursor) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateListByUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateList Field Functions 
    bool hasTemplateList() const { return this->templateList_ != nullptr;};
    void deleteTemplateList() { this->templateList_ = nullptr;};
    inline const vector<GetTemplateListByUserIdResponseBodyTemplateList> & templateList() const { DARABONBA_PTR_GET_CONST(templateList_, vector<GetTemplateListByUserIdResponseBodyTemplateList>) };
    inline vector<GetTemplateListByUserIdResponseBodyTemplateList> templateList() { DARABONBA_PTR_GET(templateList_, vector<GetTemplateListByUserIdResponseBodyTemplateList>) };
    inline GetTemplateListByUserIdResponseBody& setTemplateList(const vector<GetTemplateListByUserIdResponseBodyTemplateList> & templateList) { DARABONBA_PTR_SET_VALUE(templateList_, templateList) };
    inline GetTemplateListByUserIdResponseBody& setTemplateList(vector<GetTemplateListByUserIdResponseBodyTemplateList> && templateList) { DARABONBA_PTR_SET_RVALUE(templateList_, templateList) };


  protected:
    std::shared_ptr<int64_t> nextCursor_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetTemplateListByUserIdResponseBodyTemplateList>> templateList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
