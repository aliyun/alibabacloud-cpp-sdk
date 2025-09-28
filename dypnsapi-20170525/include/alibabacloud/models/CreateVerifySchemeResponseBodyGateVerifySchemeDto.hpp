// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVERIFYSCHEMERESPONSEBODYGATEVERIFYSCHEMEDTO_HPP_
#define ALIBABACLOUD_MODELS_CREATEVERIFYSCHEMERESPONSEBODYGATEVERIFYSCHEMEDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class CreateVerifySchemeResponseBodyGateVerifySchemeDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVerifySchemeResponseBodyGateVerifySchemeDTO& obj) { 
      DARABONBA_PTR_TO_JSON(SchemeCode, schemeCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVerifySchemeResponseBodyGateVerifySchemeDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemeCode, schemeCode_);
    };
    CreateVerifySchemeResponseBodyGateVerifySchemeDTO() = default ;
    CreateVerifySchemeResponseBodyGateVerifySchemeDTO(const CreateVerifySchemeResponseBodyGateVerifySchemeDTO &) = default ;
    CreateVerifySchemeResponseBodyGateVerifySchemeDTO(CreateVerifySchemeResponseBodyGateVerifySchemeDTO &&) = default ;
    CreateVerifySchemeResponseBodyGateVerifySchemeDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVerifySchemeResponseBodyGateVerifySchemeDTO() = default ;
    CreateVerifySchemeResponseBodyGateVerifySchemeDTO& operator=(const CreateVerifySchemeResponseBodyGateVerifySchemeDTO &) = default ;
    CreateVerifySchemeResponseBodyGateVerifySchemeDTO& operator=(CreateVerifySchemeResponseBodyGateVerifySchemeDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->schemeCode_ != nullptr; };
    // schemeCode Field Functions 
    bool hasSchemeCode() const { return this->schemeCode_ != nullptr;};
    void deleteSchemeCode() { this->schemeCode_ = nullptr;};
    inline string schemeCode() const { DARABONBA_PTR_GET_DEFAULT(schemeCode_, "") };
    inline CreateVerifySchemeResponseBodyGateVerifySchemeDTO& setSchemeCode(string schemeCode) { DARABONBA_PTR_SET_VALUE(schemeCode_, schemeCode) };


  protected:
    // The service code.
    std::shared_ptr<string> schemeCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
