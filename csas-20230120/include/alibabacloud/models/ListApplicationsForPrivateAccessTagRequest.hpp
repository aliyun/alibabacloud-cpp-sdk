// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSFORPRIVATEACCESSTAGREQUEST_HPP_
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
  class ListApplicationsForPrivateAccessTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsForPrivateAccessTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsForPrivateAccessTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    ListApplicationsForPrivateAccessTagRequest() = default ;
    ListApplicationsForPrivateAccessTagRequest(const ListApplicationsForPrivateAccessTagRequest &) = default ;
    ListApplicationsForPrivateAccessTagRequest(ListApplicationsForPrivateAccessTagRequest &&) = default ;
    ListApplicationsForPrivateAccessTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsForPrivateAccessTagRequest() = default ;
    ListApplicationsForPrivateAccessTagRequest& operator=(const ListApplicationsForPrivateAccessTagRequest &) = default ;
    ListApplicationsForPrivateAccessTagRequest& operator=(ListApplicationsForPrivateAccessTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagIds_ != nullptr; };
    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline ListApplicationsForPrivateAccessTagRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline ListApplicationsForPrivateAccessTagRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> tagIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
