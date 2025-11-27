// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPTRANSFERSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPTRANSFERSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StopTransferStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopTransferStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Transcode, transcode_);
    };
    friend void from_json(const Darabonba::Json& j, StopTransferStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Transcode, transcode_);
    };
    StopTransferStreamRequest() = default ;
    StopTransferStreamRequest(const StopTransferStreamRequest &) = default ;
    StopTransferStreamRequest(StopTransferStreamRequest &&) = default ;
    StopTransferStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopTransferStreamRequest() = default ;
    StopTransferStreamRequest& operator=(const StopTransferStreamRequest &) = default ;
    StopTransferStreamRequest& operator=(StopTransferStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->ownerId_ == nullptr && return this->transcode_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline StopTransferStreamRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StopTransferStreamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // transcode Field Functions 
    bool hasTranscode() const { return this->transcode_ != nullptr;};
    void deleteTranscode() { this->transcode_ = nullptr;};
    inline string transcode() const { DARABONBA_PTR_GET_DEFAULT(transcode_, "") };
    inline StopTransferStreamRequest& setTranscode(string transcode) { DARABONBA_PTR_SET_VALUE(transcode_, transcode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> transcode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
