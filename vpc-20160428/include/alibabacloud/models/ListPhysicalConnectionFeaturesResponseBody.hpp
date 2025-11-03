// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPHYSICALCONNECTIONFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPHYSICALCONNECTIONFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPhysicalConnectionFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPhysicalConnectionFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PhysicalConnectionFeatures, physicalConnectionFeatures_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPhysicalConnectionFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionFeatures, physicalConnectionFeatures_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPhysicalConnectionFeaturesResponseBody() = default ;
    ListPhysicalConnectionFeaturesResponseBody(const ListPhysicalConnectionFeaturesResponseBody &) = default ;
    ListPhysicalConnectionFeaturesResponseBody(ListPhysicalConnectionFeaturesResponseBody &&) = default ;
    ListPhysicalConnectionFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPhysicalConnectionFeaturesResponseBody() = default ;
    ListPhysicalConnectionFeaturesResponseBody& operator=(const ListPhysicalConnectionFeaturesResponseBody &) = default ;
    ListPhysicalConnectionFeaturesResponseBody& operator=(ListPhysicalConnectionFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->physicalConnectionFeatures_ == nullptr
        && return this->requestId_ == nullptr; };
    // physicalConnectionFeatures Field Functions 
    bool hasPhysicalConnectionFeatures() const { return this->physicalConnectionFeatures_ != nullptr;};
    void deletePhysicalConnectionFeatures() { this->physicalConnectionFeatures_ = nullptr;};
    inline const vector<ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures> & physicalConnectionFeatures() const { DARABONBA_PTR_GET_CONST(physicalConnectionFeatures_, vector<ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures>) };
    inline vector<ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures> physicalConnectionFeatures() { DARABONBA_PTR_GET(physicalConnectionFeatures_, vector<ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures>) };
    inline ListPhysicalConnectionFeaturesResponseBody& setPhysicalConnectionFeatures(const vector<ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures> & physicalConnectionFeatures) { DARABONBA_PTR_SET_VALUE(physicalConnectionFeatures_, physicalConnectionFeatures) };
    inline ListPhysicalConnectionFeaturesResponseBody& setPhysicalConnectionFeatures(vector<ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures> && physicalConnectionFeatures) { DARABONBA_PTR_SET_RVALUE(physicalConnectionFeatures_, physicalConnectionFeatures) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPhysicalConnectionFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of Express Connect circuit features.
    std::shared_ptr<vector<ListPhysicalConnectionFeaturesResponseBodyPhysicalConnectionFeatures>> physicalConnectionFeatures_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
