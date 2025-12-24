// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(QueryKey, queryKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(QueryKey, queryKey_);
    };
    DescribeFieldRequest() = default ;
    DescribeFieldRequest(const DescribeFieldRequest &) = default ;
    DescribeFieldRequest(DescribeFieldRequest &&) = default ;
    DescribeFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFieldRequest() = default ;
    DescribeFieldRequest& operator=(const DescribeFieldRequest &) = default ;
    DescribeFieldRequest& operator=(DescribeFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->queryKey_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeFieldRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // queryKey Field Functions 
    bool hasQueryKey() const { return this->queryKey_ != nullptr;};
    void deleteQueryKey() { this->queryKey_ = nullptr;};
    inline string queryKey() const { DARABONBA_PTR_GET_DEFAULT(queryKey_, "") };
    inline DescribeFieldRequest& setQueryKey(string queryKey) { DARABONBA_PTR_SET_VALUE(queryKey_, queryKey) };


  protected:
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The key of the global configuration. Valid values:
    // 
    // *   **soar_filed_tags**: queries the input template of the playbook.
    // 
    // This parameter is required.
    std::shared_ptr<string> queryKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
