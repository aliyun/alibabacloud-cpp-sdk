// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartVoiceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartVoiceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VoiceType, voiceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartVoiceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VoiceType, voiceType_);
    };
    ListSmartVoiceGroupsRequest() = default ;
    ListSmartVoiceGroupsRequest(const ListSmartVoiceGroupsRequest &) = default ;
    ListSmartVoiceGroupsRequest(ListSmartVoiceGroupsRequest &&) = default ;
    ListSmartVoiceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartVoiceGroupsRequest() = default ;
    ListSmartVoiceGroupsRequest& operator=(const ListSmartVoiceGroupsRequest &) = default ;
    ListSmartVoiceGroupsRequest& operator=(ListSmartVoiceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->voiceType_ != nullptr; };
    // voiceType Field Functions 
    bool hasVoiceType() const { return this->voiceType_ != nullptr;};
    void deleteVoiceType() { this->voiceType_ = nullptr;};
    inline string voiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, "") };
    inline ListSmartVoiceGroupsRequest& setVoiceType(string voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


  protected:
    std::shared_ptr<string> voiceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
