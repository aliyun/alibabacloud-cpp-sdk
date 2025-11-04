// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChannelAssemblyScheduleData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSchedulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchedulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Programs, programs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchedulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Programs, programs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSchedulesResponseBody() = default ;
    ListSchedulesResponseBody(const ListSchedulesResponseBody &) = default ;
    ListSchedulesResponseBody(ListSchedulesResponseBody &&) = default ;
    ListSchedulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchedulesResponseBody() = default ;
    ListSchedulesResponseBody& operator=(const ListSchedulesResponseBody &) = default ;
    ListSchedulesResponseBody& operator=(ListSchedulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->programs_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListSchedulesResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSchedulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programs Field Functions 
    bool hasPrograms() const { return this->programs_ != nullptr;};
    void deletePrograms() { this->programs_ = nullptr;};
    inline const vector<ChannelAssemblyScheduleData> & programs() const { DARABONBA_PTR_GET_CONST(programs_, vector<ChannelAssemblyScheduleData>) };
    inline vector<ChannelAssemblyScheduleData> programs() { DARABONBA_PTR_GET(programs_, vector<ChannelAssemblyScheduleData>) };
    inline ListSchedulesResponseBody& setPrograms(const vector<ChannelAssemblyScheduleData> & programs) { DARABONBA_PTR_SET_VALUE(programs_, programs) };
    inline ListSchedulesResponseBody& setPrograms(vector<ChannelAssemblyScheduleData> && programs) { DARABONBA_PTR_SET_RVALUE(programs_, programs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSchedulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSchedulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The program schedule.
    std::shared_ptr<vector<ChannelAssemblyScheduleData>> programs_ = nullptr;
    // **Request ID**
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
