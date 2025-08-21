// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNQUESTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNQUESTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConnQuestionResponseBodyOutlines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListConnQuestionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnQuestionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Outlines, outlines_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnQuestionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Outlines, outlines_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConnQuestionResponseBody() = default ;
    ListConnQuestionResponseBody(const ListConnQuestionResponseBody &) = default ;
    ListConnQuestionResponseBody(ListConnQuestionResponseBody &&) = default ;
    ListConnQuestionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnQuestionResponseBody() = default ;
    ListConnQuestionResponseBody& operator=(const ListConnQuestionResponseBody &) = default ;
    ListConnQuestionResponseBody& operator=(ListConnQuestionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outlines_ != nullptr
        && this->requestId_ != nullptr; };
    // outlines Field Functions 
    bool hasOutlines() const { return this->outlines_ != nullptr;};
    void deleteOutlines() { this->outlines_ = nullptr;};
    inline const vector<ListConnQuestionResponseBodyOutlines> & outlines() const { DARABONBA_PTR_GET_CONST(outlines_, vector<ListConnQuestionResponseBodyOutlines>) };
    inline vector<ListConnQuestionResponseBodyOutlines> outlines() { DARABONBA_PTR_GET(outlines_, vector<ListConnQuestionResponseBodyOutlines>) };
    inline ListConnQuestionResponseBody& setOutlines(const vector<ListConnQuestionResponseBodyOutlines> & outlines) { DARABONBA_PTR_SET_VALUE(outlines_, outlines) };
    inline ListConnQuestionResponseBody& setOutlines(vector<ListConnQuestionResponseBodyOutlines> && outlines) { DARABONBA_PTR_SET_RVALUE(outlines_, outlines) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConnQuestionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListConnQuestionResponseBodyOutlines>> outlines_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
