// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ExportImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportedImageURL, exportedImageURL_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportedImageURL, exportedImageURL_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportImageResponseBody() = default ;
    ExportImageResponseBody(const ExportImageResponseBody &) = default ;
    ExportImageResponseBody(ExportImageResponseBody &&) = default ;
    ExportImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportImageResponseBody() = default ;
    ExportImageResponseBody& operator=(const ExportImageResponseBody &) = default ;
    ExportImageResponseBody& operator=(ExportImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportedImageURL_ == nullptr
        && return this->requestId_ == nullptr; };
    // exportedImageURL Field Functions 
    bool hasExportedImageURL() const { return this->exportedImageURL_ != nullptr;};
    void deleteExportedImageURL() { this->exportedImageURL_ = nullptr;};
    inline string exportedImageURL() const { DARABONBA_PTR_GET_DEFAULT(exportedImageURL_, "") };
    inline ExportImageResponseBody& setExportedImageURL(string exportedImageURL) { DARABONBA_PTR_SET_VALUE(exportedImageURL_, exportedImageURL) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The URL that points to the exported image.
    std::shared_ptr<string> exportedImageURL_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
