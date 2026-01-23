// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYLEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYLEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSecurityLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetSecurityLevelRequest() = default ;
    GetSecurityLevelRequest(const GetSecurityLevelRequest &) = default ;
    GetSecurityLevelRequest(GetSecurityLevelRequest &&) = default ;
    GetSecurityLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityLevelRequest() = default ;
    GetSecurityLevelRequest& operator=(const GetSecurityLevelRequest &) = default ;
    GetSecurityLevelRequest& operator=(GetSecurityLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && this->opTenantId_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int64_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0L) };
    inline GetSecurityLevelRequest& setIndex(int64_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetSecurityLevelRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> index_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
