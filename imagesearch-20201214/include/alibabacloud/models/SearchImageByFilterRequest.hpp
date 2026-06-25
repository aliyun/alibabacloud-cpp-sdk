// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEBYFILTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEBYFILTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class SearchImageByFilterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageByFilterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(Start, start_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageByFilterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
    };
    SearchImageByFilterRequest() = default ;
    SearchImageByFilterRequest(const SearchImageByFilterRequest &) = default ;
    SearchImageByFilterRequest(SearchImageByFilterRequest &&) = default ;
    SearchImageByFilterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageByFilterRequest() = default ;
    SearchImageByFilterRequest& operator=(const SearchImageByFilterRequest &) = default ;
    SearchImageByFilterRequest& operator=(SearchImageByFilterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->instanceName_ == nullptr && this->num_ == nullptr && this->start_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline SearchImageByFilterRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline SearchImageByFilterRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline SearchImageByFilterRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int32_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0) };
    inline SearchImageByFilterRequest& setStart(int32_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


  protected:
    // The filter conditions. The operators supported by int_attr include in, not in, greater than (>), greater than or equal to (>=), less than (<), less than or equal to (<=), and equal to (=). The operators supported by str_attr include in, not in, equal to (=), and not equal to (!=). Multiple conditions can be connected by AND and OR.
    // Examples:
    // - int_attr >= 100.
    // - str_attr != "value1".
    // - int_attr = 1000 AND str_attr = "value1".
    // 
    // >A maximum of 4,096 characters are supported.
    // 
    // This parameter is required.
    shared_ptr<string> filter_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, you can log on to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance.
    // If you have not purchased an Image Search instance, see [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. Make sure that you can distinguish between them.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The number of results to return. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> num_ {};
    // The start position of the results to return. Valid values: 0 to 499. Default value: 0.
    shared_ptr<int32_t> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
