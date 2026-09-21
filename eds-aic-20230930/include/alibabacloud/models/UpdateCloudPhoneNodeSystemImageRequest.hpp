// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDPHONENODESYSTEMIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDPHONENODESYSTEMIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class UpdateCloudPhoneNodeSystemImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudPhoneNodeSystemImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudPhoneNodeSystemImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
    };
    UpdateCloudPhoneNodeSystemImageRequest() = default ;
    UpdateCloudPhoneNodeSystemImageRequest(const UpdateCloudPhoneNodeSystemImageRequest &) = default ;
    UpdateCloudPhoneNodeSystemImageRequest(UpdateCloudPhoneNodeSystemImageRequest &&) = default ;
    UpdateCloudPhoneNodeSystemImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudPhoneNodeSystemImageRequest() = default ;
    UpdateCloudPhoneNodeSystemImageRequest& operator=(const UpdateCloudPhoneNodeSystemImageRequest &) = default ;
    UpdateCloudPhoneNodeSystemImageRequest& operator=(UpdateCloudPhoneNodeSystemImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && this->nodeIds_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline UpdateCloudPhoneNodeSystemImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline UpdateCloudPhoneNodeSystemImageRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline UpdateCloudPhoneNodeSystemImageRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


  protected:
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The list of cloud phone normal matrix IDs.
    shared_ptr<vector<string>> nodeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
