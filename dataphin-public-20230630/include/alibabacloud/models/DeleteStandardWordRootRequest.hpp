// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESTANDARDWORDROOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESTANDARDWORDROOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteStandardWordRootRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteStandardWordRootRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteStandardWordRootRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteStandardWordRootRequest() = default ;
    DeleteStandardWordRootRequest(const DeleteStandardWordRootRequest &) = default ;
    DeleteStandardWordRootRequest(DeleteStandardWordRootRequest &&) = default ;
    DeleteStandardWordRootRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteStandardWordRootRequest() = default ;
    DeleteStandardWordRootRequest& operator=(const DeleteStandardWordRootRequest &) = default ;
    DeleteStandardWordRootRequest& operator=(DeleteStandardWordRootRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->opTenantId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteStandardWordRootRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteStandardWordRootRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
