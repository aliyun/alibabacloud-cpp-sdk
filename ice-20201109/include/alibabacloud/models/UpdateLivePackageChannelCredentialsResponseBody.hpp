// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELCREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGECHANNELCREDENTIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLivePackageChannelCredentialsResponseBodyIngestEndpoints.hpp>
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
    virtual bool empty() const override { this->ingestEndpoints_ != nullptr
        && this->requestId_ != nullptr; };
    // ingestEndpoints Field Functions 
    bool hasIngestEndpoints() const { return this->ingestEndpoints_ != nullptr;};
    void deleteIngestEndpoints() { this->ingestEndpoints_ = nullptr;};
    inline const vector<UpdateLivePackageChannelCredentialsResponseBodyIngestEndpoints> & ingestEndpoints() const { DARABONBA_PTR_GET_CONST(ingestEndpoints_, vector<UpdateLivePackageChannelCredentialsResponseBodyIngestEndpoints>) };
    inline vector<UpdateLivePackageChannelCredentialsResponseBodyIngestEndpoints> ingestEndpoints() { DARABONBA_PTR_GET(ingestEndpoints_, vector<UpdateLivePackageChannelCredentialsResponseBodyIngestEndpoints>) };
    inline UpdateLivePackageChannelCredentialsResponseBody& setIngestEndpoints(const vector<UpdateLivePackageChannelCredentialsResponseBodyIngestEndpoints> & ingestEndpoints) { DARABONBA_PTR_SET_VALUE(ingestEndpoints_, ingestEndpoints) };
    inline UpdateLivePackageChannelCredentialsResponseBody& setIngestEndpoints(vector<UpdateLivePackageChannelCredentialsResponseBodyIngestEndpoints> && ingestEndpoints) { DARABONBA_PTR_SET_RVALUE(ingestEndpoints_, ingestEndpoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLivePackageChannelCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ingest endpoint.
    std::shared_ptr<vector<UpdateLivePackageChannelCredentialsResponseBodyIngestEndpoints>> ingestEndpoints_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
