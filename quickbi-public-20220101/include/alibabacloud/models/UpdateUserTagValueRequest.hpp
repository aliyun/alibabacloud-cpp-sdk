// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERTAGVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERTAGVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class UpdateUserTagValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserTagValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserTagValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdateUserTagValueRequest() = default ;
    UpdateUserTagValueRequest(const UpdateUserTagValueRequest &) = default ;
    UpdateUserTagValueRequest(UpdateUserTagValueRequest &&) = default ;
    UpdateUserTagValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserTagValueRequest() = default ;
    UpdateUserTagValueRequest& operator=(const UpdateUserTagValueRequest &) = default ;
    UpdateUserTagValueRequest& operator=(UpdateUserTagValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagId_ != nullptr
        && this->tagValue_ != nullptr && this->userId_ != nullptr; };
    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string tagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline UpdateUserTagValueRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline UpdateUserTagValueRequest& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateUserTagValueRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the tag to be modified.
    // 
    // This parameter is required.
    std::shared_ptr<string> tagId_ = nullptr;
    // The tag value to be modified.
    // 
    // - To clear this tag, set the tag value to ($NULL$).
    // - For multiple values, use English commas to separate them.
    // - Format validation, maximum length: 3000 characters
    // 
    // This parameter is required.
    std::shared_ptr<string> tagValue_ = nullptr;
    // The user ID for which the tag value is to be modified. This user ID refers to the Quick BI UserID, not the Alibaba Cloud UID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
