// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMACCESSSTRATEGIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmAccessStrategiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmAccessStrategiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmAccessStrategiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeGtmAccessStrategiesRequest() = default ;
    DescribeGtmAccessStrategiesRequest(const DescribeGtmAccessStrategiesRequest &) = default ;
    DescribeGtmAccessStrategiesRequest(DescribeGtmAccessStrategiesRequest &&) = default ;
    DescribeGtmAccessStrategiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmAccessStrategiesRequest() = default ;
    DescribeGtmAccessStrategiesRequest& operator=(const DescribeGtmAccessStrategiesRequest &) = default ;
    DescribeGtmAccessStrategiesRequest& operator=(DescribeGtmAccessStrategiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeGtmAccessStrategiesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeGtmAccessStrategiesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeGtmAccessStrategiesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeGtmAccessStrategiesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the GTM instance whose access policies you want to query.
    shared_ptr<string> instanceId_ {};
    // The language used by the user.
    shared_ptr<string> lang_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
