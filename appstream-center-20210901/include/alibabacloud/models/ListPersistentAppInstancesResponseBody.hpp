// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERSISTENTAPPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPERSISTENTAPPINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListPersistentAppInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPersistentAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PersistentAppInstanceModels, persistentAppInstanceModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPersistentAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PersistentAppInstanceModels, persistentAppInstanceModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPersistentAppInstancesResponseBody() = default ;
    ListPersistentAppInstancesResponseBody(const ListPersistentAppInstancesResponseBody &) = default ;
    ListPersistentAppInstancesResponseBody(ListPersistentAppInstancesResponseBody &&) = default ;
    ListPersistentAppInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPersistentAppInstancesResponseBody() = default ;
    ListPersistentAppInstancesResponseBody& operator=(const ListPersistentAppInstancesResponseBody &) = default ;
    ListPersistentAppInstancesResponseBody& operator=(ListPersistentAppInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->persistentAppInstanceModels_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPersistentAppInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPersistentAppInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // persistentAppInstanceModels Field Functions 
    bool hasPersistentAppInstanceModels() const { return this->persistentAppInstanceModels_ != nullptr;};
    void deletePersistentAppInstanceModels() { this->persistentAppInstanceModels_ = nullptr;};
    inline const vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels> & persistentAppInstanceModels() const { DARABONBA_PTR_GET_CONST(persistentAppInstanceModels_, vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels>) };
    inline vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels> persistentAppInstanceModels() { DARABONBA_PTR_GET(persistentAppInstanceModels_, vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels>) };
    inline ListPersistentAppInstancesResponseBody& setPersistentAppInstanceModels(const vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels> & persistentAppInstanceModels) { DARABONBA_PTR_SET_VALUE(persistentAppInstanceModels_, persistentAppInstanceModels) };
    inline ListPersistentAppInstancesResponseBody& setPersistentAppInstanceModels(vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels> && persistentAppInstanceModels) { DARABONBA_PTR_SET_RVALUE(persistentAppInstanceModels_, persistentAppInstanceModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPersistentAppInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPersistentAppInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<ListPersistentAppInstancesResponseBodyPersistentAppInstanceModels>> persistentAppInstanceModels_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
