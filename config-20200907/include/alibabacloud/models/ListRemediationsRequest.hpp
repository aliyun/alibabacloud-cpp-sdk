// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleIds, configRuleIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleIds, configRuleIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListRemediationsRequest() = default ;
    ListRemediationsRequest(const ListRemediationsRequest &) = default ;
    ListRemediationsRequest(ListRemediationsRequest &&) = default ;
    ListRemediationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationsRequest() = default ;
    ListRemediationsRequest& operator=(const ListRemediationsRequest &) = default ;
    ListRemediationsRequest& operator=(ListRemediationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleIds_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // configRuleIds Field Functions 
    bool hasConfigRuleIds() const { return this->configRuleIds_ != nullptr;};
    void deleteConfigRuleIds() { this->configRuleIds_ = nullptr;};
    inline string getConfigRuleIds() const { DARABONBA_PTR_GET_DEFAULT(configRuleIds_, "") };
    inline ListRemediationsRequest& setConfigRuleIds(string configRuleIds) { DARABONBA_PTR_SET_VALUE(configRuleIds_, configRuleIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListRemediationsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListRemediationsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The rule IDs. Separate multiple rule IDs with commas (,).
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/169607.html).
    shared_ptr<string> configRuleIds_ {};
    // The page number. Pages start from page 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 50.
    shared_ptr<int64_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
