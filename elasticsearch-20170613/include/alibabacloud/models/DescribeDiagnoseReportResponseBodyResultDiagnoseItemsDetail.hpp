// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTRESPONSEBODYRESULTDIAGNOSEITEMSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTRESPONSEBODYRESULTDIAGNOSEITEMSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(suggest, suggest_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(suggest, suggest_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail() = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail(const DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail &) = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail(DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail &&) = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail() = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& operator=(const DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail &) = default ;
    DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& operator=(DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->name_ != nullptr && this->result_ != nullptr && this->suggest_ != nullptr && this->type_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // suggest Field Functions 
    bool hasSuggest() const { return this->suggest_ != nullptr;};
    void deleteSuggest() { this->suggest_ = nullptr;};
    inline string suggest() const { DARABONBA_PTR_GET_DEFAULT(suggest_, "") };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& setSuggest(string suggest) { DARABONBA_PTR_SET_VALUE(suggest_, suggest) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDiagnoseReportResponseBodyResultDiagnoseItemsDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> suggest_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
