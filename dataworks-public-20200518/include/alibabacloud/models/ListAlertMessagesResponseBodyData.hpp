// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTMESSAGESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTMESSAGESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertMessagesResponseBodyDataAlertMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListAlertMessagesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertMessagesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertMessages, alertMessages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertMessagesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertMessages, alertMessages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAlertMessagesResponseBodyData() = default ;
    ListAlertMessagesResponseBodyData(const ListAlertMessagesResponseBodyData &) = default ;
    ListAlertMessagesResponseBodyData(ListAlertMessagesResponseBodyData &&) = default ;
    ListAlertMessagesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertMessagesResponseBodyData() = default ;
    ListAlertMessagesResponseBodyData& operator=(const ListAlertMessagesResponseBodyData &) = default ;
    ListAlertMessagesResponseBodyData& operator=(ListAlertMessagesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertMessages_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // alertMessages Field Functions 
    bool hasAlertMessages() const { return this->alertMessages_ != nullptr;};
    void deleteAlertMessages() { this->alertMessages_ = nullptr;};
    inline const vector<Models::ListAlertMessagesResponseBodyDataAlertMessages> & alertMessages() const { DARABONBA_PTR_GET_CONST(alertMessages_, vector<Models::ListAlertMessagesResponseBodyDataAlertMessages>) };
    inline vector<Models::ListAlertMessagesResponseBodyDataAlertMessages> alertMessages() { DARABONBA_PTR_GET(alertMessages_, vector<Models::ListAlertMessagesResponseBodyDataAlertMessages>) };
    inline ListAlertMessagesResponseBodyData& setAlertMessages(const vector<Models::ListAlertMessagesResponseBodyDataAlertMessages> & alertMessages) { DARABONBA_PTR_SET_VALUE(alertMessages_, alertMessages) };
    inline ListAlertMessagesResponseBodyData& setAlertMessages(vector<Models::ListAlertMessagesResponseBodyDataAlertMessages> && alertMessages) { DARABONBA_PTR_SET_RVALUE(alertMessages_, alertMessages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAlertMessagesResponseBodyData& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAlertMessagesResponseBodyData& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListAlertMessagesResponseBodyData& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The alerts.
    std::shared_ptr<vector<Models::ListAlertMessagesResponseBodyDataAlertMessages>> alertMessages_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The total number of alerts returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
