// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERSENSITIVEINFOLOGICALDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERSENSITIVEINFOLOGICALDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class CustomerSensitiveInfoLogicalDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerSensitiveInfoLogicalDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerSensitiveInfoLogicalDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    CustomerSensitiveInfoLogicalDeleteRequest() = default ;
    CustomerSensitiveInfoLogicalDeleteRequest(const CustomerSensitiveInfoLogicalDeleteRequest &) = default ;
    CustomerSensitiveInfoLogicalDeleteRequest(CustomerSensitiveInfoLogicalDeleteRequest &&) = default ;
    CustomerSensitiveInfoLogicalDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerSensitiveInfoLogicalDeleteRequest() = default ;
    CustomerSensitiveInfoLogicalDeleteRequest& operator=(const CustomerSensitiveInfoLogicalDeleteRequest &) = default ;
    CustomerSensitiveInfoLogicalDeleteRequest& operator=(CustomerSensitiveInfoLogicalDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uid_ == nullptr; };
    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline CustomerSensitiveInfoLogicalDeleteRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // This parameter is required.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
