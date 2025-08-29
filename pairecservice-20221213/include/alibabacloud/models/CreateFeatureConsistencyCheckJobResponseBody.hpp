// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATURECONSISTENCYCHECKJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATURECONSISTENCYCHECKJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateFeatureConsistencyCheckJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureConsistencyCheckJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobId, featureConsistencyCheckJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureConsistencyCheckJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobId, featureConsistencyCheckJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFeatureConsistencyCheckJobResponseBody() = default ;
    CreateFeatureConsistencyCheckJobResponseBody(const CreateFeatureConsistencyCheckJobResponseBody &) = default ;
    CreateFeatureConsistencyCheckJobResponseBody(CreateFeatureConsistencyCheckJobResponseBody &&) = default ;
    CreateFeatureConsistencyCheckJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureConsistencyCheckJobResponseBody() = default ;
    CreateFeatureConsistencyCheckJobResponseBody& operator=(const CreateFeatureConsistencyCheckJobResponseBody &) = default ;
    CreateFeatureConsistencyCheckJobResponseBody& operator=(CreateFeatureConsistencyCheckJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureConsistencyCheckJobId_ != nullptr
        && this->requestId_ != nullptr; };
    // featureConsistencyCheckJobId Field Functions 
    bool hasFeatureConsistencyCheckJobId() const { return this->featureConsistencyCheckJobId_ != nullptr;};
    void deleteFeatureConsistencyCheckJobId() { this->featureConsistencyCheckJobId_ = nullptr;};
    inline string featureConsistencyCheckJobId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobId_, "") };
    inline CreateFeatureConsistencyCheckJobResponseBody& setFeatureConsistencyCheckJobId(string featureConsistencyCheckJobId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobId_, featureConsistencyCheckJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFeatureConsistencyCheckJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> featureConsistencyCheckJobId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
