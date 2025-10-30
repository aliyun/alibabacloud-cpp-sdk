// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZUNITREQUESTCREATECOMMANDBIZUNITACCOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZUNITREQUESTCREATECOMMANDBIZUNITACCOUNTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateBizUnitRequestCreateCommandBizUnitAccountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizUnitRequestCreateCommandBizUnitAccountList& obj) { 
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizUnitRequestCreateCommandBizUnitAccountList& obj) { 
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateBizUnitRequestCreateCommandBizUnitAccountList() = default ;
    CreateBizUnitRequestCreateCommandBizUnitAccountList(const CreateBizUnitRequestCreateCommandBizUnitAccountList &) = default ;
    CreateBizUnitRequestCreateCommandBizUnitAccountList(CreateBizUnitRequestCreateCommandBizUnitAccountList &&) = default ;
    CreateBizUnitRequestCreateCommandBizUnitAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizUnitRequestCreateCommandBizUnitAccountList() = default ;
    CreateBizUnitRequestCreateCommandBizUnitAccountList& operator=(const CreateBizUnitRequestCreateCommandBizUnitAccountList &) = default ;
    CreateBizUnitRequestCreateCommandBizUnitAccountList& operator=(CreateBizUnitRequestCreateCommandBizUnitAccountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userId_ == nullptr; };
    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateBizUnitRequestCreateCommandBizUnitAccountList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
