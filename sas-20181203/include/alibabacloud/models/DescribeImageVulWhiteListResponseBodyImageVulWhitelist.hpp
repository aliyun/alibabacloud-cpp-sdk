// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULWHITELISTRESPONSEBODYIMAGEVULWHITELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEVULWHITELISTRESPONSEBODYIMAGEVULWHITELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageVulWhiteListResponseBodyImageVulWhitelist : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageVulWhiteListResponseBodyImageVulWhitelist& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageVulWhiteListResponseBodyImageVulWhitelist& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeImageVulWhiteListResponseBodyImageVulWhitelist() = default ;
    DescribeImageVulWhiteListResponseBodyImageVulWhitelist(const DescribeImageVulWhiteListResponseBodyImageVulWhitelist &) = default ;
    DescribeImageVulWhiteListResponseBodyImageVulWhitelist(DescribeImageVulWhiteListResponseBodyImageVulWhitelist &&) = default ;
    DescribeImageVulWhiteListResponseBodyImageVulWhitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageVulWhiteListResponseBodyImageVulWhitelist() = default ;
    DescribeImageVulWhiteListResponseBodyImageVulWhitelist& operator=(const DescribeImageVulWhiteListResponseBodyImageVulWhitelist &) = default ;
    DescribeImageVulWhiteListResponseBodyImageVulWhitelist& operator=(DescribeImageVulWhiteListResponseBodyImageVulWhitelist &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->reason_ == nullptr && return this->target_ == nullptr && return this->type_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeImageVulWhiteListResponseBodyImageVulWhitelist& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeImageVulWhiteListResponseBodyImageVulWhitelist& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeImageVulWhiteListResponseBodyImageVulWhitelist& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeImageVulWhiteListResponseBodyImageVulWhitelist& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DescribeImageVulWhiteListResponseBodyImageVulWhitelist& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageVulWhiteListResponseBodyImageVulWhitelist& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The alias of the vulnerability that is specified in Common Vulnerabilities and Exposures (CVE).
    std::shared_ptr<string> aliasName_ = nullptr;
    // The primary key ID of the vulnerability.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the vulnerability.
    std::shared_ptr<string> name_ = nullptr;
    // The reason why the vulnerability is added to the whitelist.
    std::shared_ptr<string> reason_ = nullptr;
    // The object on which the query is performed. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **type**: the object type. The value is fixed to repo.
    // *   **target**: the object content. The value is in the Namespace/Image repository format.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: system vulnerability
    // *   **sca**: application vulnerability
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
