// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteCustomAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteCustomAttributeRequest() = default ;
    DeleteCustomAttributeRequest(const DeleteCustomAttributeRequest &) = default ;
    DeleteCustomAttributeRequest(DeleteCustomAttributeRequest &&) = default ;
    DeleteCustomAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomAttributeRequest() = default ;
    DeleteCustomAttributeRequest& operator=(const DeleteCustomAttributeRequest &) = default ;
    DeleteCustomAttributeRequest& operator=(DeleteCustomAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteCustomAttributeRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the custom attribute.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
