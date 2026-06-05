// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteAgentRequest() = default ;
    DeleteAgentRequest(const DeleteAgentRequest &) = default ;
    DeleteAgentRequest(DeleteAgentRequest &&) = default ;
    DeleteAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentRequest() = default ;
    DeleteAgentRequest& operator=(const DeleteAgentRequest &) = default ;
    DeleteAgentRequest& operator=(DeleteAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
