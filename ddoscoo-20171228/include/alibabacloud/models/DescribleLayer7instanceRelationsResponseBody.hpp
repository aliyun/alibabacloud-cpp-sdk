// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBLELAYER7INSTANCERELATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribleLayer7InstanceRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribleLayer7InstanceRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layer7InstanceRelations, layer7InstanceRelations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribleLayer7InstanceRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layer7InstanceRelations, layer7InstanceRelations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribleLayer7InstanceRelationsResponseBody() = default ;
    DescribleLayer7InstanceRelationsResponseBody(const DescribleLayer7InstanceRelationsResponseBody &) = default ;
    DescribleLayer7InstanceRelationsResponseBody(DescribleLayer7InstanceRelationsResponseBody &&) = default ;
    DescribleLayer7InstanceRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribleLayer7InstanceRelationsResponseBody() = default ;
    DescribleLayer7InstanceRelationsResponseBody& operator=(const DescribleLayer7InstanceRelationsResponseBody &) = default ;
    DescribleLayer7InstanceRelationsResponseBody& operator=(DescribleLayer7InstanceRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layer7InstanceRelations_ != nullptr
        && this->requestId_ != nullptr; };
    // layer7InstanceRelations Field Functions 
    bool hasLayer7InstanceRelations() const { return this->layer7InstanceRelations_ != nullptr;};
    void deleteLayer7InstanceRelations() { this->layer7InstanceRelations_ = nullptr;};
    inline const vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations> & layer7InstanceRelations() const { DARABONBA_PTR_GET_CONST(layer7InstanceRelations_, vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations>) };
    inline vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations> layer7InstanceRelations() { DARABONBA_PTR_GET(layer7InstanceRelations_, vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations>) };
    inline DescribleLayer7InstanceRelationsResponseBody& setLayer7InstanceRelations(const vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations> & layer7InstanceRelations) { DARABONBA_PTR_SET_VALUE(layer7InstanceRelations_, layer7InstanceRelations) };
    inline DescribleLayer7InstanceRelationsResponseBody& setLayer7InstanceRelations(vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations> && layer7InstanceRelations) { DARABONBA_PTR_SET_RVALUE(layer7InstanceRelations_, layer7InstanceRelations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribleLayer7InstanceRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribleLayer7InstanceRelationsResponseBodyLayer7InstanceRelations>> layer7InstanceRelations_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
