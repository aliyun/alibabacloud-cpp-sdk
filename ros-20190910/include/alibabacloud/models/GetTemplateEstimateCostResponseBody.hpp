// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEESTIMATECOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEESTIMATECOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateEstimateCostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateEstimateCostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateEstimateCostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Resources, resources_);
    };
    GetTemplateEstimateCostResponseBody() = default ;
    GetTemplateEstimateCostResponseBody(const GetTemplateEstimateCostResponseBody &) = default ;
    GetTemplateEstimateCostResponseBody(GetTemplateEstimateCostResponseBody &&) = default ;
    GetTemplateEstimateCostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateEstimateCostResponseBody() = default ;
    GetTemplateEstimateCostResponseBody& operator=(const GetTemplateEstimateCostResponseBody &) = default ;
    GetTemplateEstimateCostResponseBody& operator=(GetTemplateEstimateCostResponseBody &&) = default ;
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
    inline GetTemplateEstimateCostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline     const Darabonba::Json & resources() const { DARABONBA_GET(resources_) };
    Darabonba::Json & resources() { DARABONBA_GET(resources_) };
    inline GetTemplateEstimateCostResponseBody& setResources(const Darabonba::Json & resources) { DARABONBA_SET_VALUE(resources_, resources) };
    inline GetTemplateEstimateCostResponseBody& setResources(Darabonba::Json & resources) { DARABONBA_SET_RVALUE(resources_, resources) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource details.
    Darabonba::Json resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
