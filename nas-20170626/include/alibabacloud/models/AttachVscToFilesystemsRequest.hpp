// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVSCTOFILESYSTEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVSCTOFILESYSTEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachVscToFilesystemsRequestResourceIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class AttachVscToFilesystemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVscToFilesystemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVscToFilesystemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
    };
    AttachVscToFilesystemsRequest() = default ;
    AttachVscToFilesystemsRequest(const AttachVscToFilesystemsRequest &) = default ;
    AttachVscToFilesystemsRequest(AttachVscToFilesystemsRequest &&) = default ;
    AttachVscToFilesystemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVscToFilesystemsRequest() = default ;
    AttachVscToFilesystemsRequest& operator=(const AttachVscToFilesystemsRequest &) = default ;
    AttachVscToFilesystemsRequest& operator=(AttachVscToFilesystemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->resourceIds_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AttachVscToFilesystemsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<AttachVscToFilesystemsRequestResourceIds> & resourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<AttachVscToFilesystemsRequestResourceIds>) };
    inline vector<AttachVscToFilesystemsRequestResourceIds> resourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<AttachVscToFilesystemsRequestResourceIds>) };
    inline AttachVscToFilesystemsRequest& setResourceIds(const vector<AttachVscToFilesystemsRequestResourceIds> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline AttachVscToFilesystemsRequest& setResourceIds(vector<AttachVscToFilesystemsRequestResourceIds> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/25693.html)
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID information of the file system and virtual storage channel. Each batch can contain up to 10 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AttachVscToFilesystemsRequestResourceIds>> resourceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
