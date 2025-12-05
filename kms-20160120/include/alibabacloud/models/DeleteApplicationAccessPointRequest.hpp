// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICATIONACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICATIONACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DeleteApplicationAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApplicationAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApplicationAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteApplicationAccessPointRequest() = default ;
    DeleteApplicationAccessPointRequest(const DeleteApplicationAccessPointRequest &) = default ;
    DeleteApplicationAccessPointRequest(DeleteApplicationAccessPointRequest &&) = default ;
    DeleteApplicationAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApplicationAccessPointRequest() = default ;
    DeleteApplicationAccessPointRequest& operator=(const DeleteApplicationAccessPointRequest &) = default ;
    DeleteApplicationAccessPointRequest& operator=(DeleteApplicationAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteApplicationAccessPointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the AAP that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
