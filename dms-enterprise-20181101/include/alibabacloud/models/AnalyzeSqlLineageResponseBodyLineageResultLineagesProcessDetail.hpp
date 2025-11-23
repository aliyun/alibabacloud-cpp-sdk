// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODYLINEAGERESULTLINEAGESPROCESSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODYLINEAGERESULTLINEAGESPROCESSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CalWay, calWay_);
      DARABONBA_PTR_TO_JSON(Code, code_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CalWay, calWay_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
    };
    AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail() = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail(const AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail &) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail(AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail &&) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail() = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail& operator=(const AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail &) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail& operator=(AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calWay_ == nullptr
        && return this->code_ == nullptr; };
    // calWay Field Functions 
    bool hasCalWay() const { return this->calWay_ != nullptr;};
    void deleteCalWay() { this->calWay_ = nullptr;};
    inline string calWay() const { DARABONBA_PTR_GET_DEFAULT(calWay_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail& setCalWay(string calWay) { DARABONBA_PTR_SET_VALUE(calWay_, calWay) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultLineagesProcessDetail& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


  protected:
    // The calculating method. Valid values:
    // 
    // *   **DIRECT**: No function or expression is used.
    // *   **EXPR**: A function or expression is used.
    std::shared_ptr<string> calWay_ = nullptr;
    // The SQL code snippet for field processing.
    std::shared_ptr<string> code_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
