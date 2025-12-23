// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSCHEMATTLFIELD_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSCHEMATTLFIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppResponseBodyResultSchemaTtlField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResultSchemaTtlField& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResultSchemaTtlField& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ttl, ttl_);
    };
    CreateAppResponseBodyResultSchemaTtlField() = default ;
    CreateAppResponseBodyResultSchemaTtlField(const CreateAppResponseBodyResultSchemaTtlField &) = default ;
    CreateAppResponseBodyResultSchemaTtlField(CreateAppResponseBodyResultSchemaTtlField &&) = default ;
    CreateAppResponseBodyResultSchemaTtlField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResultSchemaTtlField() = default ;
    CreateAppResponseBodyResultSchemaTtlField& operator=(const CreateAppResponseBodyResultSchemaTtlField &) = default ;
    CreateAppResponseBodyResultSchemaTtlField& operator=(CreateAppResponseBodyResultSchemaTtlField &&) = default ;
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
    inline CreateAppResponseBodyResultSchemaTtlField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline CreateAppResponseBodyResultSchemaTtlField& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


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
