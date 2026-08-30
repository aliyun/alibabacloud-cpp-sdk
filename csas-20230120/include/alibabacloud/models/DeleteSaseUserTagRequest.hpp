// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESASEUSERTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESASEUSERTAGREQUEST_HPP_
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
  class DeleteSaseUserTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSaseUserTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSaseUserTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    DeleteSaseUserTagRequest() = default ;
    DeleteSaseUserTagRequest(const DeleteSaseUserTagRequest &) = default ;
    DeleteSaseUserTagRequest(DeleteSaseUserTagRequest &&) = default ;
    DeleteSaseUserTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSaseUserTagRequest() = default ;
    DeleteSaseUserTagRequest& operator=(const DeleteSaseUserTagRequest &) = default ;
    DeleteSaseUserTagRequest& operator=(DeleteSaseUserTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagIds_ == nullptr; };
    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline DeleteSaseUserTagRequest& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline DeleteSaseUserTagRequest& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    // The collection of user tag IDs.
    shared_ptr<vector<string>> tagIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
