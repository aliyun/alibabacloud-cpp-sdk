// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDSENTITYVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDSENTITYVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDSEntityValueResponseBodyEntityValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListDSEntityValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDSEntityValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EntityValues, entityValues_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDSEntityValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityValues, entityValues_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDSEntityValueResponseBody() = default ;
    ListDSEntityValueResponseBody(const ListDSEntityValueResponseBody &) = default ;
    ListDSEntityValueResponseBody(ListDSEntityValueResponseBody &&) = default ;
    ListDSEntityValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDSEntityValueResponseBody() = default ;
    ListDSEntityValueResponseBody& operator=(const ListDSEntityValueResponseBody &) = default ;
    ListDSEntityValueResponseBody& operator=(ListDSEntityValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityValues_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // entityValues Field Functions 
    bool hasEntityValues() const { return this->entityValues_ != nullptr;};
    void deleteEntityValues() { this->entityValues_ = nullptr;};
    inline const vector<ListDSEntityValueResponseBodyEntityValues> & entityValues() const { DARABONBA_PTR_GET_CONST(entityValues_, vector<ListDSEntityValueResponseBodyEntityValues>) };
    inline vector<ListDSEntityValueResponseBodyEntityValues> entityValues() { DARABONBA_PTR_GET(entityValues_, vector<ListDSEntityValueResponseBodyEntityValues>) };
    inline ListDSEntityValueResponseBody& setEntityValues(const vector<ListDSEntityValueResponseBodyEntityValues> & entityValues) { DARABONBA_PTR_SET_VALUE(entityValues_, entityValues) };
    inline ListDSEntityValueResponseBody& setEntityValues(vector<ListDSEntityValueResponseBodyEntityValues> && entityValues) { DARABONBA_PTR_SET_RVALUE(entityValues_, entityValues) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDSEntityValueResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDSEntityValueResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDSEntityValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDSEntityValueResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListDSEntityValueResponseBodyEntityValues>> entityValues_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
