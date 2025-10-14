// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRANGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRangeResponseBodyBackgroundColors.hpp>
#include <alibabacloud/models/GetRangeResponseBodyHyperlinks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(backgroundColors, backgroundColors_);
      DARABONBA_PTR_TO_JSON(displayValues, displayValues_);
      DARABONBA_PTR_TO_JSON(formulas, formulas_);
      DARABONBA_PTR_TO_JSON(hyperlinks, hyperlinks_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, GetRangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(backgroundColors, backgroundColors_);
      DARABONBA_PTR_FROM_JSON(displayValues, displayValues_);
      DARABONBA_PTR_FROM_JSON(formulas, formulas_);
      DARABONBA_PTR_FROM_JSON(hyperlinks, hyperlinks_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    GetRangeResponseBody() = default ;
    GetRangeResponseBody(const GetRangeResponseBody &) = default ;
    GetRangeResponseBody(GetRangeResponseBody &&) = default ;
    GetRangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRangeResponseBody() = default ;
    GetRangeResponseBody& operator=(const GetRangeResponseBody &) = default ;
    GetRangeResponseBody& operator=(GetRangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundColors_ == nullptr
        && return this->displayValues_ == nullptr && return this->formulas_ == nullptr && return this->hyperlinks_ == nullptr && return this->requestId_ == nullptr && return this->values_ == nullptr; };
    // backgroundColors Field Functions 
    bool hasBackgroundColors() const { return this->backgroundColors_ != nullptr;};
    void deleteBackgroundColors() { this->backgroundColors_ = nullptr;};
    inline const vector<vector<GetRangeResponseBodyBackgroundColors>> & backgroundColors() const { DARABONBA_PTR_GET_CONST(backgroundColors_, vector<vector<GetRangeResponseBodyBackgroundColors>>) };
    inline vector<vector<GetRangeResponseBodyBackgroundColors>> backgroundColors() { DARABONBA_PTR_GET(backgroundColors_, vector<vector<GetRangeResponseBodyBackgroundColors>>) };
    inline GetRangeResponseBody& setBackgroundColors(const vector<vector<GetRangeResponseBodyBackgroundColors>> & backgroundColors) { DARABONBA_PTR_SET_VALUE(backgroundColors_, backgroundColors) };
    inline GetRangeResponseBody& setBackgroundColors(vector<vector<GetRangeResponseBodyBackgroundColors>> && backgroundColors) { DARABONBA_PTR_SET_RVALUE(backgroundColors_, backgroundColors) };


    // displayValues Field Functions 
    bool hasDisplayValues() const { return this->displayValues_ != nullptr;};
    void deleteDisplayValues() { this->displayValues_ = nullptr;};
    inline const vector<vector<string>> & displayValues() const { DARABONBA_PTR_GET_CONST(displayValues_, vector<vector<string>>) };
    inline vector<vector<string>> displayValues() { DARABONBA_PTR_GET(displayValues_, vector<vector<string>>) };
    inline GetRangeResponseBody& setDisplayValues(const vector<vector<string>> & displayValues) { DARABONBA_PTR_SET_VALUE(displayValues_, displayValues) };
    inline GetRangeResponseBody& setDisplayValues(vector<vector<string>> && displayValues) { DARABONBA_PTR_SET_RVALUE(displayValues_, displayValues) };


    // formulas Field Functions 
    bool hasFormulas() const { return this->formulas_ != nullptr;};
    void deleteFormulas() { this->formulas_ = nullptr;};
    inline const vector<vector<string>> & formulas() const { DARABONBA_PTR_GET_CONST(formulas_, vector<vector<string>>) };
    inline vector<vector<string>> formulas() { DARABONBA_PTR_GET(formulas_, vector<vector<string>>) };
    inline GetRangeResponseBody& setFormulas(const vector<vector<string>> & formulas) { DARABONBA_PTR_SET_VALUE(formulas_, formulas) };
    inline GetRangeResponseBody& setFormulas(vector<vector<string>> && formulas) { DARABONBA_PTR_SET_RVALUE(formulas_, formulas) };


    // hyperlinks Field Functions 
    bool hasHyperlinks() const { return this->hyperlinks_ != nullptr;};
    void deleteHyperlinks() { this->hyperlinks_ = nullptr;};
    inline const vector<vector<GetRangeResponseBodyHyperlinks>> & hyperlinks() const { DARABONBA_PTR_GET_CONST(hyperlinks_, vector<vector<GetRangeResponseBodyHyperlinks>>) };
    inline vector<vector<GetRangeResponseBodyHyperlinks>> hyperlinks() { DARABONBA_PTR_GET(hyperlinks_, vector<vector<GetRangeResponseBodyHyperlinks>>) };
    inline GetRangeResponseBody& setHyperlinks(const vector<vector<GetRangeResponseBodyHyperlinks>> & hyperlinks) { DARABONBA_PTR_SET_VALUE(hyperlinks_, hyperlinks) };
    inline GetRangeResponseBody& setHyperlinks(vector<vector<GetRangeResponseBodyHyperlinks>> && hyperlinks) { DARABONBA_PTR_SET_RVALUE(hyperlinks_, hyperlinks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<vector<Darabonba::Json>> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<Darabonba::Json>>) };
    inline vector<vector<Darabonba::Json>> values() { DARABONBA_PTR_GET(values_, vector<vector<Darabonba::Json>>) };
    inline GetRangeResponseBody& setValues(const vector<vector<Darabonba::Json>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline GetRangeResponseBody& setValues(vector<vector<Darabonba::Json>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<vector<vector<GetRangeResponseBodyBackgroundColors>>> backgroundColors_ = nullptr;
    std::shared_ptr<vector<vector<string>>> displayValues_ = nullptr;
    std::shared_ptr<vector<vector<string>>> formulas_ = nullptr;
    std::shared_ptr<vector<vector<GetRangeResponseBodyHyperlinks>>> hyperlinks_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<vector<Darabonba::Json>>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
