// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSRESPONSEBODYINPUTS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSRESPONSEBODYINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaLiveInputsResponseBodyInputsInputInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveInputsResponseBodyInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveInputsResponseBodyInputs& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelIds, channelIds_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InputId, inputId_);
      DARABONBA_PTR_TO_JSON(InputInfos, inputInfos_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveInputsResponseBodyInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelIds, channelIds_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InputId, inputId_);
      DARABONBA_PTR_FROM_JSON(InputInfos, inputInfos_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListMediaLiveInputsResponseBodyInputs() = default ;
    ListMediaLiveInputsResponseBodyInputs(const ListMediaLiveInputsResponseBodyInputs &) = default ;
    ListMediaLiveInputsResponseBodyInputs(ListMediaLiveInputsResponseBodyInputs &&) = default ;
    ListMediaLiveInputsResponseBodyInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveInputsResponseBodyInputs() = default ;
    ListMediaLiveInputsResponseBodyInputs& operator=(const ListMediaLiveInputsResponseBodyInputs &) = default ;
    ListMediaLiveInputsResponseBodyInputs& operator=(ListMediaLiveInputsResponseBodyInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelIds_ != nullptr
        && this->createTime_ != nullptr && this->inputId_ != nullptr && this->inputInfos_ != nullptr && this->name_ != nullptr && this->securityGroupIds_ != nullptr
        && this->type_ != nullptr; };
    // channelIds Field Functions 
    bool hasChannelIds() const { return this->channelIds_ != nullptr;};
    void deleteChannelIds() { this->channelIds_ = nullptr;};
    inline const vector<string> & channelIds() const { DARABONBA_PTR_GET_CONST(channelIds_, vector<string>) };
    inline vector<string> channelIds() { DARABONBA_PTR_GET(channelIds_, vector<string>) };
    inline ListMediaLiveInputsResponseBodyInputs& setChannelIds(const vector<string> & channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };
    inline ListMediaLiveInputsResponseBodyInputs& setChannelIds(vector<string> && channelIds) { DARABONBA_PTR_SET_RVALUE(channelIds_, channelIds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListMediaLiveInputsResponseBodyInputs& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // inputId Field Functions 
    bool hasInputId() const { return this->inputId_ != nullptr;};
    void deleteInputId() { this->inputId_ = nullptr;};
    inline string inputId() const { DARABONBA_PTR_GET_DEFAULT(inputId_, "") };
    inline ListMediaLiveInputsResponseBodyInputs& setInputId(string inputId) { DARABONBA_PTR_SET_VALUE(inputId_, inputId) };


    // inputInfos Field Functions 
    bool hasInputInfos() const { return this->inputInfos_ != nullptr;};
    void deleteInputInfos() { this->inputInfos_ = nullptr;};
    inline const vector<Models::ListMediaLiveInputsResponseBodyInputsInputInfos> & inputInfos() const { DARABONBA_PTR_GET_CONST(inputInfos_, vector<Models::ListMediaLiveInputsResponseBodyInputsInputInfos>) };
    inline vector<Models::ListMediaLiveInputsResponseBodyInputsInputInfos> inputInfos() { DARABONBA_PTR_GET(inputInfos_, vector<Models::ListMediaLiveInputsResponseBodyInputsInputInfos>) };
    inline ListMediaLiveInputsResponseBodyInputs& setInputInfos(const vector<Models::ListMediaLiveInputsResponseBodyInputsInputInfos> & inputInfos) { DARABONBA_PTR_SET_VALUE(inputInfos_, inputInfos) };
    inline ListMediaLiveInputsResponseBodyInputs& setInputInfos(vector<Models::ListMediaLiveInputsResponseBodyInputsInputInfos> && inputInfos) { DARABONBA_PTR_SET_RVALUE(inputInfos_, inputInfos) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMediaLiveInputsResponseBodyInputs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ListMediaLiveInputsResponseBodyInputs& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ListMediaLiveInputsResponseBodyInputs& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMediaLiveInputsResponseBodyInputs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IDs of the channels associated with the input.
    std::shared_ptr<vector<string>> channelIds_ = nullptr;
    // The time when the input was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the input.
    std::shared_ptr<string> inputId_ = nullptr;
    // The input configurations.
    std::shared_ptr<vector<Models::ListMediaLiveInputsResponseBodyInputsInputInfos>> inputInfos_ = nullptr;
    // The name of the input.
    std::shared_ptr<string> name_ = nullptr;
    // The IDs of the security groups associated with the input.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The input type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
