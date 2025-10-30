// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXBFIXEDLINEREQUESTEXTRA_HPP_
#define ALIBABACLOUD_MODELS_BINDAXBFIXEDLINEREQUESTEXTRA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxbFixedLineRequestExtra : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxbFixedLineRequestExtra& obj) { 
      DARABONBA_PTR_TO_JSON(Callrecording, callrecording_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxbFixedLineRequestExtra& obj) { 
      DARABONBA_PTR_FROM_JSON(Callrecording, callrecording_);
    };
    BindAxbFixedLineRequestExtra() = default ;
    BindAxbFixedLineRequestExtra(const BindAxbFixedLineRequestExtra &) = default ;
    BindAxbFixedLineRequestExtra(BindAxbFixedLineRequestExtra &&) = default ;
    BindAxbFixedLineRequestExtra(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxbFixedLineRequestExtra() = default ;
    BindAxbFixedLineRequestExtra& operator=(const BindAxbFixedLineRequestExtra &) = default ;
    BindAxbFixedLineRequestExtra& operator=(BindAxbFixedLineRequestExtra &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callrecording_ == nullptr; };
    // callrecording Field Functions 
    bool hasCallrecording() const { return this->callrecording_ != nullptr;};
    void deleteCallrecording() { this->callrecording_ = nullptr;};
    inline string callrecording() const { DARABONBA_PTR_GET_DEFAULT(callrecording_, "") };
    inline BindAxbFixedLineRequestExtra& setCallrecording(string callrecording) { DARABONBA_PTR_SET_VALUE(callrecording_, callrecording) };


  protected:
    // 录音控制，默认是0（不开通录音功能）。 0：不录音 1：录音
    std::shared_ptr<string> callrecording_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
