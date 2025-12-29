// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLUSTERNODEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLUSTERNODEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DeleteClusterNodepoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClusterNodepoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(force, force_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClusterNodepoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(force, force_);
    };
    DeleteClusterNodepoolRequest() = default ;
    DeleteClusterNodepoolRequest(const DeleteClusterNodepoolRequest &) = default ;
    DeleteClusterNodepoolRequest(DeleteClusterNodepoolRequest &&) = default ;
    DeleteClusterNodepoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClusterNodepoolRequest() = default ;
    DeleteClusterNodepoolRequest& operator=(const DeleteClusterNodepoolRequest &) = default ;
    DeleteClusterNodepoolRequest& operator=(DeleteClusterNodepoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteClusterNodepoolRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


  protected:
    // Specifies whether to forcefully delete the node pool.
    shared_ptr<bool> force_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
