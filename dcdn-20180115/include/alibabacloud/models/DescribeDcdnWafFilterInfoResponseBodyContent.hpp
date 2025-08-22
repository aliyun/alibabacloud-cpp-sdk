// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafFilterInfoResponseBodyContentFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafFilterInfoResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafFilterInfoResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafFilterInfoResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
    };
    DescribeDcdnWafFilterInfoResponseBodyContent() = default ;
    DescribeDcdnWafFilterInfoResponseBodyContent(const DescribeDcdnWafFilterInfoResponseBodyContent &) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContent(DescribeDcdnWafFilterInfoResponseBodyContent &&) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafFilterInfoResponseBodyContent() = default ;
    DescribeDcdnWafFilterInfoResponseBodyContent& operator=(const DescribeDcdnWafFilterInfoResponseBodyContent &) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContent& operator=(DescribeDcdnWafFilterInfoResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScene_ != nullptr
        && this->fields_ != nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContent& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFields>) };
    inline vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFields> fields() { DARABONBA_PTR_GET(fields_, vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFields>) };
    inline DescribeDcdnWafFilterInfoResponseBodyContent& setFields(const vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline DescribeDcdnWafFilterInfoResponseBodyContent& setFields(vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


  protected:
    // The type of the protection policy. The value of this parameter is the same as that of the DefenseScenes parameter in the request.
    std::shared_ptr<string> defenseScene_ = nullptr;
    // The information about the match condition.
    std::shared_ptr<vector<Models::DescribeDcdnWafFilterInfoResponseBodyContentFields>> fields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
