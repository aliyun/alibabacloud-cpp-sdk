// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANNELALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANNELALERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListChannelAlertsResponseBodyProgramAlerts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListChannelAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChannelAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProgramAlerts, programAlerts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChannelAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProgramAlerts, programAlerts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChannelAlertsResponseBody() = default ;
    ListChannelAlertsResponseBody(const ListChannelAlertsResponseBody &) = default ;
    ListChannelAlertsResponseBody(ListChannelAlertsResponseBody &&) = default ;
    ListChannelAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChannelAlertsResponseBody() = default ;
    ListChannelAlertsResponseBody& operator=(const ListChannelAlertsResponseBody &) = default ;
    ListChannelAlertsResponseBody& operator=(ListChannelAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->programAlerts_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChannelAlertsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChannelAlertsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programAlerts Field Functions 
    bool hasProgramAlerts() const { return this->programAlerts_ != nullptr;};
    void deleteProgramAlerts() { this->programAlerts_ = nullptr;};
    inline const vector<ListChannelAlertsResponseBodyProgramAlerts> & programAlerts() const { DARABONBA_PTR_GET_CONST(programAlerts_, vector<ListChannelAlertsResponseBodyProgramAlerts>) };
    inline vector<ListChannelAlertsResponseBodyProgramAlerts> programAlerts() { DARABONBA_PTR_GET(programAlerts_, vector<ListChannelAlertsResponseBodyProgramAlerts>) };
    inline ListChannelAlertsResponseBody& setProgramAlerts(const vector<ListChannelAlertsResponseBodyProgramAlerts> & programAlerts) { DARABONBA_PTR_SET_VALUE(programAlerts_, programAlerts) };
    inline ListChannelAlertsResponseBody& setProgramAlerts(vector<ListChannelAlertsResponseBodyProgramAlerts> && programAlerts) { DARABONBA_PTR_SET_RVALUE(programAlerts_, programAlerts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChannelAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListChannelAlertsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The alerts.
    std::shared_ptr<vector<ListChannelAlertsResponseBodyProgramAlerts>> programAlerts_ = nullptr;
    // **Request ID**
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of alerts returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
