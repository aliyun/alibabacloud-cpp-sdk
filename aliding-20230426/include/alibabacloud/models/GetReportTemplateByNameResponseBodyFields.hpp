// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODYFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETREPORTTEMPLATEBYNAMERESPONSEBODYFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetReportTemplateByNameResponseBodyFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReportTemplateByNameResponseBodyFields& obj) { 
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetReportTemplateByNameResponseBodyFields& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetReportTemplateByNameResponseBodyFields() = default ;
    GetReportTemplateByNameResponseBodyFields(const GetReportTemplateByNameResponseBodyFields &) = default ;
    GetReportTemplateByNameResponseBodyFields(GetReportTemplateByNameResponseBodyFields &&) = default ;
    GetReportTemplateByNameResponseBodyFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReportTemplateByNameResponseBodyFields() = default ;
    GetReportTemplateByNameResponseBodyFields& operator=(const GetReportTemplateByNameResponseBodyFields &) = default ;
    GetReportTemplateByNameResponseBodyFields& operator=(GetReportTemplateByNameResponseBodyFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldName_ == nullptr
        && return this->sort_ == nullptr && return this->type_ == nullptr; };
    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline GetReportTemplateByNameResponseBodyFields& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline int64_t sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0L) };
    inline GetReportTemplateByNameResponseBodyFields& setSort(int64_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int64_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
    inline GetReportTemplateByNameResponseBodyFields& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<int64_t> sort_ = nullptr;
    std::shared_ptr<int64_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
