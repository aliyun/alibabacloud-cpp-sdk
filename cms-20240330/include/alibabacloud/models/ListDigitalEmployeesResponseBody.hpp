// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIGITALEMPLOYEESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDigitalEmployeesResponseBodyDigitalEmployees.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListDigitalEmployeesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDigitalEmployeesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(digitalEmployees, digitalEmployees_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListDigitalEmployeesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(digitalEmployees, digitalEmployees_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListDigitalEmployeesResponseBody() = default ;
    ListDigitalEmployeesResponseBody(const ListDigitalEmployeesResponseBody &) = default ;
    ListDigitalEmployeesResponseBody(ListDigitalEmployeesResponseBody &&) = default ;
    ListDigitalEmployeesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDigitalEmployeesResponseBody() = default ;
    ListDigitalEmployeesResponseBody& operator=(const ListDigitalEmployeesResponseBody &) = default ;
    ListDigitalEmployeesResponseBody& operator=(ListDigitalEmployeesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->digitalEmployees_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // digitalEmployees Field Functions 
    bool hasDigitalEmployees() const { return this->digitalEmployees_ != nullptr;};
    void deleteDigitalEmployees() { this->digitalEmployees_ = nullptr;};
    inline const vector<ListDigitalEmployeesResponseBodyDigitalEmployees> & digitalEmployees() const { DARABONBA_PTR_GET_CONST(digitalEmployees_, vector<ListDigitalEmployeesResponseBodyDigitalEmployees>) };
    inline vector<ListDigitalEmployeesResponseBodyDigitalEmployees> digitalEmployees() { DARABONBA_PTR_GET(digitalEmployees_, vector<ListDigitalEmployeesResponseBodyDigitalEmployees>) };
    inline ListDigitalEmployeesResponseBody& setDigitalEmployees(const vector<ListDigitalEmployeesResponseBodyDigitalEmployees> & digitalEmployees) { DARABONBA_PTR_SET_VALUE(digitalEmployees_, digitalEmployees) };
    inline ListDigitalEmployeesResponseBody& setDigitalEmployees(vector<ListDigitalEmployeesResponseBodyDigitalEmployees> && digitalEmployees) { DARABONBA_PTR_SET_RVALUE(digitalEmployees_, digitalEmployees) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDigitalEmployeesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDigitalEmployeesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDigitalEmployeesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListDigitalEmployeesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<ListDigitalEmployeesResponseBodyDigitalEmployees>> digitalEmployees_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
