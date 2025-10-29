// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRESULTRULEERRORHANDLERS_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRESULTRULEERRORHANDLERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityResultRuleErrorHandlers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityResultRuleErrorHandlers& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorDataFilter, errorDataFilter_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityResultRuleErrorHandlers& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorDataFilter, errorDataFilter_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DataQualityResultRuleErrorHandlers() = default ;
    DataQualityResultRuleErrorHandlers(const DataQualityResultRuleErrorHandlers &) = default ;
    DataQualityResultRuleErrorHandlers(DataQualityResultRuleErrorHandlers &&) = default ;
    DataQualityResultRuleErrorHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityResultRuleErrorHandlers() = default ;
    DataQualityResultRuleErrorHandlers& operator=(const DataQualityResultRuleErrorHandlers &) = default ;
    DataQualityResultRuleErrorHandlers& operator=(DataQualityResultRuleErrorHandlers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorDataFilter_ == nullptr
        && return this->type_ == nullptr; };
    // errorDataFilter Field Functions 
    bool hasErrorDataFilter() const { return this->errorDataFilter_ != nullptr;};
    void deleteErrorDataFilter() { this->errorDataFilter_ = nullptr;};
    inline string errorDataFilter() const { DARABONBA_PTR_GET_DEFAULT(errorDataFilter_, "") };
    inline DataQualityResultRuleErrorHandlers& setErrorDataFilter(string errorDataFilter) { DARABONBA_PTR_SET_VALUE(errorDataFilter_, errorDataFilter) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DataQualityResultRuleErrorHandlers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> errorDataFilter_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
