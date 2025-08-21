// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTRESPONSEBODYRESULTDIAGNOSEITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTDIAGNOSEREPORTRESPONSEBODYRESULTDIAGNOSEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDiagnoseReportResponseBodyResultDiagnoseItemsDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDiagnoseReportResponseBodyResultDiagnoseItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiagnoseReportResponseBodyResultDiagnoseItems& obj) { 
      DARABONBA_PTR_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(item, item_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiagnoseReportResponseBodyResultDiagnoseItems& obj) { 
      DARABONBA_PTR_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(item, item_);
    };
    ListDiagnoseReportResponseBodyResultDiagnoseItems() = default ;
    ListDiagnoseReportResponseBodyResultDiagnoseItems(const ListDiagnoseReportResponseBodyResultDiagnoseItems &) = default ;
    ListDiagnoseReportResponseBodyResultDiagnoseItems(ListDiagnoseReportResponseBodyResultDiagnoseItems &&) = default ;
    ListDiagnoseReportResponseBodyResultDiagnoseItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiagnoseReportResponseBodyResultDiagnoseItems() = default ;
    ListDiagnoseReportResponseBodyResultDiagnoseItems& operator=(const ListDiagnoseReportResponseBodyResultDiagnoseItems &) = default ;
    ListDiagnoseReportResponseBodyResultDiagnoseItems& operator=(ListDiagnoseReportResponseBodyResultDiagnoseItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->health_ != nullptr && this->item_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Models::ListDiagnoseReportResponseBodyResultDiagnoseItemsDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Models::ListDiagnoseReportResponseBodyResultDiagnoseItemsDetail) };
    inline Models::ListDiagnoseReportResponseBodyResultDiagnoseItemsDetail detail() { DARABONBA_PTR_GET(detail_, Models::ListDiagnoseReportResponseBodyResultDiagnoseItemsDetail) };
    inline ListDiagnoseReportResponseBodyResultDiagnoseItems& setDetail(const Models::ListDiagnoseReportResponseBodyResultDiagnoseItemsDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline ListDiagnoseReportResponseBodyResultDiagnoseItems& setDetail(Models::ListDiagnoseReportResponseBodyResultDiagnoseItemsDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline ListDiagnoseReportResponseBodyResultDiagnoseItems& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline ListDiagnoseReportResponseBodyResultDiagnoseItems& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


  protected:
    // The type of the diagnostic result. Valid values:
    // 
    // *   TEXT: text description
    // *   CONSOLE_API: console-triggered
    // *   ES_API: API triggered
    std::shared_ptr<Models::ListDiagnoseReportResponseBodyResultDiagnoseItemsDetail> detail_ = nullptr;
    // The details of the diagnostic item.
    std::shared_ptr<string> health_ = nullptr;
    // The health of the diagnostic item. Supported: GREEN, YELLOW, RED, and UNKNOWN.
    std::shared_ptr<string> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
