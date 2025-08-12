// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTCONTACTSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTCONTACTSTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentContactStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentContactStruct& obj) { 
      DARABONBA_PTR_TO_JSON(channel, channel_);
      DARABONBA_PTR_TO_JSON(contactId, contactId_);
      DARABONBA_PTR_TO_JSON(contactType, contactType_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentContactStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(channel, channel_);
      DARABONBA_PTR_FROM_JSON(contactId, contactId_);
      DARABONBA_PTR_FROM_JSON(contactType, contactType_);
    };
    IncidentContactStruct() = default ;
    IncidentContactStruct(const IncidentContactStruct &) = default ;
    IncidentContactStruct(IncidentContactStruct &&) = default ;
    IncidentContactStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentContactStruct() = default ;
    IncidentContactStruct& operator=(const IncidentContactStruct &) = default ;
    IncidentContactStruct& operator=(IncidentContactStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channel_ != nullptr
        && this->contactId_ != nullptr && this->contactType_ != nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline const vector<string> & channel() const { DARABONBA_PTR_GET_CONST(channel_, vector<string>) };
    inline vector<string> channel() { DARABONBA_PTR_GET(channel_, vector<string>) };
    inline IncidentContactStruct& setChannel(const vector<string> & channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };
    inline IncidentContactStruct& setChannel(vector<string> && channel) { DARABONBA_PTR_SET_RVALUE(channel_, channel) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline IncidentContactStruct& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactType Field Functions 
    bool hasContactType() const { return this->contactType_ != nullptr;};
    void deleteContactType() { this->contactType_ = nullptr;};
    inline string contactType() const { DARABONBA_PTR_GET_DEFAULT(contactType_, "") };
    inline IncidentContactStruct& setContactType(string contactType) { DARABONBA_PTR_SET_VALUE(contactType_, contactType) };


  protected:
    std::shared_ptr<vector<string>> channel_ = nullptr;
    std::shared_ptr<string> contactId_ = nullptr;
    std::shared_ptr<string> contactType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
