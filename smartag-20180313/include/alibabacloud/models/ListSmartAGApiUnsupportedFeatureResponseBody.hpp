// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTAGAPIUNSUPPORTEDFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTAGAPIUNSUPPORTEDFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListSmartAGApiUnsupportedFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartAGApiUnsupportedFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartAGApiUnsupportedFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSmartAGApiUnsupportedFeatureResponseBody() = default ;
    ListSmartAGApiUnsupportedFeatureResponseBody(const ListSmartAGApiUnsupportedFeatureResponseBody &) = default ;
    ListSmartAGApiUnsupportedFeatureResponseBody(ListSmartAGApiUnsupportedFeatureResponseBody &&) = default ;
    ListSmartAGApiUnsupportedFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartAGApiUnsupportedFeatureResponseBody() = default ;
    ListSmartAGApiUnsupportedFeatureResponseBody& operator=(const ListSmartAGApiUnsupportedFeatureResponseBody &) = default ;
    ListSmartAGApiUnsupportedFeatureResponseBody& operator=(ListSmartAGApiUnsupportedFeatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Features : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Features& obj) { 
        DARABONBA_PTR_TO_JSON(Feature, feature_);
      };
      friend void from_json(const Darabonba::Json& j, Features& obj) { 
        DARABONBA_PTR_FROM_JSON(Feature, feature_);
      };
      Features() = default ;
      Features(const Features &) = default ;
      Features(Features &&) = default ;
      Features(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Features() = default ;
      Features& operator=(const Features &) = default ;
      Features& operator=(Features &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->feature_ == nullptr; };
      // feature Field Functions 
      bool hasFeature() const { return this->feature_ != nullptr;};
      void deleteFeature() { this->feature_ = nullptr;};
      inline string getFeature() const { DARABONBA_PTR_GET_DEFAULT(feature_, "") };
      inline Features& setFeature(string feature) { DARABONBA_PTR_SET_VALUE(feature_, feature) };


    protected:
      // The unsupported feature.
      // 
      // For more information about the description of each feature, see the related API reference.
      shared_ptr<string> feature_ {};
    };

    virtual bool empty() const override { return this->features_ == nullptr
        && this->requestId_ == nullptr; };
    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<ListSmartAGApiUnsupportedFeatureResponseBody::Features> & getFeatures() const { DARABONBA_PTR_GET_CONST(features_, vector<ListSmartAGApiUnsupportedFeatureResponseBody::Features>) };
    inline vector<ListSmartAGApiUnsupportedFeatureResponseBody::Features> getFeatures() { DARABONBA_PTR_GET(features_, vector<ListSmartAGApiUnsupportedFeatureResponseBody::Features>) };
    inline ListSmartAGApiUnsupportedFeatureResponseBody& setFeatures(const vector<ListSmartAGApiUnsupportedFeatureResponseBody::Features> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ListSmartAGApiUnsupportedFeatureResponseBody& setFeatures(vector<ListSmartAGApiUnsupportedFeatureResponseBody::Features> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmartAGApiUnsupportedFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of unsupported features.
    shared_ptr<vector<ListSmartAGApiUnsupportedFeatureResponseBody::Features>> features_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
