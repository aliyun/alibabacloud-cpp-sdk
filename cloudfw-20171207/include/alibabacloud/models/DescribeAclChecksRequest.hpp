// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLCHECKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAclChecksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAclChecksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAclChecksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeAclChecksRequest() = default ;
    DescribeAclChecksRequest(const DescribeAclChecksRequest &) = default ;
    DescribeAclChecksRequest(DescribeAclChecksRequest &&) = default ;
    DescribeAclChecksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAclChecksRequest() = default ;
    DescribeAclChecksRequest& operator=(const DescribeAclChecksRequest &) = default ;
    DescribeAclChecksRequest& operator=(DescribeAclChecksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclType_ == nullptr
        && this->lang_ == nullptr; };
    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeAclChecksRequest& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAclChecksRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is required.
    shared_ptr<string> aclType_ {};
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
