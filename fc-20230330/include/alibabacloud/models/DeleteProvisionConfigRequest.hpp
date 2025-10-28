// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROVISIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROVISIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class DeleteProvisionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProvisionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProvisionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    DeleteProvisionConfigRequest() = default ;
    DeleteProvisionConfigRequest(const DeleteProvisionConfigRequest &) = default ;
    DeleteProvisionConfigRequest(DeleteProvisionConfigRequest &&) = default ;
    DeleteProvisionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProvisionConfigRequest() = default ;
    DeleteProvisionConfigRequest& operator=(const DeleteProvisionConfigRequest &) = default ;
    DeleteProvisionConfigRequest& operator=(DeleteProvisionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qualifier_ == nullptr; };
    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline DeleteProvisionConfigRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The function alias.
    std::shared_ptr<string> qualifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
