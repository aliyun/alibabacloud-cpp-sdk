// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODEGROUPDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODEGROUPDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class UpdateNodeGroupDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodeGroupDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(X-Acs-Ram-Auth-Context, xAcsRamAuthContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodeGroupDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(X-Acs-Ram-Auth-Context, xAcsRamAuthContext_);
    };
    UpdateNodeGroupDescriptionRequest() = default ;
    UpdateNodeGroupDescriptionRequest(const UpdateNodeGroupDescriptionRequest &) = default ;
    UpdateNodeGroupDescriptionRequest(UpdateNodeGroupDescriptionRequest &&) = default ;
    UpdateNodeGroupDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodeGroupDescriptionRequest() = default ;
    UpdateNodeGroupDescriptionRequest& operator=(const UpdateNodeGroupDescriptionRequest &) = default ;
    UpdateNodeGroupDescriptionRequest& operator=(UpdateNodeGroupDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->nodeGroupId_ == nullptr && this->xAcsRamAuthContext_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateNodeGroupDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline UpdateNodeGroupDescriptionRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // xAcsRamAuthContext Field Functions 
    bool hasXAcsRamAuthContext() const { return this->xAcsRamAuthContext_ != nullptr;};
    void deleteXAcsRamAuthContext() { this->xAcsRamAuthContext_ = nullptr;};
    inline string getXAcsRamAuthContext() const { DARABONBA_PTR_GET_DEFAULT(xAcsRamAuthContext_, "") };
    inline UpdateNodeGroupDescriptionRequest& setXAcsRamAuthContext(string xAcsRamAuthContext) { DARABONBA_PTR_SET_VALUE(xAcsRamAuthContext_, xAcsRamAuthContext) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> nodeGroupId_ {};
    shared_ptr<string> xAcsRamAuthContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
