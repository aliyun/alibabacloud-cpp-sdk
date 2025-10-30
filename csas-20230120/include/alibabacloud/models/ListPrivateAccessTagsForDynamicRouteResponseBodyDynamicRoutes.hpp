// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSFORDYNAMICROUTERESPONSEBODYDYNAMICROUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSFORDYNAMICROUTERESPONSEBODYDYNAMICROUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRouteId, dynamicRouteId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRouteId, dynamicRouteId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes() = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes(const ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes &) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes(ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes &&) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes() = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes& operator=(const ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes &) = default ;
    ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes& operator=(ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicRouteId_ == nullptr
        && return this->tags_ == nullptr; };
    // dynamicRouteId Field Functions 
    bool hasDynamicRouteId() const { return this->dynamicRouteId_ != nullptr;};
    void deleteDynamicRouteId() { this->dynamicRouteId_ = nullptr;};
    inline string dynamicRouteId() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteId_, "") };
    inline ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes& setDynamicRouteId(string dynamicRouteId) { DARABONBA_PTR_SET_VALUE(dynamicRouteId_, dynamicRouteId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags>) };
    inline vector<Models::ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags>) };
    inline ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes& setTags(const vector<Models::ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes& setTags(vector<Models::ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> dynamicRouteId_ = nullptr;
    std::shared_ptr<vector<Models::ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
