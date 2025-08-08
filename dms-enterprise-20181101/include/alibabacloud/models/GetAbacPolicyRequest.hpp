// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETABACPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETABACPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetAbacPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAbacPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbacPolicyId, abacPolicyId_);
      DARABONBA_PTR_TO_JSON(AbacPolicyName, abacPolicyName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAbacPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbacPolicyId, abacPolicyId_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyName, abacPolicyName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    GetAbacPolicyRequest() = default ;
    GetAbacPolicyRequest(const GetAbacPolicyRequest &) = default ;
    GetAbacPolicyRequest(GetAbacPolicyRequest &&) = default ;
    GetAbacPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAbacPolicyRequest() = default ;
    GetAbacPolicyRequest& operator=(const GetAbacPolicyRequest &) = default ;
    GetAbacPolicyRequest& operator=(GetAbacPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abacPolicyId_ != nullptr
        && this->abacPolicyName_ != nullptr && this->tid_ != nullptr; };
    // abacPolicyId Field Functions 
    bool hasAbacPolicyId() const { return this->abacPolicyId_ != nullptr;};
    void deleteAbacPolicyId() { this->abacPolicyId_ = nullptr;};
    inline int64_t abacPolicyId() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyId_, 0L) };
    inline GetAbacPolicyRequest& setAbacPolicyId(int64_t abacPolicyId) { DARABONBA_PTR_SET_VALUE(abacPolicyId_, abacPolicyId) };


    // abacPolicyName Field Functions 
    bool hasAbacPolicyName() const { return this->abacPolicyName_ != nullptr;};
    void deleteAbacPolicyName() { this->abacPolicyName_ = nullptr;};
    inline string abacPolicyName() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyName_, "") };
    inline GetAbacPolicyRequest& setAbacPolicyName(string abacPolicyName) { DARABONBA_PTR_SET_VALUE(abacPolicyName_, abacPolicyName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GetAbacPolicyRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    std::shared_ptr<int64_t> abacPolicyId_ = nullptr;
    std::shared_ptr<string> abacPolicyName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
