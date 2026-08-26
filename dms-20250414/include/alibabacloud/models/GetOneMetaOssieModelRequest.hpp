// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONEMETAOSSIEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETONEMETAOSSIEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetOneMetaOssieModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOneMetaOssieModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocFormat, docFormat_);
      DARABONBA_PTR_TO_JSON(KnowledgeUuid, knowledgeUuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetOneMetaOssieModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocFormat, docFormat_);
      DARABONBA_PTR_FROM_JSON(KnowledgeUuid, knowledgeUuid_);
    };
    GetOneMetaOssieModelRequest() = default ;
    GetOneMetaOssieModelRequest(const GetOneMetaOssieModelRequest &) = default ;
    GetOneMetaOssieModelRequest(GetOneMetaOssieModelRequest &&) = default ;
    GetOneMetaOssieModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOneMetaOssieModelRequest() = default ;
    GetOneMetaOssieModelRequest& operator=(const GetOneMetaOssieModelRequest &) = default ;
    GetOneMetaOssieModelRequest& operator=(GetOneMetaOssieModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docFormat_ == nullptr
        && this->knowledgeUuid_ == nullptr; };
    // docFormat Field Functions 
    bool hasDocFormat() const { return this->docFormat_ != nullptr;};
    void deleteDocFormat() { this->docFormat_ = nullptr;};
    inline string getDocFormat() const { DARABONBA_PTR_GET_DEFAULT(docFormat_, "") };
    inline GetOneMetaOssieModelRequest& setDocFormat(string docFormat) { DARABONBA_PTR_SET_VALUE(docFormat_, docFormat) };


    // knowledgeUuid Field Functions 
    bool hasKnowledgeUuid() const { return this->knowledgeUuid_ != nullptr;};
    void deleteKnowledgeUuid() { this->knowledgeUuid_ = nullptr;};
    inline string getKnowledgeUuid() const { DARABONBA_PTR_GET_DEFAULT(knowledgeUuid_, "") };
    inline GetOneMetaOssieModelRequest& setKnowledgeUuid(string knowledgeUuid) { DARABONBA_PTR_SET_VALUE(knowledgeUuid_, knowledgeUuid) };


  protected:
    // The document type of the semantic model. Valid values: JSON and YAML.
    // 
    // This parameter is required.
    shared_ptr<string> docFormat_ {};
    // The UUID of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
