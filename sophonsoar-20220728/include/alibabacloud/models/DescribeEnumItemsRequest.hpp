// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENUMITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENUMITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeEnumItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnumItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnumType, enumType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnumItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnumType, enumType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeEnumItemsRequest() = default ;
    DescribeEnumItemsRequest(const DescribeEnumItemsRequest &) = default ;
    DescribeEnumItemsRequest(DescribeEnumItemsRequest &&) = default ;
    DescribeEnumItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnumItemsRequest() = default ;
    DescribeEnumItemsRequest& operator=(const DescribeEnumItemsRequest &) = default ;
    DescribeEnumItemsRequest& operator=(DescribeEnumItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enumType_ == nullptr
        && return this->lang_ == nullptr; };
    // enumType Field Functions 
    bool hasEnumType() const { return this->enumType_ != nullptr;};
    void deleteEnumType() { this->enumType_ = nullptr;};
    inline string enumType() const { DARABONBA_PTR_GET_DEFAULT(enumType_, "") };
    inline DescribeEnumItemsRequest& setEnumType(string enumType) { DARABONBA_PTR_SET_VALUE(enumType_, enumType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEnumItemsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The type of the enumeration item. Valid values:
    // 
    // *   **process**: scenarios
    // 
    // This parameter is required.
    std::shared_ptr<string> enumType_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh_cn**: Simplified Chinese (default)
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
