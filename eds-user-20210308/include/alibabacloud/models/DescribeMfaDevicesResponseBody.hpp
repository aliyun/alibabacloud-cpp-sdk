// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMfaDevicesResponseBodyMfaDevices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeMfaDevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMfaDevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MfaDevices, mfaDevices_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMfaDevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MfaDevices, mfaDevices_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMfaDevicesResponseBody() = default ;
    DescribeMfaDevicesResponseBody(const DescribeMfaDevicesResponseBody &) = default ;
    DescribeMfaDevicesResponseBody(DescribeMfaDevicesResponseBody &&) = default ;
    DescribeMfaDevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMfaDevicesResponseBody() = default ;
    DescribeMfaDevicesResponseBody& operator=(const DescribeMfaDevicesResponseBody &) = default ;
    DescribeMfaDevicesResponseBody& operator=(DescribeMfaDevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mfaDevices_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // mfaDevices Field Functions 
    bool hasMfaDevices() const { return this->mfaDevices_ != nullptr;};
    void deleteMfaDevices() { this->mfaDevices_ = nullptr;};
    inline const vector<DescribeMfaDevicesResponseBodyMfaDevices> & mfaDevices() const { DARABONBA_PTR_GET_CONST(mfaDevices_, vector<DescribeMfaDevicesResponseBodyMfaDevices>) };
    inline vector<DescribeMfaDevicesResponseBodyMfaDevices> mfaDevices() { DARABONBA_PTR_GET(mfaDevices_, vector<DescribeMfaDevicesResponseBodyMfaDevices>) };
    inline DescribeMfaDevicesResponseBody& setMfaDevices(const vector<DescribeMfaDevicesResponseBodyMfaDevices> & mfaDevices) { DARABONBA_PTR_SET_VALUE(mfaDevices_, mfaDevices) };
    inline DescribeMfaDevicesResponseBody& setMfaDevices(vector<DescribeMfaDevicesResponseBodyMfaDevices> && mfaDevices) { DARABONBA_PTR_SET_RVALUE(mfaDevices_, mfaDevices) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMfaDevicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMfaDevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the virtual MFA devices.
    std::shared_ptr<vector<DescribeMfaDevicesResponseBodyMfaDevices>> mfaDevices_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
