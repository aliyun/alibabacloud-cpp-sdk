// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYCUSTOMFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYCUSTOMFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetUserResponseBodyCustomFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyCustomFields& obj) { 
      DARABONBA_PTR_TO_JSON(fieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(fieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyCustomFields& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(fieldValue, fieldValue_);
    };
    GetUserResponseBodyCustomFields() = default ;
    GetUserResponseBodyCustomFields(const GetUserResponseBodyCustomFields &) = default ;
    GetUserResponseBodyCustomFields(GetUserResponseBodyCustomFields &&) = default ;
    GetUserResponseBodyCustomFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyCustomFields() = default ;
    GetUserResponseBodyCustomFields& operator=(const GetUserResponseBodyCustomFields &) = default ;
    GetUserResponseBodyCustomFields& operator=(GetUserResponseBodyCustomFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->fieldValue_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline GetUserResponseBodyCustomFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline GetUserResponseBodyCustomFields& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


  protected:
    // The name of the extended field.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The value of the extended field. Field values are returned as strings regardless of the data types of the fields. For example, true or false is returned for a Boolean field.
    std::shared_ptr<string> fieldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
