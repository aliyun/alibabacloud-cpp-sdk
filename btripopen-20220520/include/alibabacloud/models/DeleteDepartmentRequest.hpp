// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDEPARTMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDEPARTMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class DeleteDepartmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDepartmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(out_dept_id, outDeptId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDepartmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(out_dept_id, outDeptId_);
    };
    DeleteDepartmentRequest() = default ;
    DeleteDepartmentRequest(const DeleteDepartmentRequest &) = default ;
    DeleteDepartmentRequest(DeleteDepartmentRequest &&) = default ;
    DeleteDepartmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDepartmentRequest() = default ;
    DeleteDepartmentRequest& operator=(const DeleteDepartmentRequest &) = default ;
    DeleteDepartmentRequest& operator=(DeleteDepartmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outDeptId_ != nullptr; };
    // outDeptId Field Functions 
    bool hasOutDeptId() const { return this->outDeptId_ != nullptr;};
    void deleteOutDeptId() { this->outDeptId_ = nullptr;};
    inline string outDeptId() const { DARABONBA_PTR_GET_DEFAULT(outDeptId_, "") };
    inline DeleteDepartmentRequest& setOutDeptId(string outDeptId) { DARABONBA_PTR_SET_VALUE(outDeptId_, outDeptId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> outDeptId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
