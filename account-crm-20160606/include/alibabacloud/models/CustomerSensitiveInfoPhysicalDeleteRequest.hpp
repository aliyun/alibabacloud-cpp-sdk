// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERSENSITIVEINFOPHYSICALDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERSENSITIVEINFOPHYSICALDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class CustomerSensitiveInfoPhysicalDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerSensitiveInfoPhysicalDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerSensitiveInfoPhysicalDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    CustomerSensitiveInfoPhysicalDeleteRequest() = default ;
    CustomerSensitiveInfoPhysicalDeleteRequest(const CustomerSensitiveInfoPhysicalDeleteRequest &) = default ;
    CustomerSensitiveInfoPhysicalDeleteRequest(CustomerSensitiveInfoPhysicalDeleteRequest &&) = default ;
    CustomerSensitiveInfoPhysicalDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerSensitiveInfoPhysicalDeleteRequest() = default ;
    CustomerSensitiveInfoPhysicalDeleteRequest& operator=(const CustomerSensitiveInfoPhysicalDeleteRequest &) = default ;
    CustomerSensitiveInfoPhysicalDeleteRequest& operator=(CustomerSensitiveInfoPhysicalDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uid_ == nullptr; };
    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline CustomerSensitiveInfoPhysicalDeleteRequest& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // This parameter is required.
    shared_ptr<string> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
