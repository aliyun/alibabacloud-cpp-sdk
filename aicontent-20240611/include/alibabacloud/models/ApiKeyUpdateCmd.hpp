// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIKEYUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_APIKEYUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ApiKeyUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiKeyUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ApiKeyUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ApiKeyUpdateCmd() = default ;
    ApiKeyUpdateCmd(const ApiKeyUpdateCmd &) = default ;
    ApiKeyUpdateCmd(ApiKeyUpdateCmd &&) = default ;
    ApiKeyUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiKeyUpdateCmd() = default ;
    ApiKeyUpdateCmd& operator=(const ApiKeyUpdateCmd &) = default ;
    ApiKeyUpdateCmd& operator=(ApiKeyUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->status_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApiKeyUpdateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApiKeyUpdateCmd& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
