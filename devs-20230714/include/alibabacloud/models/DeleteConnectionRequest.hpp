// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeleteConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    DeleteConnectionRequest() = default ;
    DeleteConnectionRequest(const DeleteConnectionRequest &) = default ;
    DeleteConnectionRequest(DeleteConnectionRequest &&) = default ;
    DeleteConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConnectionRequest() = default ;
    DeleteConnectionRequest& operator=(const DeleteConnectionRequest &) = default ;
    DeleteConnectionRequest& operator=(DeleteConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->force_ != nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteConnectionRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    std::shared_ptr<bool> force_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
