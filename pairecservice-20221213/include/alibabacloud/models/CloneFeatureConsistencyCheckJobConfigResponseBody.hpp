// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEFEATURECONSISTENCYCHECKJOBCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONEFEATURECONSISTENCYCHECKJOBCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CloneFeatureConsistencyCheckJobConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneFeatureConsistencyCheckJobConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckId, featureConsistencyCheckId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneFeatureConsistencyCheckJobConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckId, featureConsistencyCheckId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloneFeatureConsistencyCheckJobConfigResponseBody() = default ;
    CloneFeatureConsistencyCheckJobConfigResponseBody(const CloneFeatureConsistencyCheckJobConfigResponseBody &) = default ;
    CloneFeatureConsistencyCheckJobConfigResponseBody(CloneFeatureConsistencyCheckJobConfigResponseBody &&) = default ;
    CloneFeatureConsistencyCheckJobConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneFeatureConsistencyCheckJobConfigResponseBody() = default ;
    CloneFeatureConsistencyCheckJobConfigResponseBody& operator=(const CloneFeatureConsistencyCheckJobConfigResponseBody &) = default ;
    CloneFeatureConsistencyCheckJobConfigResponseBody& operator=(CloneFeatureConsistencyCheckJobConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureConsistencyCheckId_ != nullptr
        && this->requestId_ != nullptr; };
    // featureConsistencyCheckId Field Functions 
    bool hasFeatureConsistencyCheckId() const { return this->featureConsistencyCheckId_ != nullptr;};
    void deleteFeatureConsistencyCheckId() { this->featureConsistencyCheckId_ = nullptr;};
    inline string featureConsistencyCheckId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckId_, "") };
    inline CloneFeatureConsistencyCheckJobConfigResponseBody& setFeatureConsistencyCheckId(string featureConsistencyCheckId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckId_, featureConsistencyCheckId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneFeatureConsistencyCheckJobConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> featureConsistencyCheckId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
