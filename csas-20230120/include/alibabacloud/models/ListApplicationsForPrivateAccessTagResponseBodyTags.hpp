// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESPONSEBODYTAGS_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSTAGRESPONSEBODYTAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsForPrivateAccessTagResponseBodyTagsApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApplicationsForPrivateAccessTagResponseBodyTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForPrivateAccessTagResponseBodyTags& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForPrivateAccessTagResponseBodyTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    ListApplicationsForPrivateAccessTagResponseBodyTags() = default ;
    ListApplicationsForPrivateAccessTagResponseBodyTags(const ListApplicationsForPrivateAccessTagResponseBodyTags &) = default ;
    ListApplicationsForPrivateAccessTagResponseBodyTags(ListApplicationsForPrivateAccessTagResponseBodyTags &&) = default ;
    ListApplicationsForPrivateAccessTagResponseBodyTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForPrivateAccessTagResponseBodyTags() = default ;
    ListApplicationsForPrivateAccessTagResponseBodyTags& operator=(const ListApplicationsForPrivateAccessTagResponseBodyTags &) = default ;
    ListApplicationsForPrivateAccessTagResponseBodyTags& operator=(ListApplicationsForPrivateAccessTagResponseBodyTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->tagId_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Models::ListApplicationsForPrivateAccessTagResponseBodyTagsApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Models::ListApplicationsForPrivateAccessTagResponseBodyTagsApplications>) };
    inline vector<Models::ListApplicationsForPrivateAccessTagResponseBodyTagsApplications> applications() { DARABONBA_PTR_GET(applications_, vector<Models::ListApplicationsForPrivateAccessTagResponseBodyTagsApplications>) };
    inline ListApplicationsForPrivateAccessTagResponseBodyTags& setApplications(const vector<Models::ListApplicationsForPrivateAccessTagResponseBodyTagsApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsForPrivateAccessTagResponseBodyTags& setApplications(vector<Models::ListApplicationsForPrivateAccessTagResponseBodyTagsApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListApplicationsForPrivateAccessTagResponseBodyTags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    std::shared_ptr<vector<Models::ListApplicationsForPrivateAccessTagResponseBodyTagsApplications>> applications_ = nullptr;
    std::shared_ptr<string> tagId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
