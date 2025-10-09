// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRULEERRORHANDLERS_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRULEERRORHANDLERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityRuleErrorHandlers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityRuleErrorHandlers& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorDataFilter, errorDataFilter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityRuleErrorHandlers& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorDataFilter, errorDataFilter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DataQualityRuleErrorHandlers() = default ;
    DataQualityRuleErrorHandlers(const DataQualityRuleErrorHandlers &) = default ;
    DataQualityRuleErrorHandlers(DataQualityRuleErrorHandlers &&) = default ;
    DataQualityRuleErrorHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityRuleErrorHandlers() = default ;
    DataQualityRuleErrorHandlers& operator=(const DataQualityRuleErrorHandlers &) = default ;
    DataQualityRuleErrorHandlers& operator=(DataQualityRuleErrorHandlers &&) = default ;
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
    inline DataQualityRuleErrorHandlers& setErrorDataFilter(string errorDataFilter) { DARABONBA_PTR_SET_VALUE(errorDataFilter_, errorDataFilter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DataQualityRuleErrorHandlers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> errorDataFilter_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
