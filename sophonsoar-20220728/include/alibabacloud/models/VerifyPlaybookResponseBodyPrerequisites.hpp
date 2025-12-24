// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYPLAYBOOKRESPONSEBODYPREREQUISITES_HPP_
#define ALIBABACLOUD_MODELS_VERIFYPLAYBOOKRESPONSEBODYPREREQUISITES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class VerifyPlaybookResponseBodyPrerequisites : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyPlaybookResponseBodyPrerequisites& obj) { 
      DARABONBA_PTR_TO_JSON(PrerequisiteType, prerequisiteType_);
      DARABONBA_PTR_TO_JSON(PrerequisiteValue, prerequisiteValue_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyPlaybookResponseBodyPrerequisites& obj) { 
      DARABONBA_PTR_FROM_JSON(PrerequisiteType, prerequisiteType_);
      DARABONBA_PTR_FROM_JSON(PrerequisiteValue, prerequisiteValue_);
    };
    VerifyPlaybookResponseBodyPrerequisites() = default ;
    VerifyPlaybookResponseBodyPrerequisites(const VerifyPlaybookResponseBodyPrerequisites &) = default ;
    VerifyPlaybookResponseBodyPrerequisites(VerifyPlaybookResponseBodyPrerequisites &&) = default ;
    VerifyPlaybookResponseBodyPrerequisites(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyPlaybookResponseBodyPrerequisites() = default ;
    VerifyPlaybookResponseBodyPrerequisites& operator=(const VerifyPlaybookResponseBodyPrerequisites &) = default ;
    VerifyPlaybookResponseBodyPrerequisites& operator=(VerifyPlaybookResponseBodyPrerequisites &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prerequisiteType_ == nullptr
        && return this->prerequisiteValue_ == nullptr; };
    // prerequisiteType Field Functions 
    bool hasPrerequisiteType() const { return this->prerequisiteType_ != nullptr;};
    void deletePrerequisiteType() { this->prerequisiteType_ = nullptr;};
    inline string prerequisiteType() const { DARABONBA_PTR_GET_DEFAULT(prerequisiteType_, "") };
    inline VerifyPlaybookResponseBodyPrerequisites& setPrerequisiteType(string prerequisiteType) { DARABONBA_PTR_SET_VALUE(prerequisiteType_, prerequisiteType) };


    // prerequisiteValue Field Functions 
    bool hasPrerequisiteValue() const { return this->prerequisiteValue_ != nullptr;};
    void deletePrerequisiteValue() { this->prerequisiteValue_ = nullptr;};
    inline string prerequisiteValue() const { DARABONBA_PTR_GET_DEFAULT(prerequisiteValue_, "") };
    inline VerifyPlaybookResponseBodyPrerequisites& setPrerequisiteValue(string prerequisiteValue) { DARABONBA_PTR_SET_VALUE(prerequisiteValue_, prerequisiteValue) };


  protected:
    std::shared_ptr<string> prerequisiteType_ = nullptr;
    std::shared_ptr<string> prerequisiteValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
