// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHVERSIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHVERSIONINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class PublishVersionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishVersionInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, PublishVersionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    PublishVersionInput() = default ;
    PublishVersionInput(const PublishVersionInput &) = default ;
    PublishVersionInput(PublishVersionInput &&) = default ;
    PublishVersionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishVersionInput() = default ;
    PublishVersionInput& operator=(const PublishVersionInput &) = default ;
    PublishVersionInput& operator=(PublishVersionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PublishVersionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
