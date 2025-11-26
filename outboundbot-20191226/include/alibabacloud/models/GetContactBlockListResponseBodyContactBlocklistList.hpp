// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTACTBLOCKLISTRESPONSEBODYCONTACTBLOCKLISTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTACTBLOCKLISTRESPONSEBODYCONTACTBLOCKLISTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetContactBlockListResponseBodyContactBlocklistListList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetContactBlockListResponseBodyContactBlocklistList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContactBlockListResponseBodyContactBlocklistList& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetContactBlockListResponseBodyContactBlocklistList& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetContactBlockListResponseBodyContactBlocklistList() = default ;
    GetContactBlockListResponseBodyContactBlocklistList(const GetContactBlockListResponseBodyContactBlocklistList &) = default ;
    GetContactBlockListResponseBodyContactBlocklistList(GetContactBlockListResponseBodyContactBlocklistList &&) = default ;
    GetContactBlockListResponseBodyContactBlocklistList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContactBlockListResponseBodyContactBlocklistList() = default ;
    GetContactBlockListResponseBodyContactBlocklistList& operator=(const GetContactBlockListResponseBodyContactBlocklistList &) = default ;
    GetContactBlockListResponseBodyContactBlocklistList& operator=(GetContactBlockListResponseBodyContactBlocklistList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->list_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetContactBlockListResponseBodyContactBlocklistListList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetContactBlockListResponseBodyContactBlocklistListList>) };
    inline vector<Models::GetContactBlockListResponseBodyContactBlocklistListList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetContactBlockListResponseBodyContactBlocklistListList>) };
    inline GetContactBlockListResponseBodyContactBlocklistList& setList(const vector<Models::GetContactBlockListResponseBodyContactBlocklistListList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetContactBlockListResponseBodyContactBlocklistList& setList(vector<Models::GetContactBlockListResponseBodyContactBlocklistListList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetContactBlockListResponseBodyContactBlocklistList& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetContactBlockListResponseBodyContactBlocklistList& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetContactBlockListResponseBodyContactBlocklistList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::GetContactBlockListResponseBodyContactBlocklistListList>> list_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
