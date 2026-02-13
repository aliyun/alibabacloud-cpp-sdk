// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISEARCHRESOURCEUPDATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_AISEARCHRESOURCEUPDATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class AISearchResourceUpdateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AISearchResourceUpdateRequest& obj) { 
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AISearchResourceUpdateRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AISearchResourceUpdateRequest() = default ;
    AISearchResourceUpdateRequest(const AISearchResourceUpdateRequest &) = default ;
    AISearchResourceUpdateRequest(AISearchResourceUpdateRequest &&) = default ;
    AISearchResourceUpdateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AISearchResourceUpdateRequest() = default ;
    AISearchResourceUpdateRequest& operator=(const AISearchResourceUpdateRequest &) = default ;
    AISearchResourceUpdateRequest& operator=(AISearchResourceUpdateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->resourceId_ == nullptr && this->type_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline AISearchResourceUpdateRequest& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline AISearchResourceUpdateRequest& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AISearchResourceUpdateRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AISearchResourceUpdateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json data_ {};
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
