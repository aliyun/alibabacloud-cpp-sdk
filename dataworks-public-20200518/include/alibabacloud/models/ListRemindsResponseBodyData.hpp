// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRemindsResponseBodyDataReminds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListRemindsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Reminds, reminds_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Reminds, reminds_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRemindsResponseBodyData() = default ;
    ListRemindsResponseBodyData(const ListRemindsResponseBodyData &) = default ;
    ListRemindsResponseBodyData(ListRemindsResponseBodyData &&) = default ;
    ListRemindsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindsResponseBodyData() = default ;
    ListRemindsResponseBodyData& operator=(const ListRemindsResponseBodyData &) = default ;
    ListRemindsResponseBodyData& operator=(ListRemindsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->reminds_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRemindsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRemindsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reminds Field Functions 
    bool hasReminds() const { return this->reminds_ != nullptr;};
    void deleteReminds() { this->reminds_ = nullptr;};
    inline const vector<Models::ListRemindsResponseBodyDataReminds> & reminds() const { DARABONBA_PTR_GET_CONST(reminds_, vector<Models::ListRemindsResponseBodyDataReminds>) };
    inline vector<Models::ListRemindsResponseBodyDataReminds> reminds() { DARABONBA_PTR_GET(reminds_, vector<Models::ListRemindsResponseBodyDataReminds>) };
    inline ListRemindsResponseBodyData& setReminds(const vector<Models::ListRemindsResponseBodyDataReminds> & reminds) { DARABONBA_PTR_SET_VALUE(reminds_, reminds) };
    inline ListRemindsResponseBodyData& setReminds(vector<Models::ListRemindsResponseBodyDataReminds> && reminds) { DARABONBA_PTR_SET_RVALUE(reminds_, reminds) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRemindsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The list of custom alert rules.
    std::shared_ptr<vector<Models::ListRemindsResponseBodyDataReminds>> reminds_ = nullptr;
    // The total number of custom alert rules returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
