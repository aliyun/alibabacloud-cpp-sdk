// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETRANSCODETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETRANSCODETEMPLATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLiveTranscodeTemplatesResponseBodyTemplateContentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveTranscodeTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTranscodeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TemplateContentList, templateContentList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTranscodeTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TemplateContentList, templateContentList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLiveTranscodeTemplatesResponseBody() = default ;
    ListLiveTranscodeTemplatesResponseBody(const ListLiveTranscodeTemplatesResponseBody &) = default ;
    ListLiveTranscodeTemplatesResponseBody(ListLiveTranscodeTemplatesResponseBody &&) = default ;
    ListLiveTranscodeTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTranscodeTemplatesResponseBody() = default ;
    ListLiveTranscodeTemplatesResponseBody& operator=(const ListLiveTranscodeTemplatesResponseBody &) = default ;
    ListLiveTranscodeTemplatesResponseBody& operator=(ListLiveTranscodeTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->templateContentList_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveTranscodeTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateContentList Field Functions 
    bool hasTemplateContentList() const { return this->templateContentList_ != nullptr;};
    void deleteTemplateContentList() { this->templateContentList_ = nullptr;};
    inline const vector<ListLiveTranscodeTemplatesResponseBodyTemplateContentList> & templateContentList() const { DARABONBA_PTR_GET_CONST(templateContentList_, vector<ListLiveTranscodeTemplatesResponseBodyTemplateContentList>) };
    inline vector<ListLiveTranscodeTemplatesResponseBodyTemplateContentList> templateContentList() { DARABONBA_PTR_GET(templateContentList_, vector<ListLiveTranscodeTemplatesResponseBodyTemplateContentList>) };
    inline ListLiveTranscodeTemplatesResponseBody& setTemplateContentList(const vector<ListLiveTranscodeTemplatesResponseBodyTemplateContentList> & templateContentList) { DARABONBA_PTR_SET_VALUE(templateContentList_, templateContentList) };
    inline ListLiveTranscodeTemplatesResponseBody& setTemplateContentList(vector<ListLiveTranscodeTemplatesResponseBodyTemplateContentList> && templateContentList) { DARABONBA_PTR_SET_RVALUE(templateContentList_, templateContentList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListLiveTranscodeTemplatesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of transcoding templates.
    std::shared_ptr<vector<ListLiveTranscodeTemplatesResponseBodyTemplateContentList>> templateContentList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
