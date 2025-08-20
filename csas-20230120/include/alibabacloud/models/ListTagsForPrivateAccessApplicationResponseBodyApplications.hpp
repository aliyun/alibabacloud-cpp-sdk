// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSAPPLICATIONRESPONSEBODYAPPLICATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSFORPRIVATEACCESSAPPLICATIONRESPONSEBODYAPPLICATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListTagsForPrivateAccessApplicationResponseBodyApplications : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsForPrivateAccessApplicationResponseBodyApplications& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsForPrivateAccessApplicationResponseBodyApplications& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListTagsForPrivateAccessApplicationResponseBodyApplications() = default ;
    ListTagsForPrivateAccessApplicationResponseBodyApplications(const ListTagsForPrivateAccessApplicationResponseBodyApplications &) = default ;
    ListTagsForPrivateAccessApplicationResponseBodyApplications(ListTagsForPrivateAccessApplicationResponseBodyApplications &&) = default ;
    ListTagsForPrivateAccessApplicationResponseBodyApplications(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsForPrivateAccessApplicationResponseBodyApplications() = default ;
    ListTagsForPrivateAccessApplicationResponseBodyApplications& operator=(const ListTagsForPrivateAccessApplicationResponseBodyApplications &) = default ;
    ListTagsForPrivateAccessApplicationResponseBodyApplications& operator=(ListTagsForPrivateAccessApplicationResponseBodyApplications &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationId_ != nullptr
        && this->tags_ != nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListTagsForPrivateAccessApplicationResponseBodyApplications& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags>) };
    inline vector<Models::ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags>) };
    inline ListTagsForPrivateAccessApplicationResponseBodyApplications& setTags(const vector<Models::ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTagsForPrivateAccessApplicationResponseBodyApplications& setTags(vector<Models::ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<vector<Models::ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
