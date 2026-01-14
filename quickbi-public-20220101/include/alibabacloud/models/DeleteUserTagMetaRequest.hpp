// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERTAGMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERTAGMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class DeleteUserTagMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserTagMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserTagMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    DeleteUserTagMetaRequest() = default ;
    DeleteUserTagMetaRequest(const DeleteUserTagMetaRequest &) = default ;
    DeleteUserTagMetaRequest(DeleteUserTagMetaRequest &&) = default ;
    DeleteUserTagMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserTagMetaRequest() = default ;
    DeleteUserTagMetaRequest& operator=(const DeleteUserTagMetaRequest &) = default ;
    DeleteUserTagMetaRequest& operator=(DeleteUserTagMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagId_ == nullptr; };
    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline DeleteUserTagMetaRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    // The ID of the tag to be deleted.
    // 
    // This parameter is required.
    shared_ptr<string> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
