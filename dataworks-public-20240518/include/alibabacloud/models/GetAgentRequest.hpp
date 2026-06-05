// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    GetAgentRequest() = default ;
    GetAgentRequest(const GetAgentRequest &) = default ;
    GetAgentRequest(GetAgentRequest &&) = default ;
    GetAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentRequest() = default ;
    GetAgentRequest& operator=(const GetAgentRequest &) = default ;
    GetAgentRequest& operator=(GetAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
