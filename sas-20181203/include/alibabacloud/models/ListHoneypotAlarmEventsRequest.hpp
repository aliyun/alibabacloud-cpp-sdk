// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotAlarmEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAlarmEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAlarmEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
    };
    ListHoneypotAlarmEventsRequest() = default ;
    ListHoneypotAlarmEventsRequest(const ListHoneypotAlarmEventsRequest &) = default ;
    ListHoneypotAlarmEventsRequest(ListHoneypotAlarmEventsRequest &&) = default ;
    ListHoneypotAlarmEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAlarmEventsRequest() = default ;
    ListHoneypotAlarmEventsRequest& operator=(const ListHoneypotAlarmEventsRequest &) = default ;
    ListHoneypotAlarmEventsRequest& operator=(ListHoneypotAlarmEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->dealed_ != nullptr && this->dstIp_ != nullptr && this->pageSize_ != nullptr && this->riskLevelList_ != nullptr && this->srcIp_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListHoneypotAlarmEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline ListHoneypotAlarmEventsRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // dstIp Field Functions 
    bool hasDstIp() const { return this->dstIp_ != nullptr;};
    void deleteDstIp() { this->dstIp_ = nullptr;};
    inline string dstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
    inline ListHoneypotAlarmEventsRequest& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHoneypotAlarmEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<string> & riskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<string>) };
    inline vector<string> riskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<string>) };
    inline ListHoneypotAlarmEventsRequest& setRiskLevelList(const vector<string> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline ListHoneypotAlarmEventsRequest& setRiskLevelList(vector<string> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline ListHoneypotAlarmEventsRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<string> dealed_ = nullptr;
    std::shared_ptr<string> dstIp_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<string>> riskLevelList_ = nullptr;
    std::shared_ptr<string> srcIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
