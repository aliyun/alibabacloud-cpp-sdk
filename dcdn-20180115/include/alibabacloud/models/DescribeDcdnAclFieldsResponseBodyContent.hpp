// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNACLFIELDSRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNACLFIELDSRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnAclFieldsResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnAclFieldsResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnAclFieldsResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
    };
    DescribeDcdnAclFieldsResponseBodyContent() = default ;
    DescribeDcdnAclFieldsResponseBodyContent(const DescribeDcdnAclFieldsResponseBodyContent &) = default ;
    DescribeDcdnAclFieldsResponseBodyContent(DescribeDcdnAclFieldsResponseBodyContent &&) = default ;
    DescribeDcdnAclFieldsResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnAclFieldsResponseBodyContent() = default ;
    DescribeDcdnAclFieldsResponseBodyContent& operator=(const DescribeDcdnAclFieldsResponseBodyContent &) = default ;
    DescribeDcdnAclFieldsResponseBodyContent& operator=(DescribeDcdnAclFieldsResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string fields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline DescribeDcdnAclFieldsResponseBodyContent& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


  protected:
    // The rules and policies that were configured. The JSON string is decoded.
    std::shared_ptr<string> fields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
