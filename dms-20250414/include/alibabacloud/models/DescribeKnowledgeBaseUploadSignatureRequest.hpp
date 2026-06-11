// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEUPLOADSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKNOWLEDGEBASEUPLOADSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeKnowledgeBaseUploadSignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKnowledgeBaseUploadSignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKnowledgeBaseUploadSignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
    };
    DescribeKnowledgeBaseUploadSignatureRequest() = default ;
    DescribeKnowledgeBaseUploadSignatureRequest(const DescribeKnowledgeBaseUploadSignatureRequest &) = default ;
    DescribeKnowledgeBaseUploadSignatureRequest(DescribeKnowledgeBaseUploadSignatureRequest &&) = default ;
    DescribeKnowledgeBaseUploadSignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKnowledgeBaseUploadSignatureRequest() = default ;
    DescribeKnowledgeBaseUploadSignatureRequest& operator=(const DescribeKnowledgeBaseUploadSignatureRequest &) = default ;
    DescribeKnowledgeBaseUploadSignatureRequest& operator=(DescribeKnowledgeBaseUploadSignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kbUuid_ == nullptr; };
    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline DescribeKnowledgeBaseUploadSignatureRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


  protected:
    // The knowledge base ID.
    // 
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
