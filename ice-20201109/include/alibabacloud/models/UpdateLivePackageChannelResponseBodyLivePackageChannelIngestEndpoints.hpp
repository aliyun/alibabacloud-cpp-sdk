// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELRESPONSEBODYLIVEPACKAGECHANNELINGESTENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELRESPONSEBODYLIVEPACKAGECHANNELINGESTENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints() = default ;
    UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints(const UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints &) = default ;
    UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints(UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints &&) = default ;
    UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints() = default ;
    UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints& operator=(const UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints &) = default ;
    UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints& operator=(UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->password_ == nullptr && return this->url_ == nullptr && return this->username_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline UpdateLivePackageChannelResponseBodyLivePackageChannelIngestEndpoints& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The ingest endpoint ID.
    std::shared_ptr<string> id_ = nullptr;
    // The password.
    std::shared_ptr<string> password_ = nullptr;
    // The ingest endpoint URL.
    std::shared_ptr<string> url_ = nullptr;
    // The username.
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
