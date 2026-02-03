// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORMINPUT_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORMINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class TransformInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransformInput& obj) { 
      DARABONBA_ANY_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TransformInput& obj) { 
      DARABONBA_ANY_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TransformInput() = default ;
    TransformInput(const TransformInput &) = default ;
    TransformInput(TransformInput &&) = default ;
    TransformInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransformInput() = default ;
    TransformInput& operator=(const TransformInput &) = default ;
    TransformInput& operator=(TransformInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->input_ == nullptr
        && this->type_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline     const Darabonba::Json & getInput() const { DARABONBA_GET(input_) };
    Darabonba::Json & getInput() { DARABONBA_GET(input_) };
    inline TransformInput& setInput(const Darabonba::Json & input) { DARABONBA_SET_VALUE(input_, input) };
    inline TransformInput& setInput(Darabonba::Json && input) { DARABONBA_SET_RVALUE(input_, input) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TransformInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json input_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
