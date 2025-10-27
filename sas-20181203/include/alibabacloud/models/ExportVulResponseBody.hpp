// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTVULRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTVULRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ExportVulResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportVulResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportVulResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ExportVulResponseBody() = default ;
    ExportVulResponseBody(const ExportVulResponseBody &) = default ;
    ExportVulResponseBody(ExportVulResponseBody &&) = default ;
    ExportVulResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportVulResponseBody() = default ;
    ExportVulResponseBody& operator=(const ExportVulResponseBody &) = default ;
    ExportVulResponseBody& operator=(ExportVulResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->id_ == nullptr && return this->requestId_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ExportVulResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportVulResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportVulResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The name of the exported file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The ID of the exported file.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
