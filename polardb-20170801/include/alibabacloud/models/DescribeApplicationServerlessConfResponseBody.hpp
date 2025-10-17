// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSERVERLESSCONFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSERVERLESSCONFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationServerlessConfResponseBodyServerlessConfItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationServerlessConfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationServerlessConfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerlessConfItems, serverlessConfItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationServerlessConfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfItems, serverlessConfItems_);
    };
    DescribeApplicationServerlessConfResponseBody() = default ;
    DescribeApplicationServerlessConfResponseBody(const DescribeApplicationServerlessConfResponseBody &) = default ;
    DescribeApplicationServerlessConfResponseBody(DescribeApplicationServerlessConfResponseBody &&) = default ;
    DescribeApplicationServerlessConfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationServerlessConfResponseBody() = default ;
    DescribeApplicationServerlessConfResponseBody& operator=(const DescribeApplicationServerlessConfResponseBody &) = default ;
    DescribeApplicationServerlessConfResponseBody& operator=(DescribeApplicationServerlessConfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && return this->requestId_ == nullptr && return this->serverlessConfItems_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string applicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationServerlessConfResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationServerlessConfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverlessConfItems Field Functions 
    bool hasServerlessConfItems() const { return this->serverlessConfItems_ != nullptr;};
    void deleteServerlessConfItems() { this->serverlessConfItems_ = nullptr;};
    inline const vector<DescribeApplicationServerlessConfResponseBodyServerlessConfItems> & serverlessConfItems() const { DARABONBA_PTR_GET_CONST(serverlessConfItems_, vector<DescribeApplicationServerlessConfResponseBodyServerlessConfItems>) };
    inline vector<DescribeApplicationServerlessConfResponseBodyServerlessConfItems> serverlessConfItems() { DARABONBA_PTR_GET(serverlessConfItems_, vector<DescribeApplicationServerlessConfResponseBodyServerlessConfItems>) };
    inline DescribeApplicationServerlessConfResponseBody& setServerlessConfItems(const vector<DescribeApplicationServerlessConfResponseBodyServerlessConfItems> & serverlessConfItems) { DARABONBA_PTR_SET_VALUE(serverlessConfItems_, serverlessConfItems) };
    inline DescribeApplicationServerlessConfResponseBody& setServerlessConfItems(vector<DescribeApplicationServerlessConfResponseBodyServerlessConfItems> && serverlessConfItems) { DARABONBA_PTR_SET_RVALUE(serverlessConfItems_, serverlessConfItems) };


  protected:
    std::shared_ptr<string> applicationId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeApplicationServerlessConfResponseBodyServerlessConfItems>> serverlessConfItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
