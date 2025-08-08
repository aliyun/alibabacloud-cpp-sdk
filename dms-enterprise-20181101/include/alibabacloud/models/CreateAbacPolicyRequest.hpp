// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEABACPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEABACPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateAbacPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAbacPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AbacPolicyContent, abacPolicyContent_);
      DARABONBA_PTR_TO_JSON(AbacPolicyDesc, abacPolicyDesc_);
      DARABONBA_PTR_TO_JSON(AbacPolicyName, abacPolicyName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAbacPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AbacPolicyContent, abacPolicyContent_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyDesc, abacPolicyDesc_);
      DARABONBA_PTR_FROM_JSON(AbacPolicyName, abacPolicyName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateAbacPolicyRequest() = default ;
    CreateAbacPolicyRequest(const CreateAbacPolicyRequest &) = default ;
    CreateAbacPolicyRequest(CreateAbacPolicyRequest &&) = default ;
    CreateAbacPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAbacPolicyRequest() = default ;
    CreateAbacPolicyRequest& operator=(const CreateAbacPolicyRequest &) = default ;
    CreateAbacPolicyRequest& operator=(CreateAbacPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->abacPolicyContent_ != nullptr
        && this->abacPolicyDesc_ != nullptr && this->abacPolicyName_ != nullptr && this->tid_ != nullptr; };
    // abacPolicyContent Field Functions 
    bool hasAbacPolicyContent() const { return this->abacPolicyContent_ != nullptr;};
    void deleteAbacPolicyContent() { this->abacPolicyContent_ = nullptr;};
    inline string abacPolicyContent() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyContent_, "") };
    inline CreateAbacPolicyRequest& setAbacPolicyContent(string abacPolicyContent) { DARABONBA_PTR_SET_VALUE(abacPolicyContent_, abacPolicyContent) };


    // abacPolicyDesc Field Functions 
    bool hasAbacPolicyDesc() const { return this->abacPolicyDesc_ != nullptr;};
    void deleteAbacPolicyDesc() { this->abacPolicyDesc_ = nullptr;};
    inline string abacPolicyDesc() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyDesc_, "") };
    inline CreateAbacPolicyRequest& setAbacPolicyDesc(string abacPolicyDesc) { DARABONBA_PTR_SET_VALUE(abacPolicyDesc_, abacPolicyDesc) };


    // abacPolicyName Field Functions 
    bool hasAbacPolicyName() const { return this->abacPolicyName_ != nullptr;};
    void deleteAbacPolicyName() { this->abacPolicyName_ = nullptr;};
    inline string abacPolicyName() const { DARABONBA_PTR_GET_DEFAULT(abacPolicyName_, "") };
    inline CreateAbacPolicyRequest& setAbacPolicyName(string abacPolicyName) { DARABONBA_PTR_SET_VALUE(abacPolicyName_, abacPolicyName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateAbacPolicyRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> abacPolicyContent_ = nullptr;
    std::shared_ptr<string> abacPolicyDesc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> abacPolicyName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
