// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSESSIONARTIFACTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSESSIONARTIFACTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAgentSessionArtifactsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentSessionArtifactsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, paramsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentSessionArtifactsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, paramsShrink_);
    };
    ListAgentSessionArtifactsShrinkRequest() = default ;
    ListAgentSessionArtifactsShrinkRequest(const ListAgentSessionArtifactsShrinkRequest &) = default ;
    ListAgentSessionArtifactsShrinkRequest(ListAgentSessionArtifactsShrinkRequest &&) = default ;
    ListAgentSessionArtifactsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentSessionArtifactsShrinkRequest() = default ;
    ListAgentSessionArtifactsShrinkRequest& operator=(const ListAgentSessionArtifactsShrinkRequest &) = default ;
    ListAgentSessionArtifactsShrinkRequest& operator=(ListAgentSessionArtifactsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->paramsShrink_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListAgentSessionArtifactsShrinkRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline ListAgentSessionArtifactsShrinkRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string getParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline ListAgentSessionArtifactsShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> jsonrpc_ {};
    shared_ptr<string> paramsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
