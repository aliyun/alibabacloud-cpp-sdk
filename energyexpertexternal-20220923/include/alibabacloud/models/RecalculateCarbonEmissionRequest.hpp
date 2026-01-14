// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALCULATECARBONEMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECALCULATECARBONEMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class RecalculateCarbonEmissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecalculateCarbonEmissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(year, year_);
    };
    friend void from_json(const Darabonba::Json& j, RecalculateCarbonEmissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(year, year_);
    };
    RecalculateCarbonEmissionRequest() = default ;
    RecalculateCarbonEmissionRequest(const RecalculateCarbonEmissionRequest &) = default ;
    RecalculateCarbonEmissionRequest(RecalculateCarbonEmissionRequest &&) = default ;
    RecalculateCarbonEmissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecalculateCarbonEmissionRequest() = default ;
    RecalculateCarbonEmissionRequest& operator=(const RecalculateCarbonEmissionRequest &) = default ;
    RecalculateCarbonEmissionRequest& operator=(RecalculateCarbonEmissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->year_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RecalculateCarbonEmissionRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline string getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, "") };
    inline RecalculateCarbonEmissionRequest& setYear(string year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // Year of inventory.
    // 
    // This parameter is required.
    shared_ptr<string> year_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
