// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEONEMETASQLTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEONEMETASQLTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteOneMetaSqlTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOneMetaSqlTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KnowledgeUuid, knowledgeUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOneMetaSqlTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KnowledgeUuid, knowledgeUuid_);
    };
    DeleteOneMetaSqlTemplateRequest() = default ;
    DeleteOneMetaSqlTemplateRequest(const DeleteOneMetaSqlTemplateRequest &) = default ;
    DeleteOneMetaSqlTemplateRequest(DeleteOneMetaSqlTemplateRequest &&) = default ;
    DeleteOneMetaSqlTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOneMetaSqlTemplateRequest() = default ;
    DeleteOneMetaSqlTemplateRequest& operator=(const DeleteOneMetaSqlTemplateRequest &) = default ;
    DeleteOneMetaSqlTemplateRequest& operator=(DeleteOneMetaSqlTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->knowledgeUuid_ == nullptr; };
    // knowledgeUuid Field Functions 
    bool hasKnowledgeUuid() const { return this->knowledgeUuid_ != nullptr;};
    void deleteKnowledgeUuid() { this->knowledgeUuid_ = nullptr;};
    inline string getKnowledgeUuid() const { DARABONBA_PTR_GET_DEFAULT(knowledgeUuid_, "") };
    inline DeleteOneMetaSqlTemplateRequest& setKnowledgeUuid(string knowledgeUuid) { DARABONBA_PTR_SET_VALUE(knowledgeUuid_, knowledgeUuid) };


  protected:
    // This parameter is required.
    shared_ptr<string> knowledgeUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
