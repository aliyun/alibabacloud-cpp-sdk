// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGEREQUESTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGEREQUESTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListChangeRequestsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeRequestsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(current, current_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(pages, pages_);
      DARABONBA_PTR_TO_JSON(perPage, perPage_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeRequestsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(current, current_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(pages, pages_);
      DARABONBA_PTR_FROM_JSON(perPage, perPage_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListChangeRequestsResponseBody() = default ;
    ListChangeRequestsResponseBody(const ListChangeRequestsResponseBody &) = default ;
    ListChangeRequestsResponseBody(ListChangeRequestsResponseBody &&) = default ;
    ListChangeRequestsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeRequestsResponseBody() = default ;
    ListChangeRequestsResponseBody& operator=(const ListChangeRequestsResponseBody &) = default ;
    ListChangeRequestsResponseBody& operator=(ListChangeRequestsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->current_ == nullptr
        && return this->data_ == nullptr && return this->nextToken_ == nullptr && return this->pages_ == nullptr && return this->perPage_ == nullptr && return this->total_ == nullptr; };
    // current Field Functions 
    bool hasCurrent() const { return this->current_ != nullptr;};
    void deleteCurrent() { this->current_ = nullptr;};
    inline int64_t current() const { DARABONBA_PTR_GET_DEFAULT(current_, 0L) };
    inline ListChangeRequestsResponseBody& setCurrent(int64_t current) { DARABONBA_PTR_SET_VALUE(current_, current) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Darabonba::Json> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> data() { DARABONBA_PTR_GET(data_, vector<Darabonba::Json>) };
    inline ListChangeRequestsResponseBody& setData(const vector<Darabonba::Json> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListChangeRequestsResponseBody& setData(vector<Darabonba::Json> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListChangeRequestsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline int64_t pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, 0L) };
    inline ListChangeRequestsResponseBody& setPages(int64_t pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // perPage Field Functions 
    bool hasPerPage() const { return this->perPage_ != nullptr;};
    void deletePerPage() { this->perPage_ = nullptr;};
    inline int64_t perPage() const { DARABONBA_PTR_GET_DEFAULT(perPage_, 0L) };
    inline ListChangeRequestsResponseBody& setPerPage(int64_t perPage) { DARABONBA_PTR_SET_VALUE(perPage_, perPage) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListChangeRequestsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> current_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> data_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int64_t> pages_ = nullptr;
    std::shared_ptr<int64_t> perPage_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
