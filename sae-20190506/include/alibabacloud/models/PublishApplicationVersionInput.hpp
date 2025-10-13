// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHAPPLICATIONVERSIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHAPPLICATIONVERSIONINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PublishApplicationVersionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishApplicationVersionInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, PublishApplicationVersionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    PublishApplicationVersionInput() = default ;
    PublishApplicationVersionInput(const PublishApplicationVersionInput &) = default ;
    PublishApplicationVersionInput(PublishApplicationVersionInput &&) = default ;
    PublishApplicationVersionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishApplicationVersionInput() = default ;
    PublishApplicationVersionInput& operator=(const PublishApplicationVersionInput &) = default ;
    PublishApplicationVersionInput& operator=(PublishApplicationVersionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PublishApplicationVersionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
