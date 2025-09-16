// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESULTDATABASESFUNCTIONSVALUE_HPP_
#define ALIBABACLOUD_MODELS_RESULTDATABASESFUNCTIONSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ResultDatabasesFunctionsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResultDatabasesFunctionsValue& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(signatures, signatures_);
    };
    friend void from_json(const Darabonba::Json& j, ResultDatabasesFunctionsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(signatures, signatures_);
    };
    ResultDatabasesFunctionsValue() = default ;
    ResultDatabasesFunctionsValue(const ResultDatabasesFunctionsValue &) = default ;
    ResultDatabasesFunctionsValue(ResultDatabasesFunctionsValue &&) = default ;
    ResultDatabasesFunctionsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResultDatabasesFunctionsValue() = default ;
    ResultDatabasesFunctionsValue& operator=(const ResultDatabasesFunctionsValue &) = default ;
    ResultDatabasesFunctionsValue& operator=(ResultDatabasesFunctionsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->signatures_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ResultDatabasesFunctionsValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // signatures Field Functions 
    bool hasSignatures() const { return this->signatures_ != nullptr;};
    void deleteSignatures() { this->signatures_ = nullptr;};
    inline string signatures() const { DARABONBA_PTR_GET_DEFAULT(signatures_, "") };
    inline ResultDatabasesFunctionsValue& setSignatures(string signatures) { DARABONBA_PTR_SET_VALUE(signatures_, signatures) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> signatures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
