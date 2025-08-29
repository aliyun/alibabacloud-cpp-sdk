// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckInstanceResourcesResponseBodyResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CheckInstanceResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    CheckInstanceResourcesResponseBody() = default ;
    CheckInstanceResourcesResponseBody(const CheckInstanceResourcesResponseBody &) = default ;
    CheckInstanceResourcesResponseBody(CheckInstanceResourcesResponseBody &&) = default ;
    CheckInstanceResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceResourcesResponseBody() = default ;
    CheckInstanceResourcesResponseBody& operator=(const CheckInstanceResourcesResponseBody &) = default ;
    CheckInstanceResourcesResponseBody& operator=(CheckInstanceResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resources_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckInstanceResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<CheckInstanceResourcesResponseBodyResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<CheckInstanceResourcesResponseBodyResources>) };
    inline vector<CheckInstanceResourcesResponseBodyResources> resources() { DARABONBA_PTR_GET(resources_, vector<CheckInstanceResourcesResponseBodyResources>) };
    inline CheckInstanceResourcesResponseBody& setResources(const vector<CheckInstanceResourcesResponseBodyResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CheckInstanceResourcesResponseBody& setResources(vector<CheckInstanceResourcesResponseBodyResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<CheckInstanceResourcesResponseBodyResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
