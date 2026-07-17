// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ModifyInstanceFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedFeatures, failedFeatures_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedFeatures, failedFeatures_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyInstanceFeaturesResponseBody() = default ;
    ModifyInstanceFeaturesResponseBody(const ModifyInstanceFeaturesResponseBody &) = default ;
    ModifyInstanceFeaturesResponseBody(ModifyInstanceFeaturesResponseBody &&) = default ;
    ModifyInstanceFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceFeaturesResponseBody() = default ;
    ModifyInstanceFeaturesResponseBody& operator=(const ModifyInstanceFeaturesResponseBody &) = default ;
    ModifyInstanceFeaturesResponseBody& operator=(ModifyInstanceFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedFeatures_ == nullptr
        && this->requestId_ == nullptr; };
    // failedFeatures Field Functions 
    bool hasFailedFeatures() const { return this->failedFeatures_ != nullptr;};
    void deleteFailedFeatures() { this->failedFeatures_ = nullptr;};
    inline string getFailedFeatures() const { DARABONBA_PTR_GET_DEFAULT(failedFeatures_, "") };
    inline ModifyInstanceFeaturesResponseBody& setFailedFeatures(string failedFeatures) { DARABONBA_PTR_SET_VALUE(failedFeatures_, failedFeatures) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInstanceFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The site feature configurations that failed to be modified.
    shared_ptr<string> failedFeatures_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
