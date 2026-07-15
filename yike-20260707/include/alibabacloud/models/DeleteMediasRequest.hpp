// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEDIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEDIASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class DeleteMediasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMediasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletePhysicalFiles, deletePhysicalFiles_);
      DARABONBA_PTR_TO_JSON(InputURLs, inputURLs_);
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMediasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletePhysicalFiles, deletePhysicalFiles_);
      DARABONBA_PTR_FROM_JSON(InputURLs, inputURLs_);
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
    };
    DeleteMediasRequest() = default ;
    DeleteMediasRequest(const DeleteMediasRequest &) = default ;
    DeleteMediasRequest(DeleteMediasRequest &&) = default ;
    DeleteMediasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMediasRequest() = default ;
    DeleteMediasRequest& operator=(const DeleteMediasRequest &) = default ;
    DeleteMediasRequest& operator=(DeleteMediasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletePhysicalFiles_ == nullptr
        && this->inputURLs_ == nullptr && this->mediaIds_ == nullptr; };
    // deletePhysicalFiles Field Functions 
    bool hasDeletePhysicalFiles() const { return this->deletePhysicalFiles_ != nullptr;};
    void deleteDeletePhysicalFiles() { this->deletePhysicalFiles_ = nullptr;};
    inline bool getDeletePhysicalFiles() const { DARABONBA_PTR_GET_DEFAULT(deletePhysicalFiles_, false) };
    inline DeleteMediasRequest& setDeletePhysicalFiles(bool deletePhysicalFiles) { DARABONBA_PTR_SET_VALUE(deletePhysicalFiles_, deletePhysicalFiles) };


    // inputURLs Field Functions 
    bool hasInputURLs() const { return this->inputURLs_ != nullptr;};
    void deleteInputURLs() { this->inputURLs_ = nullptr;};
    inline string getInputURLs() const { DARABONBA_PTR_GET_DEFAULT(inputURLs_, "") };
    inline DeleteMediasRequest& setInputURLs(string inputURLs) { DARABONBA_PTR_SET_VALUE(inputURLs_, inputURLs) };


    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline DeleteMediasRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


  protected:
    shared_ptr<bool> deletePhysicalFiles_ {};
    shared_ptr<string> inputURLs_ {};
    shared_ptr<string> mediaIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
