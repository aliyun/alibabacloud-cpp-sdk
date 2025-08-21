// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGSTASHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGSTASHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DeleteLogstashRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLogstashRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(deleteType, deleteType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLogstashRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(deleteType, deleteType_);
    };
    DeleteLogstashRequest() = default ;
    DeleteLogstashRequest(const DeleteLogstashRequest &) = default ;
    DeleteLogstashRequest(DeleteLogstashRequest &&) = default ;
    DeleteLogstashRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLogstashRequest() = default ;
    DeleteLogstashRequest& operator=(const DeleteLogstashRequest &) = default ;
    DeleteLogstashRequest& operator=(DeleteLogstashRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->deleteType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteLogstashRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // deleteType Field Functions 
    bool hasDeleteType() const { return this->deleteType_ != nullptr;};
    void deleteDeleteType() { this->deleteType_ = nullptr;};
    inline string deleteType() const { DARABONBA_PTR_GET_DEFAULT(deleteType_, "") };
    inline DeleteLogstashRequest& setDeleteType(string deleteType) { DARABONBA_PTR_SET_VALUE(deleteType_, deleteType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The type of the release operation. Valid values:
    // 
    // *   immediate: The cluster is immediately deleted when it is released. After the cluster is deleted, the data stored in the cluster is deleted, and the system removes the cluster from the Logstash cluster list.
    // *   protective: The cluster is released 24 hours later. During the period of 24 hours, you can still find the cluster in the Logstash cluster list, and [restore the cluster](https://help.aliyun.com/document_detail/202205.html) or [immediately release the cluster](https://help.aliyun.com/document_detail/160591.html). After 24 hours elapse, the data stored in the cluster is deleted.
    std::shared_ptr<string> deleteType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
