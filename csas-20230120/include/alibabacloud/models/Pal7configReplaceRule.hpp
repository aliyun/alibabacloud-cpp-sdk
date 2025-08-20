// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIGREPLACERULE_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIGREPLACERULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7ConfigReplaceRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7ConfigReplaceRule& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7ConfigReplaceRule& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    PAL7ConfigReplaceRule() = default ;
    PAL7ConfigReplaceRule(const PAL7ConfigReplaceRule &) = default ;
    PAL7ConfigReplaceRule(PAL7ConfigReplaceRule &&) = default ;
    PAL7ConfigReplaceRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7ConfigReplaceRule() = default ;
    PAL7ConfigReplaceRule& operator=(const PAL7ConfigReplaceRule &) = default ;
    PAL7ConfigReplaceRule& operator=(PAL7ConfigReplaceRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->to_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline PAL7ConfigReplaceRule& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline PAL7ConfigReplaceRule& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    std::shared_ptr<string> from_ = nullptr;
    std::shared_ptr<string> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
