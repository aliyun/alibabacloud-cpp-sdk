// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLOCKEDREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLOCKEDREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeBlockedRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlockedRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlockedRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
    };
    DescribeBlockedRegionsRequest() = default ;
    DescribeBlockedRegionsRequest(const DescribeBlockedRegionsRequest &) = default ;
    DescribeBlockedRegionsRequest(DescribeBlockedRegionsRequest &&) = default ;
    DescribeBlockedRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlockedRegionsRequest() = default ;
    DescribeBlockedRegionsRequest& operator=(const DescribeBlockedRegionsRequest &) = default ;
    DescribeBlockedRegionsRequest& operator=(DescribeBlockedRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeBlockedRegionsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


  protected:
    // The language. Valid values:
    // 
    // *   **zh**: simplified Chinese
    // *   **en**: English
    // *   **jp**: Japanese
    // 
    // This parameter is required.
    std::shared_ptr<string> language_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
