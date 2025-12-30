// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELCREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELCREDENTIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLivePackageChannelCredentialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageChannelCredentialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IngestEndpoints, ingestEndpoints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageChannelCredentialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IngestEndpoints, ingestEndpoints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateLivePackageChannelCredentialsResponseBody() = default ;
    UpdateLivePackageChannelCredentialsResponseBody(const UpdateLivePackageChannelCredentialsResponseBody &) = default ;
    UpdateLivePackageChannelCredentialsResponseBody(UpdateLivePackageChannelCredentialsResponseBody &&) = default ;
    UpdateLivePackageChannelCredentialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageChannelCredentialsResponseBody() = default ;
    UpdateLivePackageChannelCredentialsResponseBody& operator=(const UpdateLivePackageChannelCredentialsResponseBody &) = default ;
    UpdateLivePackageChannelCredentialsResponseBody& operator=(UpdateLivePackageChannelCredentialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IngestEndpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IngestEndpoints& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, IngestEndpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      IngestEndpoints() = default ;
      IngestEndpoints(const IngestEndpoints &) = default ;
      IngestEndpoints(IngestEndpoints &&) = default ;
      IngestEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IngestEndpoints() = default ;
      IngestEndpoints& operator=(const IngestEndpoints &) = default ;
      IngestEndpoints& operator=(IngestEndpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->password_ == nullptr && this->url_ == nullptr && this->username_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline IngestEndpoints& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline IngestEndpoints& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline IngestEndpoints& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline IngestEndpoints& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      // The ingest endpoint ID. `input1` indicates primary and `input2` indicates secondary.
      shared_ptr<string> id_ {};
      // The password.
      shared_ptr<string> password_ {};
      // The ingest endpoint URL.
      shared_ptr<string> url_ {};
      // The username.
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->ingestEndpoints_ == nullptr
        && this->requestId_ == nullptr; };
    // ingestEndpoints Field Functions 
    bool hasIngestEndpoints() const { return this->ingestEndpoints_ != nullptr;};
    void deleteIngestEndpoints() { this->ingestEndpoints_ = nullptr;};
    inline const vector<UpdateLivePackageChannelCredentialsResponseBody::IngestEndpoints> & getIngestEndpoints() const { DARABONBA_PTR_GET_CONST(ingestEndpoints_, vector<UpdateLivePackageChannelCredentialsResponseBody::IngestEndpoints>) };
    inline vector<UpdateLivePackageChannelCredentialsResponseBody::IngestEndpoints> getIngestEndpoints() { DARABONBA_PTR_GET(ingestEndpoints_, vector<UpdateLivePackageChannelCredentialsResponseBody::IngestEndpoints>) };
    inline UpdateLivePackageChannelCredentialsResponseBody& setIngestEndpoints(const vector<UpdateLivePackageChannelCredentialsResponseBody::IngestEndpoints> & ingestEndpoints) { DARABONBA_PTR_SET_VALUE(ingestEndpoints_, ingestEndpoints) };
    inline UpdateLivePackageChannelCredentialsResponseBody& setIngestEndpoints(vector<UpdateLivePackageChannelCredentialsResponseBody::IngestEndpoints> && ingestEndpoints) { DARABONBA_PTR_SET_RVALUE(ingestEndpoints_, ingestEndpoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLivePackageChannelCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ingest endpoint.
    shared_ptr<vector<UpdateLivePackageChannelCredentialsResponseBody::IngestEndpoints>> ingestEndpoints_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
