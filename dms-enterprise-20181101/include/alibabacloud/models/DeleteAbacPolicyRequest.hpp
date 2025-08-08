// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEABACPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEABACPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DeleteAbacPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAbacPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbacPolicyId, abacPolicyId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAbacPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbacPolicyId, abacPolicyId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    DeleteAbacPolicyRequest() = default ;
    DeleteAbacPolicyRequest(const DeleteAbacPolicyRequest &) = default ;
    DeleteAbacPolicyRequest(DeleteAbacPolicyRequest &&) = default ;
    DeleteAbacPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAbacPolicyRequest() = default ;
    DeleteAbacPolicyRequest& operator=(const DeleteAbacPolicyRequest &) = default ;
    DeleteAbacPolicyRequest& operator=(DeleteAbacPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abacPolicyId_ != nullptr
        && this->tid_ != nullptr; };
    // abacPolicyId Field Functions 
    bool hasAbacPolicyId() const { return this->abacPolicyId_ != nullptr;};
    void deleteAbacPolicyId() { this->abacPolicyId_ = nullptr;};
    inline int64_t abacPolicyId() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyId_, 0L) };
    inline DeleteAbacPolicyRequest& setAbacPolicyId(int64_t abacPolicyId) { DARABONBA_PTR_SET_VALUE(abacPolicyId_, abacPolicyId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline DeleteAbacPolicyRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> abacPolicyId_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
