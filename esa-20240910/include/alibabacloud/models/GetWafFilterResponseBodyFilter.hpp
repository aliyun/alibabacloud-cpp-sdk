// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTER_HPP_
#define ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWafFilterResponseBodyFilterFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafFilterResponseBodyFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafFilterResponseBodyFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafFilterResponseBodyFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetWafFilterResponseBodyFilter() = default ;
    GetWafFilterResponseBodyFilter(const GetWafFilterResponseBodyFilter &) = default ;
    GetWafFilterResponseBodyFilter(GetWafFilterResponseBodyFilter &&) = default ;
    GetWafFilterResponseBodyFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafFilterResponseBodyFilter() = default ;
    GetWafFilterResponseBodyFilter& operator=(const GetWafFilterResponseBodyFilter &) = default ;
    GetWafFilterResponseBodyFilter& operator=(GetWafFilterResponseBodyFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr
        && this->phase_ != nullptr && this->target_ != nullptr && this->type_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<Models::GetWafFilterResponseBodyFilterFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Models::GetWafFilterResponseBodyFilterFields>) };
    inline vector<Models::GetWafFilterResponseBodyFilterFields> fields() { DARABONBA_PTR_GET(fields_, vector<Models::GetWafFilterResponseBodyFilterFields>) };
    inline GetWafFilterResponseBodyFilter& setFields(const vector<Models::GetWafFilterResponseBodyFilterFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetWafFilterResponseBodyFilter& setFields(vector<Models::GetWafFilterResponseBodyFilterFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetWafFilterResponseBodyFilter& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetWafFilterResponseBodyFilter& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetWafFilterResponseBodyFilter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The matched objects and related properties.
    std::shared_ptr<vector<Models::GetWafFilterResponseBodyFilterFields>> fields_ = nullptr;
    // The WAF rule category.
    std::shared_ptr<string> phase_ = nullptr;
    // The condition for matching incoming requests.
    std::shared_ptr<string> target_ = nullptr;
    // The rule type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
