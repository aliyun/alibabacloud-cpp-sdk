// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEQOSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEQOSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class DeleteQosPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteQosPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FederationId, federationId_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_TO_JSON(QosPolicyId, qosPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteQosPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FederationId, federationId_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(InputRegionId, inputRegionId_);
      DARABONBA_PTR_FROM_JSON(QosPolicyId, qosPolicyId_);
    };
    DeleteQosPolicyRequest() = default ;
    DeleteQosPolicyRequest(const DeleteQosPolicyRequest &) = default ;
    DeleteQosPolicyRequest(DeleteQosPolicyRequest &&) = default ;
    DeleteQosPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteQosPolicyRequest() = default ;
    DeleteQosPolicyRequest& operator=(const DeleteQosPolicyRequest &) = default ;
    DeleteQosPolicyRequest& operator=(DeleteQosPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->federationId_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->inputRegionId_ == nullptr && return this->qosPolicyId_ == nullptr; };
    // federationId Field Functions 
    bool hasFederationId() const { return this->federationId_ != nullptr;};
    void deleteFederationId() { this->federationId_ = nullptr;};
    inline string federationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
    inline DeleteQosPolicyRequest& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DeleteQosPolicyRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // inputRegionId Field Functions 
    bool hasInputRegionId() const { return this->inputRegionId_ != nullptr;};
    void deleteInputRegionId() { this->inputRegionId_ = nullptr;};
    inline string inputRegionId() const { DARABONBA_PTR_GET_DEFAULT(inputRegionId_, "") };
    inline DeleteQosPolicyRequest& setInputRegionId(string inputRegionId) { DARABONBA_PTR_SET_VALUE(inputRegionId_, inputRegionId) };


    // qosPolicyId Field Functions 
    bool hasQosPolicyId() const { return this->qosPolicyId_ != nullptr;};
    void deleteQosPolicyId() { this->qosPolicyId_ = nullptr;};
    inline string qosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(qosPolicyId_, "") };
    inline DeleteQosPolicyRequest& setQosPolicyId(string qosPolicyId) { DARABONBA_PTR_SET_VALUE(qosPolicyId_, qosPolicyId) };


  protected:
    std::shared_ptr<string> federationId_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> qosPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
