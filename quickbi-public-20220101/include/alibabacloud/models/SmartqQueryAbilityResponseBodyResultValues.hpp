// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTQQUERYABILITYRESPONSEBODYRESULTVALUES_HPP_
#define ALIBABACLOUD_MODELS_SMARTQQUERYABILITYRESPONSEBODYRESULTVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class SmartqQueryAbilityResponseBodyResultValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartqQueryAbilityResponseBodyResultValues& obj) { 
      DARABONBA_PTR_TO_JSON(Row, row_);
    };
    friend void from_json(const Darabonba::Json& j, SmartqQueryAbilityResponseBodyResultValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Row, row_);
    };
    SmartqQueryAbilityResponseBodyResultValues() = default ;
    SmartqQueryAbilityResponseBodyResultValues(const SmartqQueryAbilityResponseBodyResultValues &) = default ;
    SmartqQueryAbilityResponseBodyResultValues(SmartqQueryAbilityResponseBodyResultValues &&) = default ;
    SmartqQueryAbilityResponseBodyResultValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartqQueryAbilityResponseBodyResultValues() = default ;
    SmartqQueryAbilityResponseBodyResultValues& operator=(const SmartqQueryAbilityResponseBodyResultValues &) = default ;
    SmartqQueryAbilityResponseBodyResultValues& operator=(SmartqQueryAbilityResponseBodyResultValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->row_ == nullptr; };
    // row Field Functions 
    bool hasRow() const { return this->row_ != nullptr;};
    void deleteRow() { this->row_ = nullptr;};
    inline const vector<string> & row() const { DARABONBA_PTR_GET_CONST(row_, vector<string>) };
    inline vector<string> row() { DARABONBA_PTR_GET(row_, vector<string>) };
    inline SmartqQueryAbilityResponseBodyResultValues& setRow(const vector<string> & row) { DARABONBA_PTR_SET_VALUE(row_, row) };
    inline SmartqQueryAbilityResponseBodyResultValues& setRow(vector<string> && row) { DARABONBA_PTR_SET_RVALUE(row_, row) };


  protected:
    // Data values for each row.
    std::shared_ptr<vector<string>> row_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
