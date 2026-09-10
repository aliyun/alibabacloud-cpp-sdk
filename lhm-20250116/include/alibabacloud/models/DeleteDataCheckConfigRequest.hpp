// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATACHECKCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATACHECKCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class DeleteDataCheckConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataCheckConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataCheckConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    DeleteDataCheckConfigRequest() = default ;
    DeleteDataCheckConfigRequest(const DeleteDataCheckConfigRequest &) = default ;
    DeleteDataCheckConfigRequest(DeleteDataCheckConfigRequest &&) = default ;
    DeleteDataCheckConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataCheckConfigRequest() = default ;
    DeleteDataCheckConfigRequest& operator=(const DeleteDataCheckConfigRequest &) = default ;
    DeleteDataCheckConfigRequest& operator=(DeleteDataCheckConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteDataCheckConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The configuration ID. You can obtain this ID by calling the GetDataCheckConfig operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
