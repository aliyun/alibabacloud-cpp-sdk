// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTTRANSFORMS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTTRANSFORMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestTransforms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestTransforms& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestTransforms& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
    };
    CreateEventStreamingRequestTransforms() = default ;
    CreateEventStreamingRequestTransforms(const CreateEventStreamingRequestTransforms &) = default ;
    CreateEventStreamingRequestTransforms(CreateEventStreamingRequestTransforms &&) = default ;
    CreateEventStreamingRequestTransforms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestTransforms() = default ;
    CreateEventStreamingRequestTransforms& operator=(const CreateEventStreamingRequestTransforms &) = default ;
    CreateEventStreamingRequestTransforms& operator=(CreateEventStreamingRequestTransforms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreateEventStreamingRequestTransforms& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


  protected:
    std::shared_ptr<string> arn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
