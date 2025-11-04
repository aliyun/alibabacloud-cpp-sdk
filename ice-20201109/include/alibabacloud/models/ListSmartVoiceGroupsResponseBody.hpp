// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSmartVoiceGroupsResponseBodyVoiceGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartVoiceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartVoiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VoiceGroups, voiceGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartVoiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VoiceGroups, voiceGroups_);
    };
    ListSmartVoiceGroupsResponseBody() = default ;
    ListSmartVoiceGroupsResponseBody(const ListSmartVoiceGroupsResponseBody &) = default ;
    ListSmartVoiceGroupsResponseBody(ListSmartVoiceGroupsResponseBody &&) = default ;
    ListSmartVoiceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartVoiceGroupsResponseBody() = default ;
    ListSmartVoiceGroupsResponseBody& operator=(const ListSmartVoiceGroupsResponseBody &) = default ;
    ListSmartVoiceGroupsResponseBody& operator=(ListSmartVoiceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->voiceGroups_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmartVoiceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // voiceGroups Field Functions 
    bool hasVoiceGroups() const { return this->voiceGroups_ != nullptr;};
    void deleteVoiceGroups() { this->voiceGroups_ = nullptr;};
    inline const vector<ListSmartVoiceGroupsResponseBodyVoiceGroups> & voiceGroups() const { DARABONBA_PTR_GET_CONST(voiceGroups_, vector<ListSmartVoiceGroupsResponseBodyVoiceGroups>) };
    inline vector<ListSmartVoiceGroupsResponseBodyVoiceGroups> voiceGroups() { DARABONBA_PTR_GET(voiceGroups_, vector<ListSmartVoiceGroupsResponseBodyVoiceGroups>) };
    inline ListSmartVoiceGroupsResponseBody& setVoiceGroups(const vector<ListSmartVoiceGroupsResponseBodyVoiceGroups> & voiceGroups) { DARABONBA_PTR_SET_VALUE(voiceGroups_, voiceGroups) };
    inline ListSmartVoiceGroupsResponseBody& setVoiceGroups(vector<ListSmartVoiceGroupsResponseBodyVoiceGroups> && voiceGroups) { DARABONBA_PTR_SET_RVALUE(voiceGroups_, voiceGroups) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried speaker groups.
    std::shared_ptr<vector<ListSmartVoiceGroupsResponseBodyVoiceGroups>> voiceGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
