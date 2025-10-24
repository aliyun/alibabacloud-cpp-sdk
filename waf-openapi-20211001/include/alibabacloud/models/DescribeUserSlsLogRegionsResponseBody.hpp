// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERSLSLOGREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERSLSLOGREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserSlsLogRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserSlsLogRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogRegions, logRegions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserSlsLogRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogRegions, logRegions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserSlsLogRegionsResponseBody() = default ;
    DescribeUserSlsLogRegionsResponseBody(const DescribeUserSlsLogRegionsResponseBody &) = default ;
    DescribeUserSlsLogRegionsResponseBody(DescribeUserSlsLogRegionsResponseBody &&) = default ;
    DescribeUserSlsLogRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserSlsLogRegionsResponseBody() = default ;
    DescribeUserSlsLogRegionsResponseBody& operator=(const DescribeUserSlsLogRegionsResponseBody &) = default ;
    DescribeUserSlsLogRegionsResponseBody& operator=(DescribeUserSlsLogRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logRegions_ == nullptr
        && return this->requestId_ == nullptr; };
    // logRegions Field Functions 
    bool hasLogRegions() const { return this->logRegions_ != nullptr;};
    void deleteLogRegions() { this->logRegions_ = nullptr;};
    inline const vector<string> & logRegions() const { DARABONBA_PTR_GET_CONST(logRegions_, vector<string>) };
    inline vector<string> logRegions() { DARABONBA_PTR_GET(logRegions_, vector<string>) };
    inline DescribeUserSlsLogRegionsResponseBody& setLogRegions(const vector<string> & logRegions) { DARABONBA_PTR_SET_VALUE(logRegions_, logRegions) };
    inline DescribeUserSlsLogRegionsResponseBody& setLogRegions(vector<string> && logRegions) { DARABONBA_PTR_SET_RVALUE(logRegions_, logRegions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserSlsLogRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The region IDs.
    std::shared_ptr<vector<string>> logRegions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
