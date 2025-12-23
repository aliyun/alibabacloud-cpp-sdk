// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTSCHEMATTLFIELD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYRESULTSCHEMATTLFIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeAppsResponseBodyResultSchemaTtlField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyResultSchemaTtlField& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyResultSchemaTtlField& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ttl, ttl_);
    };
    DescribeAppsResponseBodyResultSchemaTtlField() = default ;
    DescribeAppsResponseBodyResultSchemaTtlField(const DescribeAppsResponseBodyResultSchemaTtlField &) = default ;
    DescribeAppsResponseBodyResultSchemaTtlField(DescribeAppsResponseBodyResultSchemaTtlField &&) = default ;
    DescribeAppsResponseBodyResultSchemaTtlField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyResultSchemaTtlField() = default ;
    DescribeAppsResponseBodyResultSchemaTtlField& operator=(const DescribeAppsResponseBodyResultSchemaTtlField &) = default ;
    DescribeAppsResponseBodyResultSchemaTtlField& operator=(DescribeAppsResponseBodyResultSchemaTtlField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->ttl_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAppsResponseBodyResultSchemaTtlField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline DescribeAppsResponseBodyResultSchemaTtlField& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The document clearing field.
    std::shared_ptr<string> name_ = nullptr;
    // The TTL. Unit: milliseconds.
    std::shared_ptr<int64_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
