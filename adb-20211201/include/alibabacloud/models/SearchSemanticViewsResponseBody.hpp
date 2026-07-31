// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHSEMANTICVIEWSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHSEMANTICVIEWSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SemanticViewModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class SearchSemanticViewsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchSemanticViewsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchSemanticViewsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchSemanticViewsResponseBody() = default ;
    SearchSemanticViewsResponseBody(const SearchSemanticViewsResponseBody &) = default ;
    SearchSemanticViewsResponseBody(SearchSemanticViewsResponseBody &&) = default ;
    SearchSemanticViewsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchSemanticViewsResponseBody() = default ;
    SearchSemanticViewsResponseBody& operator=(const SearchSemanticViewsResponseBody &) = default ;
    SearchSemanticViewsResponseBody& operator=(SearchSemanticViewsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SemanticViewModel> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<SemanticViewModel>) };
    inline vector<SemanticViewModel> getData() { DARABONBA_PTR_GET(data_, vector<SemanticViewModel>) };
    inline SearchSemanticViewsResponseBody& setData(const vector<SemanticViewModel> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SearchSemanticViewsResponseBody& setData(vector<SemanticViewModel> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchSemanticViewsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of semantic view objects.
    shared_ptr<vector<SemanticViewModel>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
