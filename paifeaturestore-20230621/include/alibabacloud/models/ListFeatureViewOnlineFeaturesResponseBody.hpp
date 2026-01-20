// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWONLINEFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWONLINEFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewOnlineFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewOnlineFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineFeatures, onlineFeatures_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewOnlineFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineFeatures, onlineFeatures_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFeatureViewOnlineFeaturesResponseBody() = default ;
    ListFeatureViewOnlineFeaturesResponseBody(const ListFeatureViewOnlineFeaturesResponseBody &) = default ;
    ListFeatureViewOnlineFeaturesResponseBody(ListFeatureViewOnlineFeaturesResponseBody &&) = default ;
    ListFeatureViewOnlineFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewOnlineFeaturesResponseBody() = default ;
    ListFeatureViewOnlineFeaturesResponseBody& operator=(const ListFeatureViewOnlineFeaturesResponseBody &) = default ;
    ListFeatureViewOnlineFeaturesResponseBody& operator=(ListFeatureViewOnlineFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->onlineFeatures_ == nullptr
        && this->requestId_ == nullptr; };
    // onlineFeatures Field Functions 
    bool hasOnlineFeatures() const { return this->onlineFeatures_ != nullptr;};
    void deleteOnlineFeatures() { this->onlineFeatures_ = nullptr;};
    inline const vector<string> & getOnlineFeatures() const { DARABONBA_PTR_GET_CONST(onlineFeatures_, vector<string>) };
    inline vector<string> getOnlineFeatures() { DARABONBA_PTR_GET(onlineFeatures_, vector<string>) };
    inline ListFeatureViewOnlineFeaturesResponseBody& setOnlineFeatures(const vector<string> & onlineFeatures) { DARABONBA_PTR_SET_VALUE(onlineFeatures_, onlineFeatures) };
    inline ListFeatureViewOnlineFeaturesResponseBody& setOnlineFeatures(vector<string> && onlineFeatures) { DARABONBA_PTR_SET_RVALUE(onlineFeatures_, onlineFeatures) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureViewOnlineFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> onlineFeatures_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
