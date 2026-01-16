// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateDescriptionRequest() = default ;
    UpdateDescriptionRequest(const UpdateDescriptionRequest &) = default ;
    UpdateDescriptionRequest(UpdateDescriptionRequest &&) = default ;
    UpdateDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDescriptionRequest() = default ;
    UpdateDescriptionRequest& operator=(const UpdateDescriptionRequest &) = default ;
    UpdateDescriptionRequest& operator=(UpdateDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->clientToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateDescriptionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> description_ {};
    // The new name of the instance.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
