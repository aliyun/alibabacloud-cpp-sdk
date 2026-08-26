// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterLayoutsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCasterLayoutsRequest() = default ;
    DescribeCasterLayoutsRequest(const DescribeCasterLayoutsRequest &) = default ;
    DescribeCasterLayoutsRequest(DescribeCasterLayoutsRequest &&) = default ;
    DescribeCasterLayoutsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsRequest() = default ;
    DescribeCasterLayoutsRequest& operator=(const DescribeCasterLayoutsRequest &) = default ;
    DescribeCasterLayoutsRequest& operator=(DescribeCasterLayoutsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->layoutId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterLayoutsRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline DescribeCasterLayoutsRequest& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCasterLayoutsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCasterLayoutsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the production studio.
    // 
    // - If you created the production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, use the CasterId value returned in the response.
    // 
    // - If you created the production studio in the LIVE console, find the ID on the **Production Studio** > **Cloud Production Studio** page.
    // 
    // > The name of the production studio in the list on the Cloud Production Studio page is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The layout ID.
    // 
    // If you do not provide a value for LayoutId, all layouts of the production studio are returned.
    shared_ptr<string> layoutId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
