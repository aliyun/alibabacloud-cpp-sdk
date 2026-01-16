// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESNAPSHOTSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESNAPSHOTSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateSnapshotSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSnapshotSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSnapshotSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSnapshotSettingRequest() = default ;
    UpdateSnapshotSettingRequest(const UpdateSnapshotSettingRequest &) = default ;
    UpdateSnapshotSettingRequest(UpdateSnapshotSettingRequest &&) = default ;
    UpdateSnapshotSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSnapshotSettingRequest() = default ;
    UpdateSnapshotSettingRequest& operator=(const UpdateSnapshotSettingRequest &) = default ;
    UpdateSnapshotSettingRequest& operator=(UpdateSnapshotSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline UpdateSnapshotSettingRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
