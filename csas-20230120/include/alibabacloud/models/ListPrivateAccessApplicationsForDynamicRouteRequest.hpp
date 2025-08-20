// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONSFORDYNAMICROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONSFORDYNAMICROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessApplicationsForDynamicRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessApplicationsForDynamicRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRouteIds, dynamicRouteIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessApplicationsForDynamicRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRouteIds, dynamicRouteIds_);
    };
    ListPrivateAccessApplicationsForDynamicRouteRequest() = default ;
    ListPrivateAccessApplicationsForDynamicRouteRequest(const ListPrivateAccessApplicationsForDynamicRouteRequest &) = default ;
    ListPrivateAccessApplicationsForDynamicRouteRequest(ListPrivateAccessApplicationsForDynamicRouteRequest &&) = default ;
    ListPrivateAccessApplicationsForDynamicRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessApplicationsForDynamicRouteRequest() = default ;
    ListPrivateAccessApplicationsForDynamicRouteRequest& operator=(const ListPrivateAccessApplicationsForDynamicRouteRequest &) = default ;
    ListPrivateAccessApplicationsForDynamicRouteRequest& operator=(ListPrivateAccessApplicationsForDynamicRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dynamicRouteIds_ != nullptr; };
    // dynamicRouteIds Field Functions 
    bool hasDynamicRouteIds() const { return this->dynamicRouteIds_ != nullptr;};
    void deleteDynamicRouteIds() { this->dynamicRouteIds_ = nullptr;};
    inline const vector<string> & dynamicRouteIds() const { DARABONBA_PTR_GET_CONST(dynamicRouteIds_, vector<string>) };
    inline vector<string> dynamicRouteIds() { DARABONBA_PTR_GET(dynamicRouteIds_, vector<string>) };
    inline ListPrivateAccessApplicationsForDynamicRouteRequest& setDynamicRouteIds(const vector<string> & dynamicRouteIds) { DARABONBA_PTR_SET_VALUE(dynamicRouteIds_, dynamicRouteIds) };
    inline ListPrivateAccessApplicationsForDynamicRouteRequest& setDynamicRouteIds(vector<string> && dynamicRouteIds) { DARABONBA_PTR_SET_RVALUE(dynamicRouteIds_, dynamicRouteIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> dynamicRouteIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
