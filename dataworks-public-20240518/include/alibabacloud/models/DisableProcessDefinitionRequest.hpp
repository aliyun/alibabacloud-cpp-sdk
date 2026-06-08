// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEPROCESSDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEPROCESSDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DisableProcessDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableProcessDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DisableProcessDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DisableProcessDefinitionRequest() = default ;
    DisableProcessDefinitionRequest(const DisableProcessDefinitionRequest &) = default ;
    DisableProcessDefinitionRequest(DisableProcessDefinitionRequest &&) = default ;
    DisableProcessDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableProcessDefinitionRequest() = default ;
    DisableProcessDefinitionRequest& operator=(const DisableProcessDefinitionRequest &) = default ;
    DisableProcessDefinitionRequest& operator=(DisableProcessDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->id_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DisableProcessDefinitionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DisableProcessDefinitionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
