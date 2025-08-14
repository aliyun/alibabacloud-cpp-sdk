// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSRESPONSEBODYVOICEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTSMARTVOICEGROUPSRESPONSEBODYVOICEGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSmartVoiceGroupsResponseBodyVoiceGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmartVoiceGroupsResponseBodyVoiceGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VoiceList, voiceList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmartVoiceGroupsResponseBodyVoiceGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VoiceList, voiceList_);
    };
    ListSmartVoiceGroupsResponseBodyVoiceGroups() = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroups(const ListSmartVoiceGroupsResponseBodyVoiceGroups &) = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroups(ListSmartVoiceGroupsResponseBodyVoiceGroups &&) = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmartVoiceGroupsResponseBodyVoiceGroups() = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroups& operator=(const ListSmartVoiceGroupsResponseBodyVoiceGroups &) = default ;
    ListSmartVoiceGroupsResponseBodyVoiceGroups& operator=(ListSmartVoiceGroupsResponseBodyVoiceGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->type_ != nullptr
        && this->voiceList_ != nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroups& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // voiceList Field Functions 
    bool hasVoiceList() const { return this->voiceList_ != nullptr;};
    void deleteVoiceList() { this->voiceList_ = nullptr;};
    inline const vector<Models::ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList> & voiceList() const { DARABONBA_PTR_GET_CONST(voiceList_, vector<Models::ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList>) };
    inline vector<Models::ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList> voiceList() { DARABONBA_PTR_GET(voiceList_, vector<Models::ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList>) };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroups& setVoiceList(const vector<Models::ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList> & voiceList) { DARABONBA_PTR_SET_VALUE(voiceList_, voiceList) };
    inline ListSmartVoiceGroupsResponseBodyVoiceGroups& setVoiceList(vector<Models::ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList> && voiceList) { DARABONBA_PTR_SET_RVALUE(voiceList_, voiceList) };


  protected:
    // The name of the speaker group.
    std::shared_ptr<string> type_ = nullptr;
    // The speakers.
    std::shared_ptr<vector<Models::ListSmartVoiceGroupsResponseBodyVoiceGroupsVoiceList>> voiceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
