// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MANUALMODERATIONRESULTRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_MANUALMODERATIONRESULTRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ManualModerationResultResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ManualModerationResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Label, label_);
    };
    friend void from_json(const Darabonba::Json& j, ManualModerationResultResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
    };
    ManualModerationResultResponseBodyDataResult() = default ;
    ManualModerationResultResponseBodyDataResult(const ManualModerationResultResponseBodyDataResult &) = default ;
    ManualModerationResultResponseBodyDataResult(ManualModerationResultResponseBodyDataResult &&) = default ;
    ManualModerationResultResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ManualModerationResultResponseBodyDataResult() = default ;
    ManualModerationResultResponseBodyDataResult& operator=(const ManualModerationResultResponseBodyDataResult &) = default ;
    ManualModerationResultResponseBodyDataResult& operator=(ManualModerationResultResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->label_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ManualModerationResultResponseBodyDataResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline ManualModerationResultResponseBodyDataResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    // Label description
    std::shared_ptr<string> description_ = nullptr;
    // Risk label
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
