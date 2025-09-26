// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHRUNTIMEVERSIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHRUNTIMEVERSIONINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class PublishRuntimeVersionInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishRuntimeVersionInput& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, PublishRuntimeVersionInput& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    PublishRuntimeVersionInput() = default ;
    PublishRuntimeVersionInput(const PublishRuntimeVersionInput &) = default ;
    PublishRuntimeVersionInput(PublishRuntimeVersionInput &&) = default ;
    PublishRuntimeVersionInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishRuntimeVersionInput() = default ;
    PublishRuntimeVersionInput& operator=(const PublishRuntimeVersionInput &) = default ;
    PublishRuntimeVersionInput& operator=(PublishRuntimeVersionInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PublishRuntimeVersionInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // 此版本的描述
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
