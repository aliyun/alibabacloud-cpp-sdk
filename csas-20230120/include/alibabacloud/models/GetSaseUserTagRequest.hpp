// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASEUSERTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSASEUSERTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetSaseUserTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSaseUserTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSaseUserTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    GetSaseUserTagRequest() = default ;
    GetSaseUserTagRequest(const GetSaseUserTagRequest &) = default ;
    GetSaseUserTagRequest(GetSaseUserTagRequest &&) = default ;
    GetSaseUserTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSaseUserTagRequest() = default ;
    GetSaseUserTagRequest& operator=(const GetSaseUserTagRequest &) = default ;
    GetSaseUserTagRequest& operator=(GetSaseUserTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagId_ == nullptr; };
    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline GetSaseUserTagRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    // The user tag ID. You can obtain this value from the following operations:
    // - [ListSaseUserTags](~~ListSaseUserTags~~): Lists user tags.
    // - [CreateSaseUserTag](~~CreateSaseUserTag~~): Creates a user tag.
    shared_ptr<string> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
