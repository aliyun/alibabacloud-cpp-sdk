// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKPROCESSESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKPROCESSESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCheckProcessesResponseBodyPagingInfoCheckProcesses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListCheckProcessesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckProcessesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CheckProcesses, checkProcesses_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckProcessesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckProcesses, checkProcesses_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCheckProcessesResponseBodyPagingInfo() = default ;
    ListCheckProcessesResponseBodyPagingInfo(const ListCheckProcessesResponseBodyPagingInfo &) = default ;
    ListCheckProcessesResponseBodyPagingInfo(ListCheckProcessesResponseBodyPagingInfo &&) = default ;
    ListCheckProcessesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckProcessesResponseBodyPagingInfo() = default ;
    ListCheckProcessesResponseBodyPagingInfo& operator=(const ListCheckProcessesResponseBodyPagingInfo &) = default ;
    ListCheckProcessesResponseBodyPagingInfo& operator=(ListCheckProcessesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkProcesses_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // checkProcesses Field Functions 
    bool hasCheckProcesses() const { return this->checkProcesses_ != nullptr;};
    void deleteCheckProcesses() { this->checkProcesses_ = nullptr;};
    inline const vector<Models::ListCheckProcessesResponseBodyPagingInfoCheckProcesses> & checkProcesses() const { DARABONBA_PTR_GET_CONST(checkProcesses_, vector<Models::ListCheckProcessesResponseBodyPagingInfoCheckProcesses>) };
    inline vector<Models::ListCheckProcessesResponseBodyPagingInfoCheckProcesses> checkProcesses() { DARABONBA_PTR_GET(checkProcesses_, vector<Models::ListCheckProcessesResponseBodyPagingInfoCheckProcesses>) };
    inline ListCheckProcessesResponseBodyPagingInfo& setCheckProcesses(const vector<Models::ListCheckProcessesResponseBodyPagingInfoCheckProcesses> & checkProcesses) { DARABONBA_PTR_SET_VALUE(checkProcesses_, checkProcesses) };
    inline ListCheckProcessesResponseBodyPagingInfo& setCheckProcesses(vector<Models::ListCheckProcessesResponseBodyPagingInfoCheckProcesses> && checkProcesses) { DARABONBA_PTR_SET_RVALUE(checkProcesses_, checkProcesses) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCheckProcessesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCheckProcessesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCheckProcessesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The check details of the extension.
    std::shared_ptr<vector<Models::ListCheckProcessesResponseBodyPagingInfoCheckProcesses>> checkProcesses_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries displayed on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
