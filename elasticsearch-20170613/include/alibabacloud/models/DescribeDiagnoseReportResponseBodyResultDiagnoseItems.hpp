// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTRESPONSEBODYRESULTDIAGNOSEITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTRESPONSEBODYRESULTDIAGNOSEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDiagnoseReportResponseBodyResultDiagnoseItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportResponseBodyResultDiagnoseItems& obj) { 
      DARABONBA_PTR_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(health, health_);
      DARABONBA_PTR_TO_JSON(item, item_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportResponseBodyResultDiagnoseItems& obj) { 
      DARABONBA_PTR_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(health, health_);
      DARABONBA_PTR_FROM_JSON(item, item_);
    };
    DescribeDiagnoseReportResponseBodyResultDiagnoseItems() = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItems(const DescribeDiagnoseReportResponseBodyResultDiagnoseItems &) = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItems(DescribeDiagnoseReportResponseBodyResultDiagnoseItems &&) = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportResponseBodyResultDiagnoseItems() = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItems& operator=(const DescribeDiagnoseReportResponseBodyResultDiagnoseItems &) = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItems& operator=(DescribeDiagnoseReportResponseBodyResultDiagnoseItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr
        && this->health_ != nullptr && this->item_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail) };
    inline Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail detail() { DARABONBA_PTR_GET(detail_, Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail) };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItems& setDetail(const Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItems& setDetail(Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline string health() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItems& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItems& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


  protected:
    std::shared_ptr<Models::DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail> detail_ = nullptr;
    std::shared_ptr<string> health_ = nullptr;
    std::shared_ptr<string> item_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
