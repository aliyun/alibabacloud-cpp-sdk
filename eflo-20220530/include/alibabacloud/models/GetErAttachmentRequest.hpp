// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETERATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetErAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ErAttachmentId, erAttachmentId_);
      DARABONBA_PTR_TO_JSON(ErId, erId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ErAttachmentId, erAttachmentId_);
      DARABONBA_PTR_FROM_JSON(ErId, erId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetErAttachmentRequest() = default ;
    GetErAttachmentRequest(const GetErAttachmentRequest &) = default ;
    GetErAttachmentRequest(GetErAttachmentRequest &&) = default ;
    GetErAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErAttachmentRequest() = default ;
    GetErAttachmentRequest& operator=(const GetErAttachmentRequest &) = default ;
    GetErAttachmentRequest& operator=(GetErAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->erAttachmentId_ == nullptr
        && return this->erId_ == nullptr && return this->regionId_ == nullptr; };
    // erAttachmentId Field Functions 
    bool hasErAttachmentId() const { return this->erAttachmentId_ != nullptr;};
    void deleteErAttachmentId() { this->erAttachmentId_ = nullptr;};
    inline string erAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(erAttachmentId_, "") };
    inline GetErAttachmentRequest& setErAttachmentId(string erAttachmentId) { DARABONBA_PTR_SET_VALUE(erAttachmentId_, erAttachmentId) };


    // erId Field Functions 
    bool hasErId() const { return this->erId_ != nullptr;};
    void deleteErId() { this->erId_ = nullptr;};
    inline string erId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
    inline GetErAttachmentRequest& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetErAttachmentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Lingjun HUB network connection instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> erAttachmentId_ = nullptr;
    // Lingjun HUB ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> erId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
