// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATIONOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_VALIDATIONOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ValidationOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidationOptions& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ValidationOptions& obj) { 
      (void)j; (void)obj; 
    };
    ValidationOptions() = default ;
    ValidationOptions(const ValidationOptions &) = default ;
    ValidationOptions(ValidationOptions &&) = default ;
    ValidationOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidationOptions() = default ;
    ValidationOptions& operator=(const ValidationOptions &) = default ;
    ValidationOptions& operator=(ValidationOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
