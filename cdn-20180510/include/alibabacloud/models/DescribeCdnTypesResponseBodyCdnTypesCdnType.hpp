// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNTYPESRESPONSEBODYCDNTYPESCDNTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNTYPESRESPONSEBODYCDNTYPESCDNTYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnTypesResponseBodyCdnTypesCdnType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnTypesResponseBodyCdnTypesCdnType& obj) { 
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnTypesResponseBodyCdnTypesCdnType& obj) { 
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCdnTypesResponseBodyCdnTypesCdnType() = default ;
    DescribeCdnTypesResponseBodyCdnTypesCdnType(const DescribeCdnTypesResponseBodyCdnTypesCdnType &) = default ;
    DescribeCdnTypesResponseBodyCdnTypesCdnType(DescribeCdnTypesResponseBodyCdnTypesCdnType &&) = default ;
    DescribeCdnTypesResponseBodyCdnTypesCdnType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnTypesResponseBodyCdnTypesCdnType() = default ;
    DescribeCdnTypesResponseBodyCdnTypesCdnType& operator=(const DescribeCdnTypesResponseBodyCdnTypesCdnType &) = default ;
    DescribeCdnTypesResponseBodyCdnTypesCdnType& operator=(DescribeCdnTypesResponseBodyCdnTypesCdnType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->type_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeCdnTypesResponseBodyCdnTypesCdnType& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCdnTypesResponseBodyCdnTypesCdnType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the domain name type.
    std::shared_ptr<string> desc_ = nullptr;
    // The type of the domain name.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
