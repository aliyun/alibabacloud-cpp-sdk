// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHRESOURCEDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHRESOURCEDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AISearchResourceDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AISearchResourceDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AISearchResourceDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AISearchResourceDeleteRequest() = default ;
    AISearchResourceDeleteRequest(const AISearchResourceDeleteRequest &) = default ;
    AISearchResourceDeleteRequest(AISearchResourceDeleteRequest &&) = default ;
    AISearchResourceDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AISearchResourceDeleteRequest() = default ;
    AISearchResourceDeleteRequest& operator=(const AISearchResourceDeleteRequest &) = default ;
    AISearchResourceDeleteRequest& operator=(AISearchResourceDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->type_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AISearchResourceDeleteRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AISearchResourceDeleteRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
