// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWCHANNELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARCLAWCHANNELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarClawChannelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarClawChannelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ChannelList, channelList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarClawChannelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ChannelList, channelList_);
    };
    DescribePolarClawChannelsRequest() = default ;
    DescribePolarClawChannelsRequest(const DescribePolarClawChannelsRequest &) = default ;
    DescribePolarClawChannelsRequest(DescribePolarClawChannelsRequest &&) = default ;
    DescribePolarClawChannelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarClawChannelsRequest() = default ;
    DescribePolarClawChannelsRequest& operator=(const DescribePolarClawChannelsRequest &) = default ;
    DescribePolarClawChannelsRequest& operator=(DescribePolarClawChannelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->channelList_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribePolarClawChannelsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channelList Field Functions 
    bool hasChannelList() const { return this->channelList_ != nullptr;};
    void deleteChannelList() { this->channelList_ = nullptr;};
    inline const vector<string> & getChannelList() const { DARABONBA_PTR_GET_CONST(channelList_, vector<string>) };
    inline vector<string> getChannelList() { DARABONBA_PTR_GET(channelList_, vector<string>) };
    inline DescribePolarClawChannelsRequest& setChannelList(const vector<string> & channelList) { DARABONBA_PTR_SET_VALUE(channelList_, channelList) };
    inline DescribePolarClawChannelsRequest& setChannelList(vector<string> && channelList) { DARABONBA_PTR_SET_RVALUE(channelList_, channelList) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<vector<string>> channelList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
