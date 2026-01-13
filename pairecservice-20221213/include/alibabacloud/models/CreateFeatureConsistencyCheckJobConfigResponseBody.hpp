// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATURECONSISTENCYCHECKJOBCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATURECONSISTENCYCHECKJOBCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateFeatureConsistencyCheckJobConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureConsistencyCheckJobConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureConsistencyCheckJobConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFeatureConsistencyCheckJobConfigResponseBody() = default ;
    CreateFeatureConsistencyCheckJobConfigResponseBody(const CreateFeatureConsistencyCheckJobConfigResponseBody &) = default ;
    CreateFeatureConsistencyCheckJobConfigResponseBody(CreateFeatureConsistencyCheckJobConfigResponseBody &&) = default ;
    CreateFeatureConsistencyCheckJobConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureConsistencyCheckJobConfigResponseBody() = default ;
    CreateFeatureConsistencyCheckJobConfigResponseBody& operator=(const CreateFeatureConsistencyCheckJobConfigResponseBody &) = default ;
    CreateFeatureConsistencyCheckJobConfigResponseBody& operator=(CreateFeatureConsistencyCheckJobConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureConsistencyCheckJobConfigId_ == nullptr
        && this->requestId_ == nullptr; };
    // featureConsistencyCheckJobConfigId Field Functions 
    bool hasFeatureConsistencyCheckJobConfigId() const { return this->featureConsistencyCheckJobConfigId_ != nullptr;};
    void deleteFeatureConsistencyCheckJobConfigId() { this->featureConsistencyCheckJobConfigId_ = nullptr;};
    inline string getFeatureConsistencyCheckJobConfigId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobConfigId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigResponseBody& setFeatureConsistencyCheckJobConfigId(string featureConsistencyCheckJobConfigId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobConfigId_, featureConsistencyCheckJobConfigId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFeatureConsistencyCheckJobConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> featureConsistencyCheckJobConfigId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
