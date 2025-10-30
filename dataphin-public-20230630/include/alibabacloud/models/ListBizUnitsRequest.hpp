// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZUNITSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZUNITSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListBizUnitsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizUnitsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizUnitsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListBizUnitsRequest() = default ;
    ListBizUnitsRequest(const ListBizUnitsRequest &) = default ;
    ListBizUnitsRequest(ListBizUnitsRequest &&) = default ;
    ListBizUnitsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizUnitsRequest() = default ;
    ListBizUnitsRequest& operator=(const ListBizUnitsRequest &) = default ;
    ListBizUnitsRequest& operator=(ListBizUnitsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListBizUnitsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
