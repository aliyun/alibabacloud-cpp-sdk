// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATUREENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATUREENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateFeatureEntityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureEntityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureEntityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureEntityId, featureEntityId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFeatureEntityResponseBody() = default ;
    CreateFeatureEntityResponseBody(const CreateFeatureEntityResponseBody &) = default ;
    CreateFeatureEntityResponseBody(CreateFeatureEntityResponseBody &&) = default ;
    CreateFeatureEntityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureEntityResponseBody() = default ;
    CreateFeatureEntityResponseBody& operator=(const CreateFeatureEntityResponseBody &) = default ;
    CreateFeatureEntityResponseBody& operator=(CreateFeatureEntityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureEntityId_ == nullptr
        && return this->requestId_ == nullptr; };
    // featureEntityId Field Functions 
    bool hasFeatureEntityId() const { return this->featureEntityId_ != nullptr;};
    void deleteFeatureEntityId() { this->featureEntityId_ = nullptr;};
    inline string featureEntityId() const { DARABONBA_PTR_GET_DEFAULT(featureEntityId_, "") };
    inline CreateFeatureEntityResponseBody& setFeatureEntityId(string featureEntityId) { DARABONBA_PTR_SET_VALUE(featureEntityId_, featureEntityId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFeatureEntityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> featureEntityId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
