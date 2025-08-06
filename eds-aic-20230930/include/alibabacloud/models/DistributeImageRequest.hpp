// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTRIBUTEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISTRIBUTEIMAGEREQUEST_HPP_
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
  class DistributeImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistributeImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DistributeRegionList, distributeRegionList_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
    };
    friend void from_json(const Darabonba::Json& j, DistributeImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DistributeRegionList, distributeRegionList_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
    };
    DistributeImageRequest() = default ;
    DistributeImageRequest(const DistributeImageRequest &) = default ;
    DistributeImageRequest(DistributeImageRequest &&) = default ;
    DistributeImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistributeImageRequest() = default ;
    DistributeImageRequest& operator=(const DistributeImageRequest &) = default ;
    DistributeImageRequest& operator=(DistributeImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distributeRegionList_ != nullptr
        && this->imageId_ != nullptr; };
    // distributeRegionList Field Functions 
    bool hasDistributeRegionList() const { return this->distributeRegionList_ != nullptr;};
    void deleteDistributeRegionList() { this->distributeRegionList_ = nullptr;};
    inline const vector<string> & distributeRegionList() const { DARABONBA_PTR_GET_CONST(distributeRegionList_, vector<string>) };
    inline vector<string> distributeRegionList() { DARABONBA_PTR_GET(distributeRegionList_, vector<string>) };
    inline DistributeImageRequest& setDistributeRegionList(const vector<string> & distributeRegionList) { DARABONBA_PTR_SET_VALUE(distributeRegionList_, distributeRegionList) };
    inline DistributeImageRequest& setDistributeRegionList(vector<string> && distributeRegionList) { DARABONBA_PTR_SET_RVALUE(distributeRegionList_, distributeRegionList) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DistributeImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


  protected:
    // The regions to which you want to distribute an image.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> distributeRegionList_ = nullptr;
    // The ID of the image that you want to distribute.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
