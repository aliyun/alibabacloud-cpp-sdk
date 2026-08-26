// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSTREAMURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterStreamUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterStreamUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterStreamUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCasterStreamUrlRequest() = default ;
    DescribeCasterStreamUrlRequest(const DescribeCasterStreamUrlRequest &) = default ;
    DescribeCasterStreamUrlRequest(DescribeCasterStreamUrlRequest &&) = default ;
    DescribeCasterStreamUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterStreamUrlRequest() = default ;
    DescribeCasterStreamUrlRequest& operator=(const DescribeCasterStreamUrlRequest &) = default ;
    DescribeCasterStreamUrlRequest& operator=(DescribeCasterStreamUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterStreamUrlRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCasterStreamUrlRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCasterStreamUrlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the production studio. Make sure that the CasterId is correct.
    // 
    // - If you create a production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, obtain the ID from the CasterId parameter in the response.
    // 
    // - If you create a production studio in the ApsaraVideo Live console, go to the **ApsaraVideo Live console** and choose **Production Studio** > **Cloud Production Studio** to view the ID.
    // 
    // > The name of a production studio in the list on the Cloud Production Studio page is its ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
