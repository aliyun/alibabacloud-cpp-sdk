// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTFUNCTIONSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFunctionsResponseBodyPagingInfoFunctions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListFunctionsResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFunctionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Functions, functions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFunctionsResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFunctionsResponseBodyPagingInfo() = default ;
    ListFunctionsResponseBodyPagingInfo(const ListFunctionsResponseBodyPagingInfo &) = default ;
    ListFunctionsResponseBodyPagingInfo(ListFunctionsResponseBodyPagingInfo &&) = default ;
    ListFunctionsResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFunctionsResponseBodyPagingInfo() = default ;
    ListFunctionsResponseBodyPagingInfo& operator=(const ListFunctionsResponseBodyPagingInfo &) = default ;
    ListFunctionsResponseBodyPagingInfo& operator=(ListFunctionsResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->functions_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline const vector<Models::ListFunctionsResponseBodyPagingInfoFunctions> & functions() const { DARABONBA_PTR_GET_CONST(functions_, vector<Models::ListFunctionsResponseBodyPagingInfoFunctions>) };
    inline vector<Models::ListFunctionsResponseBodyPagingInfoFunctions> functions() { DARABONBA_PTR_GET(functions_, vector<Models::ListFunctionsResponseBodyPagingInfoFunctions>) };
    inline ListFunctionsResponseBodyPagingInfo& setFunctions(const vector<Models::ListFunctionsResponseBodyPagingInfoFunctions> & functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };
    inline ListFunctionsResponseBodyPagingInfo& setFunctions(vector<Models::ListFunctionsResponseBodyPagingInfoFunctions> && functions) { DARABONBA_PTR_SET_RVALUE(functions_, functions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFunctionsResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFunctionsResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFunctionsResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The UDFs.
    std::shared_ptr<vector<Models::ListFunctionsResponseBodyPagingInfoFunctions>> functions_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
