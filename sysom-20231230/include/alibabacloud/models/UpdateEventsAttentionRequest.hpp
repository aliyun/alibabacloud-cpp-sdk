// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSATTENTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSATTENTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class UpdateEventsAttentionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventsAttentionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(range, range_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventsAttentionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(range, range_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    UpdateEventsAttentionRequest() = default ;
    UpdateEventsAttentionRequest(const UpdateEventsAttentionRequest &) = default ;
    UpdateEventsAttentionRequest(UpdateEventsAttentionRequest &&) = default ;
    UpdateEventsAttentionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventsAttentionRequest() = default ;
    UpdateEventsAttentionRequest& operator=(const UpdateEventsAttentionRequest &) = default ;
    UpdateEventsAttentionRequest& operator=(UpdateEventsAttentionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mode_ != nullptr
        && this->range_ != nullptr && this->uuid_ != nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline int32_t mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
    inline UpdateEventsAttentionRequest& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline string range() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
    inline UpdateEventsAttentionRequest& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline UpdateEventsAttentionRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<int32_t> mode_ = nullptr;
    std::shared_ptr<string> range_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
