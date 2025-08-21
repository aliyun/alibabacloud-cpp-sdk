// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOLUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSOLUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSolutionResponseBodySolutions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListSolutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSolutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Solutions, solutions_);
    };
    friend void from_json(const Darabonba::Json& j, ListSolutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Solutions, solutions_);
    };
    ListSolutionResponseBody() = default ;
    ListSolutionResponseBody(const ListSolutionResponseBody &) = default ;
    ListSolutionResponseBody(ListSolutionResponseBody &&) = default ;
    ListSolutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSolutionResponseBody() = default ;
    ListSolutionResponseBody& operator=(const ListSolutionResponseBody &) = default ;
    ListSolutionResponseBody& operator=(ListSolutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->solutions_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSolutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline const vector<ListSolutionResponseBodySolutions> & solutions() const { DARABONBA_PTR_GET_CONST(solutions_, vector<ListSolutionResponseBodySolutions>) };
    inline vector<ListSolutionResponseBodySolutions> solutions() { DARABONBA_PTR_GET(solutions_, vector<ListSolutionResponseBodySolutions>) };
    inline ListSolutionResponseBody& setSolutions(const vector<ListSolutionResponseBodySolutions> & solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };
    inline ListSolutionResponseBody& setSolutions(vector<ListSolutionResponseBodySolutions> && solutions) { DARABONBA_PTR_SET_RVALUE(solutions_, solutions) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListSolutionResponseBodySolutions>> solutions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
