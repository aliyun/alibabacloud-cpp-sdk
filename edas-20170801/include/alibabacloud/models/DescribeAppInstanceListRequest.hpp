// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DescribeAppInstanceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppInstanceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(WithNodeInfo, withNodeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppInstanceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(WithNodeInfo, withNodeInfo_);
    };
    DescribeAppInstanceListRequest() = default ;
    DescribeAppInstanceListRequest(const DescribeAppInstanceListRequest &) = default ;
    DescribeAppInstanceListRequest(DescribeAppInstanceListRequest &&) = default ;
    DescribeAppInstanceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppInstanceListRequest() = default ;
    DescribeAppInstanceListRequest& operator=(const DescribeAppInstanceListRequest &) = default ;
    DescribeAppInstanceListRequest& operator=(DescribeAppInstanceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->withNodeInfo_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeAppInstanceListRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // withNodeInfo Field Functions 
    bool hasWithNodeInfo() const { return this->withNodeInfo_ != nullptr;};
    void deleteWithNodeInfo() { this->withNodeInfo_ = nullptr;};
    inline bool withNodeInfo() const { DARABONBA_PTR_GET_DEFAULT(withNodeInfo_, false) };
    inline DescribeAppInstanceListRequest& setWithNodeInfo(bool withNodeInfo) { DARABONBA_PTR_SET_VALUE(withNodeInfo_, withNodeInfo) };


  protected:
    // The ID of the application. You can call the ListApplication operation to query the ID of the application. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // Specifies whether to return the information about the node in which the pod resides.
    // 
    // *   `true`: returns the information about the node in which the pod resides
    // *   `false`: does not return the information about the node in which the pod resides
    std::shared_ptr<bool> withNodeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
