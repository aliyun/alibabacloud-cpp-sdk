// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBASSERTCHECKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBASSERTCHECKDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetJobResponseBodyJobAssertCheckDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobAssertCheckDetail& obj) { 
      DARABONBA_PTR_TO_JSON(comparison, comparison_);
      DARABONBA_PTR_TO_JSON(expectedValue, expectedValue_);
      DARABONBA_PTR_TO_JSON(isPass, isPass_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobAssertCheckDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(comparison, comparison_);
      DARABONBA_PTR_FROM_JSON(expectedValue, expectedValue_);
      DARABONBA_PTR_FROM_JSON(isPass, isPass_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetJobResponseBodyJobAssertCheckDetail() = default ;
    GetJobResponseBodyJobAssertCheckDetail(const GetJobResponseBodyJobAssertCheckDetail &) = default ;
    GetJobResponseBodyJobAssertCheckDetail(GetJobResponseBodyJobAssertCheckDetail &&) = default ;
    GetJobResponseBodyJobAssertCheckDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobAssertCheckDetail() = default ;
    GetJobResponseBodyJobAssertCheckDetail& operator=(const GetJobResponseBodyJobAssertCheckDetail &) = default ;
    GetJobResponseBodyJobAssertCheckDetail& operator=(GetJobResponseBodyJobAssertCheckDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comparison_ != nullptr
        && this->expectedValue_ != nullptr && this->isPass_ != nullptr && this->type_ != nullptr; };
    // comparison Field Functions 
    bool hasComparison() const { return this->comparison_ != nullptr;};
    void deleteComparison() { this->comparison_ = nullptr;};
    inline string comparison() const { DARABONBA_PTR_GET_DEFAULT(comparison_, "") };
    inline GetJobResponseBodyJobAssertCheckDetail& setComparison(string comparison) { DARABONBA_PTR_SET_VALUE(comparison_, comparison) };


    // expectedValue Field Functions 
    bool hasExpectedValue() const { return this->expectedValue_ != nullptr;};
    void deleteExpectedValue() { this->expectedValue_ = nullptr;};
    inline string expectedValue() const { DARABONBA_PTR_GET_DEFAULT(expectedValue_, "") };
    inline GetJobResponseBodyJobAssertCheckDetail& setExpectedValue(string expectedValue) { DARABONBA_PTR_SET_VALUE(expectedValue_, expectedValue) };


    // isPass Field Functions 
    bool hasIsPass() const { return this->isPass_ != nullptr;};
    void deleteIsPass() { this->isPass_ = nullptr;};
    inline bool isPass() const { DARABONBA_PTR_GET_DEFAULT(isPass_, false) };
    inline GetJobResponseBodyJobAssertCheckDetail& setIsPass(bool isPass) { DARABONBA_PTR_SET_VALUE(isPass_, isPass) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetJobResponseBodyJobAssertCheckDetail& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> comparison_ = nullptr;
    std::shared_ptr<string> expectedValue_ = nullptr;
    std::shared_ptr<bool> isPass_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
