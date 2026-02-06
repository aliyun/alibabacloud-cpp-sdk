// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIIMAGEINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIIMAGEINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteAIImageInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIImageInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIImageInfoIds, AIImageInfoIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIImageInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIImageInfoIds, AIImageInfoIds_);
    };
    DeleteAIImageInfosRequest() = default ;
    DeleteAIImageInfosRequest(const DeleteAIImageInfosRequest &) = default ;
    DeleteAIImageInfosRequest(DeleteAIImageInfosRequest &&) = default ;
    DeleteAIImageInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIImageInfosRequest() = default ;
    DeleteAIImageInfosRequest& operator=(const DeleteAIImageInfosRequest &) = default ;
    DeleteAIImageInfosRequest& operator=(DeleteAIImageInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIImageInfoIds_ == nullptr; };
    // AIImageInfoIds Field Functions 
    bool hasAIImageInfoIds() const { return this->AIImageInfoIds_ != nullptr;};
    void deleteAIImageInfoIds() { this->AIImageInfoIds_ = nullptr;};
    inline string getAIImageInfoIds() const { DARABONBA_PTR_GET_DEFAULT(AIImageInfoIds_, "") };
    inline DeleteAIImageInfosRequest& setAIImageInfoIds(string AIImageInfoIds) { DARABONBA_PTR_SET_VALUE(AIImageInfoIds_, AIImageInfoIds) };


  protected:
    // The IDs of the images that are submitted for AI processing. You can obtain the value of AIImageInfoId from the response to the [ListAIImageInfo](~~ListAIImageInfo~~) operation.
    // 
    // - You can specify a maximum of 10 IDs.
    // - Separate multiple IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> AIImageInfoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
