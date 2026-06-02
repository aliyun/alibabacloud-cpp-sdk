// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBROADCASTSTICKERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBROADCASTSTICKERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class DeleteBroadcastStickerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBroadcastStickerRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, DeleteBroadcastStickerRequest& obj) { 
      (void)j; (void)obj; 
    };
    DeleteBroadcastStickerRequest() = default ;
    DeleteBroadcastStickerRequest(const DeleteBroadcastStickerRequest &) = default ;
    DeleteBroadcastStickerRequest(DeleteBroadcastStickerRequest &&) = default ;
    DeleteBroadcastStickerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBroadcastStickerRequest() = default ;
    DeleteBroadcastStickerRequest& operator=(const DeleteBroadcastStickerRequest &) = default ;
    DeleteBroadcastStickerRequest& operator=(DeleteBroadcastStickerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
