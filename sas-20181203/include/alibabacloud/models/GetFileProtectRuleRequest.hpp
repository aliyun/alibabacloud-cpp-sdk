// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEPROTECTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEPROTECTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetFileProtectRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileProtectRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileProtectRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetFileProtectRuleRequest() = default ;
    GetFileProtectRuleRequest(const GetFileProtectRuleRequest &) = default ;
    GetFileProtectRuleRequest(GetFileProtectRuleRequest &&) = default ;
    GetFileProtectRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileProtectRuleRequest() = default ;
    GetFileProtectRuleRequest& operator=(const GetFileProtectRuleRequest &) = default ;
    GetFileProtectRuleRequest& operator=(GetFileProtectRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetFileProtectRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the rule.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
