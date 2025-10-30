// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDYNAMICROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDYNAMICROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetDynamicRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDynamicRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRouteId, dynamicRouteId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDynamicRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRouteId, dynamicRouteId_);
    };
    GetDynamicRouteRequest() = default ;
    GetDynamicRouteRequest(const GetDynamicRouteRequest &) = default ;
    GetDynamicRouteRequest(GetDynamicRouteRequest &&) = default ;
    GetDynamicRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDynamicRouteRequest() = default ;
    GetDynamicRouteRequest& operator=(const GetDynamicRouteRequest &) = default ;
    GetDynamicRouteRequest& operator=(GetDynamicRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicRouteId_ == nullptr; };
    // dynamicRouteId Field Functions 
    bool hasDynamicRouteId() const { return this->dynamicRouteId_ != nullptr;};
    void deleteDynamicRouteId() { this->dynamicRouteId_ = nullptr;};
    inline string dynamicRouteId() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteId_, "") };
    inline GetDynamicRouteRequest& setDynamicRouteId(string dynamicRouteId) { DARABONBA_PTR_SET_VALUE(dynamicRouteId_, dynamicRouteId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dynamicRouteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
