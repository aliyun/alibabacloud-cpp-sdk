// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPREQUESTSCHEMASTTLFIELD_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPREQUESTSCHEMASTTLFIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppRequestSchemasTtlField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRequestSchemasTtlField& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRequestSchemasTtlField& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ttl, ttl_);
    };
    CreateAppRequestSchemasTtlField() = default ;
    CreateAppRequestSchemasTtlField(const CreateAppRequestSchemasTtlField &) = default ;
    CreateAppRequestSchemasTtlField(CreateAppRequestSchemasTtlField &&) = default ;
    CreateAppRequestSchemasTtlField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRequestSchemasTtlField() = default ;
    CreateAppRequestSchemasTtlField& operator=(const CreateAppRequestSchemasTtlField &) = default ;
    CreateAppRequestSchemasTtlField& operator=(CreateAppRequestSchemasTtlField &&) = default ;
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
    inline CreateAppRequestSchemasTtlField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline CreateAppRequestSchemasTtlField& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The name of the document time field.
    std::shared_ptr<string> name_ = nullptr;
    // The TTL. Unit: milliseconds.
    std::shared_ptr<int64_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
