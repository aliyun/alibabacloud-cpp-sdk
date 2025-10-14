// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTIMAGESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTIMAGESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeExportImageStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExportImageStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageExportStatus, imageExportStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExportImageStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageExportStatus, imageExportStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExportImageStatusResponseBody() = default ;
    DescribeExportImageStatusResponseBody(const DescribeExportImageStatusResponseBody &) = default ;
    DescribeExportImageStatusResponseBody(DescribeExportImageStatusResponseBody &&) = default ;
    DescribeExportImageStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExportImageStatusResponseBody() = default ;
    DescribeExportImageStatusResponseBody& operator=(const DescribeExportImageStatusResponseBody &) = default ;
    DescribeExportImageStatusResponseBody& operator=(DescribeExportImageStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageExportStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // imageExportStatus Field Functions 
    bool hasImageExportStatus() const { return this->imageExportStatus_ != nullptr;};
    void deleteImageExportStatus() { this->imageExportStatus_ = nullptr;};
    inline string imageExportStatus() const { DARABONBA_PTR_GET_DEFAULT(imageExportStatus_, "") };
    inline DescribeExportImageStatusResponseBody& setImageExportStatus(string imageExportStatus) { DARABONBA_PTR_SET_VALUE(imageExportStatus_, imageExportStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExportImageStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The export status of the image. Valid values:
    // 
    // *   Exporting
    // *   Exported
    // *   ExportError
    // *   Unexported
    std::shared_ptr<string> imageExportStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
