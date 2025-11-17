// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATUREVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATUREVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateFeatureViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFeatureViewResponseBody() = default ;
    CreateFeatureViewResponseBody(const CreateFeatureViewResponseBody &) = default ;
    CreateFeatureViewResponseBody(CreateFeatureViewResponseBody &&) = default ;
    CreateFeatureViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureViewResponseBody() = default ;
    CreateFeatureViewResponseBody& operator=(const CreateFeatureViewResponseBody &) = default ;
    CreateFeatureViewResponseBody& operator=(CreateFeatureViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureViewId_ == nullptr
        && return this->requestId_ == nullptr; };
    // featureViewId Field Functions 
    bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
    void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
    inline string featureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
    inline CreateFeatureViewResponseBody& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFeatureViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> featureViewId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
