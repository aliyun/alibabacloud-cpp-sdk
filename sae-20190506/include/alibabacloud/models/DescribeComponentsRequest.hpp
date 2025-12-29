// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPONENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeComponentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComponentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComponentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeComponentsRequest() = default ;
    DescribeComponentsRequest(const DescribeComponentsRequest &) = default ;
    DescribeComponentsRequest(DescribeComponentsRequest &&) = default ;
    DescribeComponentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComponentsRequest() = default ;
    DescribeComponentsRequest& operator=(const DescribeComponentsRequest &) = default ;
    DescribeComponentsRequest& operator=(DescribeComponentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->type_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeComponentsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeComponentsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The application ID.
    shared_ptr<string> appId_ {};
    // The type of the supported components. Valid values:
    // 
    // *   **TOMCAT**
    // *   **JDK**
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
