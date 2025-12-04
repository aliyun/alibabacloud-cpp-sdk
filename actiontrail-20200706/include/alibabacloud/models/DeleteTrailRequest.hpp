// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DeleteTrailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTrailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTrailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteTrailRequest() = default ;
    DeleteTrailRequest(const DeleteTrailRequest &) = default ;
    DeleteTrailRequest(DeleteTrailRequest &&) = default ;
    DeleteTrailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTrailRequest() = default ;
    DeleteTrailRequest& operator=(const DeleteTrailRequest &) = default ;
    DeleteTrailRequest& operator=(DeleteTrailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteTrailRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the trail that you want to delete.
    // 
    // The name must be 6 to 36 characters in length. The name must start with a lowercase letter and can contain lowercase letters, digits, hyphens (-), and underscores (_).
    // 
    // > The name must be unique within your Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
