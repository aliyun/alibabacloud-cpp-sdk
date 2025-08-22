// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESILENCEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESILENCEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteSilencePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSilencePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSilencePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteSilencePolicyRequest() = default ;
    DeleteSilencePolicyRequest(const DeleteSilencePolicyRequest &) = default ;
    DeleteSilencePolicyRequest(DeleteSilencePolicyRequest &&) = default ;
    DeleteSilencePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSilencePolicyRequest() = default ;
    DeleteSilencePolicyRequest& operator=(const DeleteSilencePolicyRequest &) = default ;
    DeleteSilencePolicyRequest& operator=(DeleteSilencePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteSilencePolicyRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the silence policy.
    // 
    // For more information about how to obtain the ID of a silence policy, see [ListSilencePolicies](https://help.aliyun.com/document_detail/2612383.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
