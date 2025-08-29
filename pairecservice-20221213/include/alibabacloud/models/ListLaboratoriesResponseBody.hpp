// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLABORATORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLABORATORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLaboratoriesResponseBodyLaboratories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListLaboratoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLaboratoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Laboratories, laboratories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLaboratoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Laboratories, laboratories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLaboratoriesResponseBody() = default ;
    ListLaboratoriesResponseBody(const ListLaboratoriesResponseBody &) = default ;
    ListLaboratoriesResponseBody(ListLaboratoriesResponseBody &&) = default ;
    ListLaboratoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLaboratoriesResponseBody() = default ;
    ListLaboratoriesResponseBody& operator=(const ListLaboratoriesResponseBody &) = default ;
    ListLaboratoriesResponseBody& operator=(ListLaboratoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->laboratories_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // laboratories Field Functions 
    bool hasLaboratories() const { return this->laboratories_ != nullptr;};
    void deleteLaboratories() { this->laboratories_ = nullptr;};
    inline const vector<ListLaboratoriesResponseBodyLaboratories> & laboratories() const { DARABONBA_PTR_GET_CONST(laboratories_, vector<ListLaboratoriesResponseBodyLaboratories>) };
    inline vector<ListLaboratoriesResponseBodyLaboratories> laboratories() { DARABONBA_PTR_GET(laboratories_, vector<ListLaboratoriesResponseBodyLaboratories>) };
    inline ListLaboratoriesResponseBody& setLaboratories(const vector<ListLaboratoriesResponseBodyLaboratories> & laboratories) { DARABONBA_PTR_SET_VALUE(laboratories_, laboratories) };
    inline ListLaboratoriesResponseBody& setLaboratories(vector<ListLaboratoriesResponseBodyLaboratories> && laboratories) { DARABONBA_PTR_SET_RVALUE(laboratories_, laboratories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLaboratoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLaboratoriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListLaboratoriesResponseBodyLaboratories>> laboratories_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
