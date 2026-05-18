// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
    };
    DescribeDocumentRequest() = default ;
    DescribeDocumentRequest(const DescribeDocumentRequest &) = default ;
    DescribeDocumentRequest(DescribeDocumentRequest &&) = default ;
    DescribeDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocumentRequest() = default ;
    DescribeDocumentRequest& operator=(const DescribeDocumentRequest &) = default ;
    DescribeDocumentRequest& operator=(DescribeDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentName_ == nullptr
        && this->kbUuid_ == nullptr; };
    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline DescribeDocumentRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline DescribeDocumentRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


  protected:
    // This parameter is required.
    shared_ptr<string> documentName_ {};
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
