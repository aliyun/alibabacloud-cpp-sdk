// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIGNATURELIBVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIGNATURELIBVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSignatureLibVersionResponseBodyVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSignatureLibVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSignatureLibVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSignatureLibVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeSignatureLibVersionResponseBody() = default ;
    DescribeSignatureLibVersionResponseBody(const DescribeSignatureLibVersionResponseBody &) = default ;
    DescribeSignatureLibVersionResponseBody(DescribeSignatureLibVersionResponseBody &&) = default ;
    DescribeSignatureLibVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSignatureLibVersionResponseBody() = default ;
    DescribeSignatureLibVersionResponseBody& operator=(const DescribeSignatureLibVersionResponseBody &) = default ;
    DescribeSignatureLibVersionResponseBody& operator=(DescribeSignatureLibVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->version_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSignatureLibVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSignatureLibVersionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline const vector<DescribeSignatureLibVersionResponseBodyVersion> & version() const { DARABONBA_PTR_GET_CONST(version_, vector<DescribeSignatureLibVersionResponseBodyVersion>) };
    inline vector<DescribeSignatureLibVersionResponseBodyVersion> version() { DARABONBA_PTR_GET(version_, vector<DescribeSignatureLibVersionResponseBodyVersion>) };
    inline DescribeSignatureLibVersionResponseBody& setVersion(const vector<DescribeSignatureLibVersionResponseBodyVersion> & version) { DARABONBA_PTR_SET_VALUE(version_, version) };
    inline DescribeSignatureLibVersionResponseBody& setVersion(vector<DescribeSignatureLibVersionResponseBodyVersion> && version) { DARABONBA_PTR_SET_RVALUE(version_, version) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The version information.
    std::shared_ptr<vector<DescribeSignatureLibVersionResponseBodyVersion>> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
