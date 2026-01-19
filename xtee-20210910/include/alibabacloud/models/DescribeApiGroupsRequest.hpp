// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeApiGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(apiRegionId, apiRegionId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(apiRegionId, apiRegionId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeApiGroupsRequest() = default ;
    DescribeApiGroupsRequest(const DescribeApiGroupsRequest &) = default ;
    DescribeApiGroupsRequest(DescribeApiGroupsRequest &&) = default ;
    DescribeApiGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupsRequest() = default ;
    DescribeApiGroupsRequest& operator=(const DescribeApiGroupsRequest &) = default ;
    DescribeApiGroupsRequest& operator=(DescribeApiGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->apiRegionId_ == nullptr && this->regId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeApiGroupsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // apiRegionId Field Functions 
    bool hasApiRegionId() const { return this->apiRegionId_ != nullptr;};
    void deleteApiRegionId() { this->apiRegionId_ = nullptr;};
    inline string getApiRegionId() const { DARABONBA_PTR_GET_DEFAULT(apiRegionId_, "") };
    inline DescribeApiGroupsRequest& setApiRegionId(string apiRegionId) { DARABONBA_PTR_SET_VALUE(apiRegionId_, apiRegionId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeApiGroupsRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Set the language type for requests and received messages, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Region ID.
    // 
    // This parameter is required.
    shared_ptr<string> apiRegionId_ {};
    // Region code
    shared_ptr<string> regId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
