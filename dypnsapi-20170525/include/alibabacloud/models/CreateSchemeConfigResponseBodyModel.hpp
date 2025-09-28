// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEMECONFIGRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEMECONFIGRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class CreateSchemeConfigResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSchemeConfigResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(SchemeCode, schemeCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSchemeConfigResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemeCode, schemeCode_);
    };
    CreateSchemeConfigResponseBodyModel() = default ;
    CreateSchemeConfigResponseBodyModel(const CreateSchemeConfigResponseBodyModel &) = default ;
    CreateSchemeConfigResponseBodyModel(CreateSchemeConfigResponseBodyModel &&) = default ;
    CreateSchemeConfigResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSchemeConfigResponseBodyModel() = default ;
    CreateSchemeConfigResponseBodyModel& operator=(const CreateSchemeConfigResponseBodyModel &) = default ;
    CreateSchemeConfigResponseBodyModel& operator=(CreateSchemeConfigResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->schemeCode_ != nullptr; };
    // schemeCode Field Functions 
    bool hasSchemeCode() const { return this->schemeCode_ != nullptr;};
    void deleteSchemeCode() { this->schemeCode_ = nullptr;};
    inline string schemeCode() const { DARABONBA_PTR_GET_DEFAULT(schemeCode_, "") };
    inline CreateSchemeConfigResponseBodyModel& setSchemeCode(string schemeCode) { DARABONBA_PTR_SET_VALUE(schemeCode_, schemeCode) };


  protected:
    // The service code.
    std::shared_ptr<string> schemeCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
