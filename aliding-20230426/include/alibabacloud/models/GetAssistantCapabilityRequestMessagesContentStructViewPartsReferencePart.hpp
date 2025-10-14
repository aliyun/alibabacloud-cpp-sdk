// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSREFERENCEPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePartReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_TO_JSON(references, references_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart& obj) { 
      DARABONBA_PTR_FROM_JSON(references, references_);
    };
    GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart() = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart(const GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart &) = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart(GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart &&) = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart() = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart& operator=(const GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart &) = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart& operator=(GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->references_ == nullptr; };
    // references Field Functions 
    bool hasReferences() const { return this->references_ != nullptr;};
    void deleteReferences() { this->references_ = nullptr;};
    inline const vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePartReferences> & references() const { DARABONBA_PTR_GET_CONST(references_, vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePartReferences>) };
    inline vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePartReferences> references() { DARABONBA_PTR_GET(references_, vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePartReferences>) };
    inline GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart& setReferences(const vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePartReferences> & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
    inline GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePart& setReferences(vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePartReferences> && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


  protected:
    std::shared_ptr<vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsReferencePartReferences>> references_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
