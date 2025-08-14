// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIAFROMSEARCHLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIAFROMSEARCHLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteMediaFromSearchLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediaFromSearchLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MsgBody, msgBody_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediaFromSearchLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MsgBody, msgBody_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    DeleteMediaFromSearchLibRequest() = default ;
    DeleteMediaFromSearchLibRequest(const DeleteMediaFromSearchLibRequest &) = default ;
    DeleteMediaFromSearchLibRequest(DeleteMediaFromSearchLibRequest &&) = default ;
    DeleteMediaFromSearchLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediaFromSearchLibRequest() = default ;
    DeleteMediaFromSearchLibRequest& operator=(const DeleteMediaFromSearchLibRequest &) = default ;
    DeleteMediaFromSearchLibRequest& operator=(DeleteMediaFromSearchLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mediaId_ != nullptr
        && this->msgBody_ != nullptr && this->namespace_ != nullptr && this->searchLibName_ != nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline DeleteMediaFromSearchLibRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // msgBody Field Functions 
    bool hasMsgBody() const { return this->msgBody_ != nullptr;};
    void deleteMsgBody() { this->msgBody_ = nullptr;};
    inline string msgBody() const { DARABONBA_PTR_GET_DEFAULT(msgBody_, "") };
    inline DeleteMediaFromSearchLibRequest& setMsgBody(string msgBody) { DARABONBA_PTR_SET_VALUE(msgBody_, msgBody) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DeleteMediaFromSearchLibRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline DeleteMediaFromSearchLibRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The ID of the media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The message body.
    std::shared_ptr<string> msgBody_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the search library. Default value: ims-default-search-lib.
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
