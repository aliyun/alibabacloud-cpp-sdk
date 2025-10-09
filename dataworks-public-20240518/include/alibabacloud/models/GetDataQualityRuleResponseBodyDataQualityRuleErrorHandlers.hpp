// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYRULERESPONSEBODYDATAQUALITYRULEERRORHANDLERS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYRULERESPONSEBODYDATAQUALITYRULEERRORHANDLERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorDataFilter, errorDataFilter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorDataFilter, errorDataFilter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers() = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers(const GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers &) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers(GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers &&) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers() = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers& operator=(const GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers &) = default ;
    GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers& operator=(GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorDataFilter_ != nullptr
        && this->type_ != nullptr; };
    // errorDataFilter Field Functions 
    bool hasErrorDataFilter() const { return this->errorDataFilter_ != nullptr;};
    void deleteErrorDataFilter() { this->errorDataFilter_ = nullptr;};
    inline string errorDataFilter() const { DARABONBA_PTR_GET_DEFAULT(errorDataFilter_, "") };
    inline GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers& setErrorDataFilter(string errorDataFilter) { DARABONBA_PTR_SET_VALUE(errorDataFilter_, errorDataFilter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataQualityRuleResponseBodyDataQualityRuleErrorHandlers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The SQL statement that is used to filter failed tasks. If you define the rule by using custom SQL statements, you must specify an SQL statement to filter failed tasks.
    std::shared_ptr<string> errorDataFilter_ = nullptr;
    // Processor type:
    // - SaveErrorData
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
