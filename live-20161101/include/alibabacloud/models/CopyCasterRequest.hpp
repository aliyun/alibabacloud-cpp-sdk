// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCASTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYCASTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CopyCasterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyCasterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterName, casterName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SrcCasterId, srcCasterId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyCasterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterName, casterName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SrcCasterId, srcCasterId_);
    };
    CopyCasterRequest() = default ;
    CopyCasterRequest(const CopyCasterRequest &) = default ;
    CopyCasterRequest(CopyCasterRequest &&) = default ;
    CopyCasterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyCasterRequest() = default ;
    CopyCasterRequest& operator=(const CopyCasterRequest &) = default ;
    CopyCasterRequest& operator=(CopyCasterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterName_ == nullptr
        && this->clientToken_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->srcCasterId_ == nullptr; };
    // casterName Field Functions 
    bool hasCasterName() const { return this->casterName_ != nullptr;};
    void deleteCasterName() { this->casterName_ = nullptr;};
    inline string getCasterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
    inline CopyCasterRequest& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CopyCasterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CopyCasterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CopyCasterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // srcCasterId Field Functions 
    bool hasSrcCasterId() const { return this->srcCasterId_ != nullptr;};
    void deleteSrcCasterId() { this->srcCasterId_ = nullptr;};
    inline string getSrcCasterId() const { DARABONBA_PTR_GET_DEFAULT(srcCasterId_, "") };
    inline CopyCasterRequest& setSrcCasterId(string srcCasterId) { DARABONBA_PTR_SET_VALUE(srcCasterId_, srcCasterId) };


  protected:
    // The name of the new production studio.
    // 
    // This parameter is required.
    shared_ptr<string> casterName_ {};
    // A client-generated token that ensures the idempotence of the request.
    // 
    // Generate a unique value for this parameter for each request. The token can contain a maximum of 64 ASCII characters.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the production studio to copy.
    // 
    // - If you created the production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, use the CasterId value that is returned.
    // 
    // - If you created the production studio in the ApsaraVideo Live console, go to **ApsaraVideo Live console** > **Production Studio** > **Cloud Production Studio** to view the production studio name.
    // 
    // > The name of a production studio on the Cloud Production Studio page is its production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> srcCasterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
