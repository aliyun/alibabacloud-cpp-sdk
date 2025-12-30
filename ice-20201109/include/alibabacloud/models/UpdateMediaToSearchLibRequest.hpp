// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIATOSEARCHLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIATOSEARCHLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaToSearchLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaToSearchLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MsgBody, msgBody_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaToSearchLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MsgBody, msgBody_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    UpdateMediaToSearchLibRequest() = default ;
    UpdateMediaToSearchLibRequest(const UpdateMediaToSearchLibRequest &) = default ;
    UpdateMediaToSearchLibRequest(UpdateMediaToSearchLibRequest &&) = default ;
    UpdateMediaToSearchLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaToSearchLibRequest() = default ;
    UpdateMediaToSearchLibRequest& operator=(const UpdateMediaToSearchLibRequest &) = default ;
    UpdateMediaToSearchLibRequest& operator=(UpdateMediaToSearchLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && this->msgBody_ == nullptr && this->namespace_ == nullptr && this->searchLibName_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string getMediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline UpdateMediaToSearchLibRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // msgBody Field Functions 
    bool hasMsgBody() const { return this->msgBody_ != nullptr;};
    void deleteMsgBody() { this->msgBody_ = nullptr;};
    inline string getMsgBody() const { DARABONBA_PTR_GET_DEFAULT(msgBody_, "") };
    inline UpdateMediaToSearchLibRequest& setMsgBody(string msgBody) { DARABONBA_PTR_SET_VALUE(msgBody_, msgBody) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateMediaToSearchLibRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline UpdateMediaToSearchLibRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The ID of the media asset.
    // 
    // This parameter is required.
    shared_ptr<string> mediaId_ {};
    // The message body.
    // 
    // This parameter is required.
    shared_ptr<string> msgBody_ {};
    shared_ptr<string> namespace_ {};
    // The name of the search library. Default value: ims-default-search-lib.
    shared_ptr<string> searchLibName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
