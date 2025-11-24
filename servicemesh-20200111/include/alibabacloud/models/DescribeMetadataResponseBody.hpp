// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetadataResponseBodyMetaData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetaData, metaData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMetadataResponseBody() = default ;
    DescribeMetadataResponseBody(const DescribeMetadataResponseBody &) = default ;
    DescribeMetadataResponseBody(DescribeMetadataResponseBody &&) = default ;
    DescribeMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetadataResponseBody() = default ;
    DescribeMetadataResponseBody& operator=(const DescribeMetadataResponseBody &) = default ;
    DescribeMetadataResponseBody& operator=(DescribeMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaData_ == nullptr
        && return this->requestId_ == nullptr; };
    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline const DescribeMetadataResponseBodyMetaData & metaData() const { DARABONBA_PTR_GET_CONST(metaData_, DescribeMetadataResponseBodyMetaData) };
    inline DescribeMetadataResponseBodyMetaData metaData() { DARABONBA_PTR_GET(metaData_, DescribeMetadataResponseBodyMetaData) };
    inline DescribeMetadataResponseBody& setMetaData(const DescribeMetadataResponseBodyMetaData & metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };
    inline DescribeMetadataResponseBody& setMetaData(DescribeMetadataResponseBodyMetaData && metaData) { DARABONBA_PTR_SET_RVALUE(metaData_, metaData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ASM metadata, including the basic information about ASM.
    std::shared_ptr<DescribeMetadataResponseBodyMetaData> metaData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
