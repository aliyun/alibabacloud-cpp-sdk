// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSFORDYNAMICROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSFORDYNAMICROUTEREQUEST_HPP_
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
  class ListPrivateAccessTagsForDynamicRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessTagsForDynamicRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRouteIds, dynamicRouteIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessTagsForDynamicRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRouteIds, dynamicRouteIds_);
    };
    ListPrivateAccessTagsForDynamicRouteRequest() = default ;
    ListPrivateAccessTagsForDynamicRouteRequest(const ListPrivateAccessTagsForDynamicRouteRequest &) = default ;
    ListPrivateAccessTagsForDynamicRouteRequest(ListPrivateAccessTagsForDynamicRouteRequest &&) = default ;
    ListPrivateAccessTagsForDynamicRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessTagsForDynamicRouteRequest() = default ;
    ListPrivateAccessTagsForDynamicRouteRequest& operator=(const ListPrivateAccessTagsForDynamicRouteRequest &) = default ;
    ListPrivateAccessTagsForDynamicRouteRequest& operator=(ListPrivateAccessTagsForDynamicRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicRouteIds_ == nullptr; };
    // dynamicRouteIds Field Functions 
    bool hasDynamicRouteIds() const { return this->dynamicRouteIds_ != nullptr;};
    void deleteDynamicRouteIds() { this->dynamicRouteIds_ = nullptr;};
    inline const vector<string> & dynamicRouteIds() const { DARABONBA_PTR_GET_CONST(dynamicRouteIds_, vector<string>) };
    inline vector<string> dynamicRouteIds() { DARABONBA_PTR_GET(dynamicRouteIds_, vector<string>) };
    inline ListPrivateAccessTagsForDynamicRouteRequest& setDynamicRouteIds(const vector<string> & dynamicRouteIds) { DARABONBA_PTR_SET_VALUE(dynamicRouteIds_, dynamicRouteIds) };
    inline ListPrivateAccessTagsForDynamicRouteRequest& setDynamicRouteIds(vector<string> && dynamicRouteIds) { DARABONBA_PTR_SET_RVALUE(dynamicRouteIds_, dynamicRouteIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> dynamicRouteIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
