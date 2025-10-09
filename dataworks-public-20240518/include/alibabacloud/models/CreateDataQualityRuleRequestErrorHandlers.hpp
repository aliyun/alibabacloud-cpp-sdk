// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULEREQUESTERRORHANDLERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULEREQUESTERRORHANDLERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityRuleRequestErrorHandlers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityRuleRequestErrorHandlers& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorDataFilter, errorDataFilter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityRuleRequestErrorHandlers& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorDataFilter, errorDataFilter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateDataQualityRuleRequestErrorHandlers() = default ;
    CreateDataQualityRuleRequestErrorHandlers(const CreateDataQualityRuleRequestErrorHandlers &) = default ;
    CreateDataQualityRuleRequestErrorHandlers(CreateDataQualityRuleRequestErrorHandlers &&) = default ;
    CreateDataQualityRuleRequestErrorHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityRuleRequestErrorHandlers() = default ;
    CreateDataQualityRuleRequestErrorHandlers& operator=(const CreateDataQualityRuleRequestErrorHandlers &) = default ;
    CreateDataQualityRuleRequestErrorHandlers& operator=(CreateDataQualityRuleRequestErrorHandlers &&) = default ;
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
    inline CreateDataQualityRuleRequestErrorHandlers& setErrorDataFilter(string errorDataFilter) { DARABONBA_PTR_SET_VALUE(errorDataFilter_, errorDataFilter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateDataQualityRuleRequestErrorHandlers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The SQL statement that is used to filter failed tasks. If you define the rule by using custom SQL statements, you must specify an SQL statement to filter failed tasks.
    std::shared_ptr<string> errorDataFilter_ = nullptr;
    // The type of the operation. Valid values:
    // 
    // *   SaveErrorData
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
